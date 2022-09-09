// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Storage.Compression.h>

namespace py::proj::Windows::Storage::Compression
{}

namespace py::impl::Windows::Storage::Compression
{}

namespace py::wrapper::Windows::Storage::Compression
{
    using Compressor = py::winrt_wrapper<winrt::Windows::Storage::Compression::Compressor>;
    using Decompressor = py::winrt_wrapper<winrt::Windows::Storage::Compression::Decompressor>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Storage::Compression::CompressAlgorithm>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Compression::Compressor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Compression::Decompressor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
