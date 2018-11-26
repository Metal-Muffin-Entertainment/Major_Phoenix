// Copyright MetalMuffin Entertainment 2018

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AirplaneBASE.generated.h"

UCLASS()
class MAJOR_PHOENIX_API AAirplaneBASE : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAirplaneBASE();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Fire();

	///UPROPERTY(BlueprintReadOnly)

private:
	
	float BaseMovementSpeed = 0.f;

	float BaseTurnRate = 0.f;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
