// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Media.h")
#include "py.Windows.Media.h"
#endif

#include <winrt/Windows.Media.FaceAnalysis.h>

namespace py::proj::Windows::Media::FaceAnalysis
{}

namespace py::impl::Windows::Media::FaceAnalysis
{}

namespace py::wrapper::Windows::Media::FaceAnalysis
{
    using DetectedFace = py::winrt_wrapper<winrt::Windows::Media::FaceAnalysis::DetectedFace>;
    using FaceDetector = py::winrt_wrapper<winrt::Windows::Media::FaceAnalysis::FaceDetector>;
    using FaceTracker = py::winrt_wrapper<winrt::Windows::Media::FaceAnalysis::FaceTracker>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Media::FaceAnalysis::DetectedFace>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::FaceAnalysis::FaceDetector>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::FaceAnalysis::FaceTracker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
