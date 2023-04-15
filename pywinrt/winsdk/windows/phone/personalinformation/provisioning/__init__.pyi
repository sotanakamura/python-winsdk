# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.phone.personalinformation
import winsdk.windows.storage.streams

Self = typing.TypeVar('Self')

class ContactPartnerProvisioningManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ContactPartnerProvisioningManager: ...
    @staticmethod
    def associate_network_account_async(store: typing.Optional[winsdk.windows.phone.personalinformation.ContactStore], network_name: str, network_account_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def associate_social_network_account_async(store: typing.Optional[winsdk.windows.phone.personalinformation.ContactStore], network_name: str, network_account_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def import_vcard_to_system_async(stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncAction: ...

class MessagePartnerProvisioningManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MessagePartnerProvisioningManager: ...
    @staticmethod
    def import_mms_to_system_async(incoming: winsdk.system.Boolean, read: winsdk.system.Boolean, subject: str, sender: str, recipients: winsdk.windows.foundation.collections.IVectorView[str], delivery_time: datetime.datetime, attachments: winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def import_sms_to_system_async(incoming: winsdk.system.Boolean, read: winsdk.system.Boolean, body: str, sender: str, recipients: winsdk.windows.foundation.collections.IVectorView[str], delivery_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncAction: ...

