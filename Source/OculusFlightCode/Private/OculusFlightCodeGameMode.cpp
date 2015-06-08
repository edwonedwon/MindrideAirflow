// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "OculusFlightCode.h"
#include "OculusFlightCodeGameMode.h"
#include "OculusFlightCodePawn.h"

AOculusFlightCodeGameMode::AOculusFlightCodeGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AOculusFlightCodePawn::StaticClass();
}
