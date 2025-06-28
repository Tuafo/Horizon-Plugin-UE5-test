
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogHorizon, Log, All);

/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules 
 * within this plugin.
 */
class FHorizonModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/**
	 * Singleton-like access to this module's interface. This is just for convenience!
	 * Beware of calling this during the shutdown phase, though. Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline FHorizonModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FHorizonModule>("Horizon");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("Horizon");
	}

	/**
	 * Get the Horizon plugin version
	 * @return Version string
	 */
	static FString GetVersion() { return TEXT("1.0.0"); }

	/**
	 * Check if WebSocket functionality is available
	 * @return True if WebSocket system is initialized and available
	 */
	bool IsWebSocketAvailable() const { return bWebSocketInitialized; }

private:
	void InitializeWebSocket();
	void ShutdownWebSocket();

	bool bWebSocketInitialized = false;
};