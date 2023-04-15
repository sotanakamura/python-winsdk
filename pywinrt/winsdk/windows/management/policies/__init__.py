# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Management.Policies")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

class NamedPolicyKind(enum.IntEnum):
    INVALID = 0
    BINARY = 1
    BOOLEAN = 2
    INT32 = 3
    INT64 = 4
    STRING = 5

_ns_module._register_NamedPolicyKind(NamedPolicyKind)

NamedPolicy = _ns_module.NamedPolicy
NamedPolicyData = _ns_module.NamedPolicyData
