#pragma once

#include "UFNNoiseGenerator.h"
#include "UFNSelectModule.generated.h"

UCLASS()
class UUFNSelectModule : public UUFNNoiseGenerator
{
	GENERATED_UCLASS_BODY()
public:

	virtual float GetNoise3D(float aX, float aY, float aZ) override;
	virtual float GetNoise2D(float aX, float aY) override;

	UPROPERTY()
	UUFNNoiseGenerator* inputModule1;
	UPROPERTY()
	UUFNNoiseGenerator* inputModule2;
	UPROPERTY()
	UUFNNoiseGenerator* selectModule;

	float threshold;
	float falloff;
	ESelectInterpType interpType;
	int32 numSteps;

};