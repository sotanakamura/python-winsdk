# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.geolocation
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage
import winsdk.windows.storage.streams

class PhotoOrientation(enum.IntEnum):
    UNSPECIFIED = 0
    NORMAL = 1
    FLIP_HORIZONTAL = 2
    ROTATE180 = 3
    FLIP_VERTICAL = 4
    TRANSPOSE = 5
    ROTATE270 = 6
    TRANSVERSE = 7
    ROTATE90 = 8

class PropertyPrefetchOptions(enum.IntFlag):
    NONE = 0
    MUSIC_PROPERTIES = 0x1
    VIDEO_PROPERTIES = 0x2
    IMAGE_PROPERTIES = 0x4
    DOCUMENT_PROPERTIES = 0x8
    BASIC_PROPERTIES = 0x10

class ThumbnailMode(enum.IntEnum):
    PICTURES_VIEW = 0
    VIDEOS_VIEW = 1
    MUSIC_VIEW = 2
    DOCUMENTS_VIEW = 3
    LIST_VIEW = 4
    SINGLE_ITEM = 5

class ThumbnailOptions(enum.IntFlag):
    NONE = 0
    RETURN_ONLY_IF_CACHED = 0x1
    RESIZE_THUMBNAIL = 0x2
    USE_CURRENT_SCALE = 0x4

class ThumbnailType(enum.IntEnum):
    IMAGE = 0
    ICON = 1

class VideoOrientation(enum.IntEnum):
    NORMAL = 0
    ROTATE90 = 90
    ROTATE180 = 180
    ROTATE270 = 270

Self = typing.TypeVar('Self')

class BasicProperties(_winrt.Object):
    date_modified: datetime.datetime
    item_date: datetime.datetime
    size: _winrt.UInt64
    @staticmethod
    def _from(obj: _winrt.Object) -> BasicProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, _winrt.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class DocumentProperties(_winrt.Object):
    title: str
    comment: str
    author: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    keywords: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> DocumentProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, _winrt.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class GeotagHelper(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> GeotagHelper: ...
    @staticmethod
    def get_geotag_async(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.devices.geolocation.Geopoint]: ...
    @staticmethod
    def set_geotag_async(file: typing.Optional[winsdk.windows.storage.IStorageFile], geopoint: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def set_geotag_from_geolocator_async(file: typing.Optional[winsdk.windows.storage.IStorageFile], geolocator: typing.Optional[winsdk.windows.devices.geolocation.Geolocator]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ImageProperties(_winrt.Object):
    title: str
    rating: _winrt.UInt32
    date_taken: datetime.datetime
    camera_model: str
    camera_manufacturer: str
    height: _winrt.UInt32
    keywords: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    latitude: typing.Optional[typing.Optional[_winrt.Double]]
    longitude: typing.Optional[typing.Optional[_winrt.Double]]
    orientation: PhotoOrientation
    people_names: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    width: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ImageProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, _winrt.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class MusicProperties(_winrt.Object):
    year: _winrt.UInt32
    track_number: _winrt.UInt32
    title: str
    subtitle: str
    rating: _winrt.UInt32
    publisher: str
    artist: str
    album_artist: str
    album: str
    bitrate: _winrt.UInt32
    composers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    conductors: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    duration: datetime.timedelta
    genre: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    producers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    writers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> MusicProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, _winrt.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class StorageItemContentProperties(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> StorageItemContentProperties: ...
    def get_document_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[DocumentProperties]: ...
    def get_image_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[ImageProperties]: ...
    def get_music_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[MusicProperties]: ...
    def get_video_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[VideoProperties]: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, _winrt.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class StorageItemThumbnail(_winrt.Object):
    original_height: _winrt.UInt32
    original_width: _winrt.UInt32
    returned_smaller_cached_size: _winrt.Boolean
    type: ThumbnailType
    content_type: str
    size: _winrt.UInt64
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> StorageItemThumbnail: ...
    def clone_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], count: _winrt.UInt32, options: winsdk.windows.storage.streams.InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class VideoProperties(_winrt.Object):
    year: _winrt.UInt32
    title: str
    subtitle: str
    rating: _winrt.UInt32
    publisher: str
    bitrate: _winrt.UInt32
    directors: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    duration: datetime.timedelta
    height: _winrt.UInt32
    keywords: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    latitude: typing.Optional[typing.Optional[_winrt.Double]]
    longitude: typing.Optional[typing.Optional[_winrt.Double]]
    orientation: VideoOrientation
    producers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    width: _winrt.UInt32
    writers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, _winrt.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class IStorageItemExtraProperties(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IStorageItemExtraProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, _winrt.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

