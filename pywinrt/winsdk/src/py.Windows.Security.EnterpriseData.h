// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.h")
#include "py.Windows.Networking.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Security.EnterpriseData.h>

namespace py::proj::Windows::Security::EnterpriseData
{}

namespace py::impl::Windows::Security::EnterpriseData
{}

namespace py::wrapper::Windows::Security::EnterpriseData
{
    using BufferProtectUnprotectResult = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult>;
    using DataProtectionInfo = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>;
    using DataProtectionManager = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::DataProtectionManager>;
    using FileProtectionInfo = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>;
    using FileProtectionManager = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::FileProtectionManager>;
    using FileRevocationManager = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::FileRevocationManager>;
    using FileUnprotectOptions = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::FileUnprotectOptions>;
    using ProtectedAccessResumedEventArgs = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>;
    using ProtectedAccessSuspendingEventArgs = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>;
    using ProtectedContainerExportResult = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult>;
    using ProtectedContainerImportResult = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>;
    using ProtectedContentRevokedEventArgs = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>;
    using ProtectedFileCreateResult = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectedFileCreateResult>;
    using ProtectionPolicyAuditInfo = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>;
    using ProtectionPolicyManager = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager>;
    using ThreadNetworkContext = py::winrt_wrapper<winrt::Windows::Security::EnterpriseData::ThreadNetworkContext>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Security::EnterpriseData::DataProtectionStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::EnterpriseData::EnforcementLevel>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::EnterpriseData::ProtectedImportExportStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::DataProtectionManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::FileProtectionManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::FileRevocationManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::FileUnprotectOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectedFileCreateResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::EnterpriseData::ThreadNetworkContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
