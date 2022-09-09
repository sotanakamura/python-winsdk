// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Data.Json.h>

namespace py::proj::Windows::Data::Json
{}

namespace py::impl::Windows::Data::Json
{}

namespace py::wrapper::Windows::Data::Json
{
    using JsonArray = py::winrt_wrapper<winrt::Windows::Data::Json::JsonArray>;
    using JsonError = py::winrt_wrapper<winrt::Windows::Data::Json::JsonError>;
    using JsonObject = py::winrt_wrapper<winrt::Windows::Data::Json::JsonObject>;
    using JsonValue = py::winrt_wrapper<winrt::Windows::Data::Json::JsonValue>;
    using IJsonValue = py::winrt_wrapper<winrt::Windows::Data::Json::IJsonValue>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Data::Json::JsonErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Data::Json::JsonValueType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonArray>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonObject>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonValue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::IJsonValue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
