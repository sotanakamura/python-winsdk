# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation

Self = typing.TypeVar('Self')

class BackPressedEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackPressedEventArgs: ...

class CameraEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CameraEventArgs: ...

class HardwareButtons(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HardwareButtons: ...
    @staticmethod
    def add_back_pressed(handler: winsdk.windows.foundation.EventHandler[BackPressedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_back_pressed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_camera_half_pressed(handler: winsdk.windows.foundation.EventHandler[CameraEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_camera_half_pressed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_camera_pressed(handler: winsdk.windows.foundation.EventHandler[CameraEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_camera_pressed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_camera_released(handler: winsdk.windows.foundation.EventHandler[CameraEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_camera_released(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

