// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_PlayerLastLocation.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API UBTService_PlayerLastLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	virtual void TickMode(UBehaviorTraceComponent& OwnerComp, uint8* NodeMemory, float DeltaTime);

};
