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

#include <winrt/Windows.Services.TargetedContent.h>

namespace py::proj::Windows::Services::TargetedContent
{}

namespace py::impl::Windows::Services::TargetedContent
{}

namespace py::wrapper::Windows::Services::TargetedContent
{
    using TargetedContentAction = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentAction>;
    using TargetedContentAvailabilityChangedEventArgs = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>;
    using TargetedContentChangedEventArgs = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs>;
    using TargetedContentCollection = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentCollection>;
    using TargetedContentContainer = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentContainer>;
    using TargetedContentFile = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentFile>;
    using TargetedContentImage = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentImage>;
    using TargetedContentItem = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentItem>;
    using TargetedContentItemState = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentItemState>;
    using TargetedContentObject = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentObject>;
    using TargetedContentStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>;
    using TargetedContentSubscription = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentSubscription>;
    using TargetedContentSubscriptionOptions = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>;
    using TargetedContentValue = py::winrt_wrapper<winrt::Windows::Services::TargetedContent::TargetedContentValue>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Services::TargetedContent::TargetedContentAppInstallationState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::TargetedContent::TargetedContentAvailability>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::TargetedContent::TargetedContentInteraction>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::TargetedContent::TargetedContentObjectKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::TargetedContent::TargetedContentValueKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentAction>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentCollection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentContainer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentFile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentImage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentItemState>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentObject>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentSubscription>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::TargetedContent::TargetedContentValue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
