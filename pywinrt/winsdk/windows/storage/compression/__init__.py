# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Storage.Compression")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class CompressAlgorithm(enum.IntEnum):
    INVALID_ALGORITHM = 0
    NULL_ALGORITHM = 1
    MSZIP = 2
    XPRESS = 3
    XPRESS_HUFF = 4
    LZMS = 5

_ns_module._register_CompressAlgorithm(CompressAlgorithm)

Compressor = _ns_module.Compressor
Decompressor = _ns_module.Decompressor
