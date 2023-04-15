# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.activation
import winsdk.windows.foundation.numerics
import winsdk.windows.perception.spatial

Self = typing.TypeVar('Self')

class HolographicApplicationPreview(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HolographicApplicationPreview: ...
    @staticmethod
    def is_current_view_presented_on_holographic_display() -> winsdk.system.Boolean: ...
    @staticmethod
    def is_holographic_activation(activated_event_args: typing.Optional[winsdk.windows.applicationmodel.activation.IActivatedEventArgs]) -> winsdk.system.Boolean: ...

class HolographicKeyboardPlacementOverridePreview(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HolographicKeyboardPlacementOverridePreview: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[HolographicKeyboardPlacementOverridePreview]: ...
    def reset_placement_override(self) -> None: ...
    @typing.overload
    def set_placement_override(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], top_center_position: winsdk.windows.foundation.numerics.Vector3, normal: winsdk.windows.foundation.numerics.Vector3) -> None: ...
    @typing.overload
    def set_placement_override(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], top_center_position: winsdk.windows.foundation.numerics.Vector3, normal: winsdk.windows.foundation.numerics.Vector3, max_size: winsdk.windows.foundation.numerics.Vector2) -> None: ...

