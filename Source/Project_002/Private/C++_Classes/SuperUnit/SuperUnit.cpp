// Fill out your copyright notice in the Description page of Project Settings.


#include "G:\code\ue4\Project_002\Source\Project_002\Public\C++_Classes\SuperUnit\SuperUnit.h"

// Sets default values
ASuperUnit::ASuperUnit()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASuperUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuperUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASuperUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

