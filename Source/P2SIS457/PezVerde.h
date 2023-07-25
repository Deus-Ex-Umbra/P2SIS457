#pragma once

#include "CoreMinimal.h"
#include "Pez.h"
#include "PezVerde.generated.h"

UCLASS()
class P2SIS457_API APezVerde : public APez
{
	GENERATED_BODY()
public:
	APezVerde();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void Moverse() override;
	virtual void VolverCaja() override;
};
