#pragma once
#pragma once

#include "UFNNoiseGenerator.h"
#include "UFNConstantModule.generated.h"

UCLASS()
class UUFNConstantModule : public UUFNNoiseGenerator
{
	GENERATED_UCLASS_BODY()
public:

	virtual float GetNoise3D(float aX, float aY, float aZ) override;
	virtual float GetNoise2D(float aX, float aY) override;

	float constantValue;

};