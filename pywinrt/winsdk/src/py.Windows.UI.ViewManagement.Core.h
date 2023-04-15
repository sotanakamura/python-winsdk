// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.UI.h>

#include <winrt/Windows.UI.ViewManagement.Core.h>

namespace py::proj::Windows::UI::ViewManagement::Core
{}

namespace py::impl::Windows::UI::ViewManagement::Core
{}

namespace py::wrapper::Windows::UI::ViewManagement::Core
{
    using CoreFrameworkInputView = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreFrameworkInputView>;
    using CoreFrameworkInputViewAnimationStartingEventArgs = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreFrameworkInputViewAnimationStartingEventArgs>;
    using CoreFrameworkInputViewOcclusionsChangedEventArgs = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreFrameworkInputViewOcclusionsChangedEventArgs>;
    using CoreInputView = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreInputView>;
    using CoreInputViewAnimationStartingEventArgs = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreInputViewAnimationStartingEventArgs>;
    using CoreInputViewHidingEventArgs = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs>;
    using CoreInputViewOcclusion = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>;
    using CoreInputViewOcclusionsChangedEventArgs = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>;
    using CoreInputViewShowingEventArgs = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs>;
    using CoreInputViewTransferringXYFocusEventArgs = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>;
    using UISettingsController = py::winrt_wrapper<winrt::Windows::UI::ViewManagement::Core::UISettingsController>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::ViewManagement::Core::CoreInputViewKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection> = "i";


    template<>
    struct py_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreFrameworkInputView>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreFrameworkInputViewAnimationStartingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreFrameworkInputViewOcclusionsChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreInputView>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewAnimationStartingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ViewManagement::Core::UISettingsController>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
