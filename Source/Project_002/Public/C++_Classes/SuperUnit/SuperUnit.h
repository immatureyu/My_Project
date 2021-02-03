// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SuperUnit.generated.h"
#include "G:\code\ue4\Project_002\Source\Project_002\Public\Header.h"
UCLASS()
class PROJECT_002_API ASuperUnit : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		FString unit_ID;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int unit_type;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		FString country;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		FString name;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int requisition_cost;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int train_type;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float health;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int weight_type;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int volume;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int hide;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int ground_investigation;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int helo_investigation;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int plane_investigation;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int sead_invetigation;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float auto_seek_time;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int invetigation;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float dynamic_friction_coefficient;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float cross_country_speed;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float cross_road_speed;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float amphibious;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int informatization;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float morale;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		int morale_type;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float morale_reflex;

	UPROPERTY(BlueprintReadWrite, Category = "Unit Information")
		float noise;

	UPROPERTY(BlueprintReadWrite, Category = "Components")
		bool is_player_self;

	UPROPERTY(BlueprintReadWrite, Category = "Components")
		bool is_AI_control;

	UPROPERTY(BlueprintReadWrite, Category = "Components")
		int camp_in_game;

public:
	// Sets default values for this pawn's properties
	ASuperUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
