#pragma once

#include "CoreMinimal.h"
#include "AnimationUtils.generated.h"

UCLASS()
class GASP_API UAnimationUtils : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static float CalculateDirection(const FVector& Velocity, const FTransform& ActorTransform);
};