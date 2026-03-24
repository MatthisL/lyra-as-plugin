// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "LyraTeamInfoBase.h"

#include "LyraTeamPrivateInfo.generated.h"

class UObject;

UCLASS()
class LYRAGAME_API ALyraTeamPrivateInfo : public ALyraTeamInfoBase
{
	GENERATED_BODY()

public:
	ALyraTeamPrivateInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
