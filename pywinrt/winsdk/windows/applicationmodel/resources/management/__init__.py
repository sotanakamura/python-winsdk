# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.ApplicationModel.Resources.Management")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class IndexedResourceType(enum.IntEnum):
    STRING = 0
    PATH = 1
    EMBEDDED_DATA = 2

_ns_module._register_IndexedResourceType(IndexedResourceType)

IndexedResourceCandidate = _ns_module.IndexedResourceCandidate
IndexedResourceQualifier = _ns_module.IndexedResourceQualifier
ResourceIndexer = _ns_module.ResourceIndexer
