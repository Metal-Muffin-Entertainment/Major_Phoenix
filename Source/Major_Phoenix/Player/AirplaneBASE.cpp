// Copyright MetalMuffin Entertainment 2018

#include "AirplaneBASE.h"

// Sets default values
AAirplaneBASE::AAirplaneBASE()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAirplaneBASE::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAirplaneBASE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAirplaneBASE::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAirplaneBASE::Fire()
{
}

