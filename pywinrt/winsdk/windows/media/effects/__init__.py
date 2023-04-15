# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Media.Effects")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.foundation.numerics
except ImportError:
    pass

try:
    import winsdk.windows.graphics.directx.direct3d11
except ImportError:
    pass

try:
    import winsdk.windows.media
except ImportError:
    pass

try:
    import winsdk.windows.media.capture
except ImportError:
    pass

try:
    import winsdk.windows.media.editing
except ImportError:
    pass

try:
    import winsdk.windows.media.mediaproperties
except ImportError:
    pass

try:
    import winsdk.windows.media.playback
except ImportError:
    pass

try:
    import winsdk.windows.media.render
except ImportError:
    pass

try:
    import winsdk.windows.media.transcoding
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

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

_ns_module._register_AudioEffectType(AudioEffectType)
_ns_module._register_MediaEffectClosedReason(MediaEffectClosedReason)
_ns_module._register_MediaMemoryTypes(MediaMemoryTypes)

AudioCaptureEffectsManager = _ns_module.AudioCaptureEffectsManager
AudioEffect = _ns_module.AudioEffect
AudioEffectDefinition = _ns_module.AudioEffectDefinition
AudioEffectsManager = _ns_module.AudioEffectsManager
AudioRenderEffectsManager = _ns_module.AudioRenderEffectsManager
CompositeVideoFrameContext = _ns_module.CompositeVideoFrameContext
ProcessAudioFrameContext = _ns_module.ProcessAudioFrameContext
ProcessVideoFrameContext = _ns_module.ProcessVideoFrameContext
SlowMotionEffectDefinition = _ns_module.SlowMotionEffectDefinition
VideoCompositorDefinition = _ns_module.VideoCompositorDefinition
VideoEffectDefinition = _ns_module.VideoEffectDefinition
VideoTransformEffectDefinition = _ns_module.VideoTransformEffectDefinition
VideoTransformSphericalProjection = _ns_module.VideoTransformSphericalProjection
IAudioEffectDefinition = _ns_module.IAudioEffectDefinition
IBasicAudioEffect = _ns_module.IBasicAudioEffect
IBasicVideoEffect = _ns_module.IBasicVideoEffect
IVideoCompositor = _ns_module.IVideoCompositor
IVideoCompositorDefinition = _ns_module.IVideoCompositorDefinition
IVideoEffectDefinition = _ns_module.IVideoEffectDefinition
