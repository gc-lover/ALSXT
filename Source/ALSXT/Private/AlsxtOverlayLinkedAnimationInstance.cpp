// MIT

#include "AlsxtOverlayLinkedAnimationInstance.h"

#include "Settings/AlsxtOverlayAnimationAssetsSettings.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AlsxtOverlayLinkedAnimationInstance)

UAlsxtOverlayLinkedAnimationInstance::UAlsxtOverlayLinkedAnimationInstance()
{
	RootMotionMode = ERootMotionMode::IgnoreRootMotion;
	bUseMainInstanceMontageEvaluationData = true;
}

void UAlsxtOverlayLinkedAnimationInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (bEvaluateChooserTableForAnimationAssets)
	{
		UpdateAnimationAssets();
	}
}

void UAlsxtOverlayLinkedAnimationInstance::UpdateAnimationAssets_Implementation()
{
	OverlayAnimationInstanceAssets =EvaluateOverlayChooserTable()->Assets;
}