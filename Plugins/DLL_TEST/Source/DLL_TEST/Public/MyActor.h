// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DLL_TestLibrary/ExampleLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MyActor.generated.h"

UCLASS()
class DLL_TEST_API AMyActor : public AActor
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
	UFUNCTION(BlueprintCallable)
	void RunDLLFunction()
	{
		TESTCLASS obj;
		UKismetSystemLibrary::PrintString(this, FString::FromInt(obj.GetNum()));
	}
};
