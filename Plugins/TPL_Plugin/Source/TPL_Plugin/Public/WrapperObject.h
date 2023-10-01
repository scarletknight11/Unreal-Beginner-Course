// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TPL_PluginLibrary/TestClass.h"
#include "WrapperObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TPL_PLUGIN_API UWrapperObject : public UObject
{
	GENERATED_BODY()
public:
	TestClass OBJ = TestClass();

	UFUNCTION(BlueprintCallable, Category="Wrapping")
		FString GetName();
};
