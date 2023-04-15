# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.gpio.provider
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class GpioChangePolarity(enum.IntEnum):
    FALLING = 0
    RISING = 1
    BOTH = 2

class GpioOpenStatus(enum.IntEnum):
    PIN_OPENED = 0
    PIN_UNAVAILABLE = 1
    SHARING_VIOLATION = 2
    MUXING_CONFLICT = 3
    UNKNOWN_ERROR = 4

class GpioPinDriveMode(enum.IntEnum):
    INPUT = 0
    OUTPUT = 1
    INPUT_PULL_UP = 2
    INPUT_PULL_DOWN = 3
    OUTPUT_OPEN_DRAIN = 4
    OUTPUT_OPEN_DRAIN_PULL_UP = 5
    OUTPUT_OPEN_SOURCE = 6
    OUTPUT_OPEN_SOURCE_PULL_DOWN = 7

class GpioPinEdge(enum.IntEnum):
    FALLING_EDGE = 0
    RISING_EDGE = 1

class GpioPinValue(enum.IntEnum):
    LOW = 0
    HIGH = 1

class GpioSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED_READ_ONLY = 1

Self = typing.TypeVar('Self')

class GpioChangeCount:
    count: winsdk.system.UInt64
    relative_time: datetime.timedelta
    def __new__(cls: typing.Type[GpioChangeCount], count: winsdk.system.UInt64, relative_time: datetime.timedelta) -> GpioChangeCount: ...

class GpioChangeRecord:
    relative_time: datetime.timedelta
    edge: GpioPinEdge
    def __new__(cls: typing.Type[GpioChangeRecord], relative_time: datetime.timedelta, edge: GpioPinEdge) -> GpioChangeRecord: ...

class GpioChangeCounter(winsdk.system.Object):
    polarity: GpioChangePolarity
    is_started: winsdk.system.Boolean
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GpioChangeCounter: ...
    def __new__(cls: typing.Type[GpioChangeCounter], pin: typing.Optional[GpioPin]) -> GpioChangeCounter:...
    def close(self) -> None: ...
    def read(self) -> GpioChangeCount: ...
    def reset(self) -> GpioChangeCount: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

class GpioChangeReader(winsdk.system.Object):
    polarity: GpioChangePolarity
    capacity: winsdk.system.Int32
    is_empty: winsdk.system.Boolean
    is_overflowed: winsdk.system.Boolean
    is_started: winsdk.system.Boolean
    length: winsdk.system.Int32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GpioChangeReader: ...
    @typing.overload
    def __new__(cls: typing.Type[GpioChangeReader], pin: typing.Optional[GpioPin]) -> GpioChangeReader:...
    @typing.overload
    def __new__(cls: typing.Type[GpioChangeReader], pin: typing.Optional[GpioPin], min_capacity: winsdk.system.Int32) -> GpioChangeReader:...
    def clear(self) -> None: ...
    def close(self) -> None: ...
    def get_all_items(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[GpioChangeRecord]]: ...
    def get_next_item(self) -> GpioChangeRecord: ...
    def peek_next_item(self) -> GpioChangeRecord: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def wait_for_items_async(self, count: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...

class GpioController(winsdk.system.Object):
    pin_count: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GpioController: ...
    @staticmethod
    def get_controllers_async(provider: typing.Optional[winsdk.windows.devices.gpio.provider.IGpioProvider]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[GpioController]]: ...
    @staticmethod
    def get_default() -> typing.Optional[GpioController]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[GpioController]: ...
    @typing.overload
    def open_pin(self, pin_number: winsdk.system.Int32) -> typing.Optional[GpioPin]: ...
    @typing.overload
    def open_pin(self, pin_number: winsdk.system.Int32, sharing_mode: GpioSharingMode) -> typing.Optional[GpioPin]: ...
    def try_open_pin(self, pin_number: winsdk.system.Int32, sharing_mode: GpioSharingMode) -> typing.Tuple[winsdk.system.Boolean, typing.Optional[GpioPin], GpioOpenStatus]: ...

class GpioPin(winsdk.system.Object):
    debounce_timeout: datetime.timedelta
    pin_number: winsdk.system.Int32
    sharing_mode: GpioSharingMode
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GpioPin: ...
    def close(self) -> None: ...
    def get_drive_mode(self) -> GpioPinDriveMode: ...
    def is_drive_mode_supported(self, drive_mode: GpioPinDriveMode) -> winsdk.system.Boolean: ...
    def read(self) -> GpioPinValue: ...
    def set_drive_mode(self, value: GpioPinDriveMode) -> None: ...
    def write(self, value: GpioPinValue) -> None: ...
    def add_value_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GpioPin, GpioPinValueChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_value_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GpioPinValueChangedEventArgs(winsdk.system.Object):
    edge: GpioPinEdge
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GpioPinValueChangedEventArgs: ...

