#include "PezVerde.h"

APezVerde::APezVerde()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/21860_Elephant_Fish__Mormyridae__v1.21860_Elephant_Fish__Mormyridae__v1'"));
	PezMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PezMesh"));
	RootComponent = PezMesh;
	PezMesh->SetStaticMesh(Mesh.Object);
	PezMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	PosicionInicial = FVector(-90.0f, 0.0, 50.0f);
	TamanioInicial = FVector(2.5f, 2.5f, 2.5f);
	PezNombre = "PezVerde";
}

void APezVerde::BeginPlay()
{
	Super::BeginPlay();
	PezMesh->SetMaterial(0, PezMaterial);
	/*PezMesh->SetRelativeRotation(FRotator(270.0f, 0.0f, 180.0f));*/
	PezMesh->SetRelativeLocation(PosicionInicial);
	PezMesh->SetRelativeScale3D(TamanioInicial);
}

void APezVerde::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APezVerde::Moverse()
{
	auto PosicionNueva = this->GetActorLocation() + FVector(0.0f, 5.0f, 0.0f);
	this->SetActorLocation(PosicionNueva);
}

void APezVerde::VolverCaja()
{
	this->SetActorLocation(PosicionInicial);
	this->SetActorScale3D(TamanioInicial);
}
