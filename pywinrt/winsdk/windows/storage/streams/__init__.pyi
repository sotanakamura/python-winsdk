# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage
import winsdk.windows.system

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

Self = typing.TypeVar('Self')

class Buffer(winsdk.system.Object):
    length: winsdk.system.UInt32
    capacity: winsdk.system.UInt32
    def __bytes__(self) -> bytes: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Buffer: ...
    def __new__(cls: typing.Type[Buffer], capacity: winsdk.system.UInt32) -> Buffer:...
    @staticmethod
    def create_copy_from_memory_buffer(input: typing.Optional[winsdk.windows.foundation.IMemoryBuffer]) -> typing.Optional[Buffer]: ...
    @staticmethod
    def create_memory_buffer_over_i_buffer(input: typing.Optional[IBuffer]) -> typing.Optional[winsdk.windows.foundation.MemoryBuffer]: ...

class DataReader(winsdk.system.Object):
    unicode_encoding: UnicodeEncoding
    input_stream_options: InputStreamOptions
    byte_order: ByteOrder
    unconsumed_buffer_length: winsdk.system.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataReader: ...
    def __new__(cls: typing.Type[DataReader], input_stream: typing.Optional[IInputStream]) -> DataReader:...
    def close(self) -> None: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IInputStream]: ...
    @staticmethod
    def from_buffer(buffer: typing.Optional[IBuffer]) -> typing.Optional[DataReader]: ...
    def load_async(self, count: winsdk.system.UInt32) -> DataReaderLoadOperation: ...
    def read_boolean(self) -> winsdk.system.Boolean: ...
    def read_buffer(self, length: winsdk.system.UInt32) -> typing.Optional[IBuffer]: ...
    def read_byte(self) -> winsdk.system.UInt8: ...
    def read_bytes(self, value: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def read_date_time(self) -> datetime.datetime: ...
    def read_double(self) -> winsdk.system.Double: ...
    def read_guid(self) -> winsdk.system.Guid: ...
    def read_int16(self) -> winsdk.system.Int16: ...
    def read_int32(self) -> winsdk.system.Int32: ...
    def read_int64(self) -> winsdk.system.Int64: ...
    def read_single(self) -> winsdk.system.Single: ...
    def read_string(self, code_unit_count: winsdk.system.UInt32) -> str: ...
    def read_time_span(self) -> datetime.timedelta: ...
    def read_uint16(self) -> winsdk.system.UInt16: ...
    def read_uint32(self) -> winsdk.system.UInt32: ...
    def read_uint64(self) -> winsdk.system.UInt64: ...

class DataReaderLoadOperation(winsdk.system.Object):
    error_code: winsdk.windows.foundation.HResult
    id: winsdk.system.UInt32
    status: winsdk.windows.foundation.AsyncStatus
    completed: typing.Optional[winsdk.windows.foundation.AsyncOperationCompletedHandler[winsdk.system.UInt32]]
    def __await__(self) -> typing.Generator[typing.Any, None, winsdk.system.UInt32]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataReaderLoadOperation: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> winsdk.system.UInt32: ...

class DataWriter(winsdk.system.Object):
    unicode_encoding: UnicodeEncoding
    byte_order: ByteOrder
    unstored_buffer_length: winsdk.system.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataWriter: ...
    @typing.overload
    def __new__(cls: typing.Type[DataWriter], output_stream: typing.Optional[IOutputStream]) -> DataWriter:...
    @typing.overload
    def __new__(cls: typing.Type[DataWriter]) -> DataWriter:...
    def close(self) -> None: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IOutputStream]: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def measure_string(self, value: str) -> winsdk.system.UInt32: ...
    def store_async(self) -> DataWriterStoreOperation: ...
    def write_boolean(self, value: winsdk.system.Boolean) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer]) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer], start: winsdk.system.UInt32, count: winsdk.system.UInt32) -> None: ...
    def write_byte(self, value: winsdk.system.UInt8) -> None: ...
    def write_bytes(self, value: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def write_date_time(self, value: datetime.datetime) -> None: ...
    def write_double(self, value: winsdk.system.Double) -> None: ...
    def write_guid(self, value: winsdk.system.Guid) -> None: ...
    def write_int16(self, value: winsdk.system.Int16) -> None: ...
    def write_int32(self, value: winsdk.system.Int32) -> None: ...
    def write_int64(self, value: winsdk.system.Int64) -> None: ...
    def write_single(self, value: winsdk.system.Single) -> None: ...
    def write_string(self, value: str) -> winsdk.system.UInt32: ...
    def write_time_span(self, value: datetime.timedelta) -> None: ...
    def write_uint16(self, value: winsdk.system.UInt16) -> None: ...
    def write_uint32(self, value: winsdk.system.UInt32) -> None: ...
    def write_uint64(self, value: winsdk.system.UInt64) -> None: ...

class DataWriterStoreOperation(winsdk.system.Object):
    error_code: winsdk.windows.foundation.HResult
    id: winsdk.system.UInt32
    status: winsdk.windows.foundation.AsyncStatus
    completed: typing.Optional[winsdk.windows.foundation.AsyncOperationCompletedHandler[winsdk.system.UInt32]]
    def __await__(self) -> typing.Generator[typing.Any, None, winsdk.system.UInt32]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataWriterStoreOperation: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> winsdk.system.UInt32: ...

class FileInputStream(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FileInputStream: ...
    def close(self) -> None: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...

class FileOutputStream(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FileOutputStream: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class FileRandomAccessStream(winsdk.system.Object):
    size: winsdk.system.UInt64
    can_read: winsdk.system.Boolean
    can_write: winsdk.system.Boolean
    position: winsdk.system.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FileRandomAccessStream: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def get_input_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IOutputStream]: ...
    @typing.overload
    @staticmethod
    def open_async(file_path: str, access_mode: winsdk.windows.storage.FileAccessMode) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_async(file_path: str, access_mode: winsdk.windows.storage.FileAccessMode, sharing_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str, access_mode: winsdk.windows.storage.FileAccessMode) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str, access_mode: winsdk.windows.storage.FileAccessMode, sharing_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_async(file_path: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_async(file_path: str, open_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str, open_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...
    def seek(self, position: winsdk.system.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class InMemoryRandomAccessStream(winsdk.system.Object):
    size: winsdk.system.UInt64
    can_read: winsdk.system.Boolean
    can_write: winsdk.system.Boolean
    position: winsdk.system.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InMemoryRandomAccessStream: ...
    def __new__(cls: typing.Type[InMemoryRandomAccessStream]) -> InMemoryRandomAccessStream:...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def get_input_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...
    def seek(self, position: winsdk.system.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class InputStreamOverStream(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InputStreamOverStream: ...
    def close(self) -> None: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...

class OutputStreamOverStream(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OutputStreamOverStream: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class RandomAccessStream(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RandomAccessStream: ...
    @staticmethod
    def copy_and_close_async(source: typing.Optional[IInputStream], destination: typing.Optional[IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    @typing.overload
    @staticmethod
    def copy_async(source: typing.Optional[IInputStream], destination: typing.Optional[IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    @typing.overload
    @staticmethod
    def copy_async(source: typing.Optional[IInputStream], destination: typing.Optional[IOutputStream], bytes_to_copy: winsdk.system.UInt64) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

class RandomAccessStreamOverStream(winsdk.system.Object):
    size: winsdk.system.UInt64
    can_read: winsdk.system.Boolean
    can_write: winsdk.system.Boolean
    position: winsdk.system.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RandomAccessStreamOverStream: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def get_input_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...
    def seek(self, position: winsdk.system.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class RandomAccessStreamReference(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RandomAccessStreamReference: ...
    @staticmethod
    def create_from_file(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[RandomAccessStreamReference]: ...
    @staticmethod
    def create_from_stream(stream: typing.Optional[IRandomAccessStream]) -> typing.Optional[RandomAccessStreamReference]: ...
    @staticmethod
    def create_from_uri(uri: typing.Optional[winsdk.windows.foundation.Uri]) -> typing.Optional[RandomAccessStreamReference]: ...
    def open_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStreamWithContentType]: ...

class IBuffer(winsdk.system.Object):
    capacity: winsdk.system.UInt32
    length: winsdk.system.UInt32
    def __bytes__(self) -> bytes: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBuffer: ...

class IContentTypeProvider(winsdk.system.Object):
    content_type: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IContentTypeProvider: ...

class IDataReader(winsdk.system.Object):
    byte_order: ByteOrder
    input_stream_options: InputStreamOptions
    unconsumed_buffer_length: winsdk.system.UInt32
    unicode_encoding: UnicodeEncoding
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IDataReader: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IInputStream]: ...
    def load_async(self, count: winsdk.system.UInt32) -> DataReaderLoadOperation: ...
    def read_boolean(self) -> winsdk.system.Boolean: ...
    def read_buffer(self, length: winsdk.system.UInt32) -> typing.Optional[IBuffer]: ...
    def read_byte(self) -> winsdk.system.UInt8: ...
    def read_bytes(self, value: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def read_date_time(self) -> datetime.datetime: ...
    def read_double(self) -> winsdk.system.Double: ...
    def read_guid(self) -> winsdk.system.Guid: ...
    def read_int16(self) -> winsdk.system.Int16: ...
    def read_int32(self) -> winsdk.system.Int32: ...
    def read_int64(self) -> winsdk.system.Int64: ...
    def read_single(self) -> winsdk.system.Single: ...
    def read_string(self, code_unit_count: winsdk.system.UInt32) -> str: ...
    def read_time_span(self) -> datetime.timedelta: ...
    def read_uint16(self) -> winsdk.system.UInt16: ...
    def read_uint32(self) -> winsdk.system.UInt32: ...
    def read_uint64(self) -> winsdk.system.UInt64: ...

class IDataWriter(winsdk.system.Object):
    byte_order: ByteOrder
    unicode_encoding: UnicodeEncoding
    unstored_buffer_length: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IDataWriter: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IOutputStream]: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def measure_string(self, value: str) -> winsdk.system.UInt32: ...
    def store_async(self) -> DataWriterStoreOperation: ...
    def write_boolean(self, value: winsdk.system.Boolean) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer]) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer], start: winsdk.system.UInt32, count: winsdk.system.UInt32) -> None: ...
    def write_byte(self, value: winsdk.system.UInt8) -> None: ...
    def write_bytes(self, value: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def write_date_time(self, value: datetime.datetime) -> None: ...
    def write_double(self, value: winsdk.system.Double) -> None: ...
    def write_guid(self, value: winsdk.system.Guid) -> None: ...
    def write_int16(self, value: winsdk.system.Int16) -> None: ...
    def write_int32(self, value: winsdk.system.Int32) -> None: ...
    def write_int64(self, value: winsdk.system.Int64) -> None: ...
    def write_single(self, value: winsdk.system.Single) -> None: ...
    def write_string(self, value: str) -> winsdk.system.UInt32: ...
    def write_time_span(self, value: datetime.timedelta) -> None: ...
    def write_uint16(self, value: winsdk.system.UInt16) -> None: ...
    def write_uint32(self, value: winsdk.system.UInt32) -> None: ...
    def write_uint64(self, value: winsdk.system.UInt64) -> None: ...

class IInputStream(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IInputStream: ...
    def close(self) -> None: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...

class IInputStreamReference(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IInputStreamReference: ...
    def open_sequential_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[IInputStream]: ...

class IOutputStream(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IOutputStream: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class IPropertySetSerializer(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPropertySetSerializer: ...
    def deserialize(self, property_set: typing.Optional[winsdk.windows.foundation.collections.IPropertySet], buffer: typing.Optional[IBuffer]) -> None: ...
    def serialize(self, property_set: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> typing.Optional[IBuffer]: ...

class IRandomAccessStream(winsdk.system.Object):
    can_read: winsdk.system.Boolean
    can_write: winsdk.system.Boolean
    position: winsdk.system.UInt64
    size: winsdk.system.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IRandomAccessStream: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def get_input_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...
    def seek(self, position: winsdk.system.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class IRandomAccessStreamReference(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IRandomAccessStreamReference: ...
    def open_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStreamWithContentType]: ...

class IRandomAccessStreamWithContentType(winsdk.system.Object):
    can_read: winsdk.system.Boolean
    can_write: winsdk.system.Boolean
    position: winsdk.system.UInt64
    size: winsdk.system.UInt64
    content_type: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IRandomAccessStreamWithContentType: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def get_input_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: winsdk.system.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, winsdk.system.UInt32]: ...
    def seek(self, position: winsdk.system.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

