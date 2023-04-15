# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Security.Isolation")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class IsolatedWindowsEnvironmentActivator(enum.IntEnum):
    SYSTEM = 0
    USER = 1

class IsolatedWindowsEnvironmentAllowedClipboardFormats(enum.IntFlag):
    NONE = 0
    TEXT = 0x1
    IMAGE = 0x2
    RTF = 0x4

class IsolatedWindowsEnvironmentAvailablePrinters(enum.IntFlag):
    NONE = 0
    LOCAL = 0x1
    NETWORK = 0x2
    SYSTEM_PRINT_TO_PDF = 0x4
    SYSTEM_PRINT_TO_XPS = 0x8

class IsolatedWindowsEnvironmentClipboardCopyPasteDirections(enum.IntFlag):
    NONE = 0
    HOST_TO_ISOLATED_WINDOWS_ENVIRONMENT = 0x1
    ISOLATED_WINDOWS_ENVIRONMENT_TO_HOST = 0x2

class IsolatedWindowsEnvironmentCreateStatus(enum.IntEnum):
    SUCCESS = 0
    FAILURE_BY_POLICY = 1
    UNKNOWN_FAILURE = 2

class IsolatedWindowsEnvironmentCreationPriority(enum.IntEnum):
    LOW = 0
    NORMAL = 1

class IsolatedWindowsEnvironmentHostError(enum.IntEnum):
    ADMIN_POLICY_IS_DISABLED_OR_NOT_PRESENT = 0
    FEATURE_NOT_INSTALLED = 1
    HARDWARE_REQUIREMENTS_NOT_MET = 2
    REBOOT_REQUIRED = 3
    UNKNOWN_ERROR = 4

class IsolatedWindowsEnvironmentLaunchFileStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    ENVIRONMENT_UNAVAILABLE = 2
    FILE_NOT_FOUND = 3
    TIMED_OUT = 4
    ALREADY_SHARED_WITH_CONFLICTING_OPTIONS = 5

class IsolatedWindowsEnvironmentOwnerRegistrationStatus(enum.IntEnum):
    SUCCESS = 0
    INVALID_ARGUMENT = 1
    ACCESS_DENIED = 2
    INSUFFICIENT_MEMORY = 3
    UNKNOWN_FAILURE = 4

class IsolatedWindowsEnvironmentPostMessageStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    ENVIRONMENT_UNAVAILABLE = 2

class IsolatedWindowsEnvironmentProcessState(enum.IntEnum):
    RUNNING = 1
    ABORTED = 2
    COMPLETED = 3

class IsolatedWindowsEnvironmentProgressState(enum.IntEnum):
    QUEUED = 0
    PROCESSING = 1
    COMPLETED = 2
    CREATING = 3
    RETRYING = 4
    STARTING = 5
    FINALIZING = 6

class IsolatedWindowsEnvironmentShareFileStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    ENVIRONMENT_UNAVAILABLE = 2
    ALREADY_SHARED_WITH_CONFLICTING_OPTIONS = 3
    FILE_NOT_FOUND = 4
    ACCESS_DENIED = 5

class IsolatedWindowsEnvironmentShareFolderStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    ENVIRONMENT_UNAVAILABLE = 2
    FOLDER_NOT_FOUND = 3
    ACCESS_DENIED = 4

class IsolatedWindowsEnvironmentSignInProgress(enum.IntEnum):
    CONNECTING = 0
    CONNECTED = 1
    AUTHENTICATING = 2
    SETTING_UP_ACCOUNT = 3
    FINALIZING = 4
    COMPLETED = 5

class IsolatedWindowsEnvironmentStartProcessStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    ENVIRONMENT_UNAVAILABLE = 2
    FILE_NOT_FOUND = 3
    APP_NOT_REGISTERED = 4

_ns_module._register_IsolatedWindowsEnvironmentActivator(IsolatedWindowsEnvironmentActivator)
_ns_module._register_IsolatedWindowsEnvironmentAllowedClipboardFormats(IsolatedWindowsEnvironmentAllowedClipboardFormats)
_ns_module._register_IsolatedWindowsEnvironmentAvailablePrinters(IsolatedWindowsEnvironmentAvailablePrinters)
_ns_module._register_IsolatedWindowsEnvironmentClipboardCopyPasteDirections(IsolatedWindowsEnvironmentClipboardCopyPasteDirections)
_ns_module._register_IsolatedWindowsEnvironmentCreateStatus(IsolatedWindowsEnvironmentCreateStatus)
_ns_module._register_IsolatedWindowsEnvironmentCreationPriority(IsolatedWindowsEnvironmentCreationPriority)
_ns_module._register_IsolatedWindowsEnvironmentHostError(IsolatedWindowsEnvironmentHostError)
_ns_module._register_IsolatedWindowsEnvironmentLaunchFileStatus(IsolatedWindowsEnvironmentLaunchFileStatus)
_ns_module._register_IsolatedWindowsEnvironmentOwnerRegistrationStatus(IsolatedWindowsEnvironmentOwnerRegistrationStatus)
_ns_module._register_IsolatedWindowsEnvironmentPostMessageStatus(IsolatedWindowsEnvironmentPostMessageStatus)
_ns_module._register_IsolatedWindowsEnvironmentProcessState(IsolatedWindowsEnvironmentProcessState)
_ns_module._register_IsolatedWindowsEnvironmentProgressState(IsolatedWindowsEnvironmentProgressState)
_ns_module._register_IsolatedWindowsEnvironmentShareFileStatus(IsolatedWindowsEnvironmentShareFileStatus)
_ns_module._register_IsolatedWindowsEnvironmentShareFolderStatus(IsolatedWindowsEnvironmentShareFolderStatus)
_ns_module._register_IsolatedWindowsEnvironmentSignInProgress(IsolatedWindowsEnvironmentSignInProgress)
_ns_module._register_IsolatedWindowsEnvironmentStartProcessStatus(IsolatedWindowsEnvironmentStartProcessStatus)

IsolatedWindowsEnvironmentCreateProgress = _ns_module.IsolatedWindowsEnvironmentCreateProgress
IsolatedWindowsEnvironment = _ns_module.IsolatedWindowsEnvironment
IsolatedWindowsEnvironmentCreateResult = _ns_module.IsolatedWindowsEnvironmentCreateResult
IsolatedWindowsEnvironmentFile = _ns_module.IsolatedWindowsEnvironmentFile
IsolatedWindowsEnvironmentHost = _ns_module.IsolatedWindowsEnvironmentHost
IsolatedWindowsEnvironmentLaunchFileResult = _ns_module.IsolatedWindowsEnvironmentLaunchFileResult
IsolatedWindowsEnvironmentOptions = _ns_module.IsolatedWindowsEnvironmentOptions
IsolatedWindowsEnvironmentOwnerRegistration = _ns_module.IsolatedWindowsEnvironmentOwnerRegistration
IsolatedWindowsEnvironmentOwnerRegistrationData = _ns_module.IsolatedWindowsEnvironmentOwnerRegistrationData
IsolatedWindowsEnvironmentOwnerRegistrationResult = _ns_module.IsolatedWindowsEnvironmentOwnerRegistrationResult
IsolatedWindowsEnvironmentPostMessageResult = _ns_module.IsolatedWindowsEnvironmentPostMessageResult
IsolatedWindowsEnvironmentProcess = _ns_module.IsolatedWindowsEnvironmentProcess
IsolatedWindowsEnvironmentShareFileRequestOptions = _ns_module.IsolatedWindowsEnvironmentShareFileRequestOptions
IsolatedWindowsEnvironmentShareFileResult = _ns_module.IsolatedWindowsEnvironmentShareFileResult
IsolatedWindowsEnvironmentShareFolderRequestOptions = _ns_module.IsolatedWindowsEnvironmentShareFolderRequestOptions
IsolatedWindowsEnvironmentShareFolderResult = _ns_module.IsolatedWindowsEnvironmentShareFolderResult
IsolatedWindowsEnvironmentStartProcessResult = _ns_module.IsolatedWindowsEnvironmentStartProcessResult
IsolatedWindowsEnvironmentTelemetryParameters = _ns_module.IsolatedWindowsEnvironmentTelemetryParameters
IsolatedWindowsEnvironmentUserInfo = _ns_module.IsolatedWindowsEnvironmentUserInfo
IsolatedWindowsHostMessenger = _ns_module.IsolatedWindowsHostMessenger
