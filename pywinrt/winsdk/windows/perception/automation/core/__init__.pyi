# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation

Self = typing.TypeVar('Self')

class CorePerceptionAutomation(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> CorePerceptionAutomation: ...
    @staticmethod
    def set_activation_factory_provider(provider: typing.Optional[winsdk.windows.foundation.IGetActivationFactory]) -> None: ...

