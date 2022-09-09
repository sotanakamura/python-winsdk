# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class ProviderGpioPinDriveMode(enum.IntEnum):
    INPUT = 0
    OUTPUT = 1
    INPUT_PULL_UP = 2
    INPUT_PULL_DOWN = 3
    OUTPUT_OPEN_DRAIN = 4
    OUTPUT_OPEN_DRAIN_PULL_UP = 5
    OUTPUT_OPEN_SOURCE = 6
    OUTPUT_OPEN_SOURCE_PULL_DOWN = 7

class ProviderGpioPinEdge(enum.IntEnum):
    FALLING_EDGE = 0
    RISING_EDGE = 1

class ProviderGpioPinValue(enum.IntEnum):
    LOW = 0
    HIGH = 1

class ProviderGpioSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED_READ_ONLY = 1

Self = typing.TypeVar('Self')

class GpioPinProviderValueChangedEventArgs(_winrt.Object):
    edge: ProviderGpioPinEdge
    @staticmethod
    def _from(obj: _winrt.Object) -> GpioPinProviderValueChangedEventArgs: ...
    def __new__(cls: typing.Type[GpioPinProviderValueChangedEventArgs], edge: ProviderGpioPinEdge) -> GpioPinProviderValueChangedEventArgs:...

class IGpioControllerProvider(_winrt.Object):
    pin_count: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> IGpioControllerProvider: ...
    def open_pin_provider(self, pin: _winrt.Int32, sharing_mode: ProviderGpioSharingMode) -> typing.Optional[IGpioPinProvider]: ...

class IGpioPinProvider(_winrt.Object):
    debounce_timeout: datetime.timedelta
    pin_number: _winrt.Int32
    sharing_mode: ProviderGpioSharingMode
    @staticmethod
    def _from(obj: _winrt.Object) -> IGpioPinProvider: ...
    def get_drive_mode(self) -> ProviderGpioPinDriveMode: ...
    def is_drive_mode_supported(self, drive_mode: ProviderGpioPinDriveMode) -> _winrt.Boolean: ...
    def read(self) -> ProviderGpioPinValue: ...
    def set_drive_mode(self, value: ProviderGpioPinDriveMode) -> None: ...
    def write(self, value: ProviderGpioPinValue) -> None: ...
    def add_value_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[IGpioPinProvider, GpioPinProviderValueChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_value_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IGpioProvider(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IGpioProvider: ...
    def get_controllers(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[IGpioControllerProvider]]: ...

