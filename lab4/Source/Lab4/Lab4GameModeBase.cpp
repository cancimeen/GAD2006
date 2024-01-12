// Copyright Epic Games, Inc. All Rights Reserved.


#include "Lab4GameModeBase.h"
#include "NetBaseCharacter.h"

ALab4GameModeBase::ALab4GameModeBase()
{
	DefaultPawnClass = ANetBaseCharacter::StaticClass();
}
