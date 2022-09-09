# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.I2c.Provider")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class ProviderI2cBusSpeed(enum.IntEnum):
    STANDARD_MODE = 0
    FAST_MODE = 1

class ProviderI2cSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED = 1

class ProviderI2cTransferStatus(enum.IntEnum):
    FULL_TRANSFER = 0
    PARTIAL_TRANSFER = 1
    SLAVE_ADDRESS_NOT_ACKNOWLEDGED = 2

_ns_module._register_ProviderI2cBusSpeed(ProviderI2cBusSpeed)
_ns_module._register_ProviderI2cSharingMode(ProviderI2cSharingMode)
_ns_module._register_ProviderI2cTransferStatus(ProviderI2cTransferStatus)

ProviderI2cTransferResult = _ns_module.ProviderI2cTransferResult
ProviderI2cConnectionSettings = _ns_module.ProviderI2cConnectionSettings
II2cControllerProvider = _ns_module.II2cControllerProvider
II2cDeviceProvider = _ns_module.II2cDeviceProvider
II2cProvider = _ns_module.II2cProvider
