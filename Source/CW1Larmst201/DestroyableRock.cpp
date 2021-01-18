// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyableRock.h"

// Sets default values
ADestroyableRock::ADestroyableRock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADestroyableRock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADestroyableRock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

