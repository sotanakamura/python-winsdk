// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Graphics.Imaging.h>

namespace py::proj::Windows::Graphics::Imaging
{}

namespace py::impl::Windows::Graphics::Imaging
{}

namespace py::wrapper::Windows::Graphics::Imaging
{
    using BitmapBuffer = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapBuffer>;
    using BitmapCodecInformation = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapCodecInformation>;
    using BitmapDecoder = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapDecoder>;
    using BitmapEncoder = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapEncoder>;
    using BitmapFrame = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapFrame>;
    using BitmapProperties = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapProperties>;
    using BitmapPropertiesView = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapPropertiesView>;
    using BitmapPropertySet = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapPropertySet>;
    using BitmapTransform = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapTransform>;
    using BitmapTypedValue = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::BitmapTypedValue>;
    using ImageStream = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::ImageStream>;
    using PixelDataProvider = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::PixelDataProvider>;
    using SoftwareBitmap = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::SoftwareBitmap>;
    using IBitmapFrame = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::IBitmapFrame>;
    using IBitmapFrameWithSoftwareBitmap = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>;
    using IBitmapPropertiesView = py::winrt_wrapper<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>;
    using BitmapBounds = py::winrt_struct_wrapper<winrt::Windows::Graphics::Imaging::BitmapBounds>;
    using BitmapPlaneDescription = py::winrt_struct_wrapper<winrt::Windows::Graphics::Imaging::BitmapPlaneDescription>;
    using BitmapSize = py::winrt_struct_wrapper<winrt::Windows::Graphics::Imaging::BitmapSize>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::BitmapAlphaMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::BitmapBufferAccessMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::BitmapFlip>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::BitmapInterpolationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::BitmapPixelFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::BitmapRotation>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::ColorManagementMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::ExifOrientationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::JpegSubsamplingMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::PngFilterMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Imaging::TiffCompressionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapBuffer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapCodecInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapDecoder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapEncoder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapPropertiesView>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapPropertySet>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapTransform>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapTypedValue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::ImageStream>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::PixelDataProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::SoftwareBitmap>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::IBitmapFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapBounds>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapPlaneDescription>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Imaging::BitmapSize>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Graphics::Imaging::BitmapBounds>
    {
        static PyObject* convert(winrt::Windows::Graphics::Imaging::BitmapBounds instance) noexcept;
        static winrt::Windows::Graphics::Imaging::BitmapBounds convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::Imaging::BitmapPlaneDescription>
    {
        static PyObject* convert(winrt::Windows::Graphics::Imaging::BitmapPlaneDescription instance) noexcept;
        static winrt::Windows::Graphics::Imaging::BitmapPlaneDescription convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::Imaging::BitmapSize>
    {
        static PyObject* convert(winrt::Windows::Graphics::Imaging::BitmapSize instance) noexcept;
        static winrt::Windows::Graphics::Imaging::BitmapSize convert_to(PyObject* obj);
    };

}
