# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.Resources.Core")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
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

try:
    import winsdk.windows.ui
except ImportError:
    pass

class ResourceCandidateKind(enum.IntEnum):
    STRING = 0
    FILE = 1
    EMBEDDED_DATA = 2

class ResourceQualifierPersistence(enum.IntEnum):
    NONE = 0
    LOCAL_MACHINE = 1

_ns_module._register_ResourceCandidateKind(ResourceCandidateKind)
_ns_module._register_ResourceQualifierPersistence(ResourceQualifierPersistence)

ResourceLayoutInfo = _ns_module.ResourceLayoutInfo
NamedResource = _ns_module.NamedResource
ResourceCandidate = _ns_module.ResourceCandidate
ResourceCandidateVectorView = _ns_module.ResourceCandidateVectorView
ResourceContext = _ns_module.ResourceContext
ResourceContextLanguagesVectorView = _ns_module.ResourceContextLanguagesVectorView
ResourceManager = _ns_module.ResourceManager
ResourceMap = _ns_module.ResourceMap
ResourceMapIterator = _ns_module.ResourceMapIterator
ResourceMapMapView = _ns_module.ResourceMapMapView
ResourceMapMapViewIterator = _ns_module.ResourceMapMapViewIterator
ResourceQualifier = _ns_module.ResourceQualifier
ResourceQualifierMapView = _ns_module.ResourceQualifierMapView
ResourceQualifierObservableMap = _ns_module.ResourceQualifierObservableMap
ResourceQualifierVectorView = _ns_module.ResourceQualifierVectorView
