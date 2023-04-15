# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.System.Profile")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

class PlatformDataCollectionLevel(enum.IntEnum):
    SECURITY = 0
    BASIC = 1
    ENHANCED = 2
    FULL = 3

class SystemIdentificationSource(enum.IntEnum):
    NONE = 0
    TPM = 1
    UEFI = 2
    REGISTRY = 3

class SystemOutOfBoxExperienceState(enum.IntEnum):
    NOT_STARTED = 0
    IN_PROGRESS = 1
    COMPLETED = 2

class UnsupportedAppRequirementReasons(enum.IntFlag):
    UNKNOWN = 0
    DENIED_BY_SYSTEM = 0x1

_ns_module._register_PlatformDataCollectionLevel(PlatformDataCollectionLevel)
_ns_module._register_SystemIdentificationSource(SystemIdentificationSource)
_ns_module._register_SystemOutOfBoxExperienceState(SystemOutOfBoxExperienceState)
_ns_module._register_UnsupportedAppRequirementReasons(UnsupportedAppRequirementReasons)

AnalyticsInfo = _ns_module.AnalyticsInfo
AnalyticsVersionInfo = _ns_module.AnalyticsVersionInfo
AppApplicability = _ns_module.AppApplicability
EducationSettings = _ns_module.EducationSettings
HardwareIdentification = _ns_module.HardwareIdentification
HardwareToken = _ns_module.HardwareToken
KnownRetailInfoProperties = _ns_module.KnownRetailInfoProperties
PlatformDiagnosticsAndUsageDataSettings = _ns_module.PlatformDiagnosticsAndUsageDataSettings
RetailInfo = _ns_module.RetailInfo
SharedModeSettings = _ns_module.SharedModeSettings
SmartAppControlPolicy = _ns_module.SmartAppControlPolicy
SystemIdentification = _ns_module.SystemIdentification
SystemIdentificationInfo = _ns_module.SystemIdentificationInfo
SystemSetupInfo = _ns_module.SystemSetupInfo
UnsupportedAppRequirement = _ns_module.UnsupportedAppRequirement
WindowsIntegrityPolicy = _ns_module.WindowsIntegrityPolicy
