// MIT

#include "AlsxtLocomotionLinkedAnimationInstance.h"

#include "Settings/AlsxtLocomotionAnimationAssetsSettings.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AlsxtLocomotionLinkedAnimationInstance)

UAlsxtLocomotionLinkedAnimationInstance::UAlsxtLocomotionLinkedAnimationInstance()
{
	RootMotionMode = ERootMotionMode::IgnoreRootMotion;
	bUseMainInstanceMontageEvaluationData = true;
}

void UAlsxtLocomotionLinkedAnimationInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (bEvaluateChooserTableForAnimationAssets)
	{
		UpdateAnimationAssets();
	}
}

void UAlsxtLocomotionLinkedAnimationInstance::UpdateAnimationAssets_Implementation()
{
	LocomotionAnimationInstanceAssets = EvaluateLocomotionChooserTable()->Assets;
}
