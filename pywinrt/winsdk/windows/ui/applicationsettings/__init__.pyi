# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.credentials
import winsdk.windows.system
import winsdk.windows.ui.popups

class SettingsEdgeLocation(enum.IntEnum):
    RIGHT = 0
    LEFT = 1

class SupportedWebAccountActions(enum.IntFlag):
    NONE = 0
    RECONNECT = 0x1
    REMOVE = 0x2
    VIEW_DETAILS = 0x4
    MANAGE = 0x8
    MORE = 0x10

class WebAccountAction(enum.IntEnum):
    RECONNECT = 0
    REMOVE = 1
    VIEW_DETAILS = 2
    MANAGE = 3
    MORE = 4

Self = typing.TypeVar('Self')

class AccountsSettingsPane(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AccountsSettingsPane: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[AccountsSettingsPane]: ...
    @staticmethod
    def show() -> None: ...
    @staticmethod
    def show_add_account_async() -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def show_add_account_for_user_async(user: typing.Optional[winsdk.windows.system.User]) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def show_manage_accounts_async() -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def show_manage_accounts_for_user_async(user: typing.Optional[winsdk.windows.system.User]) -> winsdk.windows.foundation.IAsyncAction: ...
    def add_account_commands_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[AccountsSettingsPane, AccountsSettingsPaneCommandsRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_account_commands_requested(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AccountsSettingsPaneCommandsRequestedEventArgs(winsdk.system.Object):
    header_text: str
    commands: typing.Optional[winsdk.windows.foundation.collections.IVector[SettingsCommand]]
    credential_commands: typing.Optional[winsdk.windows.foundation.collections.IVector[CredentialCommand]]
    web_account_commands: typing.Optional[winsdk.windows.foundation.collections.IVector[WebAccountCommand]]
    web_account_provider_commands: typing.Optional[winsdk.windows.foundation.collections.IVector[WebAccountProviderCommand]]
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AccountsSettingsPaneCommandsRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[AccountsSettingsPaneEventDeferral]: ...

class AccountsSettingsPaneEventDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AccountsSettingsPaneEventDeferral: ...
    def complete(self) -> None: ...

class CredentialCommand(winsdk.system.Object):
    credential_deleted: typing.Optional[CredentialCommandCredentialDeletedHandler]
    password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CredentialCommand: ...
    @typing.overload
    def __new__(cls: typing.Type[CredentialCommand], password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]) -> CredentialCommand:...
    @typing.overload
    def __new__(cls: typing.Type[CredentialCommand], password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential], deleted: typing.Optional[CredentialCommandCredentialDeletedHandler]) -> CredentialCommand:...

class SettingsCommand(winsdk.system.Object):
    label: str
    invoked: typing.Optional[winsdk.windows.ui.popups.UICommandInvokedHandler]
    id: typing.Optional[winsdk.system.Object]
    accounts_command: typing.ClassVar[typing.Optional[SettingsCommand]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SettingsCommand: ...
    def __new__(cls: typing.Type[SettingsCommand], settings_command_id: typing.Optional[winsdk.system.Object], label: str, handler: typing.Optional[winsdk.windows.ui.popups.UICommandInvokedHandler]) -> SettingsCommand:...

class SettingsPane(winsdk.system.Object):
    edge: typing.ClassVar[SettingsEdgeLocation]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SettingsPane: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[SettingsPane]: ...
    @staticmethod
    def show() -> None: ...
    def add_commands_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[SettingsPane, SettingsPaneCommandsRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_commands_requested(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SettingsPaneCommandsRequest(winsdk.system.Object):
    application_commands: typing.Optional[winsdk.windows.foundation.collections.IVector[SettingsCommand]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SettingsPaneCommandsRequest: ...

class SettingsPaneCommandsRequestedEventArgs(winsdk.system.Object):
    request: typing.Optional[SettingsPaneCommandsRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SettingsPaneCommandsRequestedEventArgs: ...

class WebAccountCommand(winsdk.system.Object):
    actions: SupportedWebAccountActions
    invoked: typing.Optional[WebAccountCommandInvokedHandler]
    web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebAccountCommand: ...
    def __new__(cls: typing.Type[WebAccountCommand], web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount], invoked: typing.Optional[WebAccountCommandInvokedHandler], actions: SupportedWebAccountActions) -> WebAccountCommand:...

class WebAccountInvokedArgs(winsdk.system.Object):
    action: WebAccountAction
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebAccountInvokedArgs: ...

class WebAccountProviderCommand(winsdk.system.Object):
    invoked: typing.Optional[WebAccountProviderCommandInvokedHandler]
    web_account_provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebAccountProviderCommand: ...
    def __new__(cls: typing.Type[WebAccountProviderCommand], web_account_provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider], invoked: typing.Optional[WebAccountProviderCommandInvokedHandler]) -> WebAccountProviderCommand:...

CredentialCommandCredentialDeletedHandler = typing.Callable[[typing.Optional[CredentialCommand]], None]

WebAccountCommandInvokedHandler = typing.Callable[[typing.Optional[WebAccountCommand], typing.Optional[WebAccountInvokedArgs]], None]

WebAccountProviderCommandInvokedHandler = typing.Callable[[typing.Optional[WebAccountProviderCommand]], None]

