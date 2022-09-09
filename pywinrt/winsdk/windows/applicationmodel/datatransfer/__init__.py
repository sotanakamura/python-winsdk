# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.ApplicationModel.DataTransfer")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.security.enterprisedata
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
    import winsdk.windows.ui
except ImportError:
    pass

class ClipboardHistoryItemsResultStatus(enum.IntEnum):
    SUCCESS = 0
    ACCESS_DENIED = 1
    CLIPBOARD_HISTORY_DISABLED = 2

class DataPackageOperation(enum.IntFlag):
    NONE = 0
    COPY = 0x1
    MOVE = 0x2
    LINK = 0x4

class SetHistoryItemAsContentStatus(enum.IntEnum):
    SUCCESS = 0
    ACCESS_DENIED = 1
    ITEM_DELETED = 2

class ShareUITheme(enum.IntEnum):
    DEFAULT = 0
    LIGHT = 1
    DARK = 2

_ns_module._register_ClipboardHistoryItemsResultStatus(ClipboardHistoryItemsResultStatus)
_ns_module._register_DataPackageOperation(DataPackageOperation)
_ns_module._register_SetHistoryItemAsContentStatus(SetHistoryItemAsContentStatus)
_ns_module._register_ShareUITheme(ShareUITheme)

Clipboard = _ns_module.Clipboard
ClipboardContentOptions = _ns_module.ClipboardContentOptions
ClipboardHistoryChangedEventArgs = _ns_module.ClipboardHistoryChangedEventArgs
ClipboardHistoryItem = _ns_module.ClipboardHistoryItem
ClipboardHistoryItemsResult = _ns_module.ClipboardHistoryItemsResult
DataPackage = _ns_module.DataPackage
DataPackagePropertySet = _ns_module.DataPackagePropertySet
DataPackagePropertySetView = _ns_module.DataPackagePropertySetView
DataPackageView = _ns_module.DataPackageView
DataProviderDeferral = _ns_module.DataProviderDeferral
DataProviderRequest = _ns_module.DataProviderRequest
DataRequest = _ns_module.DataRequest
DataRequestDeferral = _ns_module.DataRequestDeferral
DataRequestedEventArgs = _ns_module.DataRequestedEventArgs
DataTransferManager = _ns_module.DataTransferManager
HtmlFormatHelper = _ns_module.HtmlFormatHelper
OperationCompletedEventArgs = _ns_module.OperationCompletedEventArgs
ShareCompletedEventArgs = _ns_module.ShareCompletedEventArgs
ShareProvider = _ns_module.ShareProvider
ShareProviderOperation = _ns_module.ShareProviderOperation
ShareProvidersRequestedEventArgs = _ns_module.ShareProvidersRequestedEventArgs
ShareTargetInfo = _ns_module.ShareTargetInfo
ShareUIOptions = _ns_module.ShareUIOptions
SharedStorageAccessManager = _ns_module.SharedStorageAccessManager
StandardDataFormats = _ns_module.StandardDataFormats
TargetApplicationChosenEventArgs = _ns_module.TargetApplicationChosenEventArgs
