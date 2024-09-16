// Copyright Epic Games, Inc. All Rights Reserved.

#include "System/LyraReplicationGraphSettings.h"
#include "Misc/App.h"
#include "System/LyraReplicationGraph.h"

ULyraReplicationGraphSettings::ULyraReplicationGraphSettings()
{
	CategoryName = TEXT("Game");
	DefaultReplicationGraphClass = ULyraReplicationGraph::StaticClass();
}