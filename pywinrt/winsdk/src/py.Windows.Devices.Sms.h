// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

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

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Devices.Sms.h>

namespace py::proj::Windows::Devices::Sms
{}

namespace py::impl::Windows::Devices::Sms
{
    struct SmsDeviceStatusChangedEventHandler
    {
        static winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };

    struct SmsMessageReceivedEventHandler
    {
        static winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::Devices::Sms
{
    using DeleteSmsMessageOperation = py::winrt_wrapper<winrt::Windows::Devices::Sms::DeleteSmsMessageOperation>;
    using DeleteSmsMessagesOperation = py::winrt_wrapper<winrt::Windows::Devices::Sms::DeleteSmsMessagesOperation>;
    using GetSmsDeviceOperation = py::winrt_wrapper<winrt::Windows::Devices::Sms::GetSmsDeviceOperation>;
    using GetSmsMessageOperation = py::winrt_wrapper<winrt::Windows::Devices::Sms::GetSmsMessageOperation>;
    using GetSmsMessagesOperation = py::winrt_wrapper<winrt::Windows::Devices::Sms::GetSmsMessagesOperation>;
    using SendSmsMessageOperation = py::winrt_wrapper<winrt::Windows::Devices::Sms::SendSmsMessageOperation>;
    using SmsAppMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsAppMessage>;
    using SmsBinaryMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsBinaryMessage>;
    using SmsBroadcastMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsBroadcastMessage>;
    using SmsDevice = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsDevice>;
    using SmsDevice2 = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsDevice2>;
    using SmsDeviceMessageStore = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsDeviceMessageStore>;
    using SmsFilterRule = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsFilterRule>;
    using SmsFilterRules = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsFilterRules>;
    using SmsMessageReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsMessageReceivedEventArgs>;
    using SmsMessageReceivedTriggerDetails = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails>;
    using SmsMessageRegistration = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsMessageRegistration>;
    using SmsReceivedEventDetails = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsReceivedEventDetails>;
    using SmsSendMessageResult = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsSendMessageResult>;
    using SmsStatusMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsStatusMessage>;
    using SmsTextMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsTextMessage>;
    using SmsTextMessage2 = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsTextMessage2>;
    using SmsVoicemailMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsVoicemailMessage>;
    using SmsWapMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::SmsWapMessage>;
    using ISmsBinaryMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::ISmsBinaryMessage>;
    using ISmsDevice = py::winrt_wrapper<winrt::Windows::Devices::Sms::ISmsDevice>;
    using ISmsMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::ISmsMessage>;
    using ISmsMessageBase = py::winrt_wrapper<winrt::Windows::Devices::Sms::ISmsMessageBase>;
    using ISmsTextMessage = py::winrt_wrapper<winrt::Windows::Devices::Sms::ISmsTextMessage>;
    using SmsEncodedLength = py::winrt_struct_wrapper<winrt::Windows::Devices::Sms::SmsEncodedLength>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::CellularClass> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsBroadcastType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsDataFormat> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsDeviceStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsEncoding> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsFilterActionType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsGeographicalScope> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsMessageClass> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsMessageFilter> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsMessageType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsModemErrorCode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Sms::SmsEncodedLength> = "T{I:segment_count:I:character_count_last_segment:I:characters_per_segment:I:byte_count_last_segment:I:bytes_per_segment:}";


    template<>
    struct py_type<winrt::Windows::Devices::Sms::CellularClass>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsBroadcastType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsDataFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsDeviceStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsEncoding>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsFilterActionType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsGeographicalScope>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsMessageClass>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsMessageFilter>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsMessageType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Sms::SmsModemErrorCode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::DeleteSmsMessageOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::DeleteSmsMessagesOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::GetSmsDeviceOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::GetSmsMessageOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::GetSmsMessagesOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SendSmsMessageOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsAppMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsBinaryMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsBroadcastMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsDevice2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsDeviceMessageStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsFilterRule>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsFilterRules>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsMessageReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsMessageRegistration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsReceivedEventDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsSendMessageResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsStatusMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsTextMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsTextMessage2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsVoicemailMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsWapMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::ISmsBinaryMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::ISmsDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::ISmsMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::ISmsMessageBase>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::ISmsTextMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Sms::SmsEncodedLength>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>
    {
        using type = py::impl::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler>
    {
        using type = py::impl::Windows::Devices::Sms::SmsMessageReceivedEventHandler;
    };

    template<>
    struct converter<winrt::Windows::Devices::Sms::SmsEncodedLength>
    {
        static PyObject* convert(winrt::Windows::Devices::Sms::SmsEncodedLength instance) noexcept;
        static winrt::Windows::Devices::Sms::SmsEncodedLength convert_to(PyObject* obj);
    };

}
