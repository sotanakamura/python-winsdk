# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Storage.Streams")

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
    import winsdk.windows.system
except ImportError:
    pass

class ByteOrder(enum.IntEnum):
    LITTLE_ENDIAN = 0
    BIG_ENDIAN = 1

class FileOpenDisposition(enum.IntEnum):
    OPEN_EXISTING = 0
    OPEN_ALWAYS = 1
    CREATE_NEW = 2
    CREATE_ALWAYS = 3
    TRUNCATE_EXISTING = 4

class InputStreamOptions(enum.IntFlag):
    NONE = 0
    PARTIAL = 0x1
    READ_AHEAD = 0x2

class UnicodeEncoding(enum.IntEnum):
    UTF8 = 0
    UTF16_L_E = 1
    UTF16_B_E = 2

_ns_module._register_ByteOrder(ByteOrder)
_ns_module._register_FileOpenDisposition(FileOpenDisposition)
_ns_module._register_InputStreamOptions(InputStreamOptions)
_ns_module._register_UnicodeEncoding(UnicodeEncoding)

Buffer = _ns_module.Buffer
DataReader = _ns_module.DataReader
DataReaderLoadOperation = _ns_module.DataReaderLoadOperation
DataWriter = _ns_module.DataWriter
DataWriterStoreOperation = _ns_module.DataWriterStoreOperation
FileInputStream = _ns_module.FileInputStream
FileOutputStream = _ns_module.FileOutputStream
FileRandomAccessStream = _ns_module.FileRandomAccessStream
InMemoryRandomAccessStream = _ns_module.InMemoryRandomAccessStream
InputStreamOverStream = _ns_module.InputStreamOverStream
OutputStreamOverStream = _ns_module.OutputStreamOverStream
RandomAccessStream = _ns_module.RandomAccessStream
RandomAccessStreamOverStream = _ns_module.RandomAccessStreamOverStream
RandomAccessStreamReference = _ns_module.RandomAccessStreamReference
IBuffer = _ns_module.IBuffer
IContentTypeProvider = _ns_module.IContentTypeProvider
IDataReader = _ns_module.IDataReader
IDataWriter = _ns_module.IDataWriter
IInputStream = _ns_module.IInputStream
IInputStreamReference = _ns_module.IInputStreamReference
IOutputStream = _ns_module.IOutputStream
IPropertySetSerializer = _ns_module.IPropertySetSerializer
IRandomAccessStream = _ns_module.IRandomAccessStream
IRandomAccessStreamReference = _ns_module.IRandomAccessStreamReference
IRandomAccessStreamWithContentType = _ns_module.IRandomAccessStreamWithContentType
