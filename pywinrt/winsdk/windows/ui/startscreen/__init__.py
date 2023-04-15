# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.UI.StartScreen")

try:
    import winsdk.windows.applicationmodel.core
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

try:
    import winsdk.windows.perception.spatial
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

try:
    import winsdk.windows.ui.popups
except ImportError:
    pass

class ForegroundText(enum.IntEnum):
    DARK = 0
    LIGHT = 1

class JumpListItemKind(enum.IntEnum):
    ARGUMENTS = 0
    SEPARATOR = 1

class JumpListSystemGroupKind(enum.IntEnum):
    NONE = 0
    FREQUENT = 1
    RECENT = 2

class TileMixedRealityModelActivationBehavior(enum.IntEnum):
    DEFAULT = 0
    NONE = 1

class TileOptions(enum.IntFlag):
    NONE = 0
    SHOW_NAME_ON_LOGO = 0x1
    SHOW_NAME_ON_WIDE_LOGO = 0x2
    COPY_ON_DEPLOYMENT = 0x4

class TileSize(enum.IntEnum):
    DEFAULT = 0
    SQUARE30X30 = 1
    SQUARE70X70 = 2
    SQUARE150X150 = 3
    WIDE310X150 = 4
    SQUARE310X310 = 5
    SQUARE71X71 = 6
    SQUARE44X44 = 7

_ns_module._register_ForegroundText(ForegroundText)
_ns_module._register_JumpListItemKind(JumpListItemKind)
_ns_module._register_JumpListSystemGroupKind(JumpListSystemGroupKind)
_ns_module._register_TileMixedRealityModelActivationBehavior(TileMixedRealityModelActivationBehavior)
_ns_module._register_TileOptions(TileOptions)
_ns_module._register_TileSize(TileSize)

JumpList = _ns_module.JumpList
JumpListItem = _ns_module.JumpListItem
SecondaryTile = _ns_module.SecondaryTile
SecondaryTileVisualElements = _ns_module.SecondaryTileVisualElements
StartScreenManager = _ns_module.StartScreenManager
TileMixedRealityModel = _ns_module.TileMixedRealityModel
VisualElementsRequest = _ns_module.VisualElementsRequest
VisualElementsRequestDeferral = _ns_module.VisualElementsRequestDeferral
VisualElementsRequestedEventArgs = _ns_module.VisualElementsRequestedEventArgs
