# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.applicationmodel
import winsdk.windows.data.xml.dom
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.system

class AdaptiveNotificationContentKind(enum.IntEnum):
    TEXT = 0

class BadgeTemplateType(enum.IntEnum):
    BADGE_GLYPH = 0
    BADGE_NUMBER = 1

class NotificationKinds(enum.IntFlag):
    UNKNOWN = 0
    TOAST = 0x1

class NotificationMirroring(enum.IntEnum):
    ALLOWED = 0
    DISABLED = 1

class NotificationSetting(enum.IntEnum):
    ENABLED = 0
    DISABLED_FOR_APPLICATION = 1
    DISABLED_FOR_USER = 2
    DISABLED_BY_GROUP_POLICY = 3
    DISABLED_BY_MANIFEST = 4

class NotificationUpdateResult(enum.IntEnum):
    SUCCEEDED = 0
    FAILED = 1
    NOTIFICATION_NOT_FOUND = 2

class PeriodicUpdateRecurrence(enum.IntEnum):
    HALF_HOUR = 0
    HOUR = 1
    SIX_HOURS = 2
    TWELVE_HOURS = 3
    DAILY = 4

class TileFlyoutTemplateType(enum.IntEnum):
    TILE_FLYOUT_TEMPLATE01 = 0

class TileTemplateType(enum.IntEnum):
    TILE_SQUARE_IMAGE = 0
    TILE_SQUARE_BLOCK = 1
    TILE_SQUARE_TEXT01 = 2
    TILE_SQUARE_TEXT02 = 3
    TILE_SQUARE_TEXT03 = 4
    TILE_SQUARE_TEXT04 = 5
    TILE_SQUARE_PEEK_IMAGE_AND_TEXT01 = 6
    TILE_SQUARE_PEEK_IMAGE_AND_TEXT02 = 7
    TILE_SQUARE_PEEK_IMAGE_AND_TEXT03 = 8
    TILE_SQUARE_PEEK_IMAGE_AND_TEXT04 = 9
    TILE_WIDE_IMAGE = 10
    TILE_WIDE_IMAGE_COLLECTION = 11
    TILE_WIDE_IMAGE_AND_TEXT01 = 12
    TILE_WIDE_IMAGE_AND_TEXT02 = 13
    TILE_WIDE_BLOCK_AND_TEXT01 = 14
    TILE_WIDE_BLOCK_AND_TEXT02 = 15
    TILE_WIDE_PEEK_IMAGE_COLLECTION01 = 16
    TILE_WIDE_PEEK_IMAGE_COLLECTION02 = 17
    TILE_WIDE_PEEK_IMAGE_COLLECTION03 = 18
    TILE_WIDE_PEEK_IMAGE_COLLECTION04 = 19
    TILE_WIDE_PEEK_IMAGE_COLLECTION05 = 20
    TILE_WIDE_PEEK_IMAGE_COLLECTION06 = 21
    TILE_WIDE_PEEK_IMAGE_AND_TEXT01 = 22
    TILE_WIDE_PEEK_IMAGE_AND_TEXT02 = 23
    TILE_WIDE_PEEK_IMAGE01 = 24
    TILE_WIDE_PEEK_IMAGE02 = 25
    TILE_WIDE_PEEK_IMAGE03 = 26
    TILE_WIDE_PEEK_IMAGE04 = 27
    TILE_WIDE_PEEK_IMAGE05 = 28
    TILE_WIDE_PEEK_IMAGE06 = 29
    TILE_WIDE_SMALL_IMAGE_AND_TEXT01 = 30
    TILE_WIDE_SMALL_IMAGE_AND_TEXT02 = 31
    TILE_WIDE_SMALL_IMAGE_AND_TEXT03 = 32
    TILE_WIDE_SMALL_IMAGE_AND_TEXT04 = 33
    TILE_WIDE_SMALL_IMAGE_AND_TEXT05 = 34
    TILE_WIDE_TEXT01 = 35
    TILE_WIDE_TEXT02 = 36
    TILE_WIDE_TEXT03 = 37
    TILE_WIDE_TEXT04 = 38
    TILE_WIDE_TEXT05 = 39
    TILE_WIDE_TEXT06 = 40
    TILE_WIDE_TEXT07 = 41
    TILE_WIDE_TEXT08 = 42
    TILE_WIDE_TEXT09 = 43
    TILE_WIDE_TEXT10 = 44
    TILE_WIDE_TEXT11 = 45
    TILE_SQUARE150X150_IMAGE = 0
    TILE_SQUARE150X150_BLOCK = 1
    TILE_SQUARE150X150_TEXT01 = 2
    TILE_SQUARE150X150_TEXT02 = 3
    TILE_SQUARE150X150_TEXT03 = 4
    TILE_SQUARE150X150_TEXT04 = 5
    TILE_SQUARE150X150_PEEK_IMAGE_AND_TEXT01 = 6
    TILE_SQUARE150X150_PEEK_IMAGE_AND_TEXT02 = 7
    TILE_SQUARE150X150_PEEK_IMAGE_AND_TEXT03 = 8
    TILE_SQUARE150X150_PEEK_IMAGE_AND_TEXT04 = 9
    TILE_WIDE310X150_IMAGE = 10
    TILE_WIDE310X150_IMAGE_COLLECTION = 11
    TILE_WIDE310X150_IMAGE_AND_TEXT01 = 12
    TILE_WIDE310X150_IMAGE_AND_TEXT02 = 13
    TILE_WIDE310X150_BLOCK_AND_TEXT01 = 14
    TILE_WIDE310X150_BLOCK_AND_TEXT02 = 15
    TILE_WIDE310X150_PEEK_IMAGE_COLLECTION01 = 16
    TILE_WIDE310X150_PEEK_IMAGE_COLLECTION02 = 17
    TILE_WIDE310X150_PEEK_IMAGE_COLLECTION03 = 18
    TILE_WIDE310X150_PEEK_IMAGE_COLLECTION04 = 19
    TILE_WIDE310X150_PEEK_IMAGE_COLLECTION05 = 20
    TILE_WIDE310X150_PEEK_IMAGE_COLLECTION06 = 21
    TILE_WIDE310X150_PEEK_IMAGE_AND_TEXT01 = 22
    TILE_WIDE310X150_PEEK_IMAGE_AND_TEXT02 = 23
    TILE_WIDE310X150_PEEK_IMAGE01 = 24
    TILE_WIDE310X150_PEEK_IMAGE02 = 25
    TILE_WIDE310X150_PEEK_IMAGE03 = 26
    TILE_WIDE310X150_PEEK_IMAGE04 = 27
    TILE_WIDE310X150_PEEK_IMAGE05 = 28
    TILE_WIDE310X150_PEEK_IMAGE06 = 29
    TILE_WIDE310X150_SMALL_IMAGE_AND_TEXT01 = 30
    TILE_WIDE310X150_SMALL_IMAGE_AND_TEXT02 = 31
    TILE_WIDE310X150_SMALL_IMAGE_AND_TEXT03 = 32
    TILE_WIDE310X150_SMALL_IMAGE_AND_TEXT04 = 33
    TILE_WIDE310X150_SMALL_IMAGE_AND_TEXT05 = 34
    TILE_WIDE310X150_TEXT01 = 35
    TILE_WIDE310X150_TEXT02 = 36
    TILE_WIDE310X150_TEXT03 = 37
    TILE_WIDE310X150_TEXT04 = 38
    TILE_WIDE310X150_TEXT05 = 39
    TILE_WIDE310X150_TEXT06 = 40
    TILE_WIDE310X150_TEXT07 = 41
    TILE_WIDE310X150_TEXT08 = 42
    TILE_WIDE310X150_TEXT09 = 43
    TILE_WIDE310X150_TEXT10 = 44
    TILE_WIDE310X150_TEXT11 = 45
    TILE_SQUARE310X310_BLOCK_AND_TEXT01 = 46
    TILE_SQUARE310X310_BLOCK_AND_TEXT02 = 47
    TILE_SQUARE310X310_IMAGE = 48
    TILE_SQUARE310X310_IMAGE_AND_TEXT01 = 49
    TILE_SQUARE310X310_IMAGE_AND_TEXT02 = 50
    TILE_SQUARE310X310_IMAGE_AND_TEXT_OVERLAY01 = 51
    TILE_SQUARE310X310_IMAGE_AND_TEXT_OVERLAY02 = 52
    TILE_SQUARE310X310_IMAGE_AND_TEXT_OVERLAY03 = 53
    TILE_SQUARE310X310_IMAGE_COLLECTION_AND_TEXT01 = 54
    TILE_SQUARE310X310_IMAGE_COLLECTION_AND_TEXT02 = 55
    TILE_SQUARE310X310_IMAGE_COLLECTION = 56
    TILE_SQUARE310X310_SMALL_IMAGES_AND_TEXT_LIST01 = 57
    TILE_SQUARE310X310_SMALL_IMAGES_AND_TEXT_LIST02 = 58
    TILE_SQUARE310X310_SMALL_IMAGES_AND_TEXT_LIST03 = 59
    TILE_SQUARE310X310_SMALL_IMAGES_AND_TEXT_LIST04 = 60
    TILE_SQUARE310X310_TEXT01 = 61
    TILE_SQUARE310X310_TEXT02 = 62
    TILE_SQUARE310X310_TEXT03 = 63
    TILE_SQUARE310X310_TEXT04 = 64
    TILE_SQUARE310X310_TEXT05 = 65
    TILE_SQUARE310X310_TEXT06 = 66
    TILE_SQUARE310X310_TEXT07 = 67
    TILE_SQUARE310X310_TEXT08 = 68
    TILE_SQUARE310X310_TEXT_LIST01 = 69
    TILE_SQUARE310X310_TEXT_LIST02 = 70
    TILE_SQUARE310X310_TEXT_LIST03 = 71
    TILE_SQUARE310X310_SMALL_IMAGE_AND_TEXT01 = 72
    TILE_SQUARE310X310_SMALL_IMAGES_AND_TEXT_LIST05 = 73
    TILE_SQUARE310X310_TEXT09 = 74
    TILE_SQUARE71X71_ICON_WITH_BADGE = 75
    TILE_SQUARE150X150_ICON_WITH_BADGE = 76
    TILE_WIDE310X150_ICON_WITH_BADGE_AND_TEXT = 77
    TILE_SQUARE71X71_IMAGE = 78
    TILE_TALL150X310_IMAGE = 79

class ToastDismissalReason(enum.IntEnum):
    USER_CANCELED = 0
    APPLICATION_HIDDEN = 1
    TIMED_OUT = 2

class ToastHistoryChangedType(enum.IntEnum):
    CLEARED = 0
    REMOVED = 1
    EXPIRED = 2
    ADDED = 3

class ToastNotificationMode(enum.IntEnum):
    UNRESTRICTED = 0
    PRIORITY_ONLY = 1
    ALARMS_ONLY = 2

class ToastNotificationPriority(enum.IntEnum):
    DEFAULT = 0
    HIGH = 1

class ToastTemplateType(enum.IntEnum):
    TOAST_IMAGE_AND_TEXT01 = 0
    TOAST_IMAGE_AND_TEXT02 = 1
    TOAST_IMAGE_AND_TEXT03 = 2
    TOAST_IMAGE_AND_TEXT04 = 3
    TOAST_TEXT01 = 4
    TOAST_TEXT02 = 5
    TOAST_TEXT03 = 6
    TOAST_TEXT04 = 7

class UserNotificationChangedKind(enum.IntEnum):
    ADDED = 0
    REMOVED = 1

Self = typing.TypeVar('Self')

class AdaptiveNotificationText(_winrt.Object):
    hints: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    kind: AdaptiveNotificationContentKind
    text: str
    language: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveNotificationText: ...
    def __new__(cls: typing.Type[AdaptiveNotificationText]) -> AdaptiveNotificationText:...

class BadgeNotification(_winrt.Object):
    expiration_time: typing.Optional[typing.Optional[datetime.datetime]]
    content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]
    @staticmethod
    def _from(obj: _winrt.Object) -> BadgeNotification: ...
    def __new__(cls: typing.Type[BadgeNotification], content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]) -> BadgeNotification:...

class BadgeUpdateManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> BadgeUpdateManager: ...
    @typing.overload
    @staticmethod
    def create_badge_updater_for_application() -> typing.Optional[BadgeUpdater]: ...
    @typing.overload
    @staticmethod
    def create_badge_updater_for_application(application_id: str) -> typing.Optional[BadgeUpdater]: ...
    @staticmethod
    def create_badge_updater_for_secondary_tile(tile_id: str) -> typing.Optional[BadgeUpdater]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[BadgeUpdateManagerForUser]: ...
    @staticmethod
    def get_template_content(type: BadgeTemplateType) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...

class BadgeUpdateManagerForUser(_winrt.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> BadgeUpdateManagerForUser: ...
    @typing.overload
    def create_badge_updater_for_application(self) -> typing.Optional[BadgeUpdater]: ...
    @typing.overload
    def create_badge_updater_for_application(self, application_id: str) -> typing.Optional[BadgeUpdater]: ...
    def create_badge_updater_for_secondary_tile(self, tile_id: str) -> typing.Optional[BadgeUpdater]: ...

class BadgeUpdater(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> BadgeUpdater: ...
    def clear(self) -> None: ...
    @typing.overload
    def start_periodic_update(self, badge_content: typing.Optional[winsdk.windows.foundation.Uri], requested_interval: PeriodicUpdateRecurrence) -> None: ...
    @typing.overload
    def start_periodic_update(self, badge_content: typing.Optional[winsdk.windows.foundation.Uri], start_time: datetime.datetime, requested_interval: PeriodicUpdateRecurrence) -> None: ...
    def stop_periodic_update(self) -> None: ...
    def update(self, notification: typing.Optional[BadgeNotification]) -> None: ...

class KnownAdaptiveNotificationHints(_winrt.Object):
    align: str
    max_lines: str
    min_lines: str
    style: str
    text_stacking: str
    wrap: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KnownAdaptiveNotificationHints: ...

class KnownAdaptiveNotificationTextStyles(_winrt.Object):
    base: str
    base_subtle: str
    body: str
    body_subtle: str
    caption: str
    caption_subtle: str
    header: str
    header_numeral: str
    header_numeral_subtle: str
    header_subtle: str
    subheader: str
    subheader_numeral: str
    subheader_numeral_subtle: str
    subheader_subtle: str
    subtitle: str
    subtitle_subtle: str
    title: str
    title_numeral: str
    title_subtle: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KnownAdaptiveNotificationTextStyles: ...

class KnownNotificationBindings(_winrt.Object):
    toast_generic: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KnownNotificationBindings: ...

class Notification(_winrt.Object):
    visual: typing.Optional[NotificationVisual]
    expiration_time: typing.Optional[typing.Optional[datetime.datetime]]
    @staticmethod
    def _from(obj: _winrt.Object) -> Notification: ...
    def __new__(cls: typing.Type[Notification]) -> Notification:...

class NotificationBinding(_winrt.Object):
    template: str
    language: str
    hints: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> NotificationBinding: ...
    def get_text_elements(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AdaptiveNotificationText]]: ...

class NotificationData(_winrt.Object):
    sequence_number: _winrt.UInt32
    values: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> NotificationData: ...
    @typing.overload
    def __new__(cls: typing.Type[NotificationData], initial_values: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, str]], sequence_number: _winrt.UInt32) -> NotificationData:...
    @typing.overload
    def __new__(cls: typing.Type[NotificationData], initial_values: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, str]]) -> NotificationData:...
    @typing.overload
    def __new__(cls: typing.Type[NotificationData]) -> NotificationData:...

class NotificationVisual(_winrt.Object):
    language: str
    bindings: typing.Optional[winsdk.windows.foundation.collections.IVector[NotificationBinding]]
    @staticmethod
    def _from(obj: _winrt.Object) -> NotificationVisual: ...
    def get_binding(self, template_name: str) -> typing.Optional[NotificationBinding]: ...

class ScheduledTileNotification(_winrt.Object):
    tag: str
    id: str
    expiration_time: typing.Optional[typing.Optional[datetime.datetime]]
    content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]
    delivery_time: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> ScheduledTileNotification: ...
    def __new__(cls: typing.Type[ScheduledTileNotification], content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument], delivery_time: datetime.datetime) -> ScheduledTileNotification:...

class ScheduledToastNotification(_winrt.Object):
    id: str
    content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]
    delivery_time: datetime.datetime
    maximum_snooze_count: _winrt.UInt32
    snooze_interval: typing.Optional[typing.Optional[datetime.timedelta]]
    tag: str
    suppress_popup: _winrt.Boolean
    group: str
    remote_id: str
    notification_mirroring: NotificationMirroring
    expiration_time: typing.Optional[typing.Optional[datetime.datetime]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ScheduledToastNotification: ...
    @typing.overload
    def __new__(cls: typing.Type[ScheduledToastNotification], content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument], delivery_time: datetime.datetime) -> ScheduledToastNotification:...
    @typing.overload
    def __new__(cls: typing.Type[ScheduledToastNotification], content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument], delivery_time: datetime.datetime, snooze_interval: datetime.timedelta, maximum_snooze_count: _winrt.UInt32) -> ScheduledToastNotification:...

class ScheduledToastNotificationShowingEventArgs(_winrt.Object):
    cancel: _winrt.Boolean
    scheduled_toast_notification: typing.Optional[ScheduledToastNotification]
    @staticmethod
    def _from(obj: _winrt.Object) -> ScheduledToastNotificationShowingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class ShownTileNotification(_winrt.Object):
    arguments: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ShownTileNotification: ...

class TileFlyoutNotification(_winrt.Object):
    expiration_time: typing.Optional[typing.Optional[datetime.datetime]]
    content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]
    @staticmethod
    def _from(obj: _winrt.Object) -> TileFlyoutNotification: ...
    def __new__(cls: typing.Type[TileFlyoutNotification], content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]) -> TileFlyoutNotification:...

class TileFlyoutUpdateManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> TileFlyoutUpdateManager: ...
    @typing.overload
    @staticmethod
    def create_tile_flyout_updater_for_application() -> typing.Optional[TileFlyoutUpdater]: ...
    @typing.overload
    @staticmethod
    def create_tile_flyout_updater_for_application(application_id: str) -> typing.Optional[TileFlyoutUpdater]: ...
    @staticmethod
    def create_tile_flyout_updater_for_secondary_tile(tile_id: str) -> typing.Optional[TileFlyoutUpdater]: ...
    @staticmethod
    def get_template_content(type: TileFlyoutTemplateType) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...

class TileFlyoutUpdater(_winrt.Object):
    setting: NotificationSetting
    @staticmethod
    def _from(obj: _winrt.Object) -> TileFlyoutUpdater: ...
    def clear(self) -> None: ...
    @typing.overload
    def start_periodic_update(self, tile_flyout_content: typing.Optional[winsdk.windows.foundation.Uri], requested_interval: PeriodicUpdateRecurrence) -> None: ...
    @typing.overload
    def start_periodic_update(self, tile_flyout_content: typing.Optional[winsdk.windows.foundation.Uri], start_time: datetime.datetime, requested_interval: PeriodicUpdateRecurrence) -> None: ...
    def stop_periodic_update(self) -> None: ...
    def update(self, notification: typing.Optional[TileFlyoutNotification]) -> None: ...

class TileNotification(_winrt.Object):
    tag: str
    expiration_time: typing.Optional[typing.Optional[datetime.datetime]]
    content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]
    @staticmethod
    def _from(obj: _winrt.Object) -> TileNotification: ...
    def __new__(cls: typing.Type[TileNotification], content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]) -> TileNotification:...

class TileUpdateManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> TileUpdateManager: ...
    @typing.overload
    @staticmethod
    def create_tile_updater_for_application() -> typing.Optional[TileUpdater]: ...
    @typing.overload
    @staticmethod
    def create_tile_updater_for_application(application_id: str) -> typing.Optional[TileUpdater]: ...
    @staticmethod
    def create_tile_updater_for_secondary_tile(tile_id: str) -> typing.Optional[TileUpdater]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[TileUpdateManagerForUser]: ...
    @staticmethod
    def get_template_content(type: TileTemplateType) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...

class TileUpdateManagerForUser(_winrt.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> TileUpdateManagerForUser: ...
    def create_tile_updater_for_application(self, application_id: str) -> typing.Optional[TileUpdater]: ...
    def create_tile_updater_for_application_for_user(self) -> typing.Optional[TileUpdater]: ...
    def create_tile_updater_for_secondary_tile(self, tile_id: str) -> typing.Optional[TileUpdater]: ...

class TileUpdater(_winrt.Object):
    setting: NotificationSetting
    @staticmethod
    def _from(obj: _winrt.Object) -> TileUpdater: ...
    def add_to_schedule(self, scheduled_tile: typing.Optional[ScheduledTileNotification]) -> None: ...
    def clear(self) -> None: ...
    def enable_notification_queue(self, enable: _winrt.Boolean) -> None: ...
    def enable_notification_queue_for_square150x150(self, enable: _winrt.Boolean) -> None: ...
    def enable_notification_queue_for_square310x310(self, enable: _winrt.Boolean) -> None: ...
    def enable_notification_queue_for_wide310x150(self, enable: _winrt.Boolean) -> None: ...
    def get_scheduled_tile_notifications(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ScheduledTileNotification]]: ...
    def remove_from_schedule(self, scheduled_tile: typing.Optional[ScheduledTileNotification]) -> None: ...
    @typing.overload
    def start_periodic_update(self, tile_content: typing.Optional[winsdk.windows.foundation.Uri], requested_interval: PeriodicUpdateRecurrence) -> None: ...
    @typing.overload
    def start_periodic_update(self, tile_content: typing.Optional[winsdk.windows.foundation.Uri], start_time: datetime.datetime, requested_interval: PeriodicUpdateRecurrence) -> None: ...
    @typing.overload
    def start_periodic_update_batch(self, tile_contents: typing.Iterable[winsdk.windows.foundation.Uri], requested_interval: PeriodicUpdateRecurrence) -> None: ...
    @typing.overload
    def start_periodic_update_batch(self, tile_contents: typing.Iterable[winsdk.windows.foundation.Uri], start_time: datetime.datetime, requested_interval: PeriodicUpdateRecurrence) -> None: ...
    def stop_periodic_update(self) -> None: ...
    def update(self, notification: typing.Optional[TileNotification]) -> None: ...

class ToastActivatedEventArgs(_winrt.Object):
    arguments: str
    user_input: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastActivatedEventArgs: ...

class ToastCollection(_winrt.Object):
    launch_args: str
    icon: typing.Optional[winsdk.windows.foundation.Uri]
    display_name: str
    id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastCollection: ...
    def __new__(cls: typing.Type[ToastCollection], collection_id: str, display_name: str, launch_args: str, icon_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> ToastCollection:...

class ToastCollectionManager(_winrt.Object):
    app_id: str
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastCollectionManager: ...
    def find_all_toast_collections_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ToastCollection]]: ...
    def get_toast_collection_async(self, collection_id: str) -> winsdk.windows.foundation.IAsyncOperation[ToastCollection]: ...
    def remove_all_toast_collections_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def remove_toast_collection_async(self, collection_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def save_toast_collection_async(self, collection: typing.Optional[ToastCollection]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ToastDismissedEventArgs(_winrt.Object):
    reason: ToastDismissalReason
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastDismissedEventArgs: ...

class ToastFailedEventArgs(_winrt.Object):
    error_code: winsdk.windows.foundation.HResult
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastFailedEventArgs: ...

class ToastNotification(_winrt.Object):
    expiration_time: typing.Optional[typing.Optional[datetime.datetime]]
    content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]
    tag: str
    suppress_popup: _winrt.Boolean
    group: str
    remote_id: str
    notification_mirroring: NotificationMirroring
    priority: ToastNotificationPriority
    data: typing.Optional[NotificationData]
    expires_on_reboot: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastNotification: ...
    def __new__(cls: typing.Type[ToastNotification], content: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]) -> ToastNotification:...
    def add_activated(self, handler: winsdk.windows.foundation.TypedEventHandler[ToastNotification, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_activated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_dismissed(self, handler: winsdk.windows.foundation.TypedEventHandler[ToastNotification, ToastDismissedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_dismissed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_failed(self, handler: winsdk.windows.foundation.TypedEventHandler[ToastNotification, ToastFailedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_failed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ToastNotificationActionTriggerDetail(_winrt.Object):
    argument: str
    user_input: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastNotificationActionTriggerDetail: ...

class ToastNotificationHistory(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastNotificationHistory: ...
    @typing.overload
    def clear(self) -> None: ...
    @typing.overload
    def clear(self, application_id: str) -> None: ...
    @typing.overload
    def get_history(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ToastNotification]]: ...
    @typing.overload
    def get_history(self, application_id: str) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ToastNotification]]: ...
    @typing.overload
    def remove(self, tag: str) -> None: ...
    @typing.overload
    def remove(self, tag: str, group: str) -> None: ...
    @typing.overload
    def remove(self, tag: str, group: str, application_id: str) -> None: ...
    @typing.overload
    def remove_group(self, group: str) -> None: ...
    @typing.overload
    def remove_group(self, group: str, application_id: str) -> None: ...

class ToastNotificationHistoryChangedTriggerDetail(_winrt.Object):
    change_type: ToastHistoryChangedType
    collection_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastNotificationHistoryChangedTriggerDetail: ...

class ToastNotificationManager(_winrt.Object):
    history: typing.Optional[ToastNotificationHistory]
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastNotificationManager: ...
    @staticmethod
    def configure_notification_mirroring(value: NotificationMirroring) -> None: ...
    @typing.overload
    @staticmethod
    def create_toast_notifier() -> typing.Optional[ToastNotifier]: ...
    @typing.overload
    @staticmethod
    def create_toast_notifier(application_id: str) -> typing.Optional[ToastNotifier]: ...
    @staticmethod
    def get_default() -> typing.Optional[ToastNotificationManagerForUser]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[ToastNotificationManagerForUser]: ...
    @staticmethod
    def get_template_content(type: ToastTemplateType) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...

class ToastNotificationManagerForUser(_winrt.Object):
    history: typing.Optional[ToastNotificationHistory]
    user: typing.Optional[winsdk.windows.system.User]
    notification_mode: ToastNotificationMode
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastNotificationManagerForUser: ...
    @typing.overload
    def create_toast_notifier(self) -> typing.Optional[ToastNotifier]: ...
    @typing.overload
    def create_toast_notifier(self, application_id: str) -> typing.Optional[ToastNotifier]: ...
    def get_history_for_toast_collection_id_async(self, collection_id: str) -> winsdk.windows.foundation.IAsyncOperation[ToastNotificationHistory]: ...
    @typing.overload
    def get_toast_collection_manager(self) -> typing.Optional[ToastCollectionManager]: ...
    @typing.overload
    def get_toast_collection_manager(self, app_id: str) -> typing.Optional[ToastCollectionManager]: ...
    def get_toast_notifier_for_toast_collection_id_async(self, collection_id: str) -> winsdk.windows.foundation.IAsyncOperation[ToastNotifier]: ...
    def add_notification_mode_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ToastNotificationManagerForUser, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_notification_mode_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ToastNotifier(_winrt.Object):
    setting: NotificationSetting
    @staticmethod
    def _from(obj: _winrt.Object) -> ToastNotifier: ...
    def add_to_schedule(self, scheduled_toast: typing.Optional[ScheduledToastNotification]) -> None: ...
    def get_scheduled_toast_notifications(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ScheduledToastNotification]]: ...
    def hide(self, notification: typing.Optional[ToastNotification]) -> None: ...
    def remove_from_schedule(self, scheduled_toast: typing.Optional[ScheduledToastNotification]) -> None: ...
    def show(self, notification: typing.Optional[ToastNotification]) -> None: ...
    @typing.overload
    def update(self, data: typing.Optional[NotificationData], tag: str) -> NotificationUpdateResult: ...
    @typing.overload
    def update(self, data: typing.Optional[NotificationData], tag: str, group: str) -> NotificationUpdateResult: ...
    def add_scheduled_toast_notification_showing(self, handler: winsdk.windows.foundation.TypedEventHandler[ToastNotifier, ScheduledToastNotificationShowingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_scheduled_toast_notification_showing(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class UserNotification(_winrt.Object):
    app_info: typing.Optional[winsdk.windows.applicationmodel.AppInfo]
    creation_time: datetime.datetime
    id: _winrt.UInt32
    notification: typing.Optional[Notification]
    @staticmethod
    def _from(obj: _winrt.Object) -> UserNotification: ...

class UserNotificationChangedEventArgs(_winrt.Object):
    change_kind: UserNotificationChangedKind
    user_notification_id: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> UserNotificationChangedEventArgs: ...

class IAdaptiveNotificationContent(_winrt.Object):
    hints: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    kind: AdaptiveNotificationContentKind
    @staticmethod
    def _from(obj: _winrt.Object) -> IAdaptiveNotificationContent: ...

