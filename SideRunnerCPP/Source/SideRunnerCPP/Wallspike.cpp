// Fill out your copyright notice in the Description page of Project Settings.


#include "Wallspike.h"


AWallspike::AWallspike() {
	PrimaryActorTick.bCanEverTick = true;
}

void AWallspike::BeginPlay() {
	Super::BeginPlay();

	this->GetRootComponent()->ComponentVelocity = FVector(0, 25, 0);
}

void AWallspike::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	SetActorLocation(GetActorLocation()+FVector(0, 350 * DeltaTime, 0), true);
}




