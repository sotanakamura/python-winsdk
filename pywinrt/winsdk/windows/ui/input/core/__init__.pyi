# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.core
import winsdk.windows.system
import winsdk.windows.ui.core
import winsdk.windows.ui.input

Self = typing.TypeVar('Self')

class RadialControllerIndependentInputSource(winsdk.system.Object):
    controller: typing.Optional[winsdk.windows.ui.input.RadialController]
    dispatcher: typing.Optional[winsdk.windows.ui.core.CoreDispatcher]
    dispatcher_queue: typing.Optional[winsdk.windows.system.DispatcherQueue]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerIndependentInputSource: ...
    @staticmethod
    def create_for_view(view: typing.Optional[winsdk.windows.applicationmodel.core.CoreApplicationView]) -> typing.Optional[RadialControllerIndependentInputSource]: ...

