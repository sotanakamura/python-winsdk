# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Management.Workplace")

class MessagingSyncPolicy(enum.IntEnum):
    DISALLOWED = 0
    ALLOWED = 1
    REQUIRED = 2

_ns_module._register_MessagingSyncPolicy(MessagingSyncPolicy)

MdmPolicy = _ns_module.MdmPolicy
WorkplaceSettings = _ns_module.WorkplaceSettings
