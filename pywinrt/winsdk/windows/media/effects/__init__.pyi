# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.foundation.numerics
import winsdk.windows.graphics.directx.direct3d11
import winsdk.windows.media
import winsdk.windows.media.capture
import winsdk.windows.media.editing
import winsdk.windows.media.mediaproperties
import winsdk.windows.media.playback
import winsdk.windows.media.render
import winsdk.windows.media.transcoding
import winsdk.windows.storage.streams
import winsdk.windows.ui

class AudioEffectType(enum.IntEnum):
    OTHER = 0
    ACOUSTIC_ECHO_CANCELLATION = 1
    NOISE_SUPPRESSION = 2
    AUTOMATIC_GAIN_CONTROL = 3
    BEAM_FORMING = 4
    CONSTANT_TONE_REMOVAL = 5
    EQUALIZER = 6
    LOUDNESS_EQUALIZER = 7
    BASS_BOOST = 8
    VIRTUAL_SURROUND = 9
    VIRTUAL_HEADPHONES = 10
    SPEAKER_FILL = 11
    ROOM_CORRECTION = 12
    BASS_MANAGEMENT = 13
    ENVIRONMENTAL_EFFECTS = 14
    SPEAKER_PROTECTION = 15
    SPEAKER_COMPENSATION = 16
    DYNAMIC_RANGE_COMPRESSION = 17
    FAR_FIELD_BEAM_FORMING = 18
    DEEP_NOISE_SUPPRESSION = 19

class MediaEffectClosedReason(enum.IntEnum):
    DONE = 0
    UNKNOWN_ERROR = 1
    UNSUPPORTED_ENCODING_FORMAT = 2
    EFFECT_CURRENTLY_UNLOADED = 3

class MediaMemoryTypes(enum.IntEnum):
    GPU = 0
    CPU = 1
    GPU_AND_CPU = 2

Self = typing.TypeVar('Self')

class AudioCaptureEffectsManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioCaptureEffectsManager: ...
    def get_audio_capture_effects(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AudioEffect]]: ...
    def add_audio_capture_effects_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AudioCaptureEffectsManager, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_audio_capture_effects_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AudioEffect(winsdk.system.Object):
    audio_effect_type: AudioEffectType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioEffect: ...

class AudioEffectDefinition(winsdk.system.Object):
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioEffectDefinition: ...
    @typing.overload
    def __new__(cls: typing.Type[AudioEffectDefinition], activatable_class_id: str) -> AudioEffectDefinition:...
    @typing.overload
    def __new__(cls: typing.Type[AudioEffectDefinition], activatable_class_id: str, props: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> AudioEffectDefinition:...

class AudioEffectsManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioEffectsManager: ...
    @typing.overload
    @staticmethod
    def create_audio_capture_effects_manager(device_id: str, category: winsdk.windows.media.capture.MediaCategory) -> typing.Optional[AudioCaptureEffectsManager]: ...
    @typing.overload
    @staticmethod
    def create_audio_capture_effects_manager(device_id: str, category: winsdk.windows.media.capture.MediaCategory, mode: winsdk.windows.media.AudioProcessing) -> typing.Optional[AudioCaptureEffectsManager]: ...
    @typing.overload
    @staticmethod
    def create_audio_render_effects_manager(device_id: str, category: winsdk.windows.media.render.AudioRenderCategory) -> typing.Optional[AudioRenderEffectsManager]: ...
    @typing.overload
    @staticmethod
    def create_audio_render_effects_manager(device_id: str, category: winsdk.windows.media.render.AudioRenderCategory, mode: winsdk.windows.media.AudioProcessing) -> typing.Optional[AudioRenderEffectsManager]: ...

class AudioRenderEffectsManager(winsdk.system.Object):
    effects_provider_settings_label: str
    effects_provider_thumbnail: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioRenderEffectsManager: ...
    def get_audio_render_effects(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AudioEffect]]: ...
    def show_settings_u_i(self) -> None: ...
    def add_audio_render_effects_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AudioRenderEffectsManager, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_audio_render_effects_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CompositeVideoFrameContext(winsdk.system.Object):
    background_frame: typing.Optional[winsdk.windows.media.VideoFrame]
    output_frame: typing.Optional[winsdk.windows.media.VideoFrame]
    surfaces_to_overlay: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CompositeVideoFrameContext: ...
    def get_overlay_for_surface(self, surface_to_overlay: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]) -> typing.Optional[winsdk.windows.media.editing.MediaOverlay]: ...

class ProcessAudioFrameContext(winsdk.system.Object):
    input_frame: typing.Optional[winsdk.windows.media.AudioFrame]
    output_frame: typing.Optional[winsdk.windows.media.AudioFrame]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProcessAudioFrameContext: ...

class ProcessVideoFrameContext(winsdk.system.Object):
    input_frame: typing.Optional[winsdk.windows.media.VideoFrame]
    output_frame: typing.Optional[winsdk.windows.media.VideoFrame]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProcessVideoFrameContext: ...

class SlowMotionEffectDefinition(winsdk.system.Object):
    time_stretch_rate: winsdk.system.Double
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SlowMotionEffectDefinition: ...
    def __new__(cls: typing.Type[SlowMotionEffectDefinition]) -> SlowMotionEffectDefinition:...

class VideoCompositorDefinition(winsdk.system.Object):
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoCompositorDefinition: ...
    @typing.overload
    def __new__(cls: typing.Type[VideoCompositorDefinition], activatable_class_id: str) -> VideoCompositorDefinition:...
    @typing.overload
    def __new__(cls: typing.Type[VideoCompositorDefinition], activatable_class_id: str, props: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> VideoCompositorDefinition:...

class VideoEffectDefinition(winsdk.system.Object):
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoEffectDefinition: ...
    @typing.overload
    def __new__(cls: typing.Type[VideoEffectDefinition], activatable_class_id: str) -> VideoEffectDefinition:...
    @typing.overload
    def __new__(cls: typing.Type[VideoEffectDefinition], activatable_class_id: str, props: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> VideoEffectDefinition:...

class VideoTransformEffectDefinition(winsdk.system.Object):
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    rotation: winsdk.windows.media.mediaproperties.MediaRotation
    processing_algorithm: winsdk.windows.media.transcoding.MediaVideoProcessingAlgorithm
    padding_color: winsdk.windows.ui.Color
    output_size: winsdk.windows.foundation.Size
    mirror: winsdk.windows.media.mediaproperties.MediaMirroringOptions
    crop_rectangle: winsdk.windows.foundation.Rect
    spherical_projection: typing.Optional[VideoTransformSphericalProjection]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoTransformEffectDefinition: ...
    def __new__(cls: typing.Type[VideoTransformEffectDefinition]) -> VideoTransformEffectDefinition:...

class VideoTransformSphericalProjection(winsdk.system.Object):
    view_orientation: winsdk.windows.foundation.numerics.Quaternion
    projection_mode: winsdk.windows.media.playback.SphericalVideoProjectionMode
    is_enabled: winsdk.system.Boolean
    horizontal_field_of_view_in_degrees: winsdk.system.Double
    frame_format: winsdk.windows.media.mediaproperties.SphericalVideoFrameFormat
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoTransformSphericalProjection: ...

class IAudioEffectDefinition(winsdk.system.Object):
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IAudioEffectDefinition: ...

class IBasicAudioEffect(winsdk.system.Object):
    supported_encoding_properties: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.AudioEncodingProperties]]
    use_input_frame_for_output: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBasicAudioEffect: ...
    def close(self, reason: MediaEffectClosedReason) -> None: ...
    def discard_queued_frames(self) -> None: ...
    def process_frame(self, context: typing.Optional[ProcessAudioFrameContext]) -> None: ...
    def set_encoding_properties(self, encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.AudioEncodingProperties]) -> None: ...
    def set_properties(self, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...

class IBasicVideoEffect(winsdk.system.Object):
    is_read_only: winsdk.system.Boolean
    supported_encoding_properties: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.VideoEncodingProperties]]
    supported_memory_types: MediaMemoryTypes
    time_independent: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBasicVideoEffect: ...
    def close(self, reason: MediaEffectClosedReason) -> None: ...
    def discard_queued_frames(self) -> None: ...
    def process_frame(self, context: typing.Optional[ProcessVideoFrameContext]) -> None: ...
    def set_encoding_properties(self, encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.VideoEncodingProperties], device: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DDevice]) -> None: ...
    def set_properties(self, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...

class IVideoCompositor(winsdk.system.Object):
    time_independent: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IVideoCompositor: ...
    def close(self, reason: MediaEffectClosedReason) -> None: ...
    def composite_frame(self, context: typing.Optional[CompositeVideoFrameContext]) -> None: ...
    def discard_queued_frames(self) -> None: ...
    def set_encoding_properties(self, background_properties: typing.Optional[winsdk.windows.media.mediaproperties.VideoEncodingProperties], device: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DDevice]) -> None: ...
    def set_properties(self, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...

class IVideoCompositorDefinition(winsdk.system.Object):
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IVideoCompositorDefinition: ...

class IVideoEffectDefinition(winsdk.system.Object):
    activatable_class_id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IVideoEffectDefinition: ...

