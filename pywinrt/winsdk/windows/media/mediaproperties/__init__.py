# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Media.MediaProperties")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.media.core
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class AudioEncodingQuality(enum.IntEnum):
    AUTO = 0
    HIGH = 1
    MEDIUM = 2
    LOW = 3

class MediaMirroringOptions(enum.IntFlag):
    NONE = 0
    HORIZONTAL = 0x1
    VERTICAL = 0x2

class MediaPixelFormat(enum.IntEnum):
    NV12 = 0
    BGRA8 = 1
    P010 = 2

class MediaRotation(enum.IntEnum):
    NONE = 0
    CLOCKWISE90_DEGREES = 1
    CLOCKWISE180_DEGREES = 2
    CLOCKWISE270_DEGREES = 3

class MediaThumbnailFormat(enum.IntEnum):
    BMP = 0
    BGRA8 = 1

class SphericalVideoFrameFormat(enum.IntEnum):
    NONE = 0
    UNSUPPORTED = 1
    EQUIRECTANGULAR = 2

class StereoscopicVideoPackingMode(enum.IntEnum):
    NONE = 0
    SIDE_BY_SIDE = 1
    TOP_BOTTOM = 2

class VideoEncodingQuality(enum.IntEnum):
    AUTO = 0
    H_D1080P = 1
    H_D720P = 2
    WVGA = 3
    NTSC = 4
    PAL = 5
    VGA = 6
    QVGA = 7
    UHD2160P = 8
    UHD4320P = 9

_ns_module._register_AudioEncodingQuality(AudioEncodingQuality)
_ns_module._register_MediaMirroringOptions(MediaMirroringOptions)
_ns_module._register_MediaPixelFormat(MediaPixelFormat)
_ns_module._register_MediaRotation(MediaRotation)
_ns_module._register_MediaThumbnailFormat(MediaThumbnailFormat)
_ns_module._register_SphericalVideoFrameFormat(SphericalVideoFrameFormat)
_ns_module._register_StereoscopicVideoPackingMode(StereoscopicVideoPackingMode)
_ns_module._register_VideoEncodingQuality(VideoEncodingQuality)

AudioEncodingProperties = _ns_module.AudioEncodingProperties
ContainerEncodingProperties = _ns_module.ContainerEncodingProperties
H264ProfileIds = _ns_module.H264ProfileIds
ImageEncodingProperties = _ns_module.ImageEncodingProperties
MediaEncodingProfile = _ns_module.MediaEncodingProfile
MediaEncodingSubtypes = _ns_module.MediaEncodingSubtypes
MediaPropertySet = _ns_module.MediaPropertySet
MediaRatio = _ns_module.MediaRatio
Mpeg2ProfileIds = _ns_module.Mpeg2ProfileIds
TimedMetadataEncodingProperties = _ns_module.TimedMetadataEncodingProperties
VideoEncodingProperties = _ns_module.VideoEncodingProperties
IMediaEncodingProperties = _ns_module.IMediaEncodingProperties
