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

#include <winrt/Windows.Devices.Usb.h>

namespace py::proj::Windows::Devices::Usb
{}

namespace py::impl::Windows::Devices::Usb
{}

namespace py::wrapper::Windows::Devices::Usb
{
    using UsbBulkInEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>;
    using UsbBulkInPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkInPipe>;
    using UsbBulkOutEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>;
    using UsbBulkOutPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkOutPipe>;
    using UsbConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbConfiguration>;
    using UsbConfigurationDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>;
    using UsbControlRequestType = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbControlRequestType>;
    using UsbDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDescriptor>;
    using UsbDevice = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDevice>;
    using UsbDeviceClass = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDeviceClass>;
    using UsbDeviceClasses = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDeviceClasses>;
    using UsbDeviceDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDeviceDescriptor>;
    using UsbEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbEndpointDescriptor>;
    using UsbInterface = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterface>;
    using UsbInterfaceDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>;
    using UsbInterfaceSetting = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterfaceSetting>;
    using UsbInterruptInEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>;
    using UsbInterruptInEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs>;
    using UsbInterruptInPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptInPipe>;
    using UsbInterruptOutEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>;
    using UsbInterruptOutPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>;
    using UsbSetupPacket = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbSetupPacket>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbControlRecipient>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbControlTransferType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbEndpointType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbReadOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbTransferDirection>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbWriteOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbBulkInPipe>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbBulkOutPipe>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbControlRequestType>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbDeviceClass>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbDeviceClasses>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbDeviceDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbEndpointDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterface>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterfaceSetting>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterruptInPipe>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Usb::UsbSetupPacket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
