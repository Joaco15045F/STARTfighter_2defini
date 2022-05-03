// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo1.h"
#include "time.h"

// Movimiento de la navecita enemiga
void AEnemigoAereo1::Tick(float DeltaSeconds)
{


	srand(time(NULL)); //para que se mueva aleatoriamente la nave
	desplazamientoX = rand() % 10 - 6;
	desplazamientoY = rand() % 3 - 7;
	MoveSpeed = 3.f;




	const FVector MoveDirection = FVector(desplazamientoX , desplazamientoY, 0.f);



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