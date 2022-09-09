# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.applicationmodel.datatransfer
import winsdk.windows.applicationmodel.datatransfer.dragdrop
import winsdk.windows.foundation
import winsdk.windows.graphics.imaging

class CoreDragUIContentMode(enum.IntFlag):
    AUTO = 0
    DEFERRED = 0x1

Self = typing.TypeVar('Self')

class CoreDragDropManager(_winrt.Object):
    are_concurrent_operations_enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreDragDropManager: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[CoreDragDropManager]: ...
    def add_target_requested(self, value: winsdk.windows.foundation.TypedEventHandler[CoreDragDropManager, CoreDropOperationTargetRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_target_requested(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CoreDragInfo(_winrt.Object):
    data: typing.Optional[winsdk.windows.applicationmodel.datatransfer.DataPackageView]
    modifiers: winsdk.windows.applicationmodel.datatransfer.dragdrop.DragDropModifiers
    position: winsdk.windows.foundation.Point
    allowed_operations: winsdk.windows.applicationmodel.datatransfer.DataPackageOperation
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreDragInfo: ...

class CoreDragOperation(_winrt.Object):
    drag_u_i_content_mode: CoreDragUIContentMode
    data: typing.Optional[winsdk.windows.applicationmodel.datatransfer.DataPackage]
    allowed_operations: winsdk.windows.applicationmodel.datatransfer.DataPackageOperation
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreDragOperation: ...
    def __new__(cls: typing.Type[CoreDragOperation]) -> CoreDragOperation:...
    @typing.overload
    def set_drag_u_i_content_from_software_bitmap(self, software_bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]) -> None: ...
    @typing.overload
    def set_drag_u_i_content_from_software_bitmap(self, software_bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap], anchor_point: winsdk.windows.foundation.Point) -> None: ...
    def set_pointer_id(self, pointer_id: _winrt.UInt32) -> None: ...
    def start_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.applicationmodel.datatransfer.DataPackageOperation]: ...

class CoreDragUIOverride(_winrt.Object):
    is_glyph_visible: _winrt.Boolean
    is_content_visible: _winrt.Boolean
    is_caption_visible: _winrt.Boolean
    caption: str
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreDragUIOverride: ...
    def clear(self) -> None: ...
    @typing.overload
    def set_content_from_software_bitmap(self, software_bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]) -> None: ...
    @typing.overload
    def set_content_from_software_bitmap(self, software_bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap], anchor_point: winsdk.windows.foundation.Point) -> None: ...

class CoreDropOperationTargetRequestedEventArgs(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreDropOperationTargetRequestedEventArgs: ...
    def set_target(self, target: typing.Optional[ICoreDropOperationTarget]) -> None: ...

class ICoreDropOperationTarget(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ICoreDropOperationTarget: ...
    def drop_async(self, drag_info: typing.Optional[CoreDragInfo]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.applicationmodel.datatransfer.DataPackageOperation]: ...
    def enter_async(self, drag_info: typing.Optional[CoreDragInfo], drag_u_i_override: typing.Optional[CoreDragUIOverride]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.applicationmodel.datatransfer.DataPackageOperation]: ...
    def leave_async(self, drag_info: typing.Optional[CoreDragInfo]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def over_async(self, drag_info: typing.Optional[CoreDragInfo], drag_u_i_override: typing.Optional[CoreDragUIOverride]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.applicationmodel.datatransfer.DataPackageOperation]: ...

