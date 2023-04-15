# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.system

class AppCapabilityAccessStatus(enum.IntEnum):
    DENIED_BY_SYSTEM = 0
    NOT_DECLARED_BY_APP = 1
    DENIED_BY_USER = 2
    USER_PROMPT_REQUIRED = 3
    ALLOWED = 4

Self = typing.TypeVar('Self')

class AppCapability(winsdk.system.Object):
    capability_name: str
    user: typing.Optional[winsdk.windows.system.User]
    display_message: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppCapability: ...
    def check_access(self) -> AppCapabilityAccessStatus: ...
    @staticmethod
    def create(capability_name: str) -> typing.Optional[AppCapability]: ...
    @staticmethod
    def create_with_process_id_for_user(user: typing.Optional[winsdk.windows.system.User], capability_name: str, pid: winsdk.system.UInt32) -> typing.Optional[AppCapability]: ...
    def request_access_async(self) -> winsdk.windows.foundation.IAsyncOperation[AppCapabilityAccessStatus]: ...
    @staticmethod
    def request_access_for_capabilities_async(capability_names: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMapView[str, AppCapabilityAccessStatus]]: ...
    @staticmethod
    def request_access_for_capabilities_for_user_async(user: typing.Optional[winsdk.windows.system.User], capability_names: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMapView[str, AppCapabilityAccessStatus]]: ...
    def add_access_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AppCapability, AppCapabilityAccessChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_access_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AppCapabilityAccessChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppCapabilityAccessChangedEventArgs: ...

