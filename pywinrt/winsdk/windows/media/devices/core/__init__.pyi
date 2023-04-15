# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.foundation.numerics
import winsdk.windows.media.mediaproperties
import winsdk.windows.perception.spatial

class FrameFlashMode(enum.IntEnum):
    DISABLE = 0
    ENABLE = 1
    GLOBAL = 2

Self = typing.TypeVar('Self')

class CameraIntrinsics(winsdk.system.Object):
    focal_length: winsdk.windows.foundation.numerics.Vector2
    image_height: winsdk.system.UInt32
    image_width: winsdk.system.UInt32
    principal_point: winsdk.windows.foundation.numerics.Vector2
    radial_distortion: winsdk.windows.foundation.numerics.Vector3
    tangential_distortion: winsdk.windows.foundation.numerics.Vector2
    undistorted_projection_transform: winsdk.windows.foundation.numerics.Matrix4x4
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CameraIntrinsics: ...
    def __new__(cls: typing.Type[CameraIntrinsics], focal_length: winsdk.windows.foundation.numerics.Vector2, principal_point: winsdk.windows.foundation.numerics.Vector2, radial_distortion: winsdk.windows.foundation.numerics.Vector3, tangential_distortion: winsdk.windows.foundation.numerics.Vector2, image_width: winsdk.system.UInt32, image_height: winsdk.system.UInt32) -> CameraIntrinsics:...
    def distort_point(self, input: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Point: ...
    def distort_points(self, inputs: winsdk.system.Array[winsdk.windows.foundation.Point], results: winsdk.system.Array[winsdk.windows.foundation.Point]) -> None: ...
    def project_many_onto_frame(self, coordinates: winsdk.system.Array[winsdk.windows.foundation.numerics.Vector3], results: winsdk.system.Array[winsdk.windows.foundation.Point]) -> None: ...
    def project_onto_frame(self, coordinate: winsdk.windows.foundation.numerics.Vector3) -> winsdk.windows.foundation.Point: ...
    def undistort_point(self, input: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Point: ...
    def undistort_points(self, inputs: winsdk.system.Array[winsdk.windows.foundation.Point], results: winsdk.system.Array[winsdk.windows.foundation.Point]) -> None: ...
    def unproject_at_unit_depth(self, pixel_coordinate: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.numerics.Vector2: ...
    def unproject_pixels_at_unit_depth(self, pixel_coordinates: winsdk.system.Array[winsdk.windows.foundation.Point], results: winsdk.system.Array[winsdk.windows.foundation.numerics.Vector2]) -> None: ...

class DepthCorrelatedCoordinateMapper(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DepthCorrelatedCoordinateMapper: ...
    def close(self) -> None: ...
    def map_point(self, source_point: winsdk.windows.foundation.Point, target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], target_camera_intrinsics: typing.Optional[CameraIntrinsics]) -> winsdk.windows.foundation.Point: ...
    def map_points(self, source_points: winsdk.system.Array[winsdk.windows.foundation.Point], target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], target_camera_intrinsics: typing.Optional[CameraIntrinsics], results: winsdk.system.Array[winsdk.windows.foundation.Point]) -> None: ...
    def unproject_point(self, source_point: winsdk.windows.foundation.Point, target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]) -> winsdk.windows.foundation.numerics.Vector3: ...
    def unproject_points(self, source_points: winsdk.system.Array[winsdk.windows.foundation.Point], target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], results: winsdk.system.Array[winsdk.windows.foundation.numerics.Vector3]) -> None: ...

class FrameControlCapabilities(winsdk.system.Object):
    exposure: typing.Optional[FrameExposureCapabilities]
    exposure_compensation: typing.Optional[FrameExposureCompensationCapabilities]
    focus: typing.Optional[FrameFocusCapabilities]
    iso_speed: typing.Optional[FrameIsoSpeedCapabilities]
    photo_confirmation_supported: winsdk.system.Boolean
    flash: typing.Optional[FrameFlashCapabilities]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameControlCapabilities: ...

class FrameController(winsdk.system.Object):
    photo_confirmation_enabled: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    exposure_compensation_control: typing.Optional[FrameExposureCompensationControl]
    exposure_control: typing.Optional[FrameExposureControl]
    focus_control: typing.Optional[FrameFocusControl]
    iso_speed_control: typing.Optional[FrameIsoSpeedControl]
    flash_control: typing.Optional[FrameFlashControl]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameController: ...
    def __new__(cls: typing.Type[FrameController]) -> FrameController:...

class FrameExposureCapabilities(winsdk.system.Object):
    max: datetime.timedelta
    min: datetime.timedelta
    step: datetime.timedelta
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameExposureCapabilities: ...

class FrameExposureCompensationCapabilities(winsdk.system.Object):
    max: winsdk.system.Single
    min: winsdk.system.Single
    step: winsdk.system.Single
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameExposureCompensationCapabilities: ...

class FrameExposureCompensationControl(winsdk.system.Object):
    value: typing.Optional[typing.Optional[winsdk.system.Single]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameExposureCompensationControl: ...

class FrameExposureControl(winsdk.system.Object):
    value: typing.Optional[typing.Optional[datetime.timedelta]]
    auto: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameExposureControl: ...

class FrameFlashCapabilities(winsdk.system.Object):
    power_supported: winsdk.system.Boolean
    red_eye_reduction_supported: winsdk.system.Boolean
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameFlashCapabilities: ...

class FrameFlashControl(winsdk.system.Object):
    red_eye_reduction: winsdk.system.Boolean
    power_percent: winsdk.system.Single
    mode: FrameFlashMode
    auto: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameFlashControl: ...

class FrameFocusCapabilities(winsdk.system.Object):
    max: winsdk.system.UInt32
    min: winsdk.system.UInt32
    step: winsdk.system.UInt32
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameFocusCapabilities: ...

class FrameFocusControl(winsdk.system.Object):
    value: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameFocusControl: ...

class FrameIsoSpeedCapabilities(winsdk.system.Object):
    max: winsdk.system.UInt32
    min: winsdk.system.UInt32
    step: winsdk.system.UInt32
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameIsoSpeedCapabilities: ...

class FrameIsoSpeedControl(winsdk.system.Object):
    value: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    auto: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FrameIsoSpeedControl: ...

class VariablePhotoSequenceController(winsdk.system.Object):
    photos_per_second_limit: winsdk.system.Single
    desired_frame_controllers: typing.Optional[winsdk.windows.foundation.collections.IVector[FrameController]]
    frame_capabilities: typing.Optional[FrameControlCapabilities]
    max_photos_per_second: winsdk.system.Single
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VariablePhotoSequenceController: ...
    def get_current_frame_rate(self) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...
    def get_highest_concurrent_frame_rate(self, capture_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...

