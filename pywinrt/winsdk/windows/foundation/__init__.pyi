# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation.collections

class AsyncStatus(enum.IntEnum):
    CANCELED = 2
    COMPLETED = 1
    ERROR = 3
    STARTED = 0

class PropertyType(enum.IntEnum):
    EMPTY = 0
    UINT8 = 1
    INT16 = 2
    UINT16 = 3
    INT32 = 4
    UINT32 = 5
    INT64 = 6
    UINT64 = 7
    SINGLE = 8
    DOUBLE = 9
    CHAR16 = 10
    BOOLEAN = 11
    STRING = 12
    INSPECTABLE = 13
    DATE_TIME = 14
    TIME_SPAN = 15
    GUID = 16
    POINT = 17
    SIZE = 18
    RECT = 19
    OTHER_TYPE = 20
    UINT8_ARRAY = 1025
    INT16_ARRAY = 1026
    UINT16_ARRAY = 1027
    INT32_ARRAY = 1028
    UINT32_ARRAY = 1029
    INT64_ARRAY = 1030
    UINT64_ARRAY = 1031
    SINGLE_ARRAY = 1032
    DOUBLE_ARRAY = 1033
    CHAR16_ARRAY = 1034
    BOOLEAN_ARRAY = 1035
    STRING_ARRAY = 1036
    INSPECTABLE_ARRAY = 1037
    DATE_TIME_ARRAY = 1038
    TIME_SPAN_ARRAY = 1039
    GUID_ARRAY = 1040
    POINT_ARRAY = 1041
    SIZE_ARRAY = 1042
    RECT_ARRAY = 1043
    OTHER_TYPE_ARRAY = 1044

Self = typing.TypeVar('Self')
T = typing.TypeVar('T')
TProgress = typing.TypeVar('TProgress')
TResult = typing.TypeVar('TResult')
TSender = typing.TypeVar('TSender')

class EventRegistrationToken:
    value: winsdk.system.Int64
    def __new__(cls: typing.Type[EventRegistrationToken], value: winsdk.system.Int64) -> EventRegistrationToken: ...

class HResult:
    value: winsdk.system.Int32
    def __new__(cls: typing.Type[HResult], value: winsdk.system.Int32) -> HResult: ...

class Point:
    x: winsdk.system.Single
    y: winsdk.system.Single
    def __new__(cls: typing.Type[Point], x: winsdk.system.Single, y: winsdk.system.Single) -> Point: ...

class Rect:
    x: winsdk.system.Single
    y: winsdk.system.Single
    width: winsdk.system.Single
    height: winsdk.system.Single
    def __new__(cls: typing.Type[Rect], x: winsdk.system.Single, y: winsdk.system.Single, width: winsdk.system.Single, height: winsdk.system.Single) -> Rect: ...

class Size:
    width: winsdk.system.Single
    height: winsdk.system.Single
    def __new__(cls: typing.Type[Size], width: winsdk.system.Single, height: winsdk.system.Single) -> Size: ...

class Deferral(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Deferral: ...
    def __new__(cls: typing.Type[Deferral], handler: typing.Optional[DeferralCompletedHandler]) -> Deferral:...
    def close(self) -> None: ...
    def complete(self) -> None: ...

class GuidHelper(winsdk.system.Object):
    empty: typing.ClassVar[winsdk.system.Guid]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GuidHelper: ...
    @staticmethod
    def create_new_guid() -> winsdk.system.Guid: ...
    @staticmethod
    def equals(target: winsdk.system.Guid, value: winsdk.system.Guid) -> winsdk.system.Boolean: ...

class MemoryBuffer(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MemoryBuffer: ...
    def __new__(cls: typing.Type[MemoryBuffer], capacity: winsdk.system.UInt32) -> MemoryBuffer:...
    def close(self) -> None: ...
    def create_reference(self) -> typing.Optional[IMemoryBufferReference]: ...

class PropertyValue(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PropertyValue: ...
    @staticmethod
    def create_boolean(value: winsdk.system.Boolean) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_boolean_array(value: winsdk.system.Array[winsdk.system.Boolean]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_char16(value: winsdk.system.Char16) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_char16_array(value: winsdk.system.Array[winsdk.system.Char16]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_date_time(value: datetime.datetime) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_date_time_array(value: winsdk.system.Array[datetime.datetime]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_double(value: winsdk.system.Double) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_double_array(value: winsdk.system.Array[winsdk.system.Double]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_empty() -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_guid(value: winsdk.system.Guid) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_guid_array(value: winsdk.system.Array[winsdk.system.Guid]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_inspectable(value: typing.Optional[winsdk.system.Object]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_inspectable_array(value: winsdk.system.Array[winsdk.system.Object]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_int16(value: winsdk.system.Int16) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_int16_array(value: winsdk.system.Array[winsdk.system.Int16]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_int32(value: winsdk.system.Int32) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_int32_array(value: winsdk.system.Array[winsdk.system.Int32]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_int64(value: winsdk.system.Int64) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_int64_array(value: winsdk.system.Array[winsdk.system.Int64]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_point(value: Point) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_point_array(value: winsdk.system.Array[Point]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_rect(value: Rect) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_rect_array(value: winsdk.system.Array[Rect]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_single(value: winsdk.system.Single) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_single_array(value: winsdk.system.Array[winsdk.system.Single]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_size(value: Size) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_size_array(value: winsdk.system.Array[Size]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_string(value: str) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_string_array(value: winsdk.system.Array[str]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_time_span(value: datetime.timedelta) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_time_span_array(value: winsdk.system.Array[datetime.timedelta]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint16(value: winsdk.system.UInt16) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint16_array(value: winsdk.system.Array[winsdk.system.UInt16]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint32(value: winsdk.system.UInt32) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint32_array(value: winsdk.system.Array[winsdk.system.UInt32]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint64(value: winsdk.system.UInt64) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint64_array(value: winsdk.system.Array[winsdk.system.UInt64]) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint8(value: winsdk.system.UInt8) -> typing.Optional[winsdk.system.Object]: ...
    @staticmethod
    def create_uint8_array(value: winsdk.system.Array[winsdk.system.UInt8]) -> typing.Optional[winsdk.system.Object]: ...

class Uri(winsdk.system.Object):
    absolute_uri: str
    display_uri: str
    domain: str
    extension: str
    fragment: str
    host: str
    password: str
    path: str
    port: winsdk.system.Int32
    query: str
    query_parsed: typing.Optional[WwwFormUrlDecoder]
    raw_uri: str
    scheme_name: str
    suspicious: winsdk.system.Boolean
    user_name: str
    absolute_canonical_uri: str
    display_iri: str
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Uri: ...
    @typing.overload
    def __new__(cls: typing.Type[Uri], uri: str) -> Uri:...
    @typing.overload
    def __new__(cls: typing.Type[Uri], base_uri: str, relative_uri: str) -> Uri:...
    def combine_uri(self, relative_uri: str) -> typing.Optional[Uri]: ...
    def equals(self, p_uri: typing.Optional[Uri]) -> winsdk.system.Boolean: ...
    @staticmethod
    def escape_component(to_escape: str) -> str: ...
    def to_string(self) -> str: ...
    @staticmethod
    def unescape_component(to_unescape: str) -> str: ...

class WwwFormUrlDecoder(winsdk.system.Object, typing.Sequence[IWwwFormUrlDecoderEntry]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> IWwwFormUrlDecoderEntry: ...
    @typing.overload
    def __getitem__(self, index: slice) -> winsdk.system.Array[IWwwFormUrlDecoderEntry]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WwwFormUrlDecoder: ...
    def __new__(cls: typing.Type[WwwFormUrlDecoder], query: str) -> WwwFormUrlDecoder:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IWwwFormUrlDecoderEntry]]: ...
    def get_at(self, index: winsdk.system.UInt32) -> typing.Optional[IWwwFormUrlDecoderEntry]: ...
    def get_first_value_by_name(self, name: str) -> str: ...
    def get_many(self, start_index: winsdk.system.UInt32, items: winsdk.system.Array[IWwwFormUrlDecoderEntry]) -> winsdk.system.UInt32: ...
    def index_of(self, value: typing.Optional[IWwwFormUrlDecoderEntry]) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt32]: ...

class WwwFormUrlDecoderEntry(winsdk.system.Object):
    name: str
    value: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WwwFormUrlDecoderEntry: ...

class IAsyncAction(winsdk.system.Object):
    completed: typing.Optional[AsyncActionCompletedHandler]
    error_code: HResult
    id: winsdk.system.UInt32
    status: AsyncStatus
    def __await__(self) -> typing.Generator[typing.Any, None, None]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IAsyncAction: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> None: ...

class IAsyncActionWithProgress(winsdk.system.Object, typing.Generic[TProgress]):
    progress: typing.Optional[AsyncActionProgressHandler[TProgress]]
    completed: typing.Optional[AsyncActionWithProgressCompletedHandler[TProgress]]
    error_code: HResult
    id: winsdk.system.UInt32
    status: AsyncStatus
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __await__(self) -> typing.Generator[typing.Any, None, None]: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> None: ...

class IAsyncInfo(winsdk.system.Object):
    error_code: HResult
    id: winsdk.system.UInt32
    status: AsyncStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IAsyncInfo: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...

class IAsyncOperationWithProgress(winsdk.system.Object, typing.Generic[TResult, TProgress]):
    progress: typing.Optional[AsyncOperationProgressHandler[TResult, TProgress]]
    completed: typing.Optional[AsyncOperationWithProgressCompletedHandler[TResult, TProgress]]
    error_code: HResult
    id: winsdk.system.UInt32
    status: AsyncStatus
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __await__(self) -> typing.Generator[typing.Any, None, TResult]: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> typing.Optional[TResult]: ...

class IAsyncOperation(winsdk.system.Object, typing.Generic[TResult]):
    completed: typing.Optional[AsyncOperationCompletedHandler[TResult]]
    error_code: HResult
    id: winsdk.system.UInt32
    status: AsyncStatus
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __await__(self) -> typing.Generator[typing.Any, None, TResult]: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> typing.Optional[TResult]: ...

class IClosable(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IClosable: ...
    def close(self) -> None: ...

class IGetActivationFactory(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IGetActivationFactory: ...
    def get_activation_factory(self, activatable_class_id: str) -> typing.Optional[winsdk.system.Object]: ...

class IMemoryBuffer(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IMemoryBuffer: ...
    def close(self) -> None: ...
    def create_reference(self) -> typing.Optional[IMemoryBufferReference]: ...

class IMemoryBufferReference(winsdk.system.Object):
    capacity: winsdk.system.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __bytes__(self) -> bytes: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IMemoryBufferReference: ...
    def close(self) -> None: ...
    def add_closed(self, handler: TypedEventHandler[IMemoryBufferReference, winsdk.system.Object]) -> EventRegistrationToken: ...
    def remove_closed(self, cookie: EventRegistrationToken) -> None: ...

class IPropertyValue(winsdk.system.Object):
    is_numeric_scalar: winsdk.system.Boolean
    type: PropertyType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPropertyValue: ...
    def get_boolean(self) -> winsdk.system.Boolean: ...
    def get_boolean_array(self) -> winsdk.system.Array[winsdk.system.Boolean]: ...
    def get_char16(self) -> winsdk.system.Char16: ...
    def get_char16_array(self) -> winsdk.system.Array[winsdk.system.Char16]: ...
    def get_date_time(self) -> datetime.datetime: ...
    def get_date_time_array(self) -> winsdk.system.Array[datetime.datetime]: ...
    def get_double(self) -> winsdk.system.Double: ...
    def get_double_array(self) -> winsdk.system.Array[winsdk.system.Double]: ...
    def get_guid(self) -> winsdk.system.Guid: ...
    def get_guid_array(self) -> winsdk.system.Array[winsdk.system.Guid]: ...
    def get_inspectable_array(self) -> winsdk.system.Array[winsdk.system.Object]: ...
    def get_int16(self) -> winsdk.system.Int16: ...
    def get_int16_array(self) -> winsdk.system.Array[winsdk.system.Int16]: ...
    def get_int32(self) -> winsdk.system.Int32: ...
    def get_int32_array(self) -> winsdk.system.Array[winsdk.system.Int32]: ...
    def get_int64(self) -> winsdk.system.Int64: ...
    def get_int64_array(self) -> winsdk.system.Array[winsdk.system.Int64]: ...
    def get_point(self) -> Point: ...
    def get_point_array(self) -> winsdk.system.Array[Point]: ...
    def get_rect(self) -> Rect: ...
    def get_rect_array(self) -> winsdk.system.Array[Rect]: ...
    def get_single(self) -> winsdk.system.Single: ...
    def get_single_array(self) -> winsdk.system.Array[winsdk.system.Single]: ...
    def get_size(self) -> Size: ...
    def get_size_array(self) -> winsdk.system.Array[Size]: ...
    def get_string(self) -> str: ...
    def get_string_array(self) -> winsdk.system.Array[str]: ...
    def get_time_span(self) -> datetime.timedelta: ...
    def get_time_span_array(self) -> winsdk.system.Array[datetime.timedelta]: ...
    def get_uint16(self) -> winsdk.system.UInt16: ...
    def get_uint16_array(self) -> winsdk.system.Array[winsdk.system.UInt16]: ...
    def get_uint32(self) -> winsdk.system.UInt32: ...
    def get_uint32_array(self) -> winsdk.system.Array[winsdk.system.UInt32]: ...
    def get_uint64(self) -> winsdk.system.UInt64: ...
    def get_uint64_array(self) -> winsdk.system.Array[winsdk.system.UInt64]: ...
    def get_uint8(self) -> winsdk.system.UInt8: ...
    def get_uint8_array(self) -> winsdk.system.Array[winsdk.system.UInt8]: ...

class IReferenceArray(winsdk.system.Object, typing.Generic[T]):
    value: typing.Optional[T]
    is_numeric_scalar: winsdk.system.Boolean
    type: PropertyType
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def get_boolean(self) -> winsdk.system.Boolean: ...
    def get_boolean_array(self) -> winsdk.system.Array[winsdk.system.Boolean]: ...
    def get_char16(self) -> winsdk.system.Char16: ...
    def get_char16_array(self) -> winsdk.system.Array[winsdk.system.Char16]: ...
    def get_date_time(self) -> datetime.datetime: ...
    def get_date_time_array(self) -> winsdk.system.Array[datetime.datetime]: ...
    def get_double(self) -> winsdk.system.Double: ...
    def get_double_array(self) -> winsdk.system.Array[winsdk.system.Double]: ...
    def get_guid(self) -> winsdk.system.Guid: ...
    def get_guid_array(self) -> winsdk.system.Array[winsdk.system.Guid]: ...
    def get_inspectable_array(self) -> winsdk.system.Array[winsdk.system.Object]: ...
    def get_int16(self) -> winsdk.system.Int16: ...
    def get_int16_array(self) -> winsdk.system.Array[winsdk.system.Int16]: ...
    def get_int32(self) -> winsdk.system.Int32: ...
    def get_int32_array(self) -> winsdk.system.Array[winsdk.system.Int32]: ...
    def get_int64(self) -> winsdk.system.Int64: ...
    def get_int64_array(self) -> winsdk.system.Array[winsdk.system.Int64]: ...
    def get_point(self) -> Point: ...
    def get_point_array(self) -> winsdk.system.Array[Point]: ...
    def get_rect(self) -> Rect: ...
    def get_rect_array(self) -> winsdk.system.Array[Rect]: ...
    def get_single(self) -> winsdk.system.Single: ...
    def get_single_array(self) -> winsdk.system.Array[winsdk.system.Single]: ...
    def get_size(self) -> Size: ...
    def get_size_array(self) -> winsdk.system.Array[Size]: ...
    def get_string(self) -> str: ...
    def get_string_array(self) -> winsdk.system.Array[str]: ...
    def get_time_span(self) -> datetime.timedelta: ...
    def get_time_span_array(self) -> winsdk.system.Array[datetime.timedelta]: ...
    def get_uint16(self) -> winsdk.system.UInt16: ...
    def get_uint16_array(self) -> winsdk.system.Array[winsdk.system.UInt16]: ...
    def get_uint32(self) -> winsdk.system.UInt32: ...
    def get_uint32_array(self) -> winsdk.system.Array[winsdk.system.UInt32]: ...
    def get_uint64(self) -> winsdk.system.UInt64: ...
    def get_uint64_array(self) -> winsdk.system.Array[winsdk.system.UInt64]: ...
    def get_uint8(self) -> winsdk.system.UInt8: ...
    def get_uint8_array(self) -> winsdk.system.Array[winsdk.system.UInt8]: ...

class IReference(winsdk.system.Object, typing.Generic[T]):
    value: typing.Optional[T]
    is_numeric_scalar: winsdk.system.Boolean
    type: PropertyType
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def get_boolean(self) -> winsdk.system.Boolean: ...
    def get_boolean_array(self) -> winsdk.system.Array[winsdk.system.Boolean]: ...
    def get_char16(self) -> winsdk.system.Char16: ...
    def get_char16_array(self) -> winsdk.system.Array[winsdk.system.Char16]: ...
    def get_date_time(self) -> datetime.datetime: ...
    def get_date_time_array(self) -> winsdk.system.Array[datetime.datetime]: ...
    def get_double(self) -> winsdk.system.Double: ...
    def get_double_array(self) -> winsdk.system.Array[winsdk.system.Double]: ...
    def get_guid(self) -> winsdk.system.Guid: ...
    def get_guid_array(self) -> winsdk.system.Array[winsdk.system.Guid]: ...
    def get_inspectable_array(self) -> winsdk.system.Array[winsdk.system.Object]: ...
    def get_int16(self) -> winsdk.system.Int16: ...
    def get_int16_array(self) -> winsdk.system.Array[winsdk.system.Int16]: ...
    def get_int32(self) -> winsdk.system.Int32: ...
    def get_int32_array(self) -> winsdk.system.Array[winsdk.system.Int32]: ...
    def get_int64(self) -> winsdk.system.Int64: ...
    def get_int64_array(self) -> winsdk.system.Array[winsdk.system.Int64]: ...
    def get_point(self) -> Point: ...
    def get_point_array(self) -> winsdk.system.Array[Point]: ...
    def get_rect(self) -> Rect: ...
    def get_rect_array(self) -> winsdk.system.Array[Rect]: ...
    def get_single(self) -> winsdk.system.Single: ...
    def get_single_array(self) -> winsdk.system.Array[winsdk.system.Single]: ...
    def get_size(self) -> Size: ...
    def get_size_array(self) -> winsdk.system.Array[Size]: ...
    def get_string(self) -> str: ...
    def get_string_array(self) -> winsdk.system.Array[str]: ...
    def get_time_span(self) -> datetime.timedelta: ...
    def get_time_span_array(self) -> winsdk.system.Array[datetime.timedelta]: ...
    def get_uint16(self) -> winsdk.system.UInt16: ...
    def get_uint16_array(self) -> winsdk.system.Array[winsdk.system.UInt16]: ...
    def get_uint32(self) -> winsdk.system.UInt32: ...
    def get_uint32_array(self) -> winsdk.system.Array[winsdk.system.UInt32]: ...
    def get_uint64(self) -> winsdk.system.UInt64: ...
    def get_uint64_array(self) -> winsdk.system.Array[winsdk.system.UInt64]: ...
    def get_uint8(self) -> winsdk.system.UInt8: ...
    def get_uint8_array(self) -> winsdk.system.Array[winsdk.system.UInt8]: ...

class IStringable(winsdk.system.Object):
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IStringable: ...
    def to_string(self) -> str: ...

class IWwwFormUrlDecoderEntry(winsdk.system.Object):
    name: str
    value: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IWwwFormUrlDecoderEntry: ...

AsyncActionCompletedHandler = typing.Callable[[IAsyncAction, AsyncStatus], None]

AsyncActionProgressHandler = typing.Callable[[IAsyncActionWithProgress[TProgress], typing.Optional[TProgress]], None]

AsyncActionWithProgressCompletedHandler = typing.Callable[[IAsyncActionWithProgress[TProgress], AsyncStatus], None]

AsyncOperationCompletedHandler = typing.Callable[[IAsyncOperation[TResult], AsyncStatus], None]

AsyncOperationProgressHandler = typing.Callable[[IAsyncOperationWithProgress[TResult, TProgress], typing.Optional[TProgress]], None]

AsyncOperationWithProgressCompletedHandler = typing.Callable[[IAsyncOperationWithProgress[TResult, TProgress], AsyncStatus], None]

DeferralCompletedHandler = typing.Callable[[], None]

EventHandler = typing.Callable[[typing.Optional[winsdk.system.Object], typing.Optional[T]], None]

TypedEventHandler = typing.Callable[[typing.Optional[TSender], typing.Optional[TResult]], None]

