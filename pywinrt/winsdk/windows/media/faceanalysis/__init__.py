# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Media.FaceAnalysis")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
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


DetectedFace = _ns_module.DetectedFace
FaceDetector = _ns_module.FaceDetector
FaceTracker = _ns_module.FaceTracker
