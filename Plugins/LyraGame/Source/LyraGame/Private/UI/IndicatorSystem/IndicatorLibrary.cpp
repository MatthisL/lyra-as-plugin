// Copyright Epic Games, Inc. All Rights Reserved.

#include "UI/IndicatorSystem/IndicatorLibrary.h"

#include "UI/IndicatorSystem/LyraIndicatorManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(IndicatorLibrary)

class AController;

UIndicatorLibrary::UIndicatorLibrary()
{
}

ULyraIndicatorManagerComponent* UIndicatorLibrary::GetIndicatorManagerComponent(AController* Controller)
{
	return ULyraIndicatorManagerComponent::GetComponent(Controller);
}

