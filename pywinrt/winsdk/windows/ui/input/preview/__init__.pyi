# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.ui.input
import winsdk.windows.ui.windowmanagement

Self = typing.TypeVar('Self')

class InputActivationListenerPreview(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InputActivationListenerPreview: ...
    @staticmethod
    def create_for_application_window(window: typing.Optional[winsdk.windows.ui.windowmanagement.AppWindow]) -> typing.Optional[winsdk.windows.ui.input.InputActivationListener]: ...

