# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.gaming.input
import winsdk.windows.storage.streams

class GipFirmwareUpdateStatus(enum.IntEnum):
    COMPLETED = 0
    UP_TO_DATE = 1
    FAILED = 2

class GipMessageClass(enum.IntEnum):
    COMMAND = 0
    LOW_LATENCY = 1
    STANDARD_LATENCY = 2

class XusbDeviceSubtype(enum.IntEnum):
    UNKNOWN = 0
    GAMEPAD = 1
    ARCADE_PAD = 2
    ARCADE_STICK = 3
    FLIGHT_STICK = 4
    WHEEL = 5
    GUITAR = 6
    GUITAR_ALTERNATE = 7
    GUITAR_BASS = 8
    DRUM_KIT = 9
    DANCE_PAD = 10

class XusbDeviceType(enum.IntEnum):
    UNKNOWN = 0
    GAMEPAD = 1

Self = typing.TypeVar('Self')

class GameControllerVersionInfo:
    major: _winrt.UInt16
    minor: _winrt.UInt16
    build: _winrt.UInt16
    revision: _winrt.UInt16
    def __new__(cls: typing.Type[GameControllerVersionInfo], major: _winrt.UInt16, minor: _winrt.UInt16, build: _winrt.UInt16, revision: _winrt.UInt16) -> GameControllerVersionInfo: ...

class GipFirmwareUpdateProgress:
    percent_completed: _winrt.Double
    current_component_id: _winrt.UInt32
    def __new__(cls: typing.Type[GipFirmwareUpdateProgress], percent_completed: _winrt.Double, current_component_id: _winrt.UInt32) -> GipFirmwareUpdateProgress: ...

class GameControllerFactoryManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> GameControllerFactoryManager: ...
    @staticmethod
    def register_custom_factory_for_gip_interface(factory: typing.Optional[ICustomGameControllerFactory], interface_id: _winrt.Guid) -> None: ...
    @staticmethod
    def register_custom_factory_for_hardware_id(factory: typing.Optional[ICustomGameControllerFactory], hardware_vendor_id: _winrt.UInt16, hardware_product_id: _winrt.UInt16) -> None: ...
    @staticmethod
    def register_custom_factory_for_xusb_type(factory: typing.Optional[ICustomGameControllerFactory], xusb_type: XusbDeviceType, xusb_subtype: XusbDeviceSubtype) -> None: ...
    @staticmethod
    def try_get_factory_controller_from_game_controller(factory: typing.Optional[ICustomGameControllerFactory], game_controller: typing.Optional[winsdk.windows.gaming.input.IGameController]) -> typing.Optional[winsdk.windows.gaming.input.IGameController]: ...

class GipFirmwareUpdateResult(_winrt.Object):
    extended_error_code: _winrt.UInt32
    final_component_id: _winrt.UInt32
    status: GipFirmwareUpdateStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> GipFirmwareUpdateResult: ...

class GipGameControllerProvider(_winrt.Object):
    firmware_version_info: GameControllerVersionInfo
    hardware_product_id: _winrt.UInt16
    hardware_vendor_id: _winrt.UInt16
    hardware_version_info: GameControllerVersionInfo
    is_connected: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> GipGameControllerProvider: ...
    def send_message(self, message_class: GipMessageClass, message_id: _winrt.UInt8, message_buffer: typing.Sequence[_winrt.UInt8]) -> None: ...
    def send_receive_message(self, message_class: GipMessageClass, message_id: _winrt.UInt8, request_message_buffer: typing.Sequence[_winrt.UInt8], response_message_buffer_size: _winrt.UInt32) -> typing.List[_winrt.UInt8]: ...
    def update_firmware_async(self, firmware_image: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[GipFirmwareUpdateResult, GipFirmwareUpdateProgress]: ...

class HidGameControllerProvider(_winrt.Object):
    firmware_version_info: GameControllerVersionInfo
    hardware_product_id: _winrt.UInt16
    hardware_vendor_id: _winrt.UInt16
    hardware_version_info: GameControllerVersionInfo
    is_connected: _winrt.Boolean
    usage_id: _winrt.UInt16
    usage_page: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> HidGameControllerProvider: ...
    def get_feature_report(self, report_id: _winrt.UInt8, report_buffer_size: _winrt.UInt32) -> typing.List[_winrt.UInt8]: ...
    def send_feature_report(self, report_id: _winrt.UInt8, report_buffer: typing.Sequence[_winrt.UInt8]) -> None: ...
    def send_output_report(self, report_id: _winrt.UInt8, report_buffer: typing.Sequence[_winrt.UInt8]) -> None: ...

class XusbGameControllerProvider(_winrt.Object):
    firmware_version_info: GameControllerVersionInfo
    hardware_product_id: _winrt.UInt16
    hardware_vendor_id: _winrt.UInt16
    hardware_version_info: GameControllerVersionInfo
    is_connected: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> XusbGameControllerProvider: ...
    def set_vibration(self, low_frequency_motor_speed: _winrt.Double, high_frequency_motor_speed: _winrt.Double) -> None: ...

class ICustomGameControllerFactory(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ICustomGameControllerFactory: ...
    def create_game_controller(self, provider: typing.Optional[IGameControllerProvider]) -> typing.Optional[_winrt.Object]: ...
    def on_game_controller_added(self, value: typing.Optional[winsdk.windows.gaming.input.IGameController]) -> None: ...
    def on_game_controller_removed(self, value: typing.Optional[winsdk.windows.gaming.input.IGameController]) -> None: ...

class IGameControllerInputSink(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IGameControllerInputSink: ...
    def on_input_resumed(self, timestamp: _winrt.UInt64) -> None: ...
    def on_input_suspended(self, timestamp: _winrt.UInt64) -> None: ...

class IGameControllerProvider(_winrt.Object):
    firmware_version_info: GameControllerVersionInfo
    hardware_product_id: _winrt.UInt16
    hardware_vendor_id: _winrt.UInt16
    hardware_version_info: GameControllerVersionInfo
    is_connected: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> IGameControllerProvider: ...

class IGipGameControllerInputSink(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IGipGameControllerInputSink: ...
    def on_input_resumed(self, timestamp: _winrt.UInt64) -> None: ...
    def on_input_suspended(self, timestamp: _winrt.UInt64) -> None: ...
    def on_key_received(self, timestamp: _winrt.UInt64, key_code: _winrt.UInt8, is_pressed: _winrt.Boolean) -> None: ...
    def on_message_received(self, timestamp: _winrt.UInt64, message_class: GipMessageClass, message_id: _winrt.UInt8, sequence_id: _winrt.UInt8, message_buffer: typing.Sequence[_winrt.UInt8]) -> None: ...

class IHidGameControllerInputSink(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IHidGameControllerInputSink: ...
    def on_input_report_received(self, timestamp: _winrt.UInt64, report_id: _winrt.UInt8, report_buffer: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_input_resumed(self, timestamp: _winrt.UInt64) -> None: ...
    def on_input_suspended(self, timestamp: _winrt.UInt64) -> None: ...

class IXusbGameControllerInputSink(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IXusbGameControllerInputSink: ...
    def on_input_received(self, timestamp: _winrt.UInt64, report_id: _winrt.UInt8, input_buffer: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_input_resumed(self, timestamp: _winrt.UInt64) -> None: ...
    def on_input_suspended(self, timestamp: _winrt.UInt64) -> None: ...

