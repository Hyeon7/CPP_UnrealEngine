// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSecond)
{
	Super::NativeUpdateAnimation(DeltaSecond);

	auto pawn = TryGetPawnOwner();
	if (IsValid(pawn))
	{
		Speed = pawn->GetVelocity().Size();
	}
}