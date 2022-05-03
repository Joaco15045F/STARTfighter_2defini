// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTerrestre.h"
#include "EnemigoTerrestre2.generated.h"

/**
 * 
 */
UCLASS()
class STARTFIGHTER_2DEFINI_API AEnemigoTerrestre2 : public ANaveTerrestre
{
	GENERATED_BODY()
public:

	void Tick(float DeltaSeconds);

	float desplazamientoX;
	float desplazamientoY;
	float MoveSpeed;
};
