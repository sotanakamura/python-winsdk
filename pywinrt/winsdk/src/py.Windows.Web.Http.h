// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.Sockets.h")
#include "py.Windows.Networking.Sockets.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Certificates.h")
#include "py.Windows.Security.Cryptography.Certificates.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.Web.Http.Filters.h")
#include "py.Windows.Web.Http.Filters.h"
#endif

#if __has_include("py.Windows.Web.Http.Headers.h")
#include "py.Windows.Web.Http.Headers.h"
#endif

#include <winrt/Windows.Web.Http.h>

namespace py::proj::Windows::Web::Http
{}

namespace py::impl::Windows::Web::Http
{}

namespace py::wrapper::Windows::Web::Http
{
    using HttpBufferContent = py::winrt_wrapper<winrt::Windows::Web::Http::HttpBufferContent>;
    using HttpClient = py::winrt_wrapper<winrt::Windows::Web::Http::HttpClient>;
    using HttpCookie = py::winrt_wrapper<winrt::Windows::Web::Http::HttpCookie>;
    using HttpCookieCollection = py::winrt_wrapper<winrt::Windows::Web::Http::HttpCookieCollection>;
    using HttpCookieManager = py::winrt_wrapper<winrt::Windows::Web::Http::HttpCookieManager>;
    using HttpFormUrlEncodedContent = py::winrt_wrapper<winrt::Windows::Web::Http::HttpFormUrlEncodedContent>;
    using HttpGetBufferResult = py::winrt_wrapper<winrt::Windows::Web::Http::HttpGetBufferResult>;
    using HttpGetInputStreamResult = py::winrt_wrapper<winrt::Windows::Web::Http::HttpGetInputStreamResult>;
    using HttpGetStringResult = py::winrt_wrapper<winrt::Windows::Web::Http::HttpGetStringResult>;
    using HttpMethod = py::winrt_wrapper<winrt::Windows::Web::Http::HttpMethod>;
    using HttpMultipartContent = py::winrt_wrapper<winrt::Windows::Web::Http::HttpMultipartContent>;
    using HttpMultipartFormDataContent = py::winrt_wrapper<winrt::Windows::Web::Http::HttpMultipartFormDataContent>;
    using HttpRequestMessage = py::winrt_wrapper<winrt::Windows::Web::Http::HttpRequestMessage>;
    using HttpRequestResult = py::winrt_wrapper<winrt::Windows::Web::Http::HttpRequestResult>;
    using HttpResponseMessage = py::winrt_wrapper<winrt::Windows::Web::Http::HttpResponseMessage>;
    using HttpStreamContent = py::winrt_wrapper<winrt::Windows::Web::Http::HttpStreamContent>;
    using HttpStringContent = py::winrt_wrapper<winrt::Windows::Web::Http::HttpStringContent>;
    using HttpTransportInformation = py::winrt_wrapper<winrt::Windows::Web::Http::HttpTransportInformation>;
    using IHttpContent = py::winrt_wrapper<winrt::Windows::Web::Http::IHttpContent>;
    using HttpProgress = py::winrt_struct_wrapper<winrt::Windows::Web::Http::HttpProgress>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Web::Http::HttpCompletionOption>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Web::Http::HttpProgressStage>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Web::Http::HttpResponseMessageSource>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Web::Http::HttpStatusCode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Web::Http::HttpVersion>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpBufferContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpClient>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpCookie>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpCookieCollection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpCookieManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpFormUrlEncodedContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpGetBufferResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpGetInputStreamResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpGetStringResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpMethod>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpMultipartContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpMultipartFormDataContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpRequestMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpRequestResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpResponseMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpStreamContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpStringContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpTransportInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::IHttpContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::HttpProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Web::Http::HttpProgress>
    {
        static PyObject* convert(winrt::Windows::Web::Http::HttpProgress instance) noexcept;
        static winrt::Windows::Web::Http::HttpProgress convert_to(PyObject* obj);
    };

}
