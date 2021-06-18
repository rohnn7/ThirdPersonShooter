// Fill out your copyright notice in the Description page of Project Settings.

//Dont go over name. It was miss type. it Actual name should be BTTask_Shoot

#include "BTTask_PlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "ShooterAIController.h"

UBTTask_PlayerLocation::UBTTask_PlayerLocation()
{
    NodeName = "Shoot"
}

EBTNodeResult::Type UBTTask_ClearBlackboard::ExecuteTask(UBehaviorTraceComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if(OwnerComp.GetAIOwner())
    {
        AShooterAIController* AICharacter = Cast<AShooterAIController>(OwnerComp.GetAIOwner()->GetPawn());
        if(AICharacter)
        {
            AICharacter->Shoot();
        }
    }
    

    return EBTNodeResult::Succeeded;
}