// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedCollectable.h"


ASpeedCollectable::ASpeedCollectable() {

	CollectableType = ECollectableType::CollT_SpeedCollectable;
	PrimaryActorTick.bCanEverTick = true;
}

void ASpeedCollectable::BoostRunSpeed(ASpeedCollectable* OverlappedActor, APlayerCharacter* Target, float SpeedBoostAmount)
{
	
	Target->RunningSpeed += SpeedBoostAmount;
	PlaySoundOnCollect(Sound_Collect);
	OverlappedActor->Destroy();
	
}

void ASpeedCollectable::BeginPlay()
{
	Super::BeginPlay();
}



