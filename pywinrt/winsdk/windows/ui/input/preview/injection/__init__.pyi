# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation.collections
import winsdk.windows.gaming.input

class InjectedInputButtonChangeKind(enum.IntEnum):
    NONE = 0
    FIRST_BUTTON_DOWN = 1
    FIRST_BUTTON_UP = 2
    SECOND_BUTTON_DOWN = 3
    SECOND_BUTTON_UP = 4
    THIRD_BUTTON_DOWN = 5
    THIRD_BUTTON_UP = 6
    FOURTH_BUTTON_DOWN = 7
    FOURTH_BUTTON_UP = 8
    FIFTH_BUTTON_DOWN = 9
    FIFTH_BUTTON_UP = 10

class InjectedInputKeyOptions(enum.IntFlag):
    NONE = 0
    EXTENDED_KEY = 0x1
    KEY_UP = 0x2
    SCAN_CODE = 0x8
    UNICODE = 0x4

class InjectedInputMouseOptions(enum.IntFlag):
    NONE = 0
    MOVE = 0x1
    LEFT_DOWN = 0x2
    LEFT_UP = 0x4
    RIGHT_DOWN = 0x8
    RIGHT_UP = 0x10
    MIDDLE_DOWN = 0x20
    MIDDLE_UP = 0x40
    X_DOWN = 0x80
    X_UP = 0x100
    WHEEL = 0x800
    H_WHEEL = 0x1000
    MOVE_NO_COALESCE = 0x2000
    VIRTUAL_DESK = 0x4000
    ABSOLUTE = 0x8000

class InjectedInputPenButtons(enum.IntFlag):
    NONE = 0
    BARREL = 0x1
    INVERTED = 0x2
    ERASER = 0x4

class InjectedInputPenParameters(enum.IntFlag):
    NONE = 0
    PRESSURE = 0x1
    ROTATION = 0x2
    TILT_X = 0x4
    TILT_Y = 0x8

class InjectedInputPointerOptions(enum.IntFlag):
    NONE = 0
    NEW = 0x1
    IN_RANGE = 0x2
    IN_CONTACT = 0x4
    FIRST_BUTTON = 0x10
    SECOND_BUTTON = 0x20
    PRIMARY = 0x2000
    CONFIDENCE = 0x4000
    CANCELED = 0x8000
    POINTER_DOWN = 0x10000
    UPDATE = 0x20000
    POINTER_UP = 0x40000
    CAPTURE_CHANGED = 0x200000

class InjectedInputShortcut(enum.IntEnum):
    BACK = 0
    START = 1
    SEARCH = 2

class InjectedInputTouchParameters(enum.IntFlag):
    NONE = 0
    CONTACT = 0x1
    ORIENTATION = 0x2
    PRESSURE = 0x4

class InjectedInputVisualizationMode(enum.IntEnum):
    NONE = 0
    DEFAULT = 1
    INDIRECT = 2

Self = typing.TypeVar('Self')

class InjectedInputPoint:
    position_x: winsdk.system.Int32
    position_y: winsdk.system.Int32
    def __new__(cls: typing.Type[InjectedInputPoint], position_x: winsdk.system.Int32, position_y: winsdk.system.Int32) -> InjectedInputPoint: ...

class InjectedInputPointerInfo:
    pointer_id: winsdk.system.UInt32
    pointer_options: InjectedInputPointerOptions
    pixel_location: InjectedInputPoint
    time_offset_in_milliseconds: winsdk.system.UInt32
    performance_count: winsdk.system.UInt64
    def __new__(cls: typing.Type[InjectedInputPointerInfo], pointer_id: winsdk.system.UInt32, pointer_options: InjectedInputPointerOptions, pixel_location: InjectedInputPoint, time_offset_in_milliseconds: winsdk.system.UInt32, performance_count: winsdk.system.UInt64) -> InjectedInputPointerInfo: ...

class InjectedInputRectangle:
    left: winsdk.system.Int32
    top: winsdk.system.Int32
    bottom: winsdk.system.Int32
    right: winsdk.system.Int32
    def __new__(cls: typing.Type[InjectedInputRectangle], left: winsdk.system.Int32, top: winsdk.system.Int32, bottom: winsdk.system.Int32, right: winsdk.system.Int32) -> InjectedInputRectangle: ...

class InjectedInputGamepadInfo(winsdk.system.Object):
    right_trigger: winsdk.system.Double
    right_thumbstick_y: winsdk.system.Double
    right_thumbstick_x: winsdk.system.Double
    left_trigger: winsdk.system.Double
    left_thumbstick_y: winsdk.system.Double
    left_thumbstick_x: winsdk.system.Double
    buttons: winsdk.windows.gaming.input.GamepadButtons
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InjectedInputGamepadInfo: ...
    @typing.overload
    def __new__(cls: typing.Type[InjectedInputGamepadInfo], reading: winsdk.windows.gaming.input.GamepadReading) -> InjectedInputGamepadInfo:...
    @typing.overload
    def __new__(cls: typing.Type[InjectedInputGamepadInfo]) -> InjectedInputGamepadInfo:...

class InjectedInputKeyboardInfo(winsdk.system.Object):
    virtual_key: winsdk.system.UInt16
    scan_code: winsdk.system.UInt16
    key_options: InjectedInputKeyOptions
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InjectedInputKeyboardInfo: ...
    def __new__(cls: typing.Type[InjectedInputKeyboardInfo]) -> InjectedInputKeyboardInfo:...

class InjectedInputMouseInfo(winsdk.system.Object):
    time_offset_in_milliseconds: winsdk.system.UInt32
    mouse_options: InjectedInputMouseOptions
    mouse_data: winsdk.system.UInt32
    delta_y: winsdk.system.Int32
    delta_x: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InjectedInputMouseInfo: ...
    def __new__(cls: typing.Type[InjectedInputMouseInfo]) -> InjectedInputMouseInfo:...

class InjectedInputPenInfo(winsdk.system.Object):
    tilt_y: winsdk.system.Int32
    tilt_x: winsdk.system.Int32
    rotation: winsdk.system.Double
    pressure: winsdk.system.Double
    pointer_info: InjectedInputPointerInfo
    pen_parameters: InjectedInputPenParameters
    pen_buttons: InjectedInputPenButtons
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InjectedInputPenInfo: ...
    def __new__(cls: typing.Type[InjectedInputPenInfo]) -> InjectedInputPenInfo:...

class InjectedInputTouchInfo(winsdk.system.Object):
    touch_parameters: InjectedInputTouchParameters
    pressure: winsdk.system.Double
    pointer_info: InjectedInputPointerInfo
    orientation: winsdk.system.Int32
    contact: InjectedInputRectangle
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InjectedInputTouchInfo: ...
    def __new__(cls: typing.Type[InjectedInputTouchInfo]) -> InjectedInputTouchInfo:...

class InputInjector(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InputInjector: ...
    def initialize_gamepad_injection(self) -> None: ...
    def initialize_pen_injection(self, visual_mode: InjectedInputVisualizationMode) -> None: ...
    def initialize_touch_injection(self, visual_mode: InjectedInputVisualizationMode) -> None: ...
    def inject_gamepad_input(self, input: typing.Optional[InjectedInputGamepadInfo]) -> None: ...
    def inject_keyboard_input(self, input: typing.Iterable[InjectedInputKeyboardInfo]) -> None: ...
    def inject_mouse_input(self, input: typing.Iterable[InjectedInputMouseInfo]) -> None: ...
    def inject_pen_input(self, input: typing.Optional[InjectedInputPenInfo]) -> None: ...
    def inject_shortcut(self, shortcut: InjectedInputShortcut) -> None: ...
    def inject_touch_input(self, input: typing.Iterable[InjectedInputTouchInfo]) -> None: ...
    @staticmethod
    def try_create() -> typing.Optional[InputInjector]: ...
    @staticmethod
    def try_create_for_app_broadcast_only() -> typing.Optional[InputInjector]: ...
    def uninitialize_gamepad_injection(self) -> None: ...
    def uninitialize_pen_injection(self) -> None: ...
    def uninitialize_touch_injection(self) -> None: ...

