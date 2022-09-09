// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Background.h")
#include "py.Windows.ApplicationModel.Background.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.Notifications.h")
#include "py.Windows.UI.Notifications.h"
#endif

#if __has_include("py.Windows.Web.h")
#include "py.Windows.Web.h"
#endif

#include <winrt/Windows.Networking.BackgroundTransfer.h>

namespace py::proj::Windows::Networking::BackgroundTransfer
{}

namespace py::impl::Windows::Networking::BackgroundTransfer
{}

namespace py::wrapper::Windows::Networking::BackgroundTransfer
{
    using BackgroundDownloader = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader>;
    using BackgroundTransferCompletionGroup = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>;
    using BackgroundTransferCompletionGroupTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>;
    using BackgroundTransferContentPart = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>;
    using BackgroundTransferError = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError>;
    using BackgroundTransferGroup = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>;
    using BackgroundTransferRangesDownloadedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs>;
    using BackgroundUploader = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader>;
    using ContentPrefetcher = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher>;
    using DownloadOperation = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation>;
    using ResponseInformation = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation>;
    using UnconstrainedTransferRequestResult = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>;
    using UploadOperation = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::UploadOperation>;
    using IBackgroundTransferBase = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>;
    using IBackgroundTransferContentPartFactory = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>;
    using IBackgroundTransferOperation = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>;
    using IBackgroundTransferOperationPriority = py::winrt_wrapper<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>;
    using BackgroundDownloadProgress = py::winrt_struct_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>;
    using BackgroundTransferFileRange = py::winrt_struct_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>;
    using BackgroundUploadProgress = py::winrt_struct_wrapper<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::UploadOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>
    {
        static PyObject* convert(winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress instance) noexcept;
        static winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
    {
        static PyObject* convert(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange instance) noexcept;
        static winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>
    {
        static PyObject* convert(winrt::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress instance) noexcept;
        static winrt::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress convert_to(PyObject* obj);
    };

}
