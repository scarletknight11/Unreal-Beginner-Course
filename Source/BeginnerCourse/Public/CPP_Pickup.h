// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CPP_Pickup.generated.h"

UCLASS()
class BEGINNERCOURSE_API ACPP_Pickup : public APawn, public  IMyInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_Pickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//virtual void Destruct() override; 
};
