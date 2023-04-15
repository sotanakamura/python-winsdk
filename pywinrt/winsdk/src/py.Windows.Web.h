// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Web.h>

namespace py::proj::Windows::Web
{}

namespace py::impl::Windows::Web
{}

namespace py::wrapper::Windows::Web
{
    using WebError = py::winrt_wrapper<winrt::Windows::Web::WebError>;
    using IUriToStreamResolver = py::winrt_wrapper<winrt::Windows::Web::IUriToStreamResolver>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Web::WebErrorStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Web::WebErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::WebError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::IUriToStreamResolver>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
