// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "Blueprint/UserWidgets.h"
#include "TimeManager.h"

void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();

    UUserWidget* HUD = CreateWidget(this, HUDClass);
    if(HUD)
    {
        HUD->AddToViewport();
    }
}

void AShooterPlayerController::GameHasEnded(class AACtor* EndGameFocus = nullptr, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);
    if(bIsWinner)
    {
        UUserWidget* WinScreen = CreateWidget(this, WinScreenClass);
        if(WinScreen)
        {
            WinScreen->AddToViewport();
        }
    }
    else
    {
        UUserWidget* LossScreen = CreateWidget(this, LossScreenClass);
        if(LossScreen)
        {
            LossScreen->AddToViewport();
        }
    }

    GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, 5);
}
