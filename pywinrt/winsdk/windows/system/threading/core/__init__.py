# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.System.Threading.Core")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.system.threading
except ImportError:
    pass


PreallocatedWorkItem = _ns_module.PreallocatedWorkItem
SignalNotifier = _ns_module.SignalNotifier
