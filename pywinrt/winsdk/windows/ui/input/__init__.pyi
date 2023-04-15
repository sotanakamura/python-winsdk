# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.haptics
import winsdk.windows.devices.input
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.system
import winsdk.windows.ui.core

class CrossSlidingState(enum.IntEnum):
    STARTED = 0
    DRAGGING = 1
    SELECTING = 2
    SELECT_SPEED_BUMPING = 3
    SPEED_BUMPING = 4
    REARRANGING = 5
    COMPLETED = 6

class DraggingState(enum.IntEnum):
    STARTED = 0
    CONTINUING = 1
    COMPLETED = 2

class EdgeGestureKind(enum.IntEnum):
    TOUCH = 0
    KEYBOARD = 1
    MOUSE = 2

class GazeInputAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED_BY_USER = 2
    DENIED_BY_SYSTEM = 3

class GestureSettings(enum.IntFlag):
    NONE = 0
    TAP = 0x1
    DOUBLE_TAP = 0x2
    HOLD = 0x4
    HOLD_WITH_MOUSE = 0x8
    RIGHT_TAP = 0x10
    DRAG = 0x20
    MANIPULATION_TRANSLATE_X = 0x40
    MANIPULATION_TRANSLATE_Y = 0x80
    MANIPULATION_TRANSLATE_RAILS_X = 0x100
    MANIPULATION_TRANSLATE_RAILS_Y = 0x200
    MANIPULATION_ROTATE = 0x400
    MANIPULATION_SCALE = 0x800
    MANIPULATION_TRANSLATE_INERTIA = 0x1000
    MANIPULATION_ROTATE_INERTIA = 0x2000
    MANIPULATION_SCALE_INERTIA = 0x4000
    CROSS_SLIDE = 0x8000
    MANIPULATION_MULTIPLE_FINGER_PANNING = 0x10000

class HoldingState(enum.IntEnum):
    STARTED = 0
    COMPLETED = 1
    CANCELED = 2

class InputActivationState(enum.IntEnum):
    NONE = 0
    DEACTIVATED = 1
    ACTIVATED_NOT_FOREGROUND = 2
    ACTIVATED_IN_FOREGROUND = 3

class PointerUpdateKind(enum.IntEnum):
    OTHER = 0
    LEFT_BUTTON_PRESSED = 1
    LEFT_BUTTON_RELEASED = 2
    RIGHT_BUTTON_PRESSED = 3
    RIGHT_BUTTON_RELEASED = 4
    MIDDLE_BUTTON_PRESSED = 5
    MIDDLE_BUTTON_RELEASED = 6
    X_BUTTON1_PRESSED = 7
    X_BUTTON1_RELEASED = 8
    X_BUTTON2_PRESSED = 9
    X_BUTTON2_RELEASED = 10

class RadialControllerMenuKnownIcon(enum.IntEnum):
    SCROLL = 0
    ZOOM = 1
    UNDO_REDO = 2
    VOLUME = 3
    NEXT_PREVIOUS_TRACK = 4
    RULER = 5
    INK_COLOR = 6
    INK_THICKNESS = 7
    PEN_TYPE = 8

class RadialControllerSystemMenuItemKind(enum.IntEnum):
    SCROLL = 0
    ZOOM = 1
    UNDO_REDO = 2
    VOLUME = 3
    NEXT_PREVIOUS_TRACK = 4

Self = typing.TypeVar('Self')

class CrossSlideThresholds:
    selection_start: winsdk.system.Single
    speed_bump_start: winsdk.system.Single
    speed_bump_end: winsdk.system.Single
    rearrange_start: winsdk.system.Single
    def __new__(cls: typing.Type[CrossSlideThresholds], selection_start: winsdk.system.Single, speed_bump_start: winsdk.system.Single, speed_bump_end: winsdk.system.Single, rearrange_start: winsdk.system.Single) -> CrossSlideThresholds: ...

class ManipulationDelta:
    translation: winsdk.windows.foundation.Point
    scale: winsdk.system.Single
    rotation: winsdk.system.Single
    expansion: winsdk.system.Single
    def __new__(cls: typing.Type[ManipulationDelta], translation: winsdk.windows.foundation.Point, scale: winsdk.system.Single, rotation: winsdk.system.Single, expansion: winsdk.system.Single) -> ManipulationDelta: ...

class ManipulationVelocities:
    linear: winsdk.windows.foundation.Point
    angular: winsdk.system.Single
    expansion: winsdk.system.Single
    def __new__(cls: typing.Type[ManipulationVelocities], linear: winsdk.windows.foundation.Point, angular: winsdk.system.Single, expansion: winsdk.system.Single) -> ManipulationVelocities: ...

class AttachableInputObject(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AttachableInputObject: ...
    def close(self) -> None: ...

class CrossSlidingEventArgs(winsdk.system.Object):
    cross_sliding_state: CrossSlidingState
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CrossSlidingEventArgs: ...

class DraggingEventArgs(winsdk.system.Object):
    dragging_state: DraggingState
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DraggingEventArgs: ...

class EdgeGesture(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EdgeGesture: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[EdgeGesture]: ...
    def add_canceled(self, handler: winsdk.windows.foundation.TypedEventHandler[EdgeGesture, EdgeGestureEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_canceled(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[EdgeGesture, EdgeGestureEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_starting(self, handler: winsdk.windows.foundation.TypedEventHandler[EdgeGesture, EdgeGestureEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_starting(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class EdgeGestureEventArgs(winsdk.system.Object):
    kind: EdgeGestureKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EdgeGestureEventArgs: ...

class GestureRecognizer(winsdk.system.Object):
    show_gesture_feedback: winsdk.system.Boolean
    pivot_radius: winsdk.system.Single
    pivot_center: winsdk.windows.foundation.Point
    manipulation_exact: winsdk.system.Boolean
    inertia_translation_displacement: winsdk.system.Single
    inertia_translation_deceleration: winsdk.system.Single
    inertia_rotation_deceleration: winsdk.system.Single
    inertia_rotation_angle: winsdk.system.Single
    inertia_expansion_deceleration: winsdk.system.Single
    inertia_expansion: winsdk.system.Single
    gesture_settings: GestureSettings
    cross_slide_thresholds: CrossSlideThresholds
    cross_slide_horizontally: winsdk.system.Boolean
    cross_slide_exact: winsdk.system.Boolean
    auto_process_inertia: winsdk.system.Boolean
    is_active: winsdk.system.Boolean
    is_inertial: winsdk.system.Boolean
    mouse_wheel_parameters: typing.Optional[MouseWheelParameters]
    translation_min_contact_count: winsdk.system.UInt32
    translation_max_contact_count: winsdk.system.UInt32
    tap_min_contact_count: winsdk.system.UInt32
    tap_max_contact_count: winsdk.system.UInt32
    hold_start_delay: datetime.timedelta
    hold_radius: winsdk.system.Single
    hold_min_contact_count: winsdk.system.UInt32
    hold_max_contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GestureRecognizer: ...
    def __new__(cls: typing.Type[GestureRecognizer]) -> GestureRecognizer:...
    def can_be_double_tap(self, value: typing.Optional[PointerPoint]) -> winsdk.system.Boolean: ...
    def complete_gesture(self) -> None: ...
    def process_down_event(self, value: typing.Optional[PointerPoint]) -> None: ...
    def process_inertia(self) -> None: ...
    def process_mouse_wheel_event(self, value: typing.Optional[PointerPoint], is_shift_key_down: winsdk.system.Boolean, is_control_key_down: winsdk.system.Boolean) -> None: ...
    def process_move_events(self, value: winsdk.windows.foundation.collections.IVector[PointerPoint]) -> None: ...
    def process_up_event(self, value: typing.Optional[PointerPoint]) -> None: ...
    def add_cross_sliding(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, CrossSlidingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_cross_sliding(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_dragging(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, DraggingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_dragging(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_holding(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, HoldingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_holding(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_manipulation_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, ManipulationCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_manipulation_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_manipulation_inertia_starting(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, ManipulationInertiaStartingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_manipulation_inertia_starting(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_manipulation_started(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, ManipulationStartedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_manipulation_started(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_manipulation_updated(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, ManipulationUpdatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_manipulation_updated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_right_tapped(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, RightTappedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_right_tapped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_tapped(self, handler: winsdk.windows.foundation.TypedEventHandler[GestureRecognizer, TappedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_tapped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HoldingEventArgs(winsdk.system.Object):
    holding_state: HoldingState
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    contact_count: winsdk.system.UInt32
    current_contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HoldingEventArgs: ...

class InputActivationListener(winsdk.system.Object):
    state: InputActivationState
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InputActivationListener: ...
    def add_input_activation_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[InputActivationListener, InputActivationListenerActivationChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_input_activation_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class InputActivationListenerActivationChangedEventArgs(winsdk.system.Object):
    state: InputActivationState
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InputActivationListenerActivationChangedEventArgs: ...

class KeyboardDeliveryInterceptor(winsdk.system.Object):
    is_interception_enabled_when_in_foreground: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KeyboardDeliveryInterceptor: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[KeyboardDeliveryInterceptor]: ...
    def add_key_down(self, handler: winsdk.windows.foundation.TypedEventHandler[KeyboardDeliveryInterceptor, winsdk.windows.ui.core.KeyEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_key_down(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_key_up(self, handler: winsdk.windows.foundation.TypedEventHandler[KeyboardDeliveryInterceptor, winsdk.windows.ui.core.KeyEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_key_up(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ManipulationCompletedEventArgs(winsdk.system.Object):
    cumulative: ManipulationDelta
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    velocities: ManipulationVelocities
    contact_count: winsdk.system.UInt32
    current_contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ManipulationCompletedEventArgs: ...

class ManipulationInertiaStartingEventArgs(winsdk.system.Object):
    cumulative: ManipulationDelta
    delta: ManipulationDelta
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    velocities: ManipulationVelocities
    contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ManipulationInertiaStartingEventArgs: ...

class ManipulationStartedEventArgs(winsdk.system.Object):
    cumulative: ManipulationDelta
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ManipulationStartedEventArgs: ...

class ManipulationUpdatedEventArgs(winsdk.system.Object):
    cumulative: ManipulationDelta
    delta: ManipulationDelta
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    velocities: ManipulationVelocities
    contact_count: winsdk.system.UInt32
    current_contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ManipulationUpdatedEventArgs: ...

class MouseWheelParameters(winsdk.system.Object):
    page_translation: winsdk.windows.foundation.Point
    delta_scale: winsdk.system.Single
    delta_rotation_angle: winsdk.system.Single
    char_translation: winsdk.windows.foundation.Point
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MouseWheelParameters: ...

class PointerPoint(winsdk.system.Object):
    frame_id: winsdk.system.UInt32
    is_in_contact: winsdk.system.Boolean
    pointer_device: typing.Optional[winsdk.windows.devices.input.PointerDevice]
    pointer_id: winsdk.system.UInt32
    position: winsdk.windows.foundation.Point
    properties: typing.Optional[PointerPointProperties]
    raw_position: winsdk.windows.foundation.Point
    timestamp: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PointerPoint: ...
    @typing.overload
    @staticmethod
    def get_current_point(pointer_id: winsdk.system.UInt32) -> typing.Optional[PointerPoint]: ...
    @typing.overload
    @staticmethod
    def get_current_point(pointer_id: winsdk.system.UInt32, transform: typing.Optional[IPointerPointTransform]) -> typing.Optional[PointerPoint]: ...
    @typing.overload
    @staticmethod
    def get_intermediate_points(pointer_id: winsdk.system.UInt32) -> typing.Optional[winsdk.windows.foundation.collections.IVector[PointerPoint]]: ...
    @typing.overload
    @staticmethod
    def get_intermediate_points(pointer_id: winsdk.system.UInt32, transform: typing.Optional[IPointerPointTransform]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[PointerPoint]]: ...

class PointerPointProperties(winsdk.system.Object):
    contact_rect: winsdk.windows.foundation.Rect
    contact_rect_raw: winsdk.windows.foundation.Rect
    is_barrel_button_pressed: winsdk.system.Boolean
    is_canceled: winsdk.system.Boolean
    is_eraser: winsdk.system.Boolean
    is_horizontal_mouse_wheel: winsdk.system.Boolean
    is_in_range: winsdk.system.Boolean
    is_inverted: winsdk.system.Boolean
    is_left_button_pressed: winsdk.system.Boolean
    is_middle_button_pressed: winsdk.system.Boolean
    is_primary: winsdk.system.Boolean
    is_right_button_pressed: winsdk.system.Boolean
    is_x_button1_pressed: winsdk.system.Boolean
    is_x_button2_pressed: winsdk.system.Boolean
    mouse_wheel_delta: winsdk.system.Int32
    orientation: winsdk.system.Single
    pointer_update_kind: PointerUpdateKind
    pressure: winsdk.system.Single
    touch_confidence: winsdk.system.Boolean
    twist: winsdk.system.Single
    x_tilt: winsdk.system.Single
    y_tilt: winsdk.system.Single
    z_distance: typing.Optional[typing.Optional[winsdk.system.Single]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PointerPointProperties: ...
    def get_usage_value(self, usage_page: winsdk.system.UInt32, usage_id: winsdk.system.UInt32) -> winsdk.system.Int32: ...
    def has_usage(self, usage_page: winsdk.system.UInt32, usage_id: winsdk.system.UInt32) -> winsdk.system.Boolean: ...

class PointerVisualizationSettings(winsdk.system.Object):
    is_contact_feedback_enabled: winsdk.system.Boolean
    is_barrel_button_feedback_enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PointerVisualizationSettings: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[PointerVisualizationSettings]: ...

class RadialController(winsdk.system.Object):
    use_automatic_haptic_feedback: winsdk.system.Boolean
    rotation_resolution_in_degrees: winsdk.system.Double
    menu: typing.Optional[RadialControllerMenu]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialController: ...
    @staticmethod
    def create_for_current_view() -> typing.Optional[RadialController]: ...
    @staticmethod
    def is_supported() -> winsdk.system.Boolean: ...
    def add_button_clicked(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerButtonClickedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_button_clicked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_control_acquired(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerControlAcquiredEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_control_acquired(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_control_lost(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_control_lost(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_rotation_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerRotationChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_rotation_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_screen_contact_continued(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerScreenContactContinuedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_screen_contact_continued(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_screen_contact_ended(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_screen_contact_ended(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_screen_contact_started(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerScreenContactStartedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_screen_contact_started(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_button_holding(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerButtonHoldingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_button_holding(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_button_pressed(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerButtonPressedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_button_pressed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_button_released(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialController, RadialControllerButtonReleasedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_button_released(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class RadialControllerButtonClickedEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerButtonClickedEventArgs: ...

class RadialControllerButtonHoldingEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerButtonHoldingEventArgs: ...

class RadialControllerButtonPressedEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerButtonPressedEventArgs: ...

class RadialControllerButtonReleasedEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerButtonReleasedEventArgs: ...

class RadialControllerConfiguration(winsdk.system.Object):
    is_menu_suppressed: winsdk.system.Boolean
    active_controller_when_menu_is_suppressed: typing.Optional[RadialController]
    is_app_controller_enabled: typing.ClassVar[winsdk.system.Boolean]
    app_controller: typing.ClassVar[typing.Optional[RadialController]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerConfiguration: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[RadialControllerConfiguration]: ...
    def reset_to_default_menu_items(self) -> None: ...
    def set_default_menu_items(self, buttons: typing.Iterable[RadialControllerSystemMenuItemKind]) -> None: ...
    def try_select_default_menu_item(self, type: RadialControllerSystemMenuItemKind) -> winsdk.system.Boolean: ...

class RadialControllerControlAcquiredEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    is_button_pressed: winsdk.system.Boolean
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerControlAcquiredEventArgs: ...

class RadialControllerMenu(winsdk.system.Object):
    is_enabled: winsdk.system.Boolean
    items: typing.Optional[winsdk.windows.foundation.collections.IVector[RadialControllerMenuItem]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerMenu: ...
    def get_selected_menu_item(self) -> typing.Optional[RadialControllerMenuItem]: ...
    def select_menu_item(self, menu_item: typing.Optional[RadialControllerMenuItem]) -> None: ...
    def try_select_previously_selected_menu_item(self) -> winsdk.system.Boolean: ...

class RadialControllerMenuItem(winsdk.system.Object):
    tag: typing.Optional[winsdk.system.Object]
    display_text: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerMenuItem: ...
    @typing.overload
    @staticmethod
    def create_from_font_glyph(display_text: str, glyph: str, font_family: str) -> typing.Optional[RadialControllerMenuItem]: ...
    @typing.overload
    @staticmethod
    def create_from_font_glyph(display_text: str, glyph: str, font_family: str, font_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> typing.Optional[RadialControllerMenuItem]: ...
    @staticmethod
    def create_from_icon(display_text: str, icon: typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference]) -> typing.Optional[RadialControllerMenuItem]: ...
    @staticmethod
    def create_from_known_icon(display_text: str, value: RadialControllerMenuKnownIcon) -> typing.Optional[RadialControllerMenuItem]: ...
    def add_invoked(self, handler: winsdk.windows.foundation.TypedEventHandler[RadialControllerMenuItem, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_invoked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class RadialControllerRotationChangedEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    rotation_delta_in_degrees: winsdk.system.Double
    is_button_pressed: winsdk.system.Boolean
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerRotationChangedEventArgs: ...

class RadialControllerScreenContact(winsdk.system.Object):
    bounds: winsdk.windows.foundation.Rect
    position: winsdk.windows.foundation.Point
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerScreenContact: ...

class RadialControllerScreenContactContinuedEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    is_button_pressed: winsdk.system.Boolean
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerScreenContactContinuedEventArgs: ...

class RadialControllerScreenContactEndedEventArgs(winsdk.system.Object):
    is_button_pressed: winsdk.system.Boolean
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerScreenContactEndedEventArgs: ...

class RadialControllerScreenContactStartedEventArgs(winsdk.system.Object):
    contact: typing.Optional[RadialControllerScreenContact]
    is_button_pressed: winsdk.system.Boolean
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RadialControllerScreenContactStartedEventArgs: ...

class RightTappedEventArgs(winsdk.system.Object):
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RightTappedEventArgs: ...

class SystemButtonEventController(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SystemButtonEventController: ...
    @staticmethod
    def create_for_dispatcher_queue(queue: typing.Optional[winsdk.windows.system.DispatcherQueue]) -> typing.Optional[SystemButtonEventController]: ...
    def add_system_function_button_pressed(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemButtonEventController, SystemFunctionButtonEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_system_function_button_pressed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_system_function_button_released(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemButtonEventController, SystemFunctionButtonEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_system_function_button_released(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_system_function_lock_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemButtonEventController, SystemFunctionLockChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_system_function_lock_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_system_function_lock_indicator_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[SystemButtonEventController, SystemFunctionLockIndicatorChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_system_function_lock_indicator_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SystemFunctionButtonEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    timestamp: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SystemFunctionButtonEventArgs: ...

class SystemFunctionLockChangedEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    is_locked: winsdk.system.Boolean
    timestamp: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SystemFunctionLockChangedEventArgs: ...

class SystemFunctionLockIndicatorChangedEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    is_indicator_on: winsdk.system.Boolean
    timestamp: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SystemFunctionLockIndicatorChangedEventArgs: ...

class TappedEventArgs(winsdk.system.Object):
    pointer_device_type: winsdk.windows.devices.input.PointerDeviceType
    position: winsdk.windows.foundation.Point
    tap_count: winsdk.system.UInt32
    contact_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TappedEventArgs: ...

class IPointerPointTransform(winsdk.system.Object):
    inverse: typing.Optional[IPointerPointTransform]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPointerPointTransform: ...
    def transform_bounds(self, rect: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.Rect: ...
    def try_transform(self, in_point: winsdk.windows.foundation.Point) -> typing.Tuple[winsdk.system.Boolean, winsdk.windows.foundation.Point]: ...

