# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Phone.System.Power")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

class PowerSavingMode(enum.IntEnum):
    OFF = 0
    ON = 1

_ns_module._register_PowerSavingMode(PowerSavingMode)

PowerManager = _ns_module.PowerManager
