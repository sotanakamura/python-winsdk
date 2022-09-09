# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.UI.Core.AnimationMetrics")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class AnimationEffect(enum.IntEnum):
    EXPAND = 0
    COLLAPSE = 1
    REPOSITION = 2
    FADE_IN = 3
    FADE_OUT = 4
    ADD_TO_LIST = 5
    DELETE_FROM_LIST = 6
    ADD_TO_GRID = 7
    DELETE_FROM_GRID = 8
    ADD_TO_SEARCH_GRID = 9
    DELETE_FROM_SEARCH_GRID = 10
    ADD_TO_SEARCH_LIST = 11
    DELETE_FROM_SEARCH_LIST = 12
    SHOW_EDGE_U_I = 13
    SHOW_PANEL = 14
    HIDE_EDGE_U_I = 15
    HIDE_PANEL = 16
    SHOW_POPUP = 17
    HIDE_POPUP = 18
    POINTER_DOWN = 19
    POINTER_UP = 20
    DRAG_SOURCE_START = 21
    DRAG_SOURCE_END = 22
    TRANSITION_CONTENT = 23
    REVEAL = 24
    HIDE = 25
    DRAG_BETWEEN_ENTER = 26
    DRAG_BETWEEN_LEAVE = 27
    SWIPE_SELECT = 28
    SWIPE_DESELECT = 29
    SWIPE_REVEAL = 30
    ENTER_PAGE = 31
    TRANSITION_PAGE = 32
    CROSS_FADE = 33
    PEEK = 34
    UPDATE_BADGE = 35

class AnimationEffectTarget(enum.IntEnum):
    PRIMARY = 0
    ADDED = 1
    AFFECTED = 2
    BACKGROUND = 3
    CONTENT = 4
    DELETED = 5
    DESELECTED = 6
    DRAG_SOURCE = 7
    HIDDEN = 8
    INCOMING = 9
    OUTGOING = 10
    OUTLINE = 11
    REMAINING = 12
    REVEALED = 13
    ROW_IN = 14
    ROW_OUT = 15
    SELECTED = 16
    SELECTION = 17
    SHOWN = 18
    TAPPED = 19

class PropertyAnimationType(enum.IntEnum):
    SCALE = 0
    TRANSLATION = 1
    OPACITY = 2

_ns_module._register_AnimationEffect(AnimationEffect)
_ns_module._register_AnimationEffectTarget(AnimationEffectTarget)
_ns_module._register_PropertyAnimationType(PropertyAnimationType)

AnimationDescription = _ns_module.AnimationDescription
OpacityAnimation = _ns_module.OpacityAnimation
PropertyAnimation = _ns_module.PropertyAnimation
ScaleAnimation = _ns_module.ScaleAnimation
TranslationAnimation = _ns_module.TranslationAnimation
IPropertyAnimation = _ns_module.IPropertyAnimation
