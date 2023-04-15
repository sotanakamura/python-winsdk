# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.storage
import winsdk.windows.storage.streams
import winsdk.windows.system

class UserDataAvailability(enum.IntEnum):
    ALWAYS = 0
    AFTER_FIRST_UNLOCK = 1
    WHILE_UNLOCKED = 2

class UserDataBufferUnprotectStatus(enum.IntEnum):
    SUCCEEDED = 0
    UNAVAILABLE = 1

class UserDataStorageItemProtectionStatus(enum.IntEnum):
    SUCCEEDED = 0
    NOT_PROTECTABLE = 1
    DATA_UNAVAILABLE = 2

Self = typing.TypeVar('Self')

class UserDataAvailabilityStateChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataAvailabilityStateChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class UserDataBufferUnprotectResult(winsdk.system.Object):
    status: UserDataBufferUnprotectStatus
    unprotected_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataBufferUnprotectResult: ...

class UserDataProtectionManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataProtectionManager: ...
    def get_storage_item_protection_info_async(self, storage_item: typing.Optional[winsdk.windows.storage.IStorageItem]) -> winsdk.windows.foundation.IAsyncOperation[UserDataStorageItemProtectionInfo]: ...
    def is_continued_data_availability_expected(self, availability: UserDataAvailability) -> winsdk.system.Boolean: ...
    def protect_buffer_async(self, unprotected_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], availability: UserDataAvailability) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    def protect_storage_item_async(self, storage_item: typing.Optional[winsdk.windows.storage.IStorageItem], availability: UserDataAvailability) -> winsdk.windows.foundation.IAsyncOperation[UserDataStorageItemProtectionStatus]: ...
    @staticmethod
    def try_get_default() -> typing.Optional[UserDataProtectionManager]: ...
    @staticmethod
    def try_get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[UserDataProtectionManager]: ...
    def unprotect_buffer_async(self, protected_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[UserDataBufferUnprotectResult]: ...
    def add_data_availability_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UserDataProtectionManager, UserDataAvailabilityStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_data_availability_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class UserDataStorageItemProtectionInfo(winsdk.system.Object):
    availability: UserDataAvailability
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataStorageItemProtectionInfo: ...

