# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Data.Pdf")

try:
    import winsdk.windows.foundation
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

class PdfPageRotation(enum.IntEnum):
    NORMAL = 0
    ROTATE90 = 1
    ROTATE180 = 2
    ROTATE270 = 3

_ns_module._register_PdfPageRotation(PdfPageRotation)

PdfDocument = _ns_module.PdfDocument
PdfPage = _ns_module.PdfPage
PdfPageDimensions = _ns_module.PdfPageDimensions
PdfPageRenderOptions = _ns_module.PdfPageRenderOptions
