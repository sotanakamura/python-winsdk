# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

Self = typing.TypeVar('Self')

class DeviceLockdownProfile(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> DeviceLockdownProfile: ...
    @staticmethod
    def apply_lockdown_profile_async(profile_i_d: _winrt.Guid) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def get_current_lockdown_profile() -> _winrt.Guid: ...
    @staticmethod
    def get_lockdown_profile_information(profile_i_d: _winrt.Guid) -> typing.Optional[DeviceLockdownProfileInformation]: ...
    @staticmethod
    def get_supported_lockdown_profiles() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[_winrt.Guid]]: ...

class DeviceLockdownProfileInformation(_winrt.Object):
    name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> DeviceLockdownProfileInformation: ...

