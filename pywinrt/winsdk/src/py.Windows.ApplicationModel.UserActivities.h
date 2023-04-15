// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Shell.h")
#include "py.Windows.UI.Shell.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Credentials.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.h>
#include <winrt/Windows.UI.Shell.h>

#include <winrt/Windows.ApplicationModel.UserActivities.h>

namespace py::proj::Windows::ApplicationModel::UserActivities
{}

namespace py::impl::Windows::ApplicationModel::UserActivities
{}

namespace py::wrapper::Windows::ApplicationModel::UserActivities
{
    using UserActivity = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivity>;
    using UserActivityAttribution = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution>;
    using UserActivityChannel = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel>;
    using UserActivityContentInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivityContentInfo>;
    using UserActivityRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequest>;
    using UserActivityRequestManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager>;
    using UserActivityRequestedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs>;
    using UserActivitySession = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivitySession>;
    using UserActivitySessionHistoryItem = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>;
    using UserActivityVisualElements = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::UserActivityVisualElements>;
    using IUserActivityContentInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserActivities::UserActivityState> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivity>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityContentInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivitySession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::UserActivityVisualElements>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
