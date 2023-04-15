// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Perception.h")
#include "py.Windows.Devices.Perception.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Media.h")
#include "py.Windows.Media.h"
#endif

#include <winrt/Windows.Devices.Perception.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.Numerics.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Media.h>

#include <winrt/Windows.Devices.Perception.Provider.h>

namespace py::proj::Windows::Devices::Perception::Provider
{}

namespace py::impl::Windows::Devices::Perception::Provider
{
    struct PerceptionStartFaceAuthenticationHandler
    {
        static winrt::Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                return py::convert_to<bool>(return_value.get());
            };
        };
    };

    struct PerceptionStopFaceAuthenticationHandler
    {
        static winrt::Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::Devices::Perception::Provider
{
    using KnownPerceptionFrameKind = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::KnownPerceptionFrameKind>;
    using PerceptionControlGroup = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionControlGroup>;
    using PerceptionCorrelation = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelation>;
    using PerceptionCorrelationGroup = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelationGroup>;
    using PerceptionFaceAuthenticationGroup = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup>;
    using PerceptionFrame = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionFrame>;
    using PerceptionFrameProviderInfo = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo>;
    using PerceptionFrameProviderManagerService = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderManagerService>;
    using PerceptionPropertyChangeRequest = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest>;
    using PerceptionVideoFrameAllocator = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator>;
    using IPerceptionFrameProvider = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProvider>;
    using IPerceptionFrameProviderManager = py::winrt_wrapper<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::KnownPerceptionFrameKind>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionControlGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelationGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderManagerService>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler>
    {
        using type = py::impl::Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler>
    {
        using type = py::impl::Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler;
    };

}
