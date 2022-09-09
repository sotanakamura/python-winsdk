# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Networking.NetworkOperators")

try:
    import winsdk.windows.data.xml.dom
except ImportError:
    pass

try:
    import winsdk.windows.devices.sms
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
    import winsdk.windows.networking.connectivity
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class DataClasses(enum.IntFlag):
    NONE = 0
    GPRS = 0x1
    EDGE = 0x2
    UMTS = 0x4
    HSDPA = 0x8
    HSUPA = 0x10
    LTE_ADVANCED = 0x20
    NEW_RADIO_NON_STANDALONE = 0x40
    NEW_RADIO_STANDALONE = 0x80
    CDMA1X_RTT = 0x10000
    CDMA1X_EVDO = 0x20000
    CDMA1X_EVDO_REV_A = 0x40000
    CDMA1X_EVDV = 0x80000
    CDMA3X_RTT = 0x100000
    CDMA1X_EVDO_REV_B = 0x200000
    CDMA_UMB = 0x400000
    CUSTOM = 0x80000000

class ESimAuthenticationPreference(enum.IntEnum):
    ON_ENTRY = 0
    ON_ACTION = 1
    NEVER = 2

class ESimDiscoverResultKind(enum.IntEnum):
    NONE = 0
    EVENTS = 1
    PROFILE_METADATA = 2

class ESimOperationStatus(enum.IntEnum):
    SUCCESS = 0
    NOT_AUTHORIZED = 1
    NOT_FOUND = 2
    POLICY_VIOLATION = 3
    INSUFFICIENT_SPACE_ON_CARD = 4
    SERVER_FAILURE = 5
    SERVER_NOT_REACHABLE = 6
    TIMEOUT_WAITING_FOR_USER_CONSENT = 7
    INCORRECT_CONFIRMATION_CODE = 8
    CONFIRMATION_CODE_MAX_RETRIES_EXCEEDED = 9
    CARD_REMOVED = 10
    CARD_BUSY = 11
    OTHER = 12
    CARD_GENERAL_FAILURE = 13
    CONFIRMATION_CODE_MISSING = 14
    INVALID_MATCHING_ID = 15
    NO_ELIGIBLE_PROFILE_FOR_THIS_DEVICE = 16
    OPERATION_ABORTED = 17
    EID_MISMATCH = 18
    PROFILE_NOT_AVAILABLE_FOR_NEW_BINDING = 19
    PROFILE_NOT_RELEASED_BY_OPERATOR = 20
    OPERATION_PROHIBITED_BY_PROFILE_CLASS = 21
    PROFILE_NOT_PRESENT = 22
    NO_CORRESPONDING_REQUEST = 23
    TIMEOUT_WAITING_FOR_RESPONSE = 24
    ICCID_ALREADY_EXISTS = 25
    PROFILE_PROCESSING_ERROR = 26
    SERVER_NOT_TRUSTED = 27
    PROFILE_DOWNLOAD_MAX_RETRIES_EXCEEDED = 28

class ESimProfileClass(enum.IntEnum):
    OPERATIONAL = 0
    TEST = 1
    PROVISIONING = 2

class ESimProfileMetadataState(enum.IntEnum):
    UNKNOWN = 0
    WAITING_FOR_INSTALL = 1
    DOWNLOADING = 2
    INSTALLING = 3
    EXPIRED = 4
    REJECTING_DOWNLOAD = 5
    NO_LONGER_AVAILABLE = 6
    DENIED_BY_POLICY = 7

class ESimProfileState(enum.IntEnum):
    UNKNOWN = 0
    DISABLED = 1
    ENABLED = 2
    DELETED = 3

class ESimState(enum.IntEnum):
    UNKNOWN = 0
    IDLE = 1
    REMOVED = 2
    BUSY = 3

class ESimWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    ENUMERATION_COMPLETED = 2
    STOPPING = 3
    STOPPED = 4

class HotspotAuthenticationResponseCode(enum.IntEnum):
    NO_ERROR = 0
    LOGIN_SUCCEEDED = 50
    LOGIN_FAILED = 100
    RADIUS_SERVER_ERROR = 102
    NETWORK_ADMINISTRATOR_ERROR = 105
    LOGIN_ABORTED = 151
    ACCESS_GATEWAY_INTERNAL_ERROR = 255

class MobileBroadbandAccountWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    ENUMERATION_COMPLETED = 2
    STOPPED = 3
    ABORTED = 4

class MobileBroadbandDeviceType(enum.IntEnum):
    UNKNOWN = 0
    EMBEDDED = 1
    REMOVABLE = 2
    REMOTE = 3

class MobileBroadbandModemStatus(enum.IntEnum):
    SUCCESS = 0
    OTHER_FAILURE = 1
    BUSY = 2
    NO_DEVICE_SUPPORT = 3

class MobileBroadbandPinFormat(enum.IntEnum):
    UNKNOWN = 0
    NUMERIC = 1
    ALPHANUMERIC = 2

class MobileBroadbandPinLockState(enum.IntEnum):
    UNKNOWN = 0
    UNLOCKED = 1
    PIN_REQUIRED = 2
    PIN_UNBLOCK_KEY_REQUIRED = 3

class MobileBroadbandPinType(enum.IntEnum):
    NONE = 0
    CUSTOM = 1
    PIN1 = 2
    PIN2 = 3
    SIM_PIN = 4
    FIRST_SIM_PIN = 5
    NETWORK_PIN = 6
    NETWORK_SUBSET_PIN = 7
    SERVICE_PROVIDER_PIN = 8
    CORPORATE_PIN = 9
    SUBSIDY_LOCK = 10

class MobileBroadbandRadioState(enum.IntEnum):
    OFF = 0
    ON = 1

class MobileBroadbandSlotState(enum.IntEnum):
    UNMANAGED = 0
    UNKNOWN = 1
    OFF_EMPTY = 2
    OFF = 3
    EMPTY = 4
    NOT_READY = 5
    ACTIVE = 6
    ERROR = 7
    ACTIVE_ESIM = 8
    ACTIVE_ESIM_NO_PROFILE = 9

class MobileBroadbandUiccAppOperationStatus(enum.IntEnum):
    SUCCESS = 0
    INVALID_UICC_FILE_PATH = 1
    ACCESS_CONDITION_NOT_HELD = 2
    UICC_BUSY = 3

class NetworkDeviceStatus(enum.IntEnum):
    DEVICE_NOT_READY = 0
    DEVICE_READY = 1
    SIM_NOT_INSERTED = 2
    BAD_SIM = 3
    DEVICE_HARDWARE_FAILURE = 4
    ACCOUNT_NOT_ACTIVATED = 5
    DEVICE_LOCKED = 6
    DEVICE_BLOCKED = 7

class NetworkOperatorDataUsageNotificationKind(enum.IntEnum):
    DATA_USAGE_PROGRESS = 0

class NetworkOperatorEventMessageType(enum.IntEnum):
    GSM = 0
    CDMA = 1
    USSD = 2
    DATA_PLAN_THRESHOLD_REACHED = 3
    DATA_PLAN_RESET = 4
    DATA_PLAN_DELETED = 5
    PROFILE_CONNECTED = 6
    PROFILE_DISCONNECTED = 7
    REGISTERED_ROAMING = 8
    REGISTERED_HOME = 9
    TETHERING_ENTITLEMENT_CHECK = 10
    TETHERING_OPERATIONAL_STATE_CHANGED = 11
    TETHERING_NUMBER_OF_CLIENTS_CHANGED = 12

class NetworkRegistrationState(enum.IntEnum):
    NONE = 0
    DEREGISTERED = 1
    SEARCHING = 2
    HOME = 3
    ROAMING = 4
    PARTNER = 5
    DENIED = 6

class ProfileMediaType(enum.IntEnum):
    WLAN = 0
    WWAN = 1

class TetheringCapability(enum.IntEnum):
    ENABLED = 0
    DISABLED_BY_GROUP_POLICY = 1
    DISABLED_BY_HARDWARE_LIMITATION = 2
    DISABLED_BY_OPERATOR = 3
    DISABLED_BY_SKU = 4
    DISABLED_BY_REQUIRED_APP_NOT_INSTALLED = 5
    DISABLED_DUE_TO_UNKNOWN_CAUSE = 6
    DISABLED_BY_SYSTEM_CAPABILITY = 7

class TetheringOperationStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN = 1
    MOBILE_BROADBAND_DEVICE_OFF = 2
    WI_FI_DEVICE_OFF = 3
    ENTITLEMENT_CHECK_TIMEOUT = 4
    ENTITLEMENT_CHECK_FAILURE = 5
    OPERATION_IN_PROGRESS = 6
    BLUETOOTH_DEVICE_OFF = 7
    NETWORK_LIMITED_CONNECTIVITY = 8

class TetheringOperationalState(enum.IntEnum):
    UNKNOWN = 0
    ON = 1
    OFF = 2
    IN_TRANSITION = 3

class TetheringWiFiBand(enum.IntEnum):
    AUTO = 0
    TWO_POINT_FOUR_GIGAHERTZ = 1
    FIVE_GIGAHERTZ = 2

class UiccAccessCondition(enum.IntEnum):
    ALWAYS_ALLOWED = 0
    PIN1 = 1
    PIN2 = 2
    PIN3 = 3
    PIN4 = 4
    ADMINISTRATIVE5 = 5
    ADMINISTRATIVE6 = 6
    NEVER_ALLOWED = 7

class UiccAppKind(enum.IntEnum):
    UNKNOWN = 0
    M_F = 1
    M_F_SIM = 2
    M_F_RUIM = 3
    U_SIM = 4
    C_SIM = 5
    I_SIM = 6

class UiccAppRecordKind(enum.IntEnum):
    UNKNOWN = 0
    TRANSPARENT = 1
    RECORD_ORIENTED = 2

class UssdResultCode(enum.IntEnum):
    NO_ACTION_REQUIRED = 0
    ACTION_REQUIRED = 1
    TERMINATED = 2
    OTHER_LOCAL_CLIENT = 3
    OPERATION_NOT_SUPPORTED = 4
    NETWORK_TIMEOUT = 5

_ns_module._register_DataClasses(DataClasses)
_ns_module._register_ESimAuthenticationPreference(ESimAuthenticationPreference)
_ns_module._register_ESimDiscoverResultKind(ESimDiscoverResultKind)
_ns_module._register_ESimOperationStatus(ESimOperationStatus)
_ns_module._register_ESimProfileClass(ESimProfileClass)
_ns_module._register_ESimProfileMetadataState(ESimProfileMetadataState)
_ns_module._register_ESimProfileState(ESimProfileState)
_ns_module._register_ESimState(ESimState)
_ns_module._register_ESimWatcherStatus(ESimWatcherStatus)
_ns_module._register_HotspotAuthenticationResponseCode(HotspotAuthenticationResponseCode)
_ns_module._register_MobileBroadbandAccountWatcherStatus(MobileBroadbandAccountWatcherStatus)
_ns_module._register_MobileBroadbandDeviceType(MobileBroadbandDeviceType)
_ns_module._register_MobileBroadbandModemStatus(MobileBroadbandModemStatus)
_ns_module._register_MobileBroadbandPinFormat(MobileBroadbandPinFormat)
_ns_module._register_MobileBroadbandPinLockState(MobileBroadbandPinLockState)
_ns_module._register_MobileBroadbandPinType(MobileBroadbandPinType)
_ns_module._register_MobileBroadbandRadioState(MobileBroadbandRadioState)
_ns_module._register_MobileBroadbandSlotState(MobileBroadbandSlotState)
_ns_module._register_MobileBroadbandUiccAppOperationStatus(MobileBroadbandUiccAppOperationStatus)
_ns_module._register_NetworkDeviceStatus(NetworkDeviceStatus)
_ns_module._register_NetworkOperatorDataUsageNotificationKind(NetworkOperatorDataUsageNotificationKind)
_ns_module._register_NetworkOperatorEventMessageType(NetworkOperatorEventMessageType)
_ns_module._register_NetworkRegistrationState(NetworkRegistrationState)
_ns_module._register_ProfileMediaType(ProfileMediaType)
_ns_module._register_TetheringCapability(TetheringCapability)
_ns_module._register_TetheringOperationStatus(TetheringOperationStatus)
_ns_module._register_TetheringOperationalState(TetheringOperationalState)
_ns_module._register_TetheringWiFiBand(TetheringWiFiBand)
_ns_module._register_UiccAccessCondition(UiccAccessCondition)
_ns_module._register_UiccAppKind(UiccAppKind)
_ns_module._register_UiccAppRecordKind(UiccAppRecordKind)
_ns_module._register_UssdResultCode(UssdResultCode)

ESimProfileInstallProgress = _ns_module.ESimProfileInstallProgress
ProfileUsage = _ns_module.ProfileUsage
ESim = _ns_module.ESim
ESimAddedEventArgs = _ns_module.ESimAddedEventArgs
ESimDiscoverEvent = _ns_module.ESimDiscoverEvent
ESimDiscoverResult = _ns_module.ESimDiscoverResult
ESimDownloadProfileMetadataResult = _ns_module.ESimDownloadProfileMetadataResult
ESimManager = _ns_module.ESimManager
ESimOperationResult = _ns_module.ESimOperationResult
ESimPolicy = _ns_module.ESimPolicy
ESimProfile = _ns_module.ESimProfile
ESimProfileMetadata = _ns_module.ESimProfileMetadata
ESimProfilePolicy = _ns_module.ESimProfilePolicy
ESimRemovedEventArgs = _ns_module.ESimRemovedEventArgs
ESimServiceInfo = _ns_module.ESimServiceInfo
ESimUpdatedEventArgs = _ns_module.ESimUpdatedEventArgs
ESimWatcher = _ns_module.ESimWatcher
FdnAccessManager = _ns_module.FdnAccessManager
HotspotAuthenticationContext = _ns_module.HotspotAuthenticationContext
HotspotAuthenticationEventDetails = _ns_module.HotspotAuthenticationEventDetails
HotspotCredentialsAuthenticationResult = _ns_module.HotspotCredentialsAuthenticationResult
KnownCSimFilePaths = _ns_module.KnownCSimFilePaths
KnownRuimFilePaths = _ns_module.KnownRuimFilePaths
KnownSimFilePaths = _ns_module.KnownSimFilePaths
KnownUSimFilePaths = _ns_module.KnownUSimFilePaths
MobileBroadbandAccount = _ns_module.MobileBroadbandAccount
MobileBroadbandAccountEventArgs = _ns_module.MobileBroadbandAccountEventArgs
MobileBroadbandAccountUpdatedEventArgs = _ns_module.MobileBroadbandAccountUpdatedEventArgs
MobileBroadbandAccountWatcher = _ns_module.MobileBroadbandAccountWatcher
MobileBroadbandAntennaSar = _ns_module.MobileBroadbandAntennaSar
MobileBroadbandCellCdma = _ns_module.MobileBroadbandCellCdma
MobileBroadbandCellGsm = _ns_module.MobileBroadbandCellGsm
MobileBroadbandCellLte = _ns_module.MobileBroadbandCellLte
MobileBroadbandCellNR = _ns_module.MobileBroadbandCellNR
MobileBroadbandCellTdscdma = _ns_module.MobileBroadbandCellTdscdma
MobileBroadbandCellUmts = _ns_module.MobileBroadbandCellUmts
MobileBroadbandCellsInfo = _ns_module.MobileBroadbandCellsInfo
MobileBroadbandCurrentSlotIndexChangedEventArgs = _ns_module.MobileBroadbandCurrentSlotIndexChangedEventArgs
MobileBroadbandDeviceInformation = _ns_module.MobileBroadbandDeviceInformation
MobileBroadbandDeviceService = _ns_module.MobileBroadbandDeviceService
MobileBroadbandDeviceServiceCommandResult = _ns_module.MobileBroadbandDeviceServiceCommandResult
MobileBroadbandDeviceServiceCommandSession = _ns_module.MobileBroadbandDeviceServiceCommandSession
MobileBroadbandDeviceServiceDataReceivedEventArgs = _ns_module.MobileBroadbandDeviceServiceDataReceivedEventArgs
MobileBroadbandDeviceServiceDataSession = _ns_module.MobileBroadbandDeviceServiceDataSession
MobileBroadbandDeviceServiceInformation = _ns_module.MobileBroadbandDeviceServiceInformation
MobileBroadbandDeviceServiceTriggerDetails = _ns_module.MobileBroadbandDeviceServiceTriggerDetails
MobileBroadbandModem = _ns_module.MobileBroadbandModem
MobileBroadbandModemConfiguration = _ns_module.MobileBroadbandModemConfiguration
MobileBroadbandModemIsolation = _ns_module.MobileBroadbandModemIsolation
MobileBroadbandNetwork = _ns_module.MobileBroadbandNetwork
MobileBroadbandNetworkRegistrationStateChange = _ns_module.MobileBroadbandNetworkRegistrationStateChange
MobileBroadbandNetworkRegistrationStateChangeTriggerDetails = _ns_module.MobileBroadbandNetworkRegistrationStateChangeTriggerDetails
MobileBroadbandPco = _ns_module.MobileBroadbandPco
MobileBroadbandPcoDataChangeTriggerDetails = _ns_module.MobileBroadbandPcoDataChangeTriggerDetails
MobileBroadbandPin = _ns_module.MobileBroadbandPin
MobileBroadbandPinLockStateChange = _ns_module.MobileBroadbandPinLockStateChange
MobileBroadbandPinLockStateChangeTriggerDetails = _ns_module.MobileBroadbandPinLockStateChangeTriggerDetails
MobileBroadbandPinManager = _ns_module.MobileBroadbandPinManager
MobileBroadbandPinOperationResult = _ns_module.MobileBroadbandPinOperationResult
MobileBroadbandRadioStateChange = _ns_module.MobileBroadbandRadioStateChange
MobileBroadbandRadioStateChangeTriggerDetails = _ns_module.MobileBroadbandRadioStateChangeTriggerDetails
MobileBroadbandSarManager = _ns_module.MobileBroadbandSarManager
MobileBroadbandSlotInfo = _ns_module.MobileBroadbandSlotInfo
MobileBroadbandSlotInfoChangedEventArgs = _ns_module.MobileBroadbandSlotInfoChangedEventArgs
MobileBroadbandSlotManager = _ns_module.MobileBroadbandSlotManager
MobileBroadbandTransmissionStateChangedEventArgs = _ns_module.MobileBroadbandTransmissionStateChangedEventArgs
MobileBroadbandUicc = _ns_module.MobileBroadbandUicc
MobileBroadbandUiccApp = _ns_module.MobileBroadbandUiccApp
MobileBroadbandUiccAppReadRecordResult = _ns_module.MobileBroadbandUiccAppReadRecordResult
MobileBroadbandUiccAppRecordDetailsResult = _ns_module.MobileBroadbandUiccAppRecordDetailsResult
MobileBroadbandUiccAppsResult = _ns_module.MobileBroadbandUiccAppsResult
NetworkOperatorDataUsageTriggerDetails = _ns_module.NetworkOperatorDataUsageTriggerDetails
NetworkOperatorNotificationEventDetails = _ns_module.NetworkOperatorNotificationEventDetails
NetworkOperatorTetheringAccessPointConfiguration = _ns_module.NetworkOperatorTetheringAccessPointConfiguration
NetworkOperatorTetheringClient = _ns_module.NetworkOperatorTetheringClient
NetworkOperatorTetheringManager = _ns_module.NetworkOperatorTetheringManager
NetworkOperatorTetheringOperationResult = _ns_module.NetworkOperatorTetheringOperationResult
ProvisionFromXmlDocumentResults = _ns_module.ProvisionFromXmlDocumentResults
ProvisionedProfile = _ns_module.ProvisionedProfile
ProvisioningAgent = _ns_module.ProvisioningAgent
TetheringEntitlementCheckTriggerDetails = _ns_module.TetheringEntitlementCheckTriggerDetails
UssdMessage = _ns_module.UssdMessage
UssdReply = _ns_module.UssdReply
UssdSession = _ns_module.UssdSession
