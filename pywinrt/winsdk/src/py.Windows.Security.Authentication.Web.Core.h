// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Credentials.h>
#include <winrt/Windows.System.h>

#include <winrt/Windows.Security.Authentication.Web.Core.h>

namespace py::proj::Windows::Security::Authentication::Web::Core
{}

namespace py::impl::Windows::Security::Authentication::Web::Core
{}

namespace py::wrapper::Windows::Security::Authentication::Web::Core
{
    using FindAllAccountsResult = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::FindAllAccountsResult>;
    using WebAccountEventArgs = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::WebAccountEventArgs>;
    using WebAccountMonitor = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::WebAccountMonitor>;
    using WebAuthenticationCoreManager = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager>;
    using WebProviderError = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::WebProviderError>;
    using WebTokenRequest = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest>;
    using WebTokenRequestResult = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestResult>;
    using WebTokenResponse = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Core::WebTokenResponse>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::FindAllAccountsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::WebAccountEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::WebAccountMonitor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::WebProviderError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Core::WebTokenResponse>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
