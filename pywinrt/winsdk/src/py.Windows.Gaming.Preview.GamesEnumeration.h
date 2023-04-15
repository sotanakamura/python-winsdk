// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.h")
#include "py.Windows.ApplicationModel.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.h>

#include <winrt/Windows.Gaming.Preview.GamesEnumeration.h>

namespace py::proj::Windows::Gaming::Preview::GamesEnumeration
{}

namespace py::impl::Windows::Gaming::Preview::GamesEnumeration
{
    struct GameListChangedEventHandler
    {
        static winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler get(PyObject* callable)
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

    struct GameListRemovedEventHandler
    {
        static winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler get(PyObject* callable)
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
}

namespace py::wrapper::Windows::Gaming::Preview::GamesEnumeration
{
    using GameList = py::winrt_wrapper<winrt::Windows::Gaming::Preview::GamesEnumeration::GameList>;
    using GameListEntry = py::winrt_wrapper<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>;
    using GameModeConfiguration = py::winrt_wrapper<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>;
    using GameModeUserConfiguration = py::winrt_wrapper<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>;
    using IGameListEntry = py::winrt_wrapper<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListCategory> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState> = "i";


    template<>
    struct py_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListCategory>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>
    {
        using type = py::impl::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>
    {
        using type = py::impl::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler;
    };

}
