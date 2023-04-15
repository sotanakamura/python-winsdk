// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.ApplicationModel.Store.LicenseManagement.h>

namespace py::proj::Windows::ApplicationModel::Store::LicenseManagement
{}

namespace py::impl::Windows::ApplicationModel::Store::LicenseManagement
{}

namespace py::wrapper::Windows::ApplicationModel::Store::LicenseManagement
{
    using LicenseManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager>;
    using LicenseSatisfactionInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>;
    using LicenseSatisfactionResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
