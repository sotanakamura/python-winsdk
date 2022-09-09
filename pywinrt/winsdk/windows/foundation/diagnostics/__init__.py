# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Foundation.Diagnostics")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

class CausalityRelation(enum.IntEnum):
    ASSIGN_DELEGATE = 0
    JOIN = 1
    CHOICE = 2
    CANCEL = 3
    ERROR = 4

class CausalitySource(enum.IntEnum):
    APPLICATION = 0
    LIBRARY = 1
    SYSTEM = 2

class CausalitySynchronousWork(enum.IntEnum):
    COMPLETION_NOTIFICATION = 0
    PROGRESS_NOTIFICATION = 1
    EXECUTION = 2

class CausalityTraceLevel(enum.IntEnum):
    REQUIRED = 0
    IMPORTANT = 1
    VERBOSE = 2

class ErrorOptions(enum.IntFlag):
    NONE = 0
    SUPPRESS_EXCEPTIONS = 0x1
    FORCE_EXCEPTIONS = 0x2
    USE_SET_ERROR_INFO = 0x4
    SUPPRESS_SET_ERROR_INFO = 0x8

class LoggingFieldFormat(enum.IntEnum):
    DEFAULT = 0
    HIDDEN = 1
    STRING = 2
    BOOLEAN = 3
    HEXADECIMAL = 4
    PROCESS_ID = 5
    THREAD_ID = 6
    PORT = 7
    IPV4_ADDRESS = 8
    IPV6_ADDRESS = 9
    SOCKET_ADDRESS = 10
    XML = 11
    JSON = 12
    WIN32_ERROR = 13
    N_T_STATUS = 14
    H_RESULT = 15
    FILE_TIME = 16
    SIGNED = 17
    UNSIGNED = 18

class LoggingLevel(enum.IntEnum):
    VERBOSE = 0
    INFORMATION = 1
    WARNING = 2
    ERROR = 3
    CRITICAL = 4

class LoggingOpcode(enum.IntEnum):
    INFO = 0
    START = 1
    STOP = 2
    REPLY = 6
    RESUME = 7
    SUSPEND = 8
    SEND = 9

_ns_module._register_CausalityRelation(CausalityRelation)
_ns_module._register_CausalitySource(CausalitySource)
_ns_module._register_CausalitySynchronousWork(CausalitySynchronousWork)
_ns_module._register_CausalityTraceLevel(CausalityTraceLevel)
_ns_module._register_ErrorOptions(ErrorOptions)
_ns_module._register_LoggingFieldFormat(LoggingFieldFormat)
_ns_module._register_LoggingLevel(LoggingLevel)
_ns_module._register_LoggingOpcode(LoggingOpcode)

AsyncCausalityTracer = _ns_module.AsyncCausalityTracer
ErrorDetails = _ns_module.ErrorDetails
FileLoggingSession = _ns_module.FileLoggingSession
LogFileGeneratedEventArgs = _ns_module.LogFileGeneratedEventArgs
LoggingActivity = _ns_module.LoggingActivity
LoggingChannel = _ns_module.LoggingChannel
LoggingChannelOptions = _ns_module.LoggingChannelOptions
LoggingFields = _ns_module.LoggingFields
LoggingOptions = _ns_module.LoggingOptions
LoggingSession = _ns_module.LoggingSession
RuntimeBrokerErrorSettings = _ns_module.RuntimeBrokerErrorSettings
TracingStatusChangedEventArgs = _ns_module.TracingStatusChangedEventArgs
IErrorReportingSettings = _ns_module.IErrorReportingSettings
IFileLoggingSession = _ns_module.IFileLoggingSession
ILoggingChannel = _ns_module.ILoggingChannel
ILoggingSession = _ns_module.ILoggingSession
ILoggingTarget = _ns_module.ILoggingTarget
