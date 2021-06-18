// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void GameHasEnded(class AACtor* EndGameFocus = nullptr, bool bIsWinner) override;

private:
	UPROPERTY(EditAnywhere)
	TSubClassOf<class UUserWindget> LossScreenClass;

	UPROPERTY(EditAnywhere)
	TSubClassOf<class UUserWindget> WinScreenClass;

	UPROPERTY(EditAnywhere)
	TSubClassOf<class UUserWindget> HUDClass;

	FTimerHandle RestartTimer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

};
