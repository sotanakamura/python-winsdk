# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt

Self = typing.TypeVar('Self')

class SystemProtection(_winrt.Object):
    screen_locked: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemProtection: ...
    @staticmethod
    def request_screen_unlock() -> None: ...

