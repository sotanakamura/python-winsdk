// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Adc.Provider.h")
#include "py.Windows.Devices.Adc.Provider.h"
#endif

#if __has_include("py.Windows.Devices.Gpio.Provider.h")
#include "py.Windows.Devices.Gpio.Provider.h"
#endif

#if __has_include("py.Windows.Devices.I2c.Provider.h")
#include "py.Windows.Devices.I2c.Provider.h"
#endif

#if __has_include("py.Windows.Devices.Pwm.Provider.h")
#include "py.Windows.Devices.Pwm.Provider.h"
#endif

#if __has_include("py.Windows.Devices.Spi.Provider.h")
#include "py.Windows.Devices.Spi.Provider.h"
#endif

#include <winrt/Windows.Devices.h>

namespace py::proj::Windows::Devices
{}

namespace py::impl::Windows::Devices
{}

namespace py::wrapper::Windows::Devices
{
    using LowLevelDevicesAggregateProvider = py::winrt_wrapper<winrt::Windows::Devices::LowLevelDevicesAggregateProvider>;
    using LowLevelDevicesController = py::winrt_wrapper<winrt::Windows::Devices::LowLevelDevicesController>;
    using ILowLevelDevicesAggregateProvider = py::winrt_wrapper<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Devices::LowLevelDevicesAggregateProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::LowLevelDevicesController>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
