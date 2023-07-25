#include "Pez.h"

APez::APez()
{
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;
}

void APez::BeginPlay()
{
	Super::BeginPlay();
}

void APez::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

