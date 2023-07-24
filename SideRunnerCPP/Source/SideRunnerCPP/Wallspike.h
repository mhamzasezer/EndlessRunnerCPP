// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Spikes.h"
#include "Wallspike.generated.h"

/**
 * 
 */
UCLASS()
class SIDERUNNERCPP_API AWallspike : public ASpikes
{
	GENERATED_BODY()


public:

	AWallspike();

protected:
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	
};
