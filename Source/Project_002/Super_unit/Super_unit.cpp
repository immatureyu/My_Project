// Fill out your copyright notice in the Description page of Project Settings.


#include "Super_unit.h"

// Sets default values
ASuper_unit::ASuper_unit()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASuper_unit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuper_unit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASuper_unit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

