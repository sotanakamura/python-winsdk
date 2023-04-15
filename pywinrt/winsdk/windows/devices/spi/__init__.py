# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Spi")

try:
    import winsdk.windows.devices.spi.provider
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class SpiMode(enum.IntEnum):
    MODE0 = 0
    MODE1 = 1
    MODE2 = 2
    MODE3 = 3

class SpiSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED = 1

_ns_module._register_SpiMode(SpiMode)
_ns_module._register_SpiSharingMode(SpiSharingMode)

SpiBusInfo = _ns_module.SpiBusInfo
SpiConnectionSettings = _ns_module.SpiConnectionSettings
SpiController = _ns_module.SpiController
SpiDevice = _ns_module.SpiDevice
ISpiDeviceStatics = _ns_module.ISpiDeviceStatics
