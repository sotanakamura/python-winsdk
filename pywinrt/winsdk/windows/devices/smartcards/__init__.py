# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.SmartCards")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.security.cryptography.core
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class SmartCardActivationPolicyChangeResult(enum.IntEnum):
    DENIED = 0
    ALLOWED = 1

class SmartCardAppletIdGroupActivationPolicy(enum.IntEnum):
    DISABLED = 0
    FOREGROUND_OVERRIDE = 1
    ENABLED = 2

class SmartCardAutomaticResponseStatus(enum.IntEnum):
    NONE = 0
    SUCCESS = 1
    UNKNOWN_ERROR = 2

class SmartCardCryptogramAlgorithm(enum.IntEnum):
    NONE = 0
    CBC_MAC = 1
    CVC3_UMD = 2
    DECIMALIZED_MSD = 3
    CVC3_M_D = 4
    SHA1 = 5
    SIGNED_DYNAMIC_APPLICATION_DATA = 6
    RSA_PKCS1 = 7
    SHA256_HMAC = 8

class SmartCardCryptogramGeneratorOperationStatus(enum.IntEnum):
    SUCCESS = 0
    AUTHORIZATION_FAILED = 1
    AUTHORIZATION_CANCELED = 2
    AUTHORIZATION_REQUIRED = 3
    CRYPTOGRAM_MATERIAL_PACKAGE_STORAGE_KEY_EXISTS = 4
    NO_CRYPTOGRAM_MATERIAL_PACKAGE_STORAGE_KEY = 5
    NO_CRYPTOGRAM_MATERIAL_PACKAGE = 6
    UNSUPPORTED_CRYPTOGRAM_MATERIAL_PACKAGE = 7
    UNKNOWN_CRYPTOGRAM_MATERIAL_NAME = 8
    INVALID_CRYPTOGRAM_MATERIAL_USAGE = 9
    APDU_RESPONSE_NOT_SENT = 10
    OTHER_ERROR = 11
    VALIDATION_FAILED = 12
    NOT_SUPPORTED = 13

class SmartCardCryptogramMaterialPackageConfirmationResponseFormat(enum.IntEnum):
    NONE = 0
    VISA_HMAC = 1

class SmartCardCryptogramMaterialPackageFormat(enum.IntEnum):
    NONE = 0
    JWE_RSA_PKI = 1

class SmartCardCryptogramMaterialProtectionMethod(enum.IntEnum):
    NONE = 0
    WHITE_BOXING = 1

class SmartCardCryptogramMaterialType(enum.IntEnum):
    NONE = 0
    STATIC_DATA_AUTHENTICATION = 1
    TRIPLE_DES112 = 2
    AES = 3
    RSA_PKCS1 = 4

class SmartCardCryptogramPlacementOptions(enum.IntFlag):
    NONE = 0
    UNITS_ARE_IN_NIBBLES = 0x1
    CHAIN_OUTPUT = 0x2

class SmartCardCryptogramStorageKeyAlgorithm(enum.IntEnum):
    NONE = 0
    RSA2048 = 1

class SmartCardCryptogramStorageKeyCapabilities(enum.IntFlag):
    NONE = 0
    HARDWARE_PROTECTION = 0x1
    UNLOCK_PROMPT = 0x2

class SmartCardCryptographicKeyAttestationStatus(enum.IntEnum):
    NO_ATTESTATION = 0
    SOFTWARE_KEY_WITHOUT_TPM = 1
    SOFTWARE_KEY_WITH_TPM = 2
    TPM_KEY_UNKNOWN_ATTESTATION_STATUS = 3
    TPM_KEY_WITHOUT_ATTESTATION_CAPABILITY = 4
    TPM_KEY_WITH_TEMPORARY_ATTESTATION_FAILURE = 5
    TPM_KEY_WITH_LONG_TERM_ATTESTATION_FAILURE = 6
    TPM_KEY_WITH_ATTESTATION = 7

class SmartCardEmulationCategory(enum.IntEnum):
    OTHER = 0
    PAYMENT = 1

class SmartCardEmulationType(enum.IntEnum):
    HOST = 0
    UICC = 1
    EMBEDDED_S_E = 2

class SmartCardEmulatorConnectionDeactivatedReason(enum.IntEnum):
    CONNECTION_LOST = 0
    CONNECTION_REDIRECTED = 1

class SmartCardEmulatorConnectionSource(enum.IntEnum):
    UNKNOWN = 0
    NFC_READER = 1

class SmartCardEmulatorEnablementPolicy(enum.IntEnum):
    NEVER = 0
    ALWAYS = 1
    SCREEN_ON = 2
    SCREEN_UNLOCKED = 3

class SmartCardLaunchBehavior(enum.IntEnum):
    DEFAULT = 0
    ABOVE_LOCK = 1

class SmartCardPinCharacterPolicyOption(enum.IntEnum):
    ALLOW = 0
    REQUIRE_AT_LEAST_ONE = 1
    DISALLOW = 2

class SmartCardReaderKind(enum.IntEnum):
    ANY = 0
    GENERIC = 1
    TPM = 2
    NFC = 3
    UICC = 4
    EMBEDDED_S_E = 5

class SmartCardReaderStatus(enum.IntEnum):
    DISCONNECTED = 0
    READY = 1
    EXCLUSIVE = 2

class SmartCardStatus(enum.IntEnum):
    DISCONNECTED = 0
    READY = 1
    SHARED = 2
    EXCLUSIVE = 3
    UNRESPONSIVE = 4

class SmartCardTriggerType(enum.IntEnum):
    EMULATOR_TRANSACTION = 0
    EMULATOR_NEAR_FIELD_ENTRY = 1
    EMULATOR_NEAR_FIELD_EXIT = 2
    EMULATOR_HOST_APPLICATION_ACTIVATED = 3
    EMULATOR_APPLET_ID_GROUP_REGISTRATION_CHANGED = 4
    READER_CARD_ADDED = 5

class SmartCardUnlockPromptingBehavior(enum.IntEnum):
    ALLOW_UNLOCK_PROMPT = 0
    REQUIRE_UNLOCK_PROMPT = 1
    PREVENT_UNLOCK_PROMPT = 2

_ns_module._register_SmartCardActivationPolicyChangeResult(SmartCardActivationPolicyChangeResult)
_ns_module._register_SmartCardAppletIdGroupActivationPolicy(SmartCardAppletIdGroupActivationPolicy)
_ns_module._register_SmartCardAutomaticResponseStatus(SmartCardAutomaticResponseStatus)
_ns_module._register_SmartCardCryptogramAlgorithm(SmartCardCryptogramAlgorithm)
_ns_module._register_SmartCardCryptogramGeneratorOperationStatus(SmartCardCryptogramGeneratorOperationStatus)
_ns_module._register_SmartCardCryptogramMaterialPackageConfirmationResponseFormat(SmartCardCryptogramMaterialPackageConfirmationResponseFormat)
_ns_module._register_SmartCardCryptogramMaterialPackageFormat(SmartCardCryptogramMaterialPackageFormat)
_ns_module._register_SmartCardCryptogramMaterialProtectionMethod(SmartCardCryptogramMaterialProtectionMethod)
_ns_module._register_SmartCardCryptogramMaterialType(SmartCardCryptogramMaterialType)
_ns_module._register_SmartCardCryptogramPlacementOptions(SmartCardCryptogramPlacementOptions)
_ns_module._register_SmartCardCryptogramStorageKeyAlgorithm(SmartCardCryptogramStorageKeyAlgorithm)
_ns_module._register_SmartCardCryptogramStorageKeyCapabilities(SmartCardCryptogramStorageKeyCapabilities)
_ns_module._register_SmartCardCryptographicKeyAttestationStatus(SmartCardCryptographicKeyAttestationStatus)
_ns_module._register_SmartCardEmulationCategory(SmartCardEmulationCategory)
_ns_module._register_SmartCardEmulationType(SmartCardEmulationType)
_ns_module._register_SmartCardEmulatorConnectionDeactivatedReason(SmartCardEmulatorConnectionDeactivatedReason)
_ns_module._register_SmartCardEmulatorConnectionSource(SmartCardEmulatorConnectionSource)
_ns_module._register_SmartCardEmulatorEnablementPolicy(SmartCardEmulatorEnablementPolicy)
_ns_module._register_SmartCardLaunchBehavior(SmartCardLaunchBehavior)
_ns_module._register_SmartCardPinCharacterPolicyOption(SmartCardPinCharacterPolicyOption)
_ns_module._register_SmartCardReaderKind(SmartCardReaderKind)
_ns_module._register_SmartCardReaderStatus(SmartCardReaderStatus)
_ns_module._register_SmartCardStatus(SmartCardStatus)
_ns_module._register_SmartCardTriggerType(SmartCardTriggerType)
_ns_module._register_SmartCardUnlockPromptingBehavior(SmartCardUnlockPromptingBehavior)

CardAddedEventArgs = _ns_module.CardAddedEventArgs
CardRemovedEventArgs = _ns_module.CardRemovedEventArgs
KnownSmartCardAppletIds = _ns_module.KnownSmartCardAppletIds
SmartCard = _ns_module.SmartCard
SmartCardAppletIdGroup = _ns_module.SmartCardAppletIdGroup
SmartCardAppletIdGroupRegistration = _ns_module.SmartCardAppletIdGroupRegistration
SmartCardAutomaticResponseApdu = _ns_module.SmartCardAutomaticResponseApdu
SmartCardChallengeContext = _ns_module.SmartCardChallengeContext
SmartCardConnection = _ns_module.SmartCardConnection
SmartCardCryptogramGenerator = _ns_module.SmartCardCryptogramGenerator
SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult = _ns_module.SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult = _ns_module.SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult = _ns_module.SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
SmartCardCryptogramMaterialCharacteristics = _ns_module.SmartCardCryptogramMaterialCharacteristics
SmartCardCryptogramMaterialPackageCharacteristics = _ns_module.SmartCardCryptogramMaterialPackageCharacteristics
SmartCardCryptogramMaterialPossessionProof = _ns_module.SmartCardCryptogramMaterialPossessionProof
SmartCardCryptogramPlacementStep = _ns_module.SmartCardCryptogramPlacementStep
SmartCardCryptogramStorageKeyCharacteristics = _ns_module.SmartCardCryptogramStorageKeyCharacteristics
SmartCardCryptogramStorageKeyInfo = _ns_module.SmartCardCryptogramStorageKeyInfo
SmartCardEmulator = _ns_module.SmartCardEmulator
SmartCardEmulatorApduReceivedEventArgs = _ns_module.SmartCardEmulatorApduReceivedEventArgs
SmartCardEmulatorConnectionDeactivatedEventArgs = _ns_module.SmartCardEmulatorConnectionDeactivatedEventArgs
SmartCardEmulatorConnectionProperties = _ns_module.SmartCardEmulatorConnectionProperties
SmartCardPinPolicy = _ns_module.SmartCardPinPolicy
SmartCardPinResetDeferral = _ns_module.SmartCardPinResetDeferral
SmartCardPinResetRequest = _ns_module.SmartCardPinResetRequest
SmartCardProvisioning = _ns_module.SmartCardProvisioning
SmartCardReader = _ns_module.SmartCardReader
SmartCardTriggerDetails = _ns_module.SmartCardTriggerDetails
