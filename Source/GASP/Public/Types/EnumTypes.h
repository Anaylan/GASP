// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnumTypes.generated.h"

USTRUCT(BlueprintType)
struct GASP_API FStructEnumLibrary
{
	GENERATED_BODY()

	template <typename T>
	static FORCEINLINE int32 GetIndexByValue(const T InValue)
	{
		return StaticEnum<T>()->GetIndexByValue(static_cast<int64>(InValue));
	}

	/* Returns the enumeration value as string. */
	template <typename T>
	static FORCEINLINE FString GetNameStringByValue(const T InValue)
	{
		return StaticEnum<T>()->GetNameStringByValue(static_cast<int64>(InValue));
	}
};

/**
 * Movement gait
 */
UENUM(BlueprintType, meta = (ScriptName = "EGait"))
enum class EGait : uint8
{
	Walk,
	Run,
	Sprint
};

/**
 *
 */
UENUM(BlueprintType, meta = (ScriptName = "ERotationMode"))
enum class ERotationMode : uint8
{
	OrientToMovement,
	Strafe,
	Aim
};

UENUM(BlueprintType, meta = (ScriptName = "EOverlayState"))
enum class EOverlayState : uint8
{
	Default,
	Masculine,
	Feminine,
	Injured,
	HandsTied,
	Rifle,
	PistolOneHanded,
	PistolTwoHanded,
	Bow,
	Torch,
	Binoculars,
	Box,
	Barrel,
	GreatSword,
	Katana,
};

UENUM(BlueprintType, meta = (ScriptName = "ELocomotionAction"))
enum class ELocomotionAction : uint8
{
	None,
	Ragdoll
};

/**
 *
 */
UENUM(BlueprintType, meta = (ScriptName = "ECMovementMode"))
enum class ECMovementMode : uint8
{
	OnGround,
	InAir
};

/**
 *
 */
UENUM(BlueprintType, meta = (ScriptName = "EMovementState"))
enum class EMovementState : uint8
{
	Idle,
	Moving
};

/**
 * Movement gait
 */
UENUM(BlueprintType, meta = (ScriptName = "EStanceMode"))
enum class EStanceMode : uint8
{
	Stand,
	Crouch
};

UENUM(BlueprintType, meta = (ScriptName = "EMovementDirection"))
enum class EMovementDirection : uint8
{
	F UMETA(DisplayName = "Forward"),
	B UMETA(DisplayName = "Backward"),
	LL UMETA(DisplayName = "Left"),
	LR UMETA(DisplayName = "Left->Right"),
	RL UMETA(DisplayName = "Right->Left"),
	RR UMETA(DisplayName = "Right"),
};

UENUM(BlueprintType, meta = (ScriptName = "EMovementDirectionBias"))
enum class EMovementDirectionBias : uint8
{
	LeftFootForward UMETA(DisplayName = "LeftFootForward"),
	RightFootForward UMETA(DisplayName = "RightFootForward")
};

UENUM(BlueprintType, meta = (ScriptName = "EStateMachineState"))
enum class EStateMachineState : uint8
{
	IdleLoop UMETA(DisplayName = "Idle Loop"),
	TransitionToIdleLoop UMETA(DisplayName = "Transition to Idle Loop"),
	LocomotionLoop UMETA(DisplayName = "Locomotion Loop"),
	TransitionToLocomotionLoop UMETA(DisplayName = "Transition to Locomotion Loop"),
	InAirLoop UMETA(DisplayName = "In Air Loop"),
	TransitionToInAirLoop UMETA(DisplayName = "Transition to In Air Loop"),
	IdleBreak UMETA(DisplayName = "Idle Break"),
};

// Anim notifies
UENUM(BlueprintType, meta = (ScriptName = "EEarlyTransitionCondition"))
enum class EEarlyTransitionCondition : uint8
{
	Always UMETA(DisplayName = "Always"),
	GaitNotEqual UMETA(DisplayName = "GaitNotEqual")
};

UENUM(BlueprintType, meta = (ScriptName = "EEarlyTransitionDestination"))
enum class EEarlyTransitionDestination : uint8
{
	ReTransition UMETA(DisplayName = "Re-Transition"),
	TransitionToLoop UMETA(DisplayName = "Transition To Loop")
};

UENUM(BlueprintType, meta = (ScriptName = "EFoleyEventSide"))
enum class EFoleyEventSide : uint8
{
	None UMETA(DisplayName = "None"),
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right")
};

UENUM(BlueprintType, meta = (ScriptName = "ETraversalBlendOutCondition"))
enum class ETraversalBlendOutCondition : uint8
{
	ForceBlendOut UMETA(DisplayName = "Force Blend Out"),
	WithMovementInput UMETA(DisplayName = "With Movement Input"),
	IfFalling UMETA(DisplayName = "If Falling")
};
