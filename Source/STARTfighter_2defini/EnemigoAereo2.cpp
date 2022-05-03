// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo2.h"
#include "time.h"

// Movimiento de la navecita enemiga
void AEnemigoAereo2::Tick(float DeltaSeconds)
{


	srand(time(NULL)); //para que se mueva aleatoriamente la nave
	desplazamientoX = rand() % 2 - 4;
	desplazamientoY = rand() % 1 - 3;
	MoveSpeed = 10.f;




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
