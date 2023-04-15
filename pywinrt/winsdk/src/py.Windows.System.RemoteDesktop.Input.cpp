// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#include "pybase.h"
#include "py.Windows.System.RemoteDesktop.Input.h"


namespace py::cpp::Windows::System::RemoteDesktop::Input
{
    struct module_state
    {
        PyTypeObject* type_RemoteTextConnection;
    };

    // ----- RemoteTextConnection class --------------------
    static constexpr const char* const type_name_RemoteTextConnection = "RemoteTextConnection";

    static PyObject* _new_RemoteTextConnection(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        auto arg_count = PyTuple_Size(args);
        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler>(args, 1);

                winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection instance{ param0, param1 };
                return py::wrap(instance, type);
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static void _dealloc_RemoteTextConnection(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self) noexcept
    {
        auto tp = Py_TYPE(self);

        if (PyType_IS_GC(tp))
        {
            PyObject_GC_UnTrack(self);
        }

        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* RemoteTextConnection_Close(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.RemoteDesktop.Input.RemoteTextConnection", L"Close", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Close();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* RemoteTextConnection_RegisterThread(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.RemoteDesktop.Input.RemoteTextConnection", L"RegisterThread", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<uint32_t>(args, 0);

                self->obj.RegisterThread(param0);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* RemoteTextConnection_ReportDataReceived(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.RemoteDesktop.Input.RemoteTextConnection", L"ReportDataReceived", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<py::pybuf_view<uint8_t, false>>(args, 0);

                self->obj.ReportDataReceived(param0);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* RemoteTextConnection_UnregisterThread(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.RemoteDesktop.Input.RemoteTextConnection", L"UnregisterThread", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<uint32_t>(args, 0);

                self->obj.UnregisterThread(param0);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* RemoteTextConnection_get_IsEnabled(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.RemoteDesktop.Input.RemoteTextConnection", L"IsEnabled"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.IsEnabled());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int RemoteTextConnection_put_IsEnabled(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.RemoteDesktop.Input.RemoteTextConnection", L"IsEnabled"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return -1;
        }

        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<bool>(arg);

            self->obj.IsEnabled(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _assign_array_RemoteTextConnection(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_RemoteTextConnection(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _enter_RemoteTextConnection(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self) noexcept
    {
        Py_INCREF(self);
        return reinterpret_cast<PyObject*>(self);
    }

    static PyObject* _exit_RemoteTextConnection(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection* self) noexcept
    {
        try
        {
            self->obj.Close();
            Py_RETURN_FALSE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RemoteTextConnection[] = {
        { "close", reinterpret_cast<PyCFunction>(RemoteTextConnection_Close), METH_VARARGS, nullptr },
        { "register_thread", reinterpret_cast<PyCFunction>(RemoteTextConnection_RegisterThread), METH_VARARGS, nullptr },
        { "report_data_received", reinterpret_cast<PyCFunction>(RemoteTextConnection_ReportDataReceived), METH_VARARGS, nullptr },
        { "unregister_thread", reinterpret_cast<PyCFunction>(RemoteTextConnection_UnregisterThread), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_RemoteTextConnection, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_RemoteTextConnection), METH_O | METH_STATIC, nullptr },
        { "__enter__", reinterpret_cast<PyCFunction>(_enter_RemoteTextConnection), METH_NOARGS, nullptr },
        { "__exit__",  reinterpret_cast<PyCFunction>(_exit_RemoteTextConnection), METH_VARARGS, nullptr },
        { }
    };

    static PyGetSetDef _getset_RemoteTextConnection[] = {
        { "is_enabled", reinterpret_cast<getter>(RemoteTextConnection_get_IsEnabled), reinterpret_cast<setter>(RemoteTextConnection_put_IsEnabled), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_RemoteTextConnection[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_RemoteTextConnection) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_RemoteTextConnection) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_RemoteTextConnection) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_RemoteTextConnection) },
        { },
    };

    static PyType_Spec type_spec_RemoteTextConnection =
    {
        "_winsdk_Windows_System_RemoteDesktop_Input.RemoteTextConnection",
        sizeof(py::wrapper::Windows::System::RemoteDesktop::Input::RemoteTextConnection),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RemoteTextConnection
    };

    // ----- Windows.System.RemoteDesktop.Input Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::RemoteDesktop::Input");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_RemoteTextConnection);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_RemoteTextConnection);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_RemoteDesktop_Input",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::RemoteDesktop::Input

PyMODINIT_FUNC PyInit__winsdk_Windows_System_RemoteDesktop_Input(void) noexcept
{
    using namespace py::cpp::Windows::System::RemoteDesktop::Input;

    py::pyobj_handle module{PyModule_Create(&module_def)};

    if (!module)
    {
        return nullptr;
    }

    auto object_type = py::get_python_type<py::Object>();
    if (!object_type)
    {
        return nullptr;
    }

    py::pyobj_handle bases{PyTuple_Pack(1, object_type)};

    if (!bases)
    {
        return nullptr;
    }

    py::pyobj_handle collections_abc_module{PyImport_ImportModule("collections.abc")};

    if (!collections_abc_module)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "Sequence")};

    if (!sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_bases{PyTuple_Pack(2, object_type, sequence_type.get())};

    if (!sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableSequence")};

    if (!mutable_sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_bases{PyTuple_Pack(2, object_type, mutable_sequence_type.get())};

    if (!mutable_sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "Mapping")};

    if (!mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_bases{PyTuple_Pack(2, object_type, mapping_type.get())};

    if (!mapping_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableMapping")};

    if (!mutable_mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_bases{PyTuple_Pack(2, object_type, mutable_mapping_type.get())};

    if (!mutable_mapping_bases)
    {
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module.get()));
    assert(state);

    state->type_RemoteTextConnection = py::register_python_type(module.get(), type_name_RemoteTextConnection, &type_spec_RemoteTextConnection, bases.get(), nullptr);
    if (!state->type_RemoteTextConnection)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::RemoteDesktop::Input;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::RemoteDesktop::Input");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_RemoteTextConnection;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection is not registered");
        return nullptr;
    }

    return python_type;
}
