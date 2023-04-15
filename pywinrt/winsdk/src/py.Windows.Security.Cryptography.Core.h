// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Certificates.h")
#include "py.Windows.Security.Cryptography.Certificates.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Cryptography.Certificates.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Security.Cryptography.Core.h>

namespace py::proj::Windows::Security::Cryptography::Core
{}

namespace py::impl::Windows::Security::Cryptography::Core
{}

namespace py::wrapper::Windows::Security::Cryptography::Core
{
    using AsymmetricAlgorithmNames = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames>;
    using AsymmetricKeyAlgorithmProvider = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>;
    using CryptographicEngine = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::CryptographicEngine>;
    using CryptographicHash = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::CryptographicHash>;
    using CryptographicKey = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::CryptographicKey>;
    using EccCurveNames = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::EccCurveNames>;
    using EncryptedAndAuthenticatedData = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>;
    using HashAlgorithmNames = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::HashAlgorithmNames>;
    using HashAlgorithmProvider = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::HashAlgorithmProvider>;
    using KeyDerivationAlgorithmNames = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames>;
    using KeyDerivationAlgorithmProvider = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>;
    using KeyDerivationParameters = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::KeyDerivationParameters>;
    using MacAlgorithmNames = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::MacAlgorithmNames>;
    using MacAlgorithmProvider = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::MacAlgorithmProvider>;
    using PersistedKeyProvider = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::PersistedKeyProvider>;
    using SymmetricAlgorithmNames = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::SymmetricAlgorithmNames>;
    using SymmetricKeyAlgorithmProvider = py::winrt_wrapper<winrt::Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Cryptography::Core::CryptographicPadding> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType> = "i";


    template<>
    struct py_type<winrt::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Cryptography::Core::CryptographicPadding>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::CryptographicEngine>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::CryptographicHash>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::CryptographicKey>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::EccCurveNames>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::HashAlgorithmNames>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::HashAlgorithmProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::KeyDerivationParameters>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::MacAlgorithmNames>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::MacAlgorithmProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::PersistedKeyProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::SymmetricAlgorithmNames>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
