#include "AlsxtAIController.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AlsxtAIController)

AAlsxtAIController::AAlsxtAIController()
{
	bAttachToPawn = true;
}

void AAlsxtAIController::OnPossess(APawn* NewPawn)
{
	Super::OnPossess(NewPawn);

	RunBehaviorTree(BehaviourTree);
}

FVector AAlsxtAIController::GetFocalPointOnActor(const AActor* Actor) const
{
	const auto* FocusedPawn{Cast<APawn>(Actor)};
	if (IsValid(FocusedPawn))
	{
		return FocusedPawn->GetPawnViewLocation();
	}

	return Super::GetFocalPointOnActor(Actor);
}
