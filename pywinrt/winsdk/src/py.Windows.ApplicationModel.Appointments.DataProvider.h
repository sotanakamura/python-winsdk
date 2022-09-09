// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Appointments.h")
#include "py.Windows.ApplicationModel.Appointments.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.ApplicationModel.Appointments.DataProvider.h>

namespace py::proj::Windows::ApplicationModel::Appointments::DataProvider
{}

namespace py::impl::Windows::ApplicationModel::Appointments::DataProvider
{}

namespace py::wrapper::Windows::ApplicationModel::Appointments::DataProvider
{
    using AppointmentCalendarCancelMeetingRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest>;
    using AppointmentCalendarCancelMeetingRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>;
    using AppointmentCalendarCreateOrUpdateAppointmentRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest>;
    using AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>;
    using AppointmentCalendarForwardMeetingRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest>;
    using AppointmentCalendarForwardMeetingRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>;
    using AppointmentCalendarProposeNewTimeForMeetingRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest>;
    using AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>;
    using AppointmentCalendarSyncManagerSyncRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest>;
    using AppointmentCalendarSyncManagerSyncRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>;
    using AppointmentCalendarUpdateMeetingResponseRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest>;
    using AppointmentCalendarUpdateMeetingResponseRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>;
    using AppointmentDataProviderConnection = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection>;
    using AppointmentDataProviderTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
