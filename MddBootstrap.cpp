#include <windows.h>
#include "WindowsAppSDK-VersionInfo.h"
#include "MddBootstrap.h"

using namespace Microsoft::WindowsAppSDK;

extern "C" {
    __declspec(dllexport) void initialize()
    {
        MddBootstrapInitialize2(
            Release::MajorMinor,
            Release::VersionTag,
            PACKAGE_VERSION{Runtime::Version::UInt64},
            MddBootstrapInitializeOptions_OnNoMatch_ShowUI);
    }

    __declspec(dllexport) void showdown()
    {
        MddBootstrapShutdown();
    }
}