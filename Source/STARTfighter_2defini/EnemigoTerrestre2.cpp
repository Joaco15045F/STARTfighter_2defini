// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre2.h"
#include "time.h"

// Movimiento de la navecita enemiga
void AEnemigoTerrestre2::Tick(float DeltaSeconds)
{


	srand(time(NULL)); //para que se mueva aleatoriamente la nave
	desplazamientoX = rand() % 1 - 9;
	desplazamientoY = rand() % 4 - 8;
	MoveSpeed = 6.f;




	const FVector MoveDirection = FVector(desplazamientoX, desplazamientoY, 0.f);



	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;



	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{


		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);


	}
}
