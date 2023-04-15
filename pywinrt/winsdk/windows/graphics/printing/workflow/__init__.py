# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Graphics.Printing.Workflow")

try:
    import winsdk.windows.applicationmodel.activation
except ImportError:
    pass

try:
    import winsdk.windows.devices.printers
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
    import winsdk.windows.graphics.printing.printticket
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

try:
    import winsdk.windows.system
except ImportError:
    pass

class PdlConversionHostBasedProcessingOperations(enum.IntFlag):
    NONE = 0
    PAGE_ROTATION = 0x1
    PAGE_ORDERING = 0x2
    COPIES = 0x4
    BLANK_PAGE_INSERTION = 0x8
    ALL = 0xffffffff

class PrintWorkflowAttributesMergePolicy(enum.IntEnum):
    MERGE_PREFER_PRINT_TICKET_ON_CONFLICT = 0
    MERGE_PREFER_PSA_ON_CONFLICT = 1
    DO_NOT_MERGE_WITH_PRINT_TICKET = 2

class PrintWorkflowJobAbortReason(enum.IntEnum):
    JOB_FAILED = 0
    USER_CANCELED = 1

class PrintWorkflowPdlConversionType(enum.IntEnum):
    XPS_TO_PDF = 0
    XPS_TO_PWGR = 1
    XPS_TO_PCLM = 2

class PrintWorkflowPrinterJobStatus(enum.IntEnum):
    ERROR = 0
    ABORTED = 1
    IN_PROGRESS = 2
    COMPLETED = 3

class PrintWorkflowSessionStatus(enum.IntEnum):
    STARTED = 0
    COMPLETED = 1
    ABORTED = 2
    CLOSED = 3
    PDL_DATA_AVAILABLE_FOR_MODIFICATION = 4

class PrintWorkflowSubmittedStatus(enum.IntEnum):
    SUCCEEDED = 0
    CANCELED = 1
    FAILED = 2

class PrintWorkflowUICompletionStatus(enum.IntEnum):
    COMPLETED = 0
    LAUNCH_FAILED = 1
    JOB_FAILED = 2
    USER_CANCELED = 3

_ns_module._register_PdlConversionHostBasedProcessingOperations(PdlConversionHostBasedProcessingOperations)
_ns_module._register_PrintWorkflowAttributesMergePolicy(PrintWorkflowAttributesMergePolicy)
_ns_module._register_PrintWorkflowJobAbortReason(PrintWorkflowJobAbortReason)
_ns_module._register_PrintWorkflowPdlConversionType(PrintWorkflowPdlConversionType)
_ns_module._register_PrintWorkflowPrinterJobStatus(PrintWorkflowPrinterJobStatus)
_ns_module._register_PrintWorkflowSessionStatus(PrintWorkflowSessionStatus)
_ns_module._register_PrintWorkflowSubmittedStatus(PrintWorkflowSubmittedStatus)
_ns_module._register_PrintWorkflowUICompletionStatus(PrintWorkflowUICompletionStatus)

PrintWorkflowBackgroundSession = _ns_module.PrintWorkflowBackgroundSession
PrintWorkflowBackgroundSetupRequestedEventArgs = _ns_module.PrintWorkflowBackgroundSetupRequestedEventArgs
PrintWorkflowConfiguration = _ns_module.PrintWorkflowConfiguration
PrintWorkflowForegroundSession = _ns_module.PrintWorkflowForegroundSession
PrintWorkflowForegroundSetupRequestedEventArgs = _ns_module.PrintWorkflowForegroundSetupRequestedEventArgs
PrintWorkflowJobActivatedEventArgs = _ns_module.PrintWorkflowJobActivatedEventArgs
PrintWorkflowJobBackgroundSession = _ns_module.PrintWorkflowJobBackgroundSession
PrintWorkflowJobNotificationEventArgs = _ns_module.PrintWorkflowJobNotificationEventArgs
PrintWorkflowJobStartingEventArgs = _ns_module.PrintWorkflowJobStartingEventArgs
PrintWorkflowJobTriggerDetails = _ns_module.PrintWorkflowJobTriggerDetails
PrintWorkflowJobUISession = _ns_module.PrintWorkflowJobUISession
PrintWorkflowObjectModelSourceFileContent = _ns_module.PrintWorkflowObjectModelSourceFileContent
PrintWorkflowObjectModelTargetPackage = _ns_module.PrintWorkflowObjectModelTargetPackage
PrintWorkflowPdlConverter = _ns_module.PrintWorkflowPdlConverter
PrintWorkflowPdlDataAvailableEventArgs = _ns_module.PrintWorkflowPdlDataAvailableEventArgs
PrintWorkflowPdlModificationRequestedEventArgs = _ns_module.PrintWorkflowPdlModificationRequestedEventArgs
PrintWorkflowPdlSourceContent = _ns_module.PrintWorkflowPdlSourceContent
PrintWorkflowPdlTargetStream = _ns_module.PrintWorkflowPdlTargetStream
PrintWorkflowPrinterJob = _ns_module.PrintWorkflowPrinterJob
PrintWorkflowSourceContent = _ns_module.PrintWorkflowSourceContent
PrintWorkflowSpoolStreamContent = _ns_module.PrintWorkflowSpoolStreamContent
PrintWorkflowStreamTarget = _ns_module.PrintWorkflowStreamTarget
PrintWorkflowSubmittedEventArgs = _ns_module.PrintWorkflowSubmittedEventArgs
PrintWorkflowSubmittedOperation = _ns_module.PrintWorkflowSubmittedOperation
PrintWorkflowTarget = _ns_module.PrintWorkflowTarget
PrintWorkflowTriggerDetails = _ns_module.PrintWorkflowTriggerDetails
PrintWorkflowUIActivatedEventArgs = _ns_module.PrintWorkflowUIActivatedEventArgs
PrintWorkflowUILauncher = _ns_module.PrintWorkflowUILauncher
PrintWorkflowXpsDataAvailableEventArgs = _ns_module.PrintWorkflowXpsDataAvailableEventArgs
