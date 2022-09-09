// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Data.Xml.Dom.h")
#include "py.Windows.Data.Xml.Dom.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Graphics.Printing.PrintTicket.h>

namespace py::proj::Windows::Graphics::Printing::PrintTicket
{}

namespace py::impl::Windows::Graphics::Printing::PrintTicket
{}

namespace py::wrapper::Windows::Graphics::Printing::PrintTicket
{
    using PrintTicketCapabilities = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>;
    using PrintTicketFeature = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>;
    using PrintTicketOption = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketOption>;
    using PrintTicketParameterDefinition = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>;
    using PrintTicketParameterInitializer = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>;
    using PrintTicketValue = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketValue>;
    using WorkflowPrintTicket = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>;
    using WorkflowPrintTicketValidationResult = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketValueType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketOption>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketValue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
