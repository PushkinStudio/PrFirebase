#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "PrFirebaseProxy.h"

#include "PrFirebaseLibrary.generated.h"

UCLASS()
class PRFIREBASE_API UPrFirebaseLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = PrFirebase, BlueprintPure)
	static UPrFirebaseProxy* GetFirebaseProxy();
};
