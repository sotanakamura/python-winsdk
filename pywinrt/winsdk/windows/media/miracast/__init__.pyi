# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.core
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics
import winsdk.windows.media.core
import winsdk.windows.storage.streams

class MiracastReceiverApplySettingsStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    MIRACAST_NOT_SUPPORTED = 2
    ACCESS_DENIED = 3
    FRIENDLY_NAME_TOO_LONG = 4
    MODEL_NAME_TOO_LONG = 5
    MODEL_NUMBER_TOO_LONG = 6
    INVALID_SETTINGS = 7

class MiracastReceiverAuthorizationMethod(enum.IntEnum):
    NONE = 0
    CONFIRM_CONNECTION = 1
    PIN_DISPLAY_IF_REQUESTED = 2
    PIN_DISPLAY_REQUIRED = 3

class MiracastReceiverDisconnectReason(enum.IntEnum):
    FINISHED = 0
    APP_SPECIFIC_ERROR = 1
    CONNECTION_NOT_ACCEPTED = 2
    DISCONNECTED_BY_USER = 3
    FAILED_TO_START_STREAMING = 4
    MEDIA_DECODING_ERROR = 5
    MEDIA_STREAMING_ERROR = 6
    MEDIA_DECRYPTION_ERROR = 7

class MiracastReceiverGameControllerDeviceUsageMode(enum.IntEnum):
    AS_GAME_CONTROLLER = 0
    AS_MOUSE_AND_KEYBOARD = 1

class MiracastReceiverListeningStatus(enum.IntEnum):
    NOT_LISTENING = 0
    LISTENING = 1
    CONNECTION_PENDING = 2
    CONNECTED = 3
    DISABLED_BY_POLICY = 4
    TEMPORARILY_DISABLED = 5

class MiracastReceiverSessionStartStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    MIRACAST_NOT_SUPPORTED = 2
    ACCESS_DENIED = 3

class MiracastReceiverWiFiStatus(enum.IntEnum):
    MIRACAST_SUPPORT_UNDETERMINED = 0
    MIRACAST_NOT_SUPPORTED = 1
    MIRACAST_SUPPORT_NOT_OPTIMIZED = 2
    MIRACAST_SUPPORTED = 3

class MiracastTransmitterAuthorizationStatus(enum.IntEnum):
    UNDECIDED = 0
    ALLOWED = 1
    ALWAYS_PROMPT = 2
    BLOCKED = 3

Self = typing.TypeVar('Self')

class MiracastReceiver(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiver: ...
    def __new__(cls: typing.Type[MiracastReceiver]) -> MiracastReceiver:...
    def clear_known_transmitters(self) -> None: ...
    def create_session(self, view: typing.Optional[winsdk.windows.applicationmodel.core.CoreApplicationView]) -> typing.Optional[MiracastReceiverSession]: ...
    def create_session_async(self, view: typing.Optional[winsdk.windows.applicationmodel.core.CoreApplicationView]) -> winsdk.windows.foundation.IAsyncOperation[MiracastReceiverSession]: ...
    def disconnect_all_and_apply_settings(self, settings: typing.Optional[MiracastReceiverSettings]) -> typing.Optional[MiracastReceiverApplySettingsResult]: ...
    def disconnect_all_and_apply_settings_async(self, settings: typing.Optional[MiracastReceiverSettings]) -> winsdk.windows.foundation.IAsyncOperation[MiracastReceiverApplySettingsResult]: ...
    def get_current_settings(self) -> typing.Optional[MiracastReceiverSettings]: ...
    def get_current_settings_async(self) -> winsdk.windows.foundation.IAsyncOperation[MiracastReceiverSettings]: ...
    def get_default_settings(self) -> typing.Optional[MiracastReceiverSettings]: ...
    def get_status(self) -> typing.Optional[MiracastReceiverStatus]: ...
    def get_status_async(self) -> winsdk.windows.foundation.IAsyncOperation[MiracastReceiverStatus]: ...
    def remove_known_transmitter(self, transmitter: typing.Optional[MiracastTransmitter]) -> None: ...
    def add_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiver, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MiracastReceiverApplySettingsResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    status: MiracastReceiverApplySettingsStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverApplySettingsResult: ...

class MiracastReceiverConnection(winsdk.system.Object):
    cursor_image_channel: typing.Optional[MiracastReceiverCursorImageChannel]
    input_devices: typing.Optional[MiracastReceiverInputDevices]
    stream_control: typing.Optional[MiracastReceiverStreamControl]
    transmitter: typing.Optional[MiracastTransmitter]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverConnection: ...
    def close(self) -> None: ...
    @typing.overload
    def disconnect(self, reason: MiracastReceiverDisconnectReason) -> None: ...
    @typing.overload
    def disconnect(self, reason: MiracastReceiverDisconnectReason, message: str) -> None: ...
    def pause(self) -> None: ...
    def pause_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def resume(self) -> None: ...
    def resume_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class MiracastReceiverConnectionCreatedEventArgs(winsdk.system.Object):
    connection: typing.Optional[MiracastReceiverConnection]
    pin: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverConnectionCreatedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class MiracastReceiverCursorImageChannel(winsdk.system.Object):
    image_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]
    is_enabled: winsdk.system.Boolean
    max_image_size: winsdk.windows.graphics.SizeInt32
    position: winsdk.windows.graphics.PointInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverCursorImageChannel: ...
    def add_image_stream_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiverCursorImageChannel, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_image_stream_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_position_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiverCursorImageChannel, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_position_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MiracastReceiverCursorImageChannelSettings(winsdk.system.Object):
    max_image_size: winsdk.windows.graphics.SizeInt32
    is_enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverCursorImageChannelSettings: ...

class MiracastReceiverDisconnectedEventArgs(winsdk.system.Object):
    connection: typing.Optional[MiracastReceiverConnection]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverDisconnectedEventArgs: ...

class MiracastReceiverGameControllerDevice(winsdk.system.Object):
    transmit_input: winsdk.system.Boolean
    mode: MiracastReceiverGameControllerDeviceUsageMode
    is_requested_by_transmitter: winsdk.system.Boolean
    is_transmitting_input: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverGameControllerDevice: ...
    def add_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiverGameControllerDevice, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MiracastReceiverInputDevices(winsdk.system.Object):
    game_controller: typing.Optional[MiracastReceiverGameControllerDevice]
    keyboard: typing.Optional[MiracastReceiverKeyboardDevice]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverInputDevices: ...

class MiracastReceiverKeyboardDevice(winsdk.system.Object):
    transmit_input: winsdk.system.Boolean
    is_requested_by_transmitter: winsdk.system.Boolean
    is_transmitting_input: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverKeyboardDevice: ...
    def add_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiverKeyboardDevice, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MiracastReceiverMediaSourceCreatedEventArgs(winsdk.system.Object):
    connection: typing.Optional[MiracastReceiverConnection]
    cursor_image_channel_settings: typing.Optional[MiracastReceiverCursorImageChannelSettings]
    media_source: typing.Optional[winsdk.windows.media.core.MediaSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverMediaSourceCreatedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class MiracastReceiverSession(winsdk.system.Object):
    max_simultaneous_connections: winsdk.system.Int32
    allow_connection_takeover: winsdk.system.Boolean
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverSession: ...
    def close(self) -> None: ...
    def start(self) -> typing.Optional[MiracastReceiverSessionStartResult]: ...
    def start_async(self) -> winsdk.windows.foundation.IAsyncOperation[MiracastReceiverSessionStartResult]: ...
    def add_connection_created(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiverSession, MiracastReceiverConnectionCreatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_connection_created(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_disconnected(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiverSession, MiracastReceiverDisconnectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_media_source_created(self, handler: winsdk.windows.foundation.TypedEventHandler[MiracastReceiverSession, MiracastReceiverMediaSourceCreatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_media_source_created(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MiracastReceiverSessionStartResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    status: MiracastReceiverSessionStartStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverSessionStartResult: ...

class MiracastReceiverSettings(winsdk.system.Object):
    require_authorization_from_known_transmitters: winsdk.system.Boolean
    model_number: str
    model_name: str
    friendly_name: str
    authorization_method: MiracastReceiverAuthorizationMethod
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverSettings: ...

class MiracastReceiverStatus(winsdk.system.Object):
    is_connection_takeover_supported: winsdk.system.Boolean
    known_transmitters: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MiracastTransmitter]]
    listening_status: MiracastReceiverListeningStatus
    max_simultaneous_connections: winsdk.system.Int32
    wi_fi_status: MiracastReceiverWiFiStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverStatus: ...

class MiracastReceiverStreamControl(winsdk.system.Object):
    mute_audio: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverStreamControl: ...
    def get_video_stream_settings(self) -> typing.Optional[MiracastReceiverVideoStreamSettings]: ...
    def get_video_stream_settings_async(self) -> winsdk.windows.foundation.IAsyncOperation[MiracastReceiverVideoStreamSettings]: ...
    def suggest_video_stream_settings(self, settings: typing.Optional[MiracastReceiverVideoStreamSettings]) -> None: ...
    def suggest_video_stream_settings_async(self, settings: typing.Optional[MiracastReceiverVideoStreamSettings]) -> winsdk.windows.foundation.IAsyncAction: ...

class MiracastReceiverVideoStreamSettings(winsdk.system.Object):
    size: winsdk.windows.graphics.SizeInt32
    bitrate: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastReceiverVideoStreamSettings: ...

class MiracastTransmitter(winsdk.system.Object):
    name: str
    authorization_status: MiracastTransmitterAuthorizationStatus
    last_connection_time: datetime.datetime
    mac_address: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MiracastTransmitter: ...
    def get_connections(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[MiracastReceiverConnection]]: ...

