// MIT


#include "AbilitySystem/AssetManager/AlsxtAssetManagerBase.h"
#include "AbilitySystemGlobals.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AlsxtAssetManagerBase)


void UAlsxtAssetManagerBase::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();

	UE_LOG(LogTemp, Display, TEXT("Loading ALSXT Asset Manager"));
}



