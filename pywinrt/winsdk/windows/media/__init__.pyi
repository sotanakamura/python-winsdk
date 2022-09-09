# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.applicationmodel.appservice
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.directx
import winsdk.windows.graphics.directx.direct3d11
import winsdk.windows.graphics.imaging
import winsdk.windows.storage
import winsdk.windows.storage.streams

class AudioBufferAccessMode(enum.IntEnum):
    READ = 0
    READ_WRITE = 1
    WRITE = 2

class AudioProcessing(enum.IntEnum):
    DEFAULT = 0
    RAW = 1

class MediaPlaybackAutoRepeatMode(enum.IntEnum):
    NONE = 0
    TRACK = 1
    LIST = 2

class MediaPlaybackStatus(enum.IntEnum):
    CLOSED = 0
    CHANGING = 1
    STOPPED = 2
    PLAYING = 3
    PAUSED = 4

class MediaPlaybackType(enum.IntEnum):
    UNKNOWN = 0
    MUSIC = 1
    VIDEO = 2
    IMAGE = 3

class MediaTimelineControllerState(enum.IntEnum):
    PAUSED = 0
    RUNNING = 1
    STALLED = 2
    ERROR = 3

class SoundLevel(enum.IntEnum):
    MUTED = 0
    LOW = 1
    FULL = 2

class SystemMediaTransportControlsButton(enum.IntEnum):
    PLAY = 0
    PAUSE = 1
    STOP = 2
    RECORD = 3
    FAST_FORWARD = 4
    REWIND = 5
    NEXT = 6
    PREVIOUS = 7
    CHANNEL_UP = 8
    CHANNEL_DOWN = 9

class SystemMediaTransportControlsProperty(enum.IntEnum):
    SOUND_LEVEL = 0

Self = typing.TypeVar('Self')

class MediaTimeRange:
    start: datetime.timedelta
    end: datetime.timedelta
    def __new__(cls: typing.Type[MediaTimeRange], start: datetime.timedelta, end: datetime.timedelta) -> MediaTimeRange: ...

class AudioBuffer(_winrt.Object):
    length: _winrt.UInt32
    capacity: _winrt.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> AudioBuffer: ...
    def close(self) -> None: ...
    def create_reference(self) -> typing.Optional[winsdk.windows.foundation.IMemoryBufferReference]: ...

class AudioFrame(_winrt.Object):
    system_relative_time: typing.Optional[typing.Optional[datetime.timedelta]]
    relative_time: typing.Optional[typing.Optional[datetime.timedelta]]
    is_discontinuous: _winrt.Boolean
    duration: typing.Optional[typing.Optional[datetime.timedelta]]
    extended_properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    is_read_only: _winrt.Boolean
    type: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> AudioFrame: ...
    def __new__(cls: typing.Type[AudioFrame], capacity: _winrt.UInt32) -> AudioFrame:...
    def close(self) -> None: ...
    def lock_buffer(self, mode: AudioBufferAccessMode) -> typing.Optional[AudioBuffer]: ...

class AutoRepeatModeChangeRequestedEventArgs(_winrt.Object):
    requested_auto_repeat_mode: MediaPlaybackAutoRepeatMode
    @staticmethod
    def _from(obj: _winrt.Object) -> AutoRepeatModeChangeRequestedEventArgs: ...

class ImageDisplayProperties(_winrt.Object):
    title: str
    subtitle: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ImageDisplayProperties: ...

class MediaControl(_winrt.Object):
    track_name: str
    is_playing: _winrt.Boolean
    artist_name: str
    album_art: typing.Optional[winsdk.windows.foundation.Uri]
    sound_level: SoundLevel
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaControl: ...
    @staticmethod
    def add_channel_down_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_channel_down_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_channel_up_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_channel_up_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_fast_forward_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_fast_forward_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_next_track_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_next_track_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_pause_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_pause_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_play_pause_toggle_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_play_pause_toggle_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_play_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_play_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_previous_track_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_previous_track_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_record_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_record_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_rewind_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_rewind_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_sound_level_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_sound_level_changed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_stop_pressed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_stop_pressed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaExtensionManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaExtensionManager: ...
    def __new__(cls: typing.Type[MediaExtensionManager]) -> MediaExtensionManager:...
    @typing.overload
    def register_audio_decoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid) -> None: ...
    @typing.overload
    def register_audio_decoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    @typing.overload
    def register_audio_encoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid) -> None: ...
    @typing.overload
    def register_audio_encoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    @typing.overload
    def register_byte_stream_handler(self, activatable_class_id: str, file_extension: str, mime_type: str) -> None: ...
    @typing.overload
    def register_byte_stream_handler(self, activatable_class_id: str, file_extension: str, mime_type: str, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    def register_media_extension_for_app_service(self, extension: typing.Optional[IMediaExtension], connection: typing.Optional[winsdk.windows.applicationmodel.appservice.AppServiceConnection]) -> None: ...
    @typing.overload
    def register_scheme_handler(self, activatable_class_id: str, scheme: str) -> None: ...
    @typing.overload
    def register_scheme_handler(self, activatable_class_id: str, scheme: str, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    @typing.overload
    def register_video_decoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid) -> None: ...
    @typing.overload
    def register_video_decoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    @typing.overload
    def register_video_encoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid) -> None: ...
    @typing.overload
    def register_video_encoder(self, activatable_class_id: str, input_subtype: _winrt.Guid, output_subtype: _winrt.Guid, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...

class MediaMarkerTypes(_winrt.Object):
    bookmark: str
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaMarkerTypes: ...

class MediaProcessingTriggerDetails(_winrt.Object):
    arguments: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaProcessingTriggerDetails: ...

class MediaTimelineController(_winrt.Object):
    position: datetime.timedelta
    clock_rate: _winrt.Double
    state: MediaTimelineControllerState
    is_looping_enabled: _winrt.Boolean
    duration: typing.Optional[typing.Optional[datetime.timedelta]]
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaTimelineController: ...
    def __new__(cls: typing.Type[MediaTimelineController]) -> MediaTimelineController:...
    def pause(self) -> None: ...
    def resume(self) -> None: ...
    def start(self) -> None: ...
    def add_position_changed(self, position_changed_event_handler: winsdk.windows.foundation.TypedEventHandler[MediaTimelineController, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_position_changed(self, event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_state_changed(self, state_changed_event_handler: winsdk.windows.foundation.TypedEventHandler[MediaTimelineController, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_ended(self, event_handler: winsdk.windows.foundation.TypedEventHandler[MediaTimelineController, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_ended(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_failed(self, event_handler: winsdk.windows.foundation.TypedEventHandler[MediaTimelineController, MediaTimelineControllerFailedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_failed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaTimelineControllerFailedEventArgs(_winrt.Object):
    extended_error: winsdk.windows.foundation.HResult
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaTimelineControllerFailedEventArgs: ...

class MusicDisplayProperties(_winrt.Object):
    title: str
    artist: str
    album_artist: str
    track_number: _winrt.UInt32
    album_title: str
    genres: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    album_track_count: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> MusicDisplayProperties: ...

class PlaybackPositionChangeRequestedEventArgs(_winrt.Object):
    requested_playback_position: datetime.timedelta
    @staticmethod
    def _from(obj: _winrt.Object) -> PlaybackPositionChangeRequestedEventArgs: ...

class PlaybackRateChangeRequestedEventArgs(_winrt.Object):
    requested_playback_rate: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> PlaybackRateChangeRequestedEventArgs: ...

class ShuffleEnabledChangeRequestedEventArgs(_winrt.Object):
    requested_shuffle_enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ShuffleEnabledChangeRequestedEventArgs: ...

class SystemMediaTransportControls(_winrt.Object):
    is_play_enabled: _winrt.Boolean
    is_pause_enabled: _winrt.Boolean
    is_next_enabled: _winrt.Boolean
    is_previous_enabled: _winrt.Boolean
    is_enabled: _winrt.Boolean
    is_channel_down_enabled: _winrt.Boolean
    is_fast_forward_enabled: _winrt.Boolean
    is_channel_up_enabled: _winrt.Boolean
    playback_status: MediaPlaybackStatus
    is_stop_enabled: _winrt.Boolean
    is_rewind_enabled: _winrt.Boolean
    is_record_enabled: _winrt.Boolean
    display_updater: typing.Optional[SystemMediaTransportControlsDisplayUpdater]
    sound_level: SoundLevel
    shuffle_enabled: _winrt.Boolean
    playback_rate: _winrt.Double
    auto_repeat_mode: MediaPlaybackAutoRepeatMode
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemMediaTransportControls: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[SystemMediaTransportControls]: ...
    def update_timeline_properties(self, timeline_properties: typing.Optional[SystemMediaTransportControlsTimelineProperties]) -> None: ...
    def add_button_pressed(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemMediaTransportControls, SystemMediaTransportControlsButtonPressedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_button_pressed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_property_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemMediaTransportControls, SystemMediaTransportControlsPropertyChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_property_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_auto_repeat_mode_change_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemMediaTransportControls, AutoRepeatModeChangeRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_auto_repeat_mode_change_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_playback_position_change_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemMediaTransportControls, PlaybackPositionChangeRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_playback_position_change_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_playback_rate_change_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemMediaTransportControls, PlaybackRateChangeRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_playback_rate_change_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_shuffle_enabled_change_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemMediaTransportControls, ShuffleEnabledChangeRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_shuffle_enabled_change_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SystemMediaTransportControlsButtonPressedEventArgs(_winrt.Object):
    button: SystemMediaTransportControlsButton
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemMediaTransportControlsButtonPressedEventArgs: ...

class SystemMediaTransportControlsDisplayUpdater(_winrt.Object):
    type: MediaPlaybackType
    thumbnail: typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference]
    app_media_id: str
    image_properties: typing.Optional[ImageDisplayProperties]
    music_properties: typing.Optional[MusicDisplayProperties]
    video_properties: typing.Optional[VideoDisplayProperties]
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemMediaTransportControlsDisplayUpdater: ...
    def clear_all(self) -> None: ...
    def copy_from_file_async(self, type: MediaPlaybackType, source: typing.Optional[winsdk.windows.storage.StorageFile]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def update(self) -> None: ...

class SystemMediaTransportControlsPropertyChangedEventArgs(_winrt.Object):
    property: SystemMediaTransportControlsProperty
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemMediaTransportControlsPropertyChangedEventArgs: ...

class SystemMediaTransportControlsTimelineProperties(_winrt.Object):
    start_time: datetime.timedelta
    position: datetime.timedelta
    min_seek_time: datetime.timedelta
    max_seek_time: datetime.timedelta
    end_time: datetime.timedelta
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemMediaTransportControlsTimelineProperties: ...
    def __new__(cls: typing.Type[SystemMediaTransportControlsTimelineProperties]) -> SystemMediaTransportControlsTimelineProperties:...

class VideoDisplayProperties(_winrt.Object):
    title: str
    subtitle: str
    genres: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoDisplayProperties: ...

class VideoEffects(_winrt.Object):
    video_stabilization: str
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoEffects: ...

class VideoFrame(_winrt.Object):
    system_relative_time: typing.Optional[typing.Optional[datetime.timedelta]]
    relative_time: typing.Optional[typing.Optional[datetime.timedelta]]
    is_discontinuous: _winrt.Boolean
    duration: typing.Optional[typing.Optional[datetime.timedelta]]
    extended_properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    is_read_only: _winrt.Boolean
    type: str
    direct3_d_surface: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]
    software_bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoFrame: ...
    @typing.overload
    def __new__(cls: typing.Type[VideoFrame], format: winsdk.windows.graphics.imaging.BitmapPixelFormat, width: _winrt.Int32, height: _winrt.Int32) -> VideoFrame:...
    @typing.overload
    def __new__(cls: typing.Type[VideoFrame], format: winsdk.windows.graphics.imaging.BitmapPixelFormat, width: _winrt.Int32, height: _winrt.Int32, alpha: winsdk.windows.graphics.imaging.BitmapAlphaMode) -> VideoFrame:...
    def close(self) -> None: ...
    @typing.overload
    def copy_to_async(self, frame: typing.Optional[VideoFrame]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def copy_to_async(self, frame: typing.Optional[VideoFrame], source_bounds: typing.Optional[winsdk.windows.graphics.imaging.BitmapBounds], destination_bounds: typing.Optional[winsdk.windows.graphics.imaging.BitmapBounds]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    @staticmethod
    def create_as_direct3_d11_surface_backed(format: winsdk.windows.graphics.directx.DirectXPixelFormat, width: _winrt.Int32, height: _winrt.Int32) -> typing.Optional[VideoFrame]: ...
    @typing.overload
    @staticmethod
    def create_as_direct3_d11_surface_backed(format: winsdk.windows.graphics.directx.DirectXPixelFormat, width: _winrt.Int32, height: _winrt.Int32, device: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DDevice]) -> typing.Optional[VideoFrame]: ...
    @staticmethod
    def create_with_direct3_d11_surface(surface: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]) -> typing.Optional[VideoFrame]: ...
    @staticmethod
    def create_with_software_bitmap(bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]) -> typing.Optional[VideoFrame]: ...

class IMediaExtension(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IMediaExtension: ...
    def set_properties(self, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...

class IMediaFrame(_winrt.Object):
    duration: typing.Optional[typing.Optional[datetime.timedelta]]
    extended_properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    is_discontinuous: _winrt.Boolean
    is_read_only: _winrt.Boolean
    relative_time: typing.Optional[typing.Optional[datetime.timedelta]]
    system_relative_time: typing.Optional[typing.Optional[datetime.timedelta]]
    type: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IMediaFrame: ...
    def close(self) -> None: ...

class IMediaMarker(_winrt.Object):
    media_marker_type: str
    text: str
    time: datetime.timedelta
    @staticmethod
    def _from(obj: _winrt.Object) -> IMediaMarker: ...

class IMediaMarkers(_winrt.Object):
    markers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[IMediaMarker]]
    @staticmethod
    def _from(obj: _winrt.Object) -> IMediaMarkers: ...

