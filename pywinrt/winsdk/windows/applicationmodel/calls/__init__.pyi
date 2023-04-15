# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.contacts
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.system
import winsdk.windows.ui

class CellularDtmfMode(enum.IntEnum):
    CONTINUOUS = 0
    BURST = 1

class DtmfKey(enum.IntEnum):
    D0 = 0
    D1 = 1
    D2 = 2
    D3 = 3
    D4 = 4
    D5 = 5
    D6 = 6
    D7 = 7
    D8 = 8
    D9 = 9
    STAR = 10
    POUND = 11

class DtmfToneAudioPlayback(enum.IntEnum):
    PLAY = 0
    DO_NOT_PLAY = 1

class PhoneAudioRoutingEndpoint(enum.IntEnum):
    DEFAULT = 0
    BLUETOOTH = 1
    SPEAKERPHONE = 2

class PhoneCallAudioDevice(enum.IntEnum):
    UNKNOWN = 0
    LOCAL_DEVICE = 1
    REMOTE_DEVICE = 2

class PhoneCallDirection(enum.IntEnum):
    UNKNOWN = 0
    INCOMING = 1
    OUTGOING = 2

class PhoneCallHistoryEntryMedia(enum.IntEnum):
    AUDIO = 0
    VIDEO = 1

class PhoneCallHistoryEntryOtherAppReadAccess(enum.IntEnum):
    FULL = 0
    SYSTEM_ONLY = 1

class PhoneCallHistoryEntryQueryDesiredMedia(enum.IntFlag):
    NONE = 0
    AUDIO = 0x1
    VIDEO = 0x2
    ALL = 0xffffffff

class PhoneCallHistoryEntryRawAddressKind(enum.IntEnum):
    PHONE_NUMBER = 0
    CUSTOM = 1

class PhoneCallHistorySourceIdKind(enum.IntEnum):
    CELLULAR_PHONE_LINE_ID = 0
    PACKAGE_FAMILY_NAME = 1

class PhoneCallHistoryStoreAccessType(enum.IntEnum):
    APP_ENTRIES_READ_WRITE = 0
    ALL_ENTRIES_LIMITED_READ_WRITE = 1
    ALL_ENTRIES_READ_WRITE = 2

class PhoneCallMedia(enum.IntEnum):
    AUDIO = 0
    AUDIO_AND_VIDEO = 1
    AUDIO_AND_REAL_TIME_TEXT = 2

class PhoneCallOperationStatus(enum.IntEnum):
    SUCCEEDED = 0
    OTHER_FAILURE = 1
    TIMED_OUT = 2
    CONNECTION_LOST = 3
    INVALID_CALL_STATE = 4

class PhoneCallStatus(enum.IntEnum):
    LOST = 0
    INCOMING = 1
    DIALING = 2
    TALKING = 3
    HELD = 4
    ENDED = 5

class PhoneLineNetworkOperatorDisplayTextLocation(enum.IntEnum):
    DEFAULT = 0
    TILE = 1
    DIALER = 2
    IN_CALL_U_I = 3

class PhoneLineOperationStatus(enum.IntEnum):
    SUCCEEDED = 0
    OTHER_FAILURE = 1
    TIMED_OUT = 2
    CONNECTION_LOST = 3
    INVALID_CALL_STATE = 4

class PhoneLineTransport(enum.IntEnum):
    CELLULAR = 0
    VOIP_APP = 1
    BLUETOOTH = 2

class PhoneLineWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    ENUMERATION_COMPLETED = 2
    STOPPED = 3

class PhoneNetworkState(enum.IntEnum):
    UNKNOWN = 0
    NO_SIGNAL = 1
    DEREGISTERED = 2
    DENIED = 3
    SEARCHING = 4
    HOME = 5
    ROAMING_INTERNATIONAL = 6
    ROAMING_DOMESTIC = 7

class PhoneSimState(enum.IntEnum):
    UNKNOWN = 0
    PIN_NOT_REQUIRED = 1
    PIN_UNLOCKED = 2
    PIN_LOCKED = 3
    PUK_LOCKED = 4
    NOT_INSERTED = 5
    INVALID = 6
    DISABLED = 7

class PhoneVoicemailType(enum.IntEnum):
    NONE = 0
    TRADITIONAL = 1
    VISUAL = 2

class TransportDeviceAudioRoutingStatus(enum.IntEnum):
    UNKNOWN = 0
    CAN_ROUTE_TO_LOCAL_DEVICE = 1
    CANNOT_ROUTE_TO_LOCAL_DEVICE = 2

class VoipPhoneCallMedia(enum.IntFlag):
    NONE = 0
    AUDIO = 0x1
    VIDEO = 0x2

class VoipPhoneCallRejectReason(enum.IntEnum):
    USER_IGNORED = 0
    TIMED_OUT = 1
    OTHER_INCOMING_CALL = 2
    EMERGENCY_CALL_EXISTS = 3
    INVALID_CALL_STATE = 4

class VoipPhoneCallResourceReservationStatus(enum.IntEnum):
    SUCCESS = 0
    RESOURCES_NOT_AVAILABLE = 1

class VoipPhoneCallState(enum.IntEnum):
    ENDED = 0
    HELD = 1
    ACTIVE = 2
    INCOMING = 3
    OUTGOING = 4

Self = typing.TypeVar('Self')

class CallAnswerEventArgs(winsdk.system.Object):
    accepted_media: VoipPhoneCallMedia
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CallAnswerEventArgs: ...

class CallRejectEventArgs(winsdk.system.Object):
    reject_reason: VoipPhoneCallRejectReason
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CallRejectEventArgs: ...

class CallStateChangeEventArgs(winsdk.system.Object):
    state: VoipPhoneCallState
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CallStateChangeEventArgs: ...

class LockScreenCallEndCallDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockScreenCallEndCallDeferral: ...
    def complete(self) -> None: ...

class LockScreenCallEndRequestedEventArgs(winsdk.system.Object):
    deadline: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockScreenCallEndRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[LockScreenCallEndCallDeferral]: ...

class LockScreenCallUI(winsdk.system.Object):
    call_title: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockScreenCallUI: ...
    def dismiss(self) -> None: ...
    def add_closed(self, handler: winsdk.windows.foundation.TypedEventHandler[LockScreenCallUI, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_closed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_end_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[LockScreenCallUI, LockScreenCallEndRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_end_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MuteChangeEventArgs(winsdk.system.Object):
    muted: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MuteChangeEventArgs: ...

class PhoneCall(winsdk.system.Object):
    audio_device: PhoneCallAudioDevice
    call_id: str
    is_muted: winsdk.system.Boolean
    status: PhoneCallStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCall: ...
    def accept_incoming(self) -> PhoneCallOperationStatus: ...
    def accept_incoming_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def change_audio_device(self, endpoint: PhoneCallAudioDevice) -> PhoneCallOperationStatus: ...
    def change_audio_device_async(self, endpoint: PhoneCallAudioDevice) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def end(self) -> PhoneCallOperationStatus: ...
    def end_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    @staticmethod
    def get_from_id(call_id: str) -> typing.Optional[PhoneCall]: ...
    def get_phone_call_info(self) -> typing.Optional[PhoneCallInfo]: ...
    def get_phone_call_info_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallInfo]: ...
    def hold(self) -> PhoneCallOperationStatus: ...
    def hold_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def mute(self) -> PhoneCallOperationStatus: ...
    def mute_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def reject_incoming(self) -> PhoneCallOperationStatus: ...
    def reject_incoming_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def resume_from_hold(self) -> PhoneCallOperationStatus: ...
    def resume_from_hold_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def send_dtmf_key(self, key: DtmfKey, dtmf_tone_audio_playback: DtmfToneAudioPlayback) -> PhoneCallOperationStatus: ...
    def send_dtmf_key_async(self, key: DtmfKey, dtmf_tone_audio_playback: DtmfToneAudioPlayback) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def unmute(self) -> PhoneCallOperationStatus: ...
    def unmute_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallOperationStatus]: ...
    def add_audio_device_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneCall, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_audio_device_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_is_muted_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneCall, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_muted_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneCall, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PhoneCallBlocking(winsdk.system.Object):
    block_unknown_numbers: typing.ClassVar[winsdk.system.Boolean]
    block_private_numbers: typing.ClassVar[winsdk.system.Boolean]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallBlocking: ...
    @staticmethod
    def set_call_blocking_list_async(phone_number_list: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class PhoneCallHistoryEntry(winsdk.system.Object):
    media: PhoneCallHistoryEntryMedia
    is_missed: winsdk.system.Boolean
    is_incoming: winsdk.system.Boolean
    is_caller_id_blocked: winsdk.system.Boolean
    is_seen: winsdk.system.Boolean
    duration: typing.Optional[typing.Optional[datetime.timedelta]]
    is_emergency: winsdk.system.Boolean
    is_suppressed: winsdk.system.Boolean
    start_time: datetime.datetime
    source_id_kind: PhoneCallHistorySourceIdKind
    address: typing.Optional[PhoneCallHistoryEntryAddress]
    source_id: str
    remote_id: str
    other_app_read_access: PhoneCallHistoryEntryOtherAppReadAccess
    is_ringing: winsdk.system.Boolean
    is_voicemail: winsdk.system.Boolean
    id: str
    source_display_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallHistoryEntry: ...
    def __new__(cls: typing.Type[PhoneCallHistoryEntry]) -> PhoneCallHistoryEntry:...

class PhoneCallHistoryEntryAddress(winsdk.system.Object):
    raw_address_kind: PhoneCallHistoryEntryRawAddressKind
    raw_address: str
    display_name: str
    contact_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallHistoryEntryAddress: ...
    @typing.overload
    def __new__(cls: typing.Type[PhoneCallHistoryEntryAddress], raw_address: str, raw_address_kind: PhoneCallHistoryEntryRawAddressKind) -> PhoneCallHistoryEntryAddress:...
    @typing.overload
    def __new__(cls: typing.Type[PhoneCallHistoryEntryAddress]) -> PhoneCallHistoryEntryAddress:...

class PhoneCallHistoryEntryQueryOptions(winsdk.system.Object):
    desired_media: PhoneCallHistoryEntryQueryDesiredMedia
    source_ids: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallHistoryEntryQueryOptions: ...
    def __new__(cls: typing.Type[PhoneCallHistoryEntryQueryOptions]) -> PhoneCallHistoryEntryQueryOptions:...

class PhoneCallHistoryEntryReader(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallHistoryEntryReader: ...
    def read_batch_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PhoneCallHistoryEntry]]: ...

class PhoneCallHistoryManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallHistoryManager: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[PhoneCallHistoryManagerForUser]: ...
    @staticmethod
    def request_store_async(access_type: PhoneCallHistoryStoreAccessType) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallHistoryStore]: ...

class PhoneCallHistoryManagerForUser(winsdk.system.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallHistoryManagerForUser: ...
    def request_store_async(self, access_type: PhoneCallHistoryStoreAccessType) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallHistoryStore]: ...

class PhoneCallHistoryStore(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallHistoryStore: ...
    def delete_entries_async(self, call_history_entries: typing.Iterable[PhoneCallHistoryEntry]) -> winsdk.windows.foundation.IAsyncAction: ...
    def delete_entry_async(self, call_history_entry: typing.Optional[PhoneCallHistoryEntry]) -> winsdk.windows.foundation.IAsyncAction: ...
    def get_entry_async(self, call_history_entry_id: str) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallHistoryEntry]: ...
    @typing.overload
    def get_entry_reader(self) -> typing.Optional[PhoneCallHistoryEntryReader]: ...
    @typing.overload
    def get_entry_reader(self, query_options: typing.Optional[PhoneCallHistoryEntryQueryOptions]) -> typing.Optional[PhoneCallHistoryEntryReader]: ...
    def get_sources_unseen_count_async(self, source_ids: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.UInt32]: ...
    def get_unseen_count_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.UInt32]: ...
    def mark_all_as_seen_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def mark_entries_as_seen_async(self, call_history_entries: typing.Iterable[PhoneCallHistoryEntry]) -> winsdk.windows.foundation.IAsyncAction: ...
    def mark_entry_as_seen_async(self, call_history_entry: typing.Optional[PhoneCallHistoryEntry]) -> winsdk.windows.foundation.IAsyncAction: ...
    def mark_sources_as_seen_async(self, source_ids: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncAction: ...
    def save_entry_async(self, call_history_entry: typing.Optional[PhoneCallHistoryEntry]) -> winsdk.windows.foundation.IAsyncAction: ...

class PhoneCallInfo(winsdk.system.Object):
    call_direction: PhoneCallDirection
    display_name: str
    is_hold_supported: winsdk.system.Boolean
    line_id: winsdk.system.Guid
    phone_number: str
    start_time: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallInfo: ...

class PhoneCallManager(winsdk.system.Object):
    is_call_active: typing.ClassVar[winsdk.system.Boolean]
    is_call_incoming: typing.ClassVar[winsdk.system.Boolean]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallManager: ...
    @staticmethod
    def request_store_async() -> winsdk.windows.foundation.IAsyncOperation[PhoneCallStore]: ...
    @staticmethod
    def show_phone_call_settings_u_i() -> None: ...
    @staticmethod
    def show_phone_call_u_i(phone_number: str, display_name: str) -> None: ...
    @staticmethod
    def add_call_state_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_call_state_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PhoneCallStore(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallStore: ...
    def get_default_line_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Guid]: ...
    def is_emergency_phone_number_async(self, number: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def request_line_watcher(self) -> typing.Optional[PhoneLineWatcher]: ...

class PhoneCallVideoCapabilities(winsdk.system.Object):
    is_video_calling_capable: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallVideoCapabilities: ...

class PhoneCallVideoCapabilitiesManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallVideoCapabilitiesManager: ...
    @staticmethod
    def get_capabilities_async(phone_number: str) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallVideoCapabilities]: ...

class PhoneCallsResult(winsdk.system.Object):
    all_active_phone_calls: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PhoneCall]]
    operation_status: PhoneLineOperationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneCallsResult: ...

class PhoneDialOptions(winsdk.system.Object):
    number: str
    media: PhoneCallMedia
    display_name: str
    contact_phone: typing.Optional[winsdk.windows.applicationmodel.contacts.ContactPhone]
    contact: typing.Optional[winsdk.windows.applicationmodel.contacts.Contact]
    audio_endpoint: PhoneAudioRoutingEndpoint
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneDialOptions: ...
    def __new__(cls: typing.Type[PhoneDialOptions]) -> PhoneDialOptions:...

class PhoneLine(winsdk.system.Object):
    can_dial: winsdk.system.Boolean
    cellular_details: typing.Optional[PhoneLineCellularDetails]
    display_color: winsdk.windows.ui.Color
    display_name: str
    id: winsdk.system.Guid
    line_configuration: typing.Optional[PhoneLineConfiguration]
    network_name: str
    network_state: PhoneNetworkState
    supports_tile: winsdk.system.Boolean
    transport: PhoneLineTransport
    video_calling_capabilities: typing.Optional[PhoneCallVideoCapabilities]
    voicemail: typing.Optional[PhoneVoicemail]
    transport_device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneLine: ...
    def dial(self, number: str, display_name: str) -> None: ...
    def dial_with_options(self, options: typing.Optional[PhoneDialOptions]) -> None: ...
    def dial_with_result(self, number: str, display_name: str) -> typing.Optional[PhoneLineDialResult]: ...
    def dial_with_result_async(self, number: str, display_name: str) -> winsdk.windows.foundation.IAsyncOperation[PhoneLineDialResult]: ...
    def enable_text_reply(self, value: winsdk.system.Boolean) -> None: ...
    @staticmethod
    def from_id_async(line_id: winsdk.system.Guid) -> winsdk.windows.foundation.IAsyncOperation[PhoneLine]: ...
    def get_all_active_phone_calls(self) -> typing.Optional[PhoneCallsResult]: ...
    def get_all_active_phone_calls_async(self) -> winsdk.windows.foundation.IAsyncOperation[PhoneCallsResult]: ...
    def is_immediate_dial_number_async(self, number: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def add_line_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLine, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_line_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PhoneLineCellularDetails(winsdk.system.Object):
    is_modem_on: winsdk.system.Boolean
    registration_reject_code: winsdk.system.Int32
    sim_slot_index: winsdk.system.Int32
    sim_state: PhoneSimState
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneLineCellularDetails: ...
    def get_network_operator_display_text(self, location: PhoneLineNetworkOperatorDisplayTextLocation) -> str: ...

class PhoneLineConfiguration(winsdk.system.Object):
    extended_properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    is_video_calling_enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneLineConfiguration: ...

class PhoneLineDialResult(winsdk.system.Object):
    dial_call_status: PhoneCallOperationStatus
    dialed_call: typing.Optional[PhoneCall]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneLineDialResult: ...

class PhoneLineTransportDevice(winsdk.system.Object):
    device_id: str
    transport: PhoneLineTransport
    audio_routing_status: TransportDeviceAudioRoutingStatus
    in_band_ringing_enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneLineTransportDevice: ...
    def connect(self) -> winsdk.system.Boolean: ...
    def connect_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @staticmethod
    def from_id(id: str) -> typing.Optional[PhoneLineTransportDevice]: ...
    @typing.overload
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(transport: PhoneLineTransport) -> str: ...
    def is_registered(self) -> winsdk.system.Boolean: ...
    def register_app(self) -> None: ...
    def register_app_for_user(self, user: typing.Optional[winsdk.windows.system.User]) -> None: ...
    def request_access_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.devices.enumeration.DeviceAccessStatus]: ...
    def unregister_app(self) -> None: ...
    def unregister_app_for_user(self, user: typing.Optional[winsdk.windows.system.User]) -> None: ...
    def add_audio_routing_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLineTransportDevice, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_audio_routing_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_in_band_ringing_enabled_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLineTransportDevice, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_in_band_ringing_enabled_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PhoneLineWatcher(winsdk.system.Object):
    status: PhoneLineWatcherStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneLineWatcher: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_enumeration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLineWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enumeration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_line_added(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLineWatcher, PhoneLineWatcherEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_line_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_line_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLineWatcher, PhoneLineWatcherEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_line_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_line_updated(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLineWatcher, PhoneLineWatcherEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_line_updated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[PhoneLineWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PhoneLineWatcherEventArgs(winsdk.system.Object):
    line_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneLineWatcherEventArgs: ...

class PhoneVoicemail(winsdk.system.Object):
    message_count: winsdk.system.Int32
    number: str
    type: PhoneVoicemailType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneVoicemail: ...
    def dial_voicemail_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class VoipCallCoordinator(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VoipCallCoordinator: ...
    def cancel_upgrade(self, call_upgrade_guid: winsdk.system.Guid) -> None: ...
    @staticmethod
    def get_default() -> typing.Optional[VoipCallCoordinator]: ...
    def notify_muted(self) -> None: ...
    def notify_unmuted(self) -> None: ...
    def request_incoming_upgrade_to_video_call(self, context: str, contact_name: str, contact_number: str, contact_image: typing.Optional[winsdk.windows.foundation.Uri], service_name: str, branding_image: typing.Optional[winsdk.windows.foundation.Uri], call_details: str, ringtone: typing.Optional[winsdk.windows.foundation.Uri], ring_timeout: datetime.timedelta) -> typing.Optional[VoipPhoneCall]: ...
    def request_new_app_initiated_call(self, context: str, contact_name: str, contact_number: str, service_name: str, media: VoipPhoneCallMedia) -> typing.Optional[VoipPhoneCall]: ...
    @typing.overload
    def request_new_incoming_call(self, context: str, contact_name: str, contact_number: str, contact_image: typing.Optional[winsdk.windows.foundation.Uri], service_name: str, branding_image: typing.Optional[winsdk.windows.foundation.Uri], call_details: str, ringtone: typing.Optional[winsdk.windows.foundation.Uri], media: VoipPhoneCallMedia, ring_timeout: datetime.timedelta) -> typing.Optional[VoipPhoneCall]: ...
    @typing.overload
    def request_new_incoming_call(self, context: str, contact_name: str, contact_number: str, contact_image: typing.Optional[winsdk.windows.foundation.Uri], service_name: str, branding_image: typing.Optional[winsdk.windows.foundation.Uri], call_details: str, ringtone: typing.Optional[winsdk.windows.foundation.Uri], media: VoipPhoneCallMedia, ring_timeout: datetime.timedelta, contact_remote_id: str) -> typing.Optional[VoipPhoneCall]: ...
    def request_new_outgoing_call(self, context: str, contact_name: str, service_name: str, media: VoipPhoneCallMedia) -> typing.Optional[VoipPhoneCall]: ...
    def request_outgoing_upgrade_to_video_call(self, call_upgrade_guid: winsdk.system.Guid, context: str, contact_name: str, service_name: str) -> typing.Optional[VoipPhoneCall]: ...
    @typing.overload
    def reserve_call_resources_async(self) -> winsdk.windows.foundation.IAsyncOperation[VoipPhoneCallResourceReservationStatus]: ...
    @typing.overload
    def reserve_call_resources_async(self, task_entry_point: str) -> winsdk.windows.foundation.IAsyncOperation[VoipPhoneCallResourceReservationStatus]: ...
    def setup_new_accepted_call(self, context: str, contact_name: str, contact_number: str, service_name: str, media: VoipPhoneCallMedia) -> typing.Optional[VoipPhoneCall]: ...
    def terminate_cellular_call(self, call_upgrade_guid: winsdk.system.Guid) -> None: ...
    def add_mute_state_changed(self, mute_change_handler: winsdk.windows.foundation.TypedEventHandler[VoipCallCoordinator, MuteChangeEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_mute_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class VoipPhoneCall(winsdk.system.Object):
    start_time: datetime.datetime
    contact_name: str
    call_media: VoipPhoneCallMedia
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VoipPhoneCall: ...
    def notify_call_accepted(self, media: VoipPhoneCallMedia) -> None: ...
    def notify_call_active(self) -> None: ...
    def notify_call_ended(self) -> None: ...
    def notify_call_held(self) -> None: ...
    def notify_call_ready(self) -> None: ...
    def try_show_app_u_i(self) -> None: ...
    def add_answer_requested(self, accept_handler: winsdk.windows.foundation.TypedEventHandler[VoipPhoneCall, CallAnswerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_answer_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_end_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[VoipPhoneCall, CallStateChangeEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_end_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_hold_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[VoipPhoneCall, CallStateChangeEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hold_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_reject_requested(self, reject_handler: winsdk.windows.foundation.TypedEventHandler[VoipPhoneCall, CallRejectEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reject_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_resume_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[VoipPhoneCall, CallStateChangeEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_resume_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

