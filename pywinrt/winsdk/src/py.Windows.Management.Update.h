// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Management.Update.h>

namespace py::proj::Windows::Management::Update
{}

namespace py::impl::Windows::Management::Update
{}

namespace py::wrapper::Windows::Management::Update
{
    using PreviewBuildsManager = py::winrt_wrapper<winrt::Windows::Management::Update::PreviewBuildsManager>;
    using PreviewBuildsState = py::winrt_wrapper<winrt::Windows::Management::Update::PreviewBuildsState>;
    using WindowsUpdate = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdate>;
    using WindowsUpdateActionCompletedEventArgs = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateActionCompletedEventArgs>;
    using WindowsUpdateActionProgress = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateActionProgress>;
    using WindowsUpdateActionResult = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateActionResult>;
    using WindowsUpdateAdministrator = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateAdministrator>;
    using WindowsUpdateApprovalData = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateApprovalData>;
    using WindowsUpdateAttentionRequiredInfo = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateAttentionRequiredInfo>;
    using WindowsUpdateAttentionRequiredReasonChangedEventArgs = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateAttentionRequiredReasonChangedEventArgs>;
    using WindowsUpdateGetAdministratorResult = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateGetAdministratorResult>;
    using WindowsUpdateItem = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateItem>;
    using WindowsUpdateManager = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateManager>;
    using WindowsUpdateProgressChangedEventArgs = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateProgressChangedEventArgs>;
    using WindowsUpdateRestartRequestOptions = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateRestartRequestOptions>;
    using WindowsUpdateScanCompletedEventArgs = py::winrt_wrapper<winrt::Windows::Management::Update::WindowsUpdateScanCompletedEventArgs>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Management::Update::WindowsUpdateAdministratorOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Update::WindowsUpdateAdministratorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Update::WindowsUpdateAttentionRequiredReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::PreviewBuildsManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::PreviewBuildsState>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdate>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateActionCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateActionProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateActionResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateAdministrator>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateApprovalData>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateAttentionRequiredInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateAttentionRequiredReasonChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateGetAdministratorResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateProgressChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateRestartRequestOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Update::WindowsUpdateScanCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
