// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Phone.PersonalInformation.h")
#include "py.Windows.Phone.PersonalInformation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Phone.PersonalInformation.Provisioning.h>

namespace py::proj::Windows::Phone::PersonalInformation::Provisioning
{}

namespace py::impl::Windows::Phone::PersonalInformation::Provisioning
{}

namespace py::wrapper::Windows::Phone::PersonalInformation::Provisioning
{
    using ContactPartnerProvisioningManager = py::winrt_wrapper<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager>;
    using MessagePartnerProvisioningManager = py::winrt_wrapper<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
