# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media.core
import winsdk.windows.media.mediaproperties
import winsdk.windows.storage
import winsdk.windows.storage.streams

class MediaVideoProcessingAlgorithm(enum.IntEnum):
    DEFAULT = 0
    MRF_CRF444 = 1

class TranscodeFailureReason(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    INVALID_PROFILE = 2
    CODEC_NOT_FOUND = 3

Self = typing.TypeVar('Self')

class MediaTranscoder(winsdk.system.Object):
    trim_stop_time: datetime.timedelta
    trim_start_time: datetime.timedelta
    hardware_acceleration_enabled: winsdk.system.Boolean
    always_reencode: winsdk.system.Boolean
    video_processing_algorithm: MediaVideoProcessingAlgorithm
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaTranscoder: ...
    def __new__(cls: typing.Type[MediaTranscoder]) -> MediaTranscoder:...
    @typing.overload
    def add_audio_effect(self, activatable_class_id: str) -> None: ...
    @typing.overload
    def add_audio_effect(self, activatable_class_id: str, effect_required: winsdk.system.Boolean, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    @typing.overload
    def add_video_effect(self, activatable_class_id: str) -> None: ...
    @typing.overload
    def add_video_effect(self, activatable_class_id: str, effect_required: winsdk.system.Boolean, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    def clear_effects(self) -> None: ...
    def prepare_file_transcode_async(self, source: typing.Optional[winsdk.windows.storage.IStorageFile], destination: typing.Optional[winsdk.windows.storage.IStorageFile], profile: typing.Optional[winsdk.windows.media.mediaproperties.MediaEncodingProfile]) -> winsdk.windows.foundation.IAsyncOperation[PrepareTranscodeResult]: ...
    def prepare_media_stream_source_transcode_async(self, source: typing.Optional[winsdk.windows.media.core.IMediaSource], destination: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], profile: typing.Optional[winsdk.windows.media.mediaproperties.MediaEncodingProfile]) -> winsdk.windows.foundation.IAsyncOperation[PrepareTranscodeResult]: ...
    def prepare_stream_transcode_async(self, source: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], destination: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], profile: typing.Optional[winsdk.windows.media.mediaproperties.MediaEncodingProfile]) -> winsdk.windows.foundation.IAsyncOperation[PrepareTranscodeResult]: ...

class PrepareTranscodeResult(winsdk.system.Object):
    can_transcode: winsdk.system.Boolean
    failure_reason: TranscodeFailureReason
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrepareTranscodeResult: ...
    def transcode_async(self) -> winsdk.windows.foundation.IAsyncActionWithProgress[winsdk.system.Double]: ...

