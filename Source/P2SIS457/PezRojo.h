#pragma once

#include "CoreMinimal.h"
#include "Pez.h"
#include "PezRojo.generated.h"

UCLASS()
class P2SIS457_API APezRojo : public APez
{
	GENERATED_BODY()
public:
	APezRojo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void Moverse() override;
	virtual void VolverCaja() override;
};
