#pragma once

#include "CoreMinimal.h"
#include "Pez.h"
#include "PezAzul.generated.h"

UCLASS()
class P2SIS457_API APezAzul : public APez
{
	GENERATED_BODY()
public:
	APezAzul();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void Moverse() override;
	virtual void VolverCaja() override;
};
