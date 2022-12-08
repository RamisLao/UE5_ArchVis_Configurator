//Publisher: stephen, Intended publishing: 2021

#pragma once

#include "Modules/ModuleManager.h"


class FCompactFirebaseProModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};
