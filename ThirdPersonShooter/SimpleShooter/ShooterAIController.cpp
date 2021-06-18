// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleShooter/ShooterAIController.h" 
#include "BehaviorTree/BlackboardComponent.h"
#include "ShooterCharacter.h"

void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior)
    {
        RunBehaviorTree(AIBehavior);
    }
    
    GetBlackboardComponent()->SetValueAsVector("StartLocation", GetPawn()->GetActorLocation());
}

bool AShooterAIController::IsDead() const
{
    AShooterCharacter* AICharacter = Cast<AShooterCharacter>(GetPawn());
    if(AICharacter)
    {
        return AICharacter->IsDead();
    }
    return true;
}