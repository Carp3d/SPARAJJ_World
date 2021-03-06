#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "sfMissingObject.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UsfMissingObject : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for missing object stand-ins.
 */
class IsfMissingObject
{
	GENERATED_BODY()
public:
    /**
     * @return  FString& name of the missing class or blueprint path.
     */
    virtual FString& MissingClass() = 0;

    /**
     * Replaces this object with with a new instance of the correct class if it is available.
     */
    virtual void Reload() = 0;
	
};
