# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class MessageDialogOptions(enum.IntFlag):
    NONE = 0
    ACCEPT_USER_INPUT_AFTER_DELAY = 0x1

class Placement(enum.IntEnum):
    DEFAULT = 0
    ABOVE = 1
    BELOW = 2
    LEFT = 3
    RIGHT = 4

Self = typing.TypeVar('Self')

class MessageDialog(_winrt.Object):
    title: str
    options: MessageDialogOptions
    default_command_index: _winrt.UInt32
    content: str
    cancel_command_index: _winrt.UInt32
    commands: typing.Optional[winsdk.windows.foundation.collections.IVector[IUICommand]]
    @staticmethod
    def _from(obj: _winrt.Object) -> MessageDialog: ...
    @typing.overload
    def __new__(cls: typing.Type[MessageDialog], content: str) -> MessageDialog:...
    @typing.overload
    def __new__(cls: typing.Type[MessageDialog], content: str, title: str) -> MessageDialog:...
    def show_async(self) -> winsdk.windows.foundation.IAsyncOperation[IUICommand]: ...

class PopupMenu(_winrt.Object):
    commands: typing.Optional[winsdk.windows.foundation.collections.IVector[IUICommand]]
    @staticmethod
    def _from(obj: _winrt.Object) -> PopupMenu: ...
    def __new__(cls: typing.Type[PopupMenu]) -> PopupMenu:...
    def show_async(self, invocation_point: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.IAsyncOperation[IUICommand]: ...
    @typing.overload
    def show_for_selection_async(self, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[IUICommand]: ...
    @typing.overload
    def show_for_selection_async(self, selection: winsdk.windows.foundation.Rect, preferred_placement: Placement) -> winsdk.windows.foundation.IAsyncOperation[IUICommand]: ...

class UICommand(_winrt.Object):
    label: str
    invoked: typing.Optional[UICommandInvokedHandler]
    id: typing.Optional[_winrt.Object]
    @staticmethod
    def _from(obj: _winrt.Object) -> UICommand: ...
    @typing.overload
    def __new__(cls: typing.Type[UICommand], label: str) -> UICommand:...
    @typing.overload
    def __new__(cls: typing.Type[UICommand], label: str, action: typing.Optional[UICommandInvokedHandler]) -> UICommand:...
    @typing.overload
    def __new__(cls: typing.Type[UICommand], label: str, action: typing.Optional[UICommandInvokedHandler], command_id: typing.Optional[_winrt.Object]) -> UICommand:...
    @typing.overload
    def __new__(cls: typing.Type[UICommand]) -> UICommand:...

class UICommandSeparator(_winrt.Object):
    label: str
    invoked: typing.Optional[UICommandInvokedHandler]
    id: typing.Optional[_winrt.Object]
    @staticmethod
    def _from(obj: _winrt.Object) -> UICommandSeparator: ...
    def __new__(cls: typing.Type[UICommandSeparator]) -> UICommandSeparator:...

class IUICommand(_winrt.Object):
    id: typing.Optional[_winrt.Object]
    invoked: typing.Optional[UICommandInvokedHandler]
    label: str
    @staticmethod
    def _from(obj: _winrt.Object) -> IUICommand: ...

UICommandInvokedHandler = typing.Callable[[typing.Optional[IUICommand]], None]

