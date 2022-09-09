# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.AllJoyn")

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
    import winsdk.windows.globalization
except ImportError:
    pass

try:
    import winsdk.windows.networking.sockets
except ImportError:
    pass

try:
    import winsdk.windows.security.credentials
except ImportError:
    pass

try:
    import winsdk.windows.security.cryptography.certificates
except ImportError:
    pass

class AllJoynAuthenticationMechanism(enum.IntEnum):
    NONE = 0
    SRP_ANONYMOUS = 1
    SRP_LOGON = 2
    ECDHE_NULL = 3
    ECDHE_PSK = 4
    ECDHE_ECDSA = 5
    ECDHE_SPEKE = 6

class AllJoynBusAttachmentState(enum.IntEnum):
    DISCONNECTED = 0
    CONNECTING = 1
    CONNECTED = 2
    DISCONNECTING = 3

class AllJoynSessionLostReason(enum.IntEnum):
    NONE = 0
    PRODUCER_LEFT_SESSION = 1
    PRODUCER_CLOSED_ABRUPTLY = 2
    REMOVED_BY_PRODUCER = 3
    LINK_TIMEOUT = 4
    OTHER = 5

class AllJoynTrafficType(enum.IntEnum):
    UNKNOWN = 0
    MESSAGES = 1
    RAW_UNRELIABLE = 2
    RAW_RELIABLE = 4

_ns_module._register_AllJoynAuthenticationMechanism(AllJoynAuthenticationMechanism)
_ns_module._register_AllJoynBusAttachmentState(AllJoynBusAttachmentState)
_ns_module._register_AllJoynSessionLostReason(AllJoynSessionLostReason)
_ns_module._register_AllJoynTrafficType(AllJoynTrafficType)

AllJoynAboutData = _ns_module.AllJoynAboutData
AllJoynAboutDataView = _ns_module.AllJoynAboutDataView
AllJoynAcceptSessionJoinerEventArgs = _ns_module.AllJoynAcceptSessionJoinerEventArgs
AllJoynAuthenticationCompleteEventArgs = _ns_module.AllJoynAuthenticationCompleteEventArgs
AllJoynBusAttachment = _ns_module.AllJoynBusAttachment
AllJoynBusAttachmentStateChangedEventArgs = _ns_module.AllJoynBusAttachmentStateChangedEventArgs
AllJoynBusObject = _ns_module.AllJoynBusObject
AllJoynBusObjectStoppedEventArgs = _ns_module.AllJoynBusObjectStoppedEventArgs
AllJoynCredentials = _ns_module.AllJoynCredentials
AllJoynCredentialsRequestedEventArgs = _ns_module.AllJoynCredentialsRequestedEventArgs
AllJoynCredentialsVerificationRequestedEventArgs = _ns_module.AllJoynCredentialsVerificationRequestedEventArgs
AllJoynMessageInfo = _ns_module.AllJoynMessageInfo
AllJoynProducerStoppedEventArgs = _ns_module.AllJoynProducerStoppedEventArgs
AllJoynServiceInfo = _ns_module.AllJoynServiceInfo
AllJoynServiceInfoRemovedEventArgs = _ns_module.AllJoynServiceInfoRemovedEventArgs
AllJoynSession = _ns_module.AllJoynSession
AllJoynSessionJoinedEventArgs = _ns_module.AllJoynSessionJoinedEventArgs
AllJoynSessionLostEventArgs = _ns_module.AllJoynSessionLostEventArgs
AllJoynSessionMemberAddedEventArgs = _ns_module.AllJoynSessionMemberAddedEventArgs
AllJoynSessionMemberRemovedEventArgs = _ns_module.AllJoynSessionMemberRemovedEventArgs
AllJoynStatus = _ns_module.AllJoynStatus
AllJoynWatcherStoppedEventArgs = _ns_module.AllJoynWatcherStoppedEventArgs
IAllJoynAcceptSessionJoiner = _ns_module.IAllJoynAcceptSessionJoiner
IAllJoynProducer = _ns_module.IAllJoynProducer
