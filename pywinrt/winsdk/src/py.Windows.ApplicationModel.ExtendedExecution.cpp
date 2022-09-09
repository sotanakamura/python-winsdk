// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#include "pybase.h"
#include "py.Windows.ApplicationModel.ExtendedExecution.h"


namespace py::cpp::Windows::ApplicationModel::ExtendedExecution
{
    struct module_state
    {
        PyObject* type_ExtendedExecutionReason;
        PyObject* type_ExtendedExecutionResult;
        PyObject* type_ExtendedExecutionRevokedReason;
        PyTypeObject* type_ExtendedExecutionRevokedEventArgs;
        PyTypeObject* type_ExtendedExecutionSession;
    };

    static PyObject* register_ExtendedExecutionReason(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ExtendedExecutionReason)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ExtendedExecutionReason = type;
        Py_INCREF(state->type_ExtendedExecutionReason);


        Py_RETURN_NONE;
    }

    static PyObject* register_ExtendedExecutionResult(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ExtendedExecutionResult)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ExtendedExecutionResult = type;
        Py_INCREF(state->type_ExtendedExecutionResult);


        Py_RETURN_NONE;
    }

    static PyObject* register_ExtendedExecutionRevokedReason(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ExtendedExecutionRevokedReason)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ExtendedExecutionRevokedReason = type;
        Py_INCREF(state->type_ExtendedExecutionRevokedReason);


        Py_RETURN_NONE;
    }

    // ----- ExtendedExecutionRevokedEventArgs class --------------------
    constexpr const char* const type_name_ExtendedExecutionRevokedEventArgs = "ExtendedExecutionRevokedEventArgs";

    static PyObject* _new_ExtendedExecutionRevokedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ExtendedExecutionRevokedEventArgs);
        return nullptr;
    }

    static void _dealloc_ExtendedExecutionRevokedEventArgs(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* ExtendedExecutionRevokedEventArgs_get_Reason(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs", L"Reason"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Reason());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_ExtendedExecutionRevokedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ExtendedExecutionRevokedEventArgs[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_ExtendedExecutionRevokedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ExtendedExecutionRevokedEventArgs[] = {
        { "reason", reinterpret_cast<getter>(ExtendedExecutionRevokedEventArgs_get_Reason), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ExtendedExecutionRevokedEventArgs[] = 
    {
        { Py_tp_new, _new_ExtendedExecutionRevokedEventArgs },
        { Py_tp_dealloc, _dealloc_ExtendedExecutionRevokedEventArgs },
        { Py_tp_methods, _methods_ExtendedExecutionRevokedEventArgs },
        { Py_tp_getset, _getset_ExtendedExecutionRevokedEventArgs },
        { },
    };

    static PyType_Spec type_spec_ExtendedExecutionRevokedEventArgs =
    {
        "_winsdk_Windows_ApplicationModel_ExtendedExecution.ExtendedExecutionRevokedEventArgs",
        sizeof(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ExtendedExecutionRevokedEventArgs
    };

    // ----- ExtendedExecutionSession class --------------------
    constexpr const char* const type_name_ExtendedExecutionSession = "ExtendedExecutionSession";

    static PyObject* _new_ExtendedExecutionSession(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession instance{  };
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

    static void _dealloc_ExtendedExecutionSession(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* ExtendedExecutionSession_Close(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"Close", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
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

    static PyObject* ExtendedExecutionSession_RequestExtensionAsync(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"RequestExtensionAsync", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.RequestExtensionAsync());
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

    static PyObject* ExtendedExecutionSession_get_Reason(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"Reason"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Reason());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int ExtendedExecutionSession_put_Reason(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"Reason"))
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
            auto param0 = py::convert_to<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason>(arg);

            self->obj.Reason(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* ExtendedExecutionSession_get_PercentProgress(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"PercentProgress"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.PercentProgress());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int ExtendedExecutionSession_put_PercentProgress(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"PercentProgress"))
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
            auto param0 = py::convert_to<uint32_t>(arg);

            self->obj.PercentProgress(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* ExtendedExecutionSession_get_Description(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"Description"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Description());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int ExtendedExecutionSession_put_Description(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"Description"))
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
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.Description(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* ExtendedExecutionSession_add_Revoked(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"Revoked"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>>(arg);

            return py::convert(self->obj.Revoked(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ExtendedExecutionSession_remove_Revoked(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession", L"Revoked"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.Revoked(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_ExtendedExecutionSession(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _enter_ExtendedExecutionSession(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self) noexcept
    {
        Py_INCREF(self);
        return reinterpret_cast<PyObject*>(self);
    }

    static PyObject* _exit_ExtendedExecutionSession(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession* self) noexcept
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

    static PyMethodDef _methods_ExtendedExecutionSession[] = {
        { "close", reinterpret_cast<PyCFunction>(ExtendedExecutionSession_Close), METH_VARARGS, nullptr },
        { "request_extension_async", reinterpret_cast<PyCFunction>(ExtendedExecutionSession_RequestExtensionAsync), METH_VARARGS, nullptr },
        { "add_revoked", reinterpret_cast<PyCFunction>(ExtendedExecutionSession_add_Revoked), METH_O, nullptr },
        { "remove_revoked", reinterpret_cast<PyCFunction>(ExtendedExecutionSession_remove_Revoked), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ExtendedExecutionSession), METH_O | METH_STATIC, nullptr },
        { "__enter__", reinterpret_cast<PyCFunction>(_enter_ExtendedExecutionSession), METH_NOARGS, nullptr },
        { "__exit__",  reinterpret_cast<PyCFunction>(_exit_ExtendedExecutionSession), METH_VARARGS, nullptr },
        { }
    };

    static PyGetSetDef _getset_ExtendedExecutionSession[] = {
        { "reason", reinterpret_cast<getter>(ExtendedExecutionSession_get_Reason), reinterpret_cast<setter>(ExtendedExecutionSession_put_Reason), nullptr, nullptr },
        { "percent_progress", reinterpret_cast<getter>(ExtendedExecutionSession_get_PercentProgress), reinterpret_cast<setter>(ExtendedExecutionSession_put_PercentProgress), nullptr, nullptr },
        { "description", reinterpret_cast<getter>(ExtendedExecutionSession_get_Description), reinterpret_cast<setter>(ExtendedExecutionSession_put_Description), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ExtendedExecutionSession[] = 
    {
        { Py_tp_new, _new_ExtendedExecutionSession },
        { Py_tp_dealloc, _dealloc_ExtendedExecutionSession },
        { Py_tp_methods, _methods_ExtendedExecutionSession },
        { Py_tp_getset, _getset_ExtendedExecutionSession },
        { },
    };

    static PyType_Spec type_spec_ExtendedExecutionSession =
    {
        "_winsdk_Windows_ApplicationModel_ExtendedExecution.ExtendedExecutionSession",
        sizeof(py::wrapper::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ExtendedExecutionSession
    };

    // ----- Windows.ApplicationModel.ExtendedExecution Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::ExtendedExecution");

    static PyMethodDef module_methods[] = {
        {"_register_ExtendedExecutionReason", register_ExtendedExecutionReason, METH_O, "registers type"},
        {"_register_ExtendedExecutionResult", register_ExtendedExecutionResult, METH_O, "registers type"},
        {"_register_ExtendedExecutionRevokedReason", register_ExtendedExecutionRevokedReason, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ExtendedExecutionReason);
        Py_VISIT(state->type_ExtendedExecutionResult);
        Py_VISIT(state->type_ExtendedExecutionRevokedReason);
        Py_VISIT(state->type_ExtendedExecutionRevokedEventArgs);
        Py_VISIT(state->type_ExtendedExecutionSession);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ExtendedExecutionReason);
        Py_CLEAR(state->type_ExtendedExecutionResult);
        Py_CLEAR(state->type_ExtendedExecutionRevokedReason);
        Py_CLEAR(state->type_ExtendedExecutionRevokedEventArgs);
        Py_CLEAR(state->type_ExtendedExecutionSession);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_ExtendedExecution",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::ExtendedExecution

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_ExtendedExecution(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::ExtendedExecution;

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

    state->type_ExtendedExecutionRevokedEventArgs = py::register_python_type(module.get(), type_name_ExtendedExecutionRevokedEventArgs, &type_spec_ExtendedExecutionRevokedEventArgs, bases.get());
    if (!state->type_ExtendedExecutionRevokedEventArgs)
    {
        return nullptr;
    }

    Py_INCREF(state->type_ExtendedExecutionRevokedEventArgs);

    state->type_ExtendedExecutionSession = py::register_python_type(module.get(), type_name_ExtendedExecutionSession, &type_spec_ExtendedExecutionSession, bases.get());
    if (!state->type_ExtendedExecutionSession)
    {
        return nullptr;
    }

    Py_INCREF(state->type_ExtendedExecutionSession);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::ExtendedExecution;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::ExtendedExecution");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ExtendedExecutionReason;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::ExtendedExecution;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::ExtendedExecution");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ExtendedExecutionResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::ExtendedExecution;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::ExtendedExecution");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ExtendedExecutionRevokedReason;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::ExtendedExecution;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::ExtendedExecution");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ExtendedExecutionRevokedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::ExtendedExecution;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::ExtendedExecution");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ExtendedExecutionSession;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession is not registered");
        return nullptr;
    }

    return python_type;
}
