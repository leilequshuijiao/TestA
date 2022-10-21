// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Runtime/PakFile/Public/IPlatformFilePak.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"



UCLASS()
class TESTA_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString PakName = "E:/Paks/Paklist.pak";
	//FString PakName = "D:/HUA.pak";

	//0921
	UFUNCTION(BlueprintCallable)
		void LoadMap();

	UFUNCTION(BlueprintCallable)
		void Prf();
	UFUNCTION(BlueprintCallable)
		void GetBlueprintClassesInDirectory(const TSubclassOf<UObject> blueprintClass, const FString path, const bool bRecursive, TArray<UClass*>& blueprintClasses);

};
