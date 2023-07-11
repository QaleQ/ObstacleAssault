// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool ShouldPlatformReturn() const;
	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);

	double GetDistanceMoved() const;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)	FVector PlatformMovementVelocity;
	UPROPERTY(EditAnywhere)	FRotator PlatformRotationVelocity;
	UPROPERTY(EditAnywhere)	float MaxMoveDistance = 300;
	
	FVector StartLocation;
};
