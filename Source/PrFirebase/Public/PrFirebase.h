#pragma once

#include "Modules/ModuleManager.h"

class UPrFirebaseProxy;

class IPrFirebase : public IModuleInterface
{

public:
	static inline IPrFirebase& Get()
	{
		return FModuleManager::LoadModuleChecked<IPrFirebase>("PrFirebase");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("PrFirebase");
	}

public:
	UPrFirebaseProxy* FirebaseProxy;
};
