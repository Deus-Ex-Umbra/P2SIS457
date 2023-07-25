#include "PezAzul.h"

APezAzul::APezAzul()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/21860_Elephant_Fish__Mormyridae__v1.21860_Elephant_Fish__Mormyridae__v1'"));
	PezMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PezMesh"));
	RootComponent = PezMesh;
	PezMesh->SetStaticMesh(Mesh.Object);
	PezMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	PosicionInicial = FVector(-90.0f, 0.0, 50.0f);
	TamanioInicial = FVector(2.5f, 2.5f, 2.5f);
	PezNombre = "PezAzul";
}

void APezAzul::BeginPlay()
{
	Super::BeginPlay();
	PezMesh->SetMaterial(0, PezMaterial);
	/*PezMesh->SetRelativeRotation(FRotator(270.0f, 0.0f, 180.0f));*/
	PezMesh->SetRelativeLocation(PosicionInicial);
	PezMesh->SetRelativeScale3D(TamanioInicial);
}

void APezAzul::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APezAzul::Moverse()
{
	auto Rotacion = this->GetActorRotation() + FRotator(0.0f, 10.0f, 10.0f);
	if (Rotacion.Pitch >= 178.0f && Rotacion.Yaw >= 88.0f && Rotacion.Roll >= 178.0f)
	{
		Rotacion.Pitch = 0.0f;
		Rotacion.Yaw = 0.0f;
		Rotacion.Roll = 0.0f;
	}
	this->SetActorRotation(Rotacion);
}

void APezAzul::VolverCaja()
{
	this->SetActorLocation(PosicionInicial);
	this->SetActorScale3D(TamanioInicial);
	this->SetActorRotation(FRotator(180.0f, 90.0f, 90.0f));
}
