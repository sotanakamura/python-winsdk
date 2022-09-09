# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation.collections

Self = typing.TypeVar('Self')

class CharacterGrouping(_winrt.Object):
    first: str
    label: str
    @staticmethod
    def _from(obj: _winrt.Object) -> CharacterGrouping: ...

class CharacterGroupings(_winrt.Object, typing.Sequence[CharacterGrouping]):
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> CharacterGrouping: ...
    @typing.overload
    def __getitem__(self, index: slice) -> typing.Sequence[CharacterGrouping]: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> CharacterGroupings: ...
    @typing.overload
    def __new__(cls: typing.Type[CharacterGroupings], language: str) -> CharacterGroupings:...
    @typing.overload
    def __new__(cls: typing.Type[CharacterGroupings]) -> CharacterGroupings:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[CharacterGrouping]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[CharacterGrouping]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[CharacterGrouping]]: ...
    def index_of(self, value: typing.Optional[CharacterGrouping]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...
    def lookup(self, text: str) -> str: ...

