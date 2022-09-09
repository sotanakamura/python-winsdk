# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.ui.popups

class DialAppLaunchResult(enum.IntEnum):
    LAUNCHED = 0
    FAILED_TO_LAUNCH = 1
    NOT_FOUND = 2
    NETWORK_FAILURE = 3

class DialAppState(enum.IntEnum):
    UNKNOWN = 0
    STOPPED = 1
    RUNNING = 2
    NETWORK_FAILURE = 3

class DialAppStopResult(enum.IntEnum):
    STOPPED = 0
    STOP_FAILED = 1
    OPERATION_NOT_SUPPORTED = 2
    NETWORK_FAILURE = 3

class DialDeviceDisplayStatus(enum.IntEnum):
    NONE = 0
    CONNECTING = 1
    CONNECTED = 2
    DISCONNECTING = 3
    DISCONNECTED = 4
    ERROR = 5

Self = typing.TypeVar('Self')

class DialApp(_winrt.Object):
    app_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> DialApp: ...
    def get_app_state_async(self) -> winsdk.windows.foundation.IAsyncOperation[DialAppStateDetails]: ...
    def request_launch_async(self, app_argument: str) -> winsdk.windows.foundation.IAsyncOperation[DialAppLaunchResult]: ...
    def stop_async(self) -> winsdk.windows.foundation.IAsyncOperation[DialAppStopResult]: ...

class DialAppStateDetails(_winrt.Object):
    full_xml: str
    state: DialAppState
    @staticmethod
    def _from(obj: _winrt.Object) -> DialAppStateDetails: ...

class DialDevice(_winrt.Object):
    id: str
    friendly_name: str
    thumbnail: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    @staticmethod
    def _from(obj: _winrt.Object) -> DialDevice: ...
    @staticmethod
    def device_info_supports_dial_async(device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def from_id_async(value: str) -> winsdk.windows.foundation.IAsyncOperation[DialDevice]: ...
    @staticmethod
    def get_device_selector(app_name: str) -> str: ...
    def get_dial_app(self, app_name: str) -> typing.Optional[DialApp]: ...

class DialDevicePicker(_winrt.Object):
    appearance: typing.Optional[winsdk.windows.devices.enumeration.DevicePickerAppearance]
    filter: typing.Optional[DialDevicePickerFilter]
    @staticmethod
    def _from(obj: _winrt.Object) -> DialDevicePicker: ...
    def __new__(cls: typing.Type[DialDevicePicker]) -> DialDevicePicker:...
    def hide(self) -> None: ...
    @typing.overload
    def pick_single_dial_device_async(self, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[DialDevice]: ...
    @typing.overload
    def pick_single_dial_device_async(self, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[DialDevice]: ...
    def set_display_status(self, device: typing.Optional[DialDevice], status: DialDeviceDisplayStatus) -> None: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect) -> None: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> None: ...
    def add_dial_device_picker_dismissed(self, handler: winsdk.windows.foundation.TypedEventHandler[DialDevicePicker, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_dial_device_picker_dismissed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_dial_device_selected(self, handler: winsdk.windows.foundation.TypedEventHandler[DialDevicePicker, DialDeviceSelectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_dial_device_selected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_disconnect_button_clicked(self, handler: winsdk.windows.foundation.TypedEventHandler[DialDevicePicker, DialDisconnectButtonClickedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_disconnect_button_clicked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DialDevicePickerFilter(_winrt.Object):
    supported_app_names: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> DialDevicePickerFilter: ...

class DialDeviceSelectedEventArgs(_winrt.Object):
    selected_dial_device: typing.Optional[DialDevice]
    @staticmethod
    def _from(obj: _winrt.Object) -> DialDeviceSelectedEventArgs: ...

class DialDisconnectButtonClickedEventArgs(_winrt.Object):
    device: typing.Optional[DialDevice]
    @staticmethod
    def _from(obj: _winrt.Object) -> DialDisconnectButtonClickedEventArgs: ...

class DialReceiverApp(_winrt.Object):
    current: typing.Optional[DialReceiverApp]
    @staticmethod
    def _from(obj: _winrt.Object) -> DialReceiverApp: ...
    def get_additional_data_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, str]]: ...
    def get_unique_device_name_async(self) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def set_additional_data_async(self, additional_data: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, str]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

