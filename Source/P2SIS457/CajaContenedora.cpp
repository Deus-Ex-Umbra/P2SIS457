#include "CajaContenedora.h"
#include "Pez.h"

ACajaContenedora::ACajaContenedora()
{
	PrimaryActorTick.bCanEverTick = true;
	Peces = {};
	PezActual = nullptr;
	Contador = 0;
	ContadorPeces = Peces.Num();
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Crate.Crate'"));
	MeshCaja = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCaja"));
	MeshCaja->SetStaticMesh(Mesh.Object);
	MaterialCaja = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));
}

void ACajaContenedora::BeginPlay()
{
	Super::BeginPlay();
	MeshCaja->SetMaterial(0, MaterialCaja);
	MeshCaja->SetRelativeLocation(FVector(-50.0f, 100.0f, 50.0f));
	MeshCaja->SetRelativeScale3D(FVector(25.0f, 25.0f, 25.0f));
	MeshCaja->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
}

void ACajaContenedora::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACajaContenedora::AgregarPez(APez* _Pez)
{
	Peces.Add(_Pez);
	ContadorPeces++;
}

void ACajaContenedora::RecorrerPeces()
{
	Contador++;
	if (Contador >= ContadorPeces)
	{
		Contador = 0;
	}
}

void ACajaContenedora::MostrarPeces()
{
	if ((Contador - 1) < 0) {
		Peces[ContadorPeces - 1]->VolverCaja();
		Peces[ContadorPeces - 1]->SetActorScale3D(Peces[ContadorPeces - 1]->TamanioInicial);
	} else {
		Peces[Contador - 1]->VolverCaja();
		Peces[Contador - 1]->SetActorScale3D(Peces[Contador - 1]->TamanioInicial);
	}
	Peces[Contador]->SetActorLocation(Peces[Contador]->GetActorLocation() + FVector(-500.0f, 0.0f, 100.0f));
	Peces[Contador]->SetActorScale3D(Peces[Contador]->GetActorScale3D() + FVector(10.0f, 10.0f, 10.0f));
	PezActual = Peces[Contador];
}

void ACajaContenedora::EjecutarAccionPez(APez* _Pez)
{
	_Pez->Moverse();
}

APez* ACajaContenedora::ObtenerPezActual()
{
	return PezActual;
}

