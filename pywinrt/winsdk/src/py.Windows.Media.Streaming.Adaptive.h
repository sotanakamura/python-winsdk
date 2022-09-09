// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

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

#if __has_include("py.Windows.Web.Http.h")
#include "py.Windows.Web.Http.h"
#endif

#include <winrt/Windows.Media.Streaming.Adaptive.h>

namespace py::proj::Windows::Media::Streaming::Adaptive
{}

namespace py::impl::Windows::Media::Streaming::Adaptive
{}

namespace py::wrapper::Windows::Media::Streaming::Adaptive
{
    using AdaptiveMediaSource = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource>;
    using AdaptiveMediaSourceAdvancedSettings = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings>;
    using AdaptiveMediaSourceCorrelatedTimes = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCorrelatedTimes>;
    using AdaptiveMediaSourceCreationResult = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult>;
    using AdaptiveMediaSourceDiagnosticAvailableEventArgs = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs>;
    using AdaptiveMediaSourceDiagnostics = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics>;
    using AdaptiveMediaSourceDownloadBitrateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs>;
    using AdaptiveMediaSourceDownloadCompletedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs>;
    using AdaptiveMediaSourceDownloadFailedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs>;
    using AdaptiveMediaSourceDownloadRequestedDeferral = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral>;
    using AdaptiveMediaSourceDownloadRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs>;
    using AdaptiveMediaSourceDownloadResult = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult>;
    using AdaptiveMediaSourceDownloadStatistics = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics>;
    using AdaptiveMediaSourcePlaybackBitrateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCorrelatedTimes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
