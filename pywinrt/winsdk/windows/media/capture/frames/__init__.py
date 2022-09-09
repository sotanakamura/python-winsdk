# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Media.Capture.Frames")

try:
    import winsdk.windows.devices.enumeration
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.graphics.directx.direct3d11
except ImportError:
    pass

try:
    import winsdk.windows.graphics.imaging
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
    import winsdk.windows.media.devices
except ImportError:
    pass

try:
    import winsdk.windows.media.devices.core
except ImportError:
    pass

try:
    import winsdk.windows.media.mediaproperties
except ImportError:
    pass

try:
    import winsdk.windows.perception.spatial
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.ui.windowmanagement
except ImportError:
    pass

class MediaFrameReaderAcquisitionMode(enum.IntEnum):
    REALTIME = 0
    BUFFERED = 1

class MediaFrameReaderStartStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    DEVICE_NOT_AVAILABLE = 2
    OUTPUT_FORMAT_NOT_SUPPORTED = 3
    EXCLUSIVE_CONTROL_NOT_AVAILABLE = 4

class MediaFrameSourceGetPropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    NOT_SUPPORTED = 2
    DEVICE_NOT_AVAILABLE = 3
    MAX_PROPERTY_VALUE_SIZE_TOO_SMALL = 4
    MAX_PROPERTY_VALUE_SIZE_REQUIRED = 5

class MediaFrameSourceKind(enum.IntEnum):
    CUSTOM = 0
    COLOR = 1
    INFRARED = 2
    DEPTH = 3
    AUDIO = 4
    IMAGE = 5
    METADATA = 6

class MediaFrameSourceSetPropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    NOT_SUPPORTED = 2
    INVALID_VALUE = 3
    DEVICE_NOT_AVAILABLE = 4
    NOT_IN_CONTROL = 5

class MultiSourceMediaFrameReaderStartStatus(enum.IntEnum):
    SUCCESS = 0
    NOT_SUPPORTED = 1
    INSUFFICIENT_RESOURCES = 2
    DEVICE_NOT_AVAILABLE = 3
    UNKNOWN_FAILURE = 4

_ns_module._register_MediaFrameReaderAcquisitionMode(MediaFrameReaderAcquisitionMode)
_ns_module._register_MediaFrameReaderStartStatus(MediaFrameReaderStartStatus)
_ns_module._register_MediaFrameSourceGetPropertyStatus(MediaFrameSourceGetPropertyStatus)
_ns_module._register_MediaFrameSourceKind(MediaFrameSourceKind)
_ns_module._register_MediaFrameSourceSetPropertyStatus(MediaFrameSourceSetPropertyStatus)
_ns_module._register_MultiSourceMediaFrameReaderStartStatus(MultiSourceMediaFrameReaderStartStatus)

AudioMediaFrame = _ns_module.AudioMediaFrame
BufferMediaFrame = _ns_module.BufferMediaFrame
DepthMediaFrame = _ns_module.DepthMediaFrame
DepthMediaFrameFormat = _ns_module.DepthMediaFrameFormat
InfraredMediaFrame = _ns_module.InfraredMediaFrame
MediaFrameArrivedEventArgs = _ns_module.MediaFrameArrivedEventArgs
MediaFrameFormat = _ns_module.MediaFrameFormat
MediaFrameReader = _ns_module.MediaFrameReader
MediaFrameReference = _ns_module.MediaFrameReference
MediaFrameSource = _ns_module.MediaFrameSource
MediaFrameSourceController = _ns_module.MediaFrameSourceController
MediaFrameSourceGetPropertyResult = _ns_module.MediaFrameSourceGetPropertyResult
MediaFrameSourceGroup = _ns_module.MediaFrameSourceGroup
MediaFrameSourceInfo = _ns_module.MediaFrameSourceInfo
MultiSourceMediaFrameArrivedEventArgs = _ns_module.MultiSourceMediaFrameArrivedEventArgs
MultiSourceMediaFrameReader = _ns_module.MultiSourceMediaFrameReader
MultiSourceMediaFrameReference = _ns_module.MultiSourceMediaFrameReference
VideoMediaFrame = _ns_module.VideoMediaFrame
VideoMediaFrameFormat = _ns_module.VideoMediaFrameFormat
