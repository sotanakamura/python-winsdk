# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Security.EnterpriseData")

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
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class DataProtectionStatus(enum.IntEnum):
    PROTECTED_TO_OTHER_IDENTITY = 0
    PROTECTED = 1
    REVOKED = 2
    UNPROTECTED = 3
    LICENSE_EXPIRED = 4
    ACCESS_SUSPENDED = 5

class EnforcementLevel(enum.IntEnum):
    NO_PROTECTION = 0
    SILENT = 1
    OVERRIDE = 2
    BLOCK = 3

class FileProtectionStatus(enum.IntEnum):
    UNDETERMINED = 0
    UNKNOWN = 0
    UNPROTECTED = 1
    REVOKED = 2
    PROTECTED = 3
    PROTECTED_BY_OTHER_USER = 4
    PROTECTED_TO_OTHER_ENTERPRISE = 5
    NOT_PROTECTABLE = 6
    PROTECTED_TO_OTHER_IDENTITY = 7
    LICENSE_EXPIRED = 8
    ACCESS_SUSPENDED = 9
    FILE_IN_USE = 10

class ProtectedImportExportStatus(enum.IntEnum):
    OK = 0
    UNDETERMINED = 1
    UNPROTECTED = 2
    REVOKED = 3
    NOT_ROAMABLE = 4
    PROTECTED_TO_OTHER_IDENTITY = 5
    LICENSE_EXPIRED = 6
    ACCESS_SUSPENDED = 7

class ProtectionPolicyAuditAction(enum.IntEnum):
    DECRYPT = 0
    COPY_TO_LOCATION = 1
    SEND_TO_RECIPIENT = 2
    OTHER = 3

class ProtectionPolicyEvaluationResult(enum.IntEnum):
    ALLOWED = 0
    BLOCKED = 1
    CONSENT_REQUIRED = 2

class ProtectionPolicyRequestAccessBehavior(enum.IntEnum):
    DECRYPT = 0
    TREAT_OVERRIDE_POLICY_AS_BLOCK = 1

_ns_module._register_DataProtectionStatus(DataProtectionStatus)
_ns_module._register_EnforcementLevel(EnforcementLevel)
_ns_module._register_FileProtectionStatus(FileProtectionStatus)
_ns_module._register_ProtectedImportExportStatus(ProtectedImportExportStatus)
_ns_module._register_ProtectionPolicyAuditAction(ProtectionPolicyAuditAction)
_ns_module._register_ProtectionPolicyEvaluationResult(ProtectionPolicyEvaluationResult)
_ns_module._register_ProtectionPolicyRequestAccessBehavior(ProtectionPolicyRequestAccessBehavior)

BufferProtectUnprotectResult = _ns_module.BufferProtectUnprotectResult
DataProtectionInfo = _ns_module.DataProtectionInfo
DataProtectionManager = _ns_module.DataProtectionManager
FileProtectionInfo = _ns_module.FileProtectionInfo
FileProtectionManager = _ns_module.FileProtectionManager
FileRevocationManager = _ns_module.FileRevocationManager
FileUnprotectOptions = _ns_module.FileUnprotectOptions
ProtectedAccessResumedEventArgs = _ns_module.ProtectedAccessResumedEventArgs
ProtectedAccessSuspendingEventArgs = _ns_module.ProtectedAccessSuspendingEventArgs
ProtectedContainerExportResult = _ns_module.ProtectedContainerExportResult
ProtectedContainerImportResult = _ns_module.ProtectedContainerImportResult
ProtectedContentRevokedEventArgs = _ns_module.ProtectedContentRevokedEventArgs
ProtectedFileCreateResult = _ns_module.ProtectedFileCreateResult
ProtectionPolicyAuditInfo = _ns_module.ProtectionPolicyAuditInfo
ProtectionPolicyManager = _ns_module.ProtectionPolicyManager
ThreadNetworkContext = _ns_module.ThreadNetworkContext
