# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.storage

Self = typing.TypeVar('Self')

class PhoneCallOrigin(_winrt.Object):
    location: str
    category_description: str
    category: str
    display_name: str
    display_picture: typing.Optional[winsdk.windows.storage.StorageFile]
    @staticmethod
    def _from(obj: _winrt.Object) -> PhoneCallOrigin: ...
    def __new__(cls: typing.Type[PhoneCallOrigin]) -> PhoneCallOrigin:...

class PhoneCallOriginManager(_winrt.Object):
    is_current_app_active_call_origin_app: _winrt.Boolean
    is_supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PhoneCallOriginManager: ...
    @staticmethod
    def request_set_as_active_call_origin_app_async() -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def set_call_origin(request_id: _winrt.Guid, call_origin: typing.Optional[PhoneCallOrigin]) -> None: ...
    @staticmethod
    def show_phone_call_origin_settings_u_i() -> None: ...

