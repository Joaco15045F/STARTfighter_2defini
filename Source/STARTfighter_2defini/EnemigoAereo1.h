// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "EnemigoAereo1.generated.h"

/**
 * 
 */
UCLASS()
class STARTFIGHTER_2DEFINI_API AEnemigoAereo1 : public ANaveAerea
{
	GENERATED_BODY()
public:

	void Tick(float DeltaSeconds);

	float desplazamientoX;
	float desplazamientoY;
	float MoveSpeed;
};