# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.Lights")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.numerics
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

try:
    import winsdk.windows.ui
except ImportError:
    pass

class LampArrayKind(enum.IntEnum):
    UNDEFINED = 0
    KEYBOARD = 1
    MOUSE = 2
    GAME_CONTROLLER = 3
    PERIPHERAL = 4
    SCENE = 5
    NOTIFICATION = 6
    CHASSIS = 7
    WEARABLE = 8
    FURNITURE = 9
    ART = 10

class LampPurposes(enum.IntFlag):
    UNDEFINED = 0
    CONTROL = 0x1
    ACCENT = 0x2
    BRANDING = 0x4
    STATUS = 0x8
    ILLUMINATION = 0x10
    PRESENTATION = 0x20

_ns_module._register_LampArrayKind(LampArrayKind)
_ns_module._register_LampPurposes(LampPurposes)

Lamp = _ns_module.Lamp
LampArray = _ns_module.LampArray
LampAvailabilityChangedEventArgs = _ns_module.LampAvailabilityChangedEventArgs
LampInfo = _ns_module.LampInfo
