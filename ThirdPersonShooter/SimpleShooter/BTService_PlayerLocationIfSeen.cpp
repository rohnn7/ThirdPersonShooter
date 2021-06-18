// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_PlayerLocationIfSeen.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Gameframework/Pawn.h"
#include "AIController.h"

void UBTService_PlayerLastLocation::TickMode(UBehaviorTraceComponent& OwnerComp, uint8* NodeMemory, float DeltaTime)
{
    Super::TickMode(OwnerComp, NodeMemory, DeltaTime);

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if(PlayerPawn)
    {
        if(OwnerComp.GetAIOwner()->LineOfSightTo(PlayerPawn))
        {
            OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardkey(), PlayerPawn->GetActorLocation());
        }
        else
        {
            OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
        }
    }
}
