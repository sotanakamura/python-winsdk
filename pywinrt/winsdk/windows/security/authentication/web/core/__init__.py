# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Security.Authentication.Web.Core")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.security.credentials
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

class FindAllWebAccountsStatus(enum.IntEnum):
    SUCCESS = 0
    NOT_ALLOWED_BY_PROVIDER = 1
    NOT_SUPPORTED_BY_PROVIDER = 2
    PROVIDER_ERROR = 3

class WebTokenRequestPromptType(enum.IntEnum):
    DEFAULT = 0
    FORCE_AUTHENTICATION = 1

class WebTokenRequestStatus(enum.IntEnum):
    SUCCESS = 0
    USER_CANCEL = 1
    ACCOUNT_SWITCH = 2
    USER_INTERACTION_REQUIRED = 3
    ACCOUNT_PROVIDER_NOT_AVAILABLE = 4
    PROVIDER_ERROR = 5

_ns_module._register_FindAllWebAccountsStatus(FindAllWebAccountsStatus)
_ns_module._register_WebTokenRequestPromptType(WebTokenRequestPromptType)
_ns_module._register_WebTokenRequestStatus(WebTokenRequestStatus)

FindAllAccountsResult = _ns_module.FindAllAccountsResult
WebAccountEventArgs = _ns_module.WebAccountEventArgs
WebAccountMonitor = _ns_module.WebAccountMonitor
WebAuthenticationCoreManager = _ns_module.WebAuthenticationCoreManager
WebProviderError = _ns_module.WebProviderError
WebTokenRequest = _ns_module.WebTokenRequest
WebTokenRequestResult = _ns_module.WebTokenRequestResult
WebTokenResponse = _ns_module.WebTokenResponse
