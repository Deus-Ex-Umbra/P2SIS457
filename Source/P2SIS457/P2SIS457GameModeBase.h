#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "P2SIS457GameModeBase.generated.h"

UCLASS()
class P2SIS457_API AP2SIS457GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AP2SIS457GameModeBase();
protected:
	virtual void BeginPlay() override;
public:
	UPROPERTY()
		class ACajaContenedora* CajaContenedora;
	UPROPERTY()
		class APez* PezVerde;
	UPROPERTY()
		class APez* PezRojo;
	UPROPERTY()
		class APez* PezAzul;
	virtual void Tick(float DeltaTime) override;
private:
	float TiempoEjecucion;
	bool InPez;
};
