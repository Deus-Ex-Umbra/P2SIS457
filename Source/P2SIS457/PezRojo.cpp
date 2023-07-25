#include "PezRojo.h"

APezRojo::APezRojo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/21860_Elephant_Fish__Mormyridae__v1.21860_Elephant_Fish__Mormyridae__v1'"));
	PezMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PezMesh"));
	RootComponent = PezMesh;
	PezMesh->SetStaticMesh(Mesh.Object);
	PezMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/descarga_Mat.descarga_Mat'"));
	PosicionInicial = FVector(-90.0f, 0.0, 50.0f);
	TamanioInicial = FVector(2.5f, 2.5f, 2.5f);
	PezNombre = "PezRojo";
}

void APezRojo::BeginPlay()
{
	Super::BeginPlay();
	PezMesh->SetMaterial(0, PezMaterial);
	/*PezMesh->SetRelativeRotation(FRotator(270.0f, 0.0f, 180.0f));*/
	PezMesh->SetRelativeLocation(PosicionInicial);
	PezMesh->SetRelativeScale3D(TamanioInicial);
}

void APezRojo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APezRojo::Moverse()
{
	auto PosicionNueva = this->GetActorLocation() + FVector(0.0f, -5.0f, 0.0f);
	this->SetActorLocation(PosicionNueva);
}

void APezRojo::VolverCaja()
{
	this->SetActorLocation(PosicionInicial);
	this->SetActorScale3D(TamanioInicial);
}
