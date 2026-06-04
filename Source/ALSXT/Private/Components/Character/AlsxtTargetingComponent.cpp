// MIT


#include "Components/Character/AlsxtTargetingComponent.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AlsxtTargetingComponent)


// Sets default values for this component's properties
UAlsxtTargetingComponent::UAlsxtTargetingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAlsxtTargetingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAlsxtTargetingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

