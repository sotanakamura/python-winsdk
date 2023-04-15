// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Graphics.DirectX.h")
#include "py.Windows.Graphics.DirectX.h"
#endif

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

#if __has_include("py.Windows.Perception.h")
#include "py.Windows.Perception.h"
#endif

#if __has_include("py.Windows.Perception.Spatial.h")
#include "py.Windows.Perception.Spatial.h"
#endif

#if __has_include("py.Windows.UI.Core.h")
#include "py.Windows.UI.Core.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.Numerics.h>
#include <winrt/Windows.Graphics.DirectX.h>
#include <winrt/Windows.Graphics.DirectX.Direct3D11.h>
#include <winrt/Windows.Perception.h>
#include <winrt/Windows.Perception.Spatial.h>
#include <winrt/Windows.UI.Core.h>

#include <winrt/Windows.Graphics.Holographic.h>

namespace py::proj::Windows::Graphics::Holographic
{}

namespace py::impl::Windows::Graphics::Holographic
{}

namespace py::wrapper::Windows::Graphics::Holographic
{
    using HolographicCamera = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicCamera>;
    using HolographicCameraPose = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicCameraPose>;
    using HolographicCameraRenderingParameters = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters>;
    using HolographicCameraViewportParameters = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters>;
    using HolographicDisplay = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicDisplay>;
    using HolographicFrame = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicFrame>;
    using HolographicFramePrediction = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicFramePrediction>;
    using HolographicFramePresentationMonitor = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicFramePresentationMonitor>;
    using HolographicFramePresentationReport = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicFramePresentationReport>;
    using HolographicFrameRenderingReport = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicFrameRenderingReport>;
    using HolographicFrameScanoutMonitor = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutMonitor>;
    using HolographicFrameScanoutReport = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutReport>;
    using HolographicQuadLayer = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicQuadLayer>;
    using HolographicQuadLayerUpdateParameters = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>;
    using HolographicSpace = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicSpace>;
    using HolographicSpaceCameraAddedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>;
    using HolographicSpaceCameraRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>;
    using HolographicViewConfiguration = py::winrt_wrapper<winrt::Windows::Graphics::Holographic::HolographicViewConfiguration>;
    using HolographicAdapterId = py::winrt_struct_wrapper<winrt::Windows::Graphics::Holographic::HolographicAdapterId>;
    using HolographicFrameId = py::winrt_struct_wrapper<winrt::Windows::Graphics::Holographic::HolographicFrameId>;
    using HolographicStereoTransform = py::winrt_struct_wrapper<winrt::Windows::Graphics::Holographic::HolographicStereoTransform>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicDepthReprojectionMethod> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicFramePresentResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicReprojectionMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicSpaceUserPresence> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicViewConfigurationKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicAdapterId> = "T{I:low_part:i:high_part:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicFrameId> = "T{Q:value:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::Holographic::HolographicStereoTransform> = "T{T{f:m11:f:m12:f:m13:f:m14:f:m21:f:m22:f:m23:f:m24:f:m31:f:m32:f:m33:f:m34:f:m41:f:m42:f:m43:f:m44:}:left:T{f:m11:f:m12:f:m13:f:m14:f:m21:f:m22:f:m23:f:m24:f:m31:f:m32:f:m33:f:m34:f:m41:f:m42:f:m43:f:m44:}:right:}";


    template<>
    struct py_type<winrt::Windows::Graphics::Holographic::HolographicDepthReprojectionMethod>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Holographic::HolographicFramePresentResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Holographic::HolographicReprojectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Holographic::HolographicSpaceUserPresence>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Holographic::HolographicViewConfigurationKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicCamera>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicCameraPose>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicDisplay>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFramePrediction>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFramePresentationMonitor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFramePresentationReport>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFrameRenderingReport>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutMonitor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutReport>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicQuadLayer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicSpace>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicViewConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicAdapterId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicFrameId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Holographic::HolographicStereoTransform>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Graphics::Holographic::HolographicAdapterId>
    {
        static PyObject* convert(winrt::Windows::Graphics::Holographic::HolographicAdapterId instance) noexcept;
        static winrt::Windows::Graphics::Holographic::HolographicAdapterId convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::Holographic::HolographicFrameId>
    {
        static PyObject* convert(winrt::Windows::Graphics::Holographic::HolographicFrameId instance) noexcept;
        static winrt::Windows::Graphics::Holographic::HolographicFrameId convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::Holographic::HolographicStereoTransform>
    {
        static PyObject* convert(winrt::Windows::Graphics::Holographic::HolographicStereoTransform instance) noexcept;
        static winrt::Windows::Graphics::Holographic::HolographicStereoTransform convert_to(PyObject* obj);
    };

}
