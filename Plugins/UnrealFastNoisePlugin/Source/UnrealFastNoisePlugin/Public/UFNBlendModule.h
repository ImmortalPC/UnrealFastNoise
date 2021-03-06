#pragma once

#include "UFNNoiseGenerator.h"
#include "UFNBlendModule.generated.h"

UCLASS()
class UUFNBlendModule : public UUFNNoiseGenerator
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

	float falloff;

};