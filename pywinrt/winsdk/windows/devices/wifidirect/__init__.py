# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.WiFiDirect")

try:
    import winsdk.windows.devices.enumeration
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
    import winsdk.windows.networking
except ImportError:
    pass

try:
    import winsdk.windows.security.credentials
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class WiFiDirectAdvertisementListenStateDiscoverability(enum.IntEnum):
    NONE = 0
    NORMAL = 1
    INTENSIVE = 2

class WiFiDirectAdvertisementPublisherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    STOPPED = 2
    ABORTED = 3

class WiFiDirectConfigurationMethod(enum.IntEnum):
    PROVIDE_PIN = 0
    DISPLAY_PIN = 1
    PUSH_BUTTON = 2

class WiFiDirectConnectionStatus(enum.IntEnum):
    DISCONNECTED = 0
    CONNECTED = 1

class WiFiDirectDeviceSelectorType(enum.IntEnum):
    DEVICE_INTERFACE = 0
    ASSOCIATION_ENDPOINT = 1

class WiFiDirectError(enum.IntEnum):
    SUCCESS = 0
    RADIO_NOT_AVAILABLE = 1
    RESOURCE_IN_USE = 2

class WiFiDirectPairingProcedure(enum.IntEnum):
    GROUP_OWNER_NEGOTIATION = 0
    INVITATION = 1

_ns_module._register_WiFiDirectAdvertisementListenStateDiscoverability(WiFiDirectAdvertisementListenStateDiscoverability)
_ns_module._register_WiFiDirectAdvertisementPublisherStatus(WiFiDirectAdvertisementPublisherStatus)
_ns_module._register_WiFiDirectConfigurationMethod(WiFiDirectConfigurationMethod)
_ns_module._register_WiFiDirectConnectionStatus(WiFiDirectConnectionStatus)
_ns_module._register_WiFiDirectDeviceSelectorType(WiFiDirectDeviceSelectorType)
_ns_module._register_WiFiDirectError(WiFiDirectError)
_ns_module._register_WiFiDirectPairingProcedure(WiFiDirectPairingProcedure)

WiFiDirectAdvertisement = _ns_module.WiFiDirectAdvertisement
WiFiDirectAdvertisementPublisher = _ns_module.WiFiDirectAdvertisementPublisher
WiFiDirectAdvertisementPublisherStatusChangedEventArgs = _ns_module.WiFiDirectAdvertisementPublisherStatusChangedEventArgs
WiFiDirectConnectionListener = _ns_module.WiFiDirectConnectionListener
WiFiDirectConnectionParameters = _ns_module.WiFiDirectConnectionParameters
WiFiDirectConnectionRequest = _ns_module.WiFiDirectConnectionRequest
WiFiDirectConnectionRequestedEventArgs = _ns_module.WiFiDirectConnectionRequestedEventArgs
WiFiDirectDevice = _ns_module.WiFiDirectDevice
WiFiDirectInformationElement = _ns_module.WiFiDirectInformationElement
WiFiDirectLegacySettings = _ns_module.WiFiDirectLegacySettings
