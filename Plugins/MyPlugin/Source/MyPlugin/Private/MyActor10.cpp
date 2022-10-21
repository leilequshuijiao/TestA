// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor10.h"

// Sets default values
AMyActor10::AMyActor10()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor10::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyActor10::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Prf();
}

void AMyActor10::Prf() {

	FString p = "AAAAAAAAAAA";
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, p);

}
