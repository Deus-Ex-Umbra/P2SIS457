#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CajaContenedora.generated.h"

UCLASS()
class P2SIS457_API ACajaContenedora : public AActor
{
	GENERATED_BODY()
public:	
	ACajaContenedora();
	TArray<class APez*> Peces;
	class APez* PezActual;
	UPROPERTY()
		class UStaticMeshComponent* MeshCaja;
	UPROPERTY()
		class UMaterial* MaterialCaja;
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	void AgregarPez(class APez* _Pez);
	void RecorrerPeces();
	void MostrarPeces();
	void EjecutarAccionPez(class APez* _Pez);
	class APez* ObtenerPezActual();
private:
	int Contador;
	int ContadorPeces;
};
