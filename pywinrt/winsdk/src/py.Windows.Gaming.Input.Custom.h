// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Gaming.Input.h")
#include "py.Windows.Gaming.Input.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Gaming.Input.Custom.h>

namespace py::proj::Windows::Gaming::Input::Custom
{}

namespace py::impl::Windows::Gaming::Input::Custom
{}

namespace py::wrapper::Windows::Gaming::Input::Custom
{
    using GameControllerFactoryManager = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::GameControllerFactoryManager>;
    using GipFirmwareUpdateResult = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult>;
    using GipGameControllerProvider = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::GipGameControllerProvider>;
    using HidGameControllerProvider = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::HidGameControllerProvider>;
    using XusbGameControllerProvider = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::XusbGameControllerProvider>;
    using ICustomGameControllerFactory = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory>;
    using IGameControllerInputSink = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink>;
    using IGameControllerProvider = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider>;
    using IGipGameControllerInputSink = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink>;
    using IHidGameControllerInputSink = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink>;
    using IXusbGameControllerInputSink = py::winrt_wrapper<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>;
    using GameControllerVersionInfo = py::winrt_struct_wrapper<winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo>;
    using GipFirmwareUpdateProgress = py::winrt_struct_wrapper<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Input::Custom::GipMessageClass>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Input::Custom::XusbDeviceSubtype>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Input::Custom::XusbDeviceType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::GameControllerFactoryManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::GipGameControllerProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::HidGameControllerProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::XusbGameControllerProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo>
    {
        static PyObject* convert(winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo instance) noexcept;
        static winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>
    {
        static PyObject* convert(winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress instance) noexcept;
        static winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress convert_to(PyObject* obj);
    };

}
