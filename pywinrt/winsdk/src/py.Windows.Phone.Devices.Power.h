// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Foundation.h>

#include <winrt/Windows.Phone.Devices.Power.h>

namespace py::proj::Windows::Phone::Devices::Power
{}

namespace py::impl::Windows::Phone::Devices::Power
{}

namespace py::wrapper::Windows::Phone::Devices::Power
{
    using Battery = py::winrt_wrapper<winrt::Windows::Phone::Devices::Power::Battery>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Phone::Devices::Power::Battery>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
