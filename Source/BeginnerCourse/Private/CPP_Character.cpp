// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Character.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACPP_Character::ACPP_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	OurIntArray = { 23,6,43,64 };
}

// Called when the game starts or when spawned
void ACPP_Character::BeginPlay()
{
	Super::BeginPlay();
	// OurIntArray.Reserve(6);
	// OurIntArray.Add(12);
	// OurIntArray.Emplace(4);
	// OurIntArray.Remove(23);
	// OurIntArray.RemoveAt(0);
	//
	// OurMap.Add("Pi", 3.14);
	// OurMap.Add("Num1", 43.4543);
	//
	// UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(OurMap["Num1"]));
	//
	// for(auto& ele: OurMap)
	// {
	// 	FString temp = ele.Key;
	// 	temp.Append(" : ");
	// 	temp.Append(FString::SanitizeFloat(ele.Value));
	// 	UKismetSystemLibrary::PrintString(this, temp);
	// }

	
	if(ActorToSpawn)
	{
		//Spawns CPP interaction Actor
		auto temp = GetWorld()->SpawnActor<ACPP_InteractionActor>(ActorToSpawn);
		auto temp1 = GetWorld()->SpawnActorDeferred<ACPP_InteractionActor>(ActorToSpawn, FTransform());
		temp1->SomeVariable = 100;
		temp1->FinishSpawning(FTransform());
	}
	auto temp = GetCharacterMovement();
	temp->SetMovementMode(EMovementMode::MOVE_Walking, 0);
}

// Called every frame
void ACPP_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACPP_Character::RemovePickup()
{
	auto temp = UGameplayStatics::GetPlayerCameraManager(this, 0);	
	TArray<AActor*> Ignore;
	FHitResult Hit;
	UKismetSystemLibrary::LineTraceSingle(this, temp->GetCameraLocation(), temp->GetCameraLocation() + (temp->GetActorForwardVector() * 50000), ETraceTypeQuery::TraceTypeQuery1,0,Ignore, EDrawDebugTrace::ForDuration, Hit, true);
	if (Hit.GetActor())
	{
		if(Cast<ACPP_Pickup>(Hit.GetActor()))
		{
			Hit.GetActor()->Destroy();
			UKismetSystemLibrary::PrintString(this, "Destroyed a pickup");
		}
	}
}

//void ACPP_Character::TestBPNativeFunc(float x)
//{
//}

void ACPP_Character::TestBPNativeFunc_Implementation_Implementation(float x)
{
	UKismetSystemLibrary::PrintString(this, "C++ Implementation Called");
}