#pragma once

#include "../sfMissingObject.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "sfMissingActor.generated.h"

/**
 * Actor class to use as a stand-in for missing actor classes.
 */
UCLASS()
class AsfMissingActor : public AActor, public IsfMissingObject
{
	GENERATED_BODY()
	
public:	
    // Name of the missing actor class
    UPROPERTY(VisibleAnywhere)
    FString ClassName;

    // If we set the creation method of a component to SimpleConstructionScript on a non-blueprint, the component will
    // get deleted, so we store the components that should have that creation method and instead assign them the
    // default creation method.
    UPROPERTY()
    TArray<UActorComponent*> SimpleConstructionComponents;

    /**
     * @return  FString& name of the missing actor class or blueprint path.
     */
    virtual FString& MissingClass() override;

    /**
     * Replaces this actor with a new one using the data from this actor's sfObject.
     */
    virtual void Reload() override;
	
    /**
     * Called before destroying the object. Removes the actor from the missing object manager.
     */
    virtual void BeginDestroy() override;
};
