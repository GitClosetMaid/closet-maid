// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UNREALAPPLICATION_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
    /** returns a list of all save games in /Saved/SaveGames folder, without the .sav extension (filename only) */
    UFUNCTION(BlueprintPure, Category = Game)
    static TArray<FString> GetAllSaveGameSlotNames();

};
