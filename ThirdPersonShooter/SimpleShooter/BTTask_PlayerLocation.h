// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_PlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API UBTTask_PlayerLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_PlayerLocation();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTraceComponent& OwnerComp, uint8* NodeMemory);
};
