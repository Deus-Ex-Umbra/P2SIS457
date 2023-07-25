#include "P2SIS457GameModeBase.h"
#include "Pez.h"
#include "CajaContenedora.h"
#include "PezVerde.h"
#include "PezAzul.h"
#include "PezRojo.h"

AP2SIS457GameModeBase::AP2SIS457GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	TiempoEjecucion = 0.0f;
	InPez = true;
}

void AP2SIS457GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	PezVerde = GetWorld()->SpawnActor<APezVerde>(APezVerde::StaticClass());
	PezAzul = GetWorld()->SpawnActor<APezAzul>(APezAzul::StaticClass());
	PezRojo = GetWorld()->SpawnActor<APezRojo>(APezRojo::StaticClass());
	CajaContenedora = GetWorld()->SpawnActor<ACajaContenedora>(ACajaContenedora::StaticClass());
	PezVerde->SetActorLocation(PezVerde->PosicionInicial);
	PezVerde->SetActorRotation(FRotator(180.0f, 90.0f, 90.0f));
	PezAzul->SetActorLocation(PezAzul->PosicionInicial);
	PezAzul->SetActorRotation(FRotator(180.0f, 90.0f, 90.0f));
	PezRojo->SetActorLocation(PezRojo->PosicionInicial);
	PezRojo->SetActorRotation(FRotator(180.0f, 90.0f, 90.0f));
	CajaContenedora->SetActorLocation(FVector(-50.0f, 100.0f, 50.0f));
	CajaContenedora->AgregarPez(PezVerde);
	CajaContenedora->AgregarPez(PezAzul);
	CajaContenedora->AgregarPez(PezRojo);
}

void AP2SIS457GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (TiempoEjecucion <= 5.0f) {
		if (InPez) { CajaContenedora->MostrarPeces(); InPez = false; }
		CajaContenedora->EjecutarAccionPez(CajaContenedora->ObtenerPezActual());
	}
	if (TiempoEjecucion >= 5.5f) {
		CajaContenedora->RecorrerPeces();
		InPez = true;
		TiempoEjecucion = 0.0f;
	}
	TiempoEjecucion += DeltaTime;
}
