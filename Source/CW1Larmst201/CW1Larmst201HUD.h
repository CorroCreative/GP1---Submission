// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CW1Larmst201HUD.generated.h"

UCLASS()
class ACW1Larmst201HUD : public AHUD
{
	GENERATED_BODY()

public:
	ACW1Larmst201HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

