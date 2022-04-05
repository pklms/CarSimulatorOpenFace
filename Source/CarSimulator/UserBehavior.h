// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

THIRD_PARTY_INCLUDES_START
#include "opencv2/opencv.hpp"
#include "GazeEstimation.h"
THIRD_PARTY_INCLUDES_END

#include "UserBehavior.generated.h"

using namespace cv;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CARSIMULATOR_API UUserBehavior : public UActorComponent
{
	GENERATED_BODY()
	Mat frame;
	VideoCapture cap;
	size_t camera_index = 0;

public:	
	// Sets default values for this component's properties
	UUserBehavior();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
