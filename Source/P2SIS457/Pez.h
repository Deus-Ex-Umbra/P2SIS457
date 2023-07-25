#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pez.generated.h"

UCLASS(Abstract)
class P2SIS457_API APez : public AActor
{
	GENERATED_BODY()
public:	
	APez();
	UPROPERTY()
		FString PezNombre;
	UPROPERTY()
		FVector PosicionInicial;
	UPROPERTY()
		FVector TamanioInicial;
protected:
	virtual void BeginPlay() override;
	UPROPERTY()
		class UStaticMeshComponent* PezMesh;
	UPROPERTY()
		class UMaterial* PezMaterial;
	UPROPERTY()
		USceneComponent* SceneComponent;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void Moverse() PURE_VIRTUAL(APez::Moverse, );
	virtual void VolverCaja() PURE_VIRTUAL(APez::VolverCaja, );
};
