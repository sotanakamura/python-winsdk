# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Networking.PushNotifications")

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

try:
    import winsdk.windows.ui.notifications
except ImportError:
    pass

class PushNotificationType(enum.IntEnum):
    TOAST = 0
    TILE = 1
    BADGE = 2
    RAW = 3
    TILE_FLYOUT = 4

_ns_module._register_PushNotificationType(PushNotificationType)

PushNotificationChannel = _ns_module.PushNotificationChannel
PushNotificationChannelManager = _ns_module.PushNotificationChannelManager
PushNotificationChannelManagerForUser = _ns_module.PushNotificationChannelManagerForUser
PushNotificationChannelsRevokedEventArgs = _ns_module.PushNotificationChannelsRevokedEventArgs
PushNotificationReceivedEventArgs = _ns_module.PushNotificationReceivedEventArgs
RawNotification = _ns_module.RawNotification
