// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
//#include "Engine/StreamableManager.h"
#include "IPlatformFilePak.h"
//#include "Runtime/Core/Public/GenericPlatform/GenericPlatformFile.h"
//#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
//#include "PlatformFilemanager.h"
//#include "HAL/PlatformFilemanager.h"

#include "Kismet/GameplayStatics.h"

//#include "Runtime/Experimental/ChaosCore/Public/Chaos/Array.h"
// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//0927

void AMyActor::LoadMap()
{

	FString filename = "E:/Paks1/testpak.pak";//pak文件的全路径
	FString levelname = "/Game/LPL/MMP";//要打开的地图名称
	FString mountPoint = "/Game";//挂载点
	FString mountPath = "E:/Paks1/";//pak文件在的目录

	FString StandardFilename(filename);
	FPaths::MakeStandardFilename(StandardFilename);
	StandardFilename = FPaths::GetPath(StandardFilename);

	IPlatformFile& InnerPlatform = FPlatformFileManager::Get().GetPlatformFile();
	FPakPlatformFile* PakPlatform = new FPakPlatformFile();
	PakPlatform->Initialize(&InnerPlatform, TEXT(""));
	FPlatformFileManager::Get().SetPlatformFile(*PakPlatform);

	FPakFile* pakFile = new FPakFile(PakPlatform, *filename, false);

	UE_LOG(LogTemp, Warning, TEXT("  filenamefilenamefilenamefilename =%s.."), *filename);//@@

	if (pakFile->IsValid()) {

		pakFile->SetMountPoint(*mountPoint);

		const int32 PakOrder = 5;
		if (PakPlatform->Mount(*filename, PakOrder, *mountPath)) {

			FPackageName::RegisterMountPoint(mountPoint, mountPath);
			UE_LOG(LogTemp, Warning, TEXT("   loaded and mounted, listing..."));//@@
			struct Dump : public IPlatformFile::FDirectoryVisitor {    //扫描pak资产
				virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) {
					if (bIsDirectory) {
						UE_LOG(LogTemp, Warning, TEXT("Directory: %s"), FilenameOrDirectory);
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("File: %s"), FilenameOrDirectory);
					}
					return true;
				}
			};

			Dump visitor;
			if (mountPoint.Len() > 0) {

				PakPlatform->IterateDirectoryRecursively(*mountPoint, visitor);

			}
			else {

				PakPlatform->IterateDirectoryRecursively(TEXT("/Game/"), visitor);
			}
		}
		else {

			UE_LOG(LogTemp, Warning, TEXT("   failed to mount pak file"));
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("   failed to load pak file"));
	}
	if (FCoreDelegates::OnMountPak.IsBound()) {
		if (FCoreDelegates::OnMountPak.Execute(filename, 0, NULL)) {
			FName level(*levelname);
			UGameplayStatics::OpenLevel(GetWorld(), level);
		}
	}
}

void AMyActor::Prf() {
	FString p = "12312313";
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, p);

}
void AMyActor::GetBlueprintClassesInDirectory(const TSubclassOf<UObject> blueprintClass, const FString path, const bool bRecursive, TArray<UClass*>& blueprintClasses)
{
	/*
	double startTime = FPlatformTime::Seconds();

	// Convert the content path to a full path to look for files.
	FString projectContentDir = FPaths::ProjectContentDir();
		FString properContentDir = MakeProperContentDir(path); // /Game/...
	FString contentRelativeDir = properContentDir;
	properContentDir.Split(TEXT("/Game"), nullptr, &contentRelativeDir);
	FString fullDir = projectContentDir + contentRelativeDir; // File system directory

	TArray<FString> foundFiles;
	//UContentMountLibrary::GetAllFilesFoldersInDir(fullDir, FString("*"), true, false, foundFiles, true); // In a packaged game, files are returned multiple times.

	for (const FString& file : foundFiles)
	{
		if (file.EndsWith(TEXT(".uasset")))
		{
			// Convert the file path back to a content path.
			FString fileContentDir = FPaths::GetPath(file);
			FPaths::MakePathRelativeTo(fileContentDir, *projectContentDir);
			fileContentDir = FString(TEXT("/Game/")) + fileContentDir;
			fileContentDir.RemoveFromEnd(FString(TEXT("/")));

			FString fileName = FPaths::GetBaseFilename(file);

			FString classReference = FString::Printf(TEXT("%s/%s.%s_C"), *fileContentDir, *fileName, *fileName);
			UClass* loadedClass = LoadObject<UClass>(nullptr, *classReference);
			if (loadedClass && loadedClass->IsChildOf(blueprintClass))
			{
				blueprintClasses.AddUnique(loadedClass); // NOTE we AddUnique as files are returned multiple times by file search function.
			}
		}
	}

	//CM_LOG(Verbose, "GetBlueprintClassesInDirectory completed in %0.6f seconds", FPlatformTime::Seconds() - startTime);
	 */
}
