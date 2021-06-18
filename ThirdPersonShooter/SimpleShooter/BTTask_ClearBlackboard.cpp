// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ClearBlackboard.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_ClearBlackboard::UBTTask_ClearBlackboard()
{
    NodeName = "Clear Blackboard"
}

EBTNodeResult::Type UBTTask_ClearBlackboard::ExecuteTask(UBehaviorTraceComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

    return EBTNodeResult::Succeeded;
}
