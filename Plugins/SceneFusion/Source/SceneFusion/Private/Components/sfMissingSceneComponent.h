#pragma once

#include "../sfMissingObject.h"
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "sfMissingSceneComponent.generated.h"


/**
 * Component class to use as a stand-in for missing scene component classes.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UsfMissingSceneComponent : public USceneComponent, public IsfMissingObject
{
	GENERATED_BODY()

public:	
    // Name of the missing component class
    UPROPERTY(VisibleAnywhere)
    FString ClassName;

    /**
     * @return  FString& name of the missing component class or blueprint path.
     */
    virtual FString& MissingClass() override;

    /**
     * Replaces this componet with a new one using the data from this component's sfObject.
     */
    virtual void Reload() override;

    /**
     * Called before destroying the object. Removes the component from the missing object manager.
     */
    virtual void BeginDestroy() override;
};