// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#include "pybase.h"
#include "py.Windows.Security.Authorization.AppCapabilityAccess.h"


namespace py::cpp::Windows::Security::Authorization::AppCapabilityAccess
{
    struct module_state
    {
        PyObject* type_AppCapabilityAccessStatus;
        PyTypeObject* type_AppCapability;
        PyTypeObject* type_AppCapabilityAccessChangedEventArgs;
    };

    static PyObject* register_AppCapabilityAccessStatus(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_AppCapabilityAccessStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_AppCapabilityAccessStatus = type;
        Py_INCREF(state->type_AppCapabilityAccessStatus);


        Py_RETURN_NONE;
    }

    // ----- AppCapability class --------------------
    static constexpr const char* const type_name_AppCapability = "AppCapability";

    static PyObject* _new_AppCapability(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_AppCapability);
        return nullptr;
    }

    static void _dealloc_AppCapability(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self) noexcept
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

    static PyObject* AppCapability_CheckAccess(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"CheckAccess", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.CheckAccess());
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

    static PyObject* AppCapability_Create(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"Create", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::Create(param0));
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

    static PyObject* AppCapability_CreateWithProcessIdForUser(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"CreateWithProcessIdForUser", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::User>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<uint32_t>(args, 2);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::CreateWithProcessIdForUser(param0, param1, param2));
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

    static PyObject* AppCapability_RequestAccessAsync(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"RequestAccessAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.RequestAccessAsync());
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

    static PyObject* AppCapability_RequestAccessForCapabilitiesAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"RequestAccessForCapabilitiesAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 0);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::RequestAccessForCapabilitiesAsync(param0));
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

    static PyObject* AppCapability_RequestAccessForCapabilitiesForUserAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"RequestAccessForCapabilitiesForUserAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::User>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 1);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::RequestAccessForCapabilitiesForUserAsync(param0, param1));
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

    static PyObject* AppCapability_get_CapabilityName(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"CapabilityName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.CapabilityName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AppCapability_get_User(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"User"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.User());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AppCapability_get_DisplayMessage(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"DisplayMessage"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DisplayMessage());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int AppCapability_put_DisplayMessage(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"DisplayMessage"))
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

            self->obj.DisplayMessage(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* AppCapability_add_AccessChanged(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"AccessChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability, winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>>(arg);

            return py::convert(self->obj.AccessChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AppCapability_remove_AccessChanged(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability", L"AccessChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.AccessChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_AppCapability(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_AppCapability(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_AppCapability[] = {
        { "check_access", reinterpret_cast<PyCFunction>(AppCapability_CheckAccess), METH_VARARGS, nullptr },
        { "create", reinterpret_cast<PyCFunction>(AppCapability_Create), METH_VARARGS | METH_STATIC, nullptr },
        { "create_with_process_id_for_user", reinterpret_cast<PyCFunction>(AppCapability_CreateWithProcessIdForUser), METH_VARARGS | METH_STATIC, nullptr },
        { "request_access_async", reinterpret_cast<PyCFunction>(AppCapability_RequestAccessAsync), METH_VARARGS, nullptr },
        { "request_access_for_capabilities_async", reinterpret_cast<PyCFunction>(AppCapability_RequestAccessForCapabilitiesAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "request_access_for_capabilities_for_user_async", reinterpret_cast<PyCFunction>(AppCapability_RequestAccessForCapabilitiesForUserAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "add_access_changed", reinterpret_cast<PyCFunction>(AppCapability_add_AccessChanged), METH_O, nullptr },
        { "remove_access_changed", reinterpret_cast<PyCFunction>(AppCapability_remove_AccessChanged), METH_O, nullptr },
        { "_assign_array_", _assign_array_AppCapability, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_AppCapability), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_AppCapability[] = {
        { "capability_name", reinterpret_cast<getter>(AppCapability_get_CapabilityName), nullptr, nullptr, nullptr },
        { "user", reinterpret_cast<getter>(AppCapability_get_User), nullptr, nullptr, nullptr },
        { "display_message", reinterpret_cast<getter>(AppCapability_get_DisplayMessage), reinterpret_cast<setter>(AppCapability_put_DisplayMessage), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_AppCapability[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_AppCapability) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_AppCapability) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_AppCapability) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_AppCapability) },
        { },
    };

    static PyType_Spec type_spec_AppCapability =
    {
        "_winsdk_Windows_Security_Authorization_AppCapabilityAccess.AppCapability",
        sizeof(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_AppCapability
    };

    // ----- AppCapabilityAccessChangedEventArgs class --------------------
    static constexpr const char* const type_name_AppCapabilityAccessChangedEventArgs = "AppCapabilityAccessChangedEventArgs";

    static PyObject* _new_AppCapabilityAccessChangedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_AppCapabilityAccessChangedEventArgs);
        return nullptr;
    }

    static void _dealloc_AppCapabilityAccessChangedEventArgs(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs* self) noexcept
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

    static PyObject* _assign_array_AppCapabilityAccessChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_AppCapabilityAccessChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_AppCapabilityAccessChangedEventArgs[] = {
        { "_assign_array_", _assign_array_AppCapabilityAccessChangedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_AppCapabilityAccessChangedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_AppCapabilityAccessChangedEventArgs[] = {
        { }
    };

    static PyType_Slot _type_slots_AppCapabilityAccessChangedEventArgs[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_AppCapabilityAccessChangedEventArgs) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_AppCapabilityAccessChangedEventArgs) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_AppCapabilityAccessChangedEventArgs) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_AppCapabilityAccessChangedEventArgs) },
        { },
    };

    static PyType_Spec type_spec_AppCapabilityAccessChangedEventArgs =
    {
        "_winsdk_Windows_Security_Authorization_AppCapabilityAccess.AppCapabilityAccessChangedEventArgs",
        sizeof(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_AppCapabilityAccessChangedEventArgs
    };

    // ----- Windows.Security.Authorization.AppCapabilityAccess Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Security::Authorization::AppCapabilityAccess");

    static PyMethodDef module_methods[] = {
        {"_register_AppCapabilityAccessStatus", register_AppCapabilityAccessStatus, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_AppCapabilityAccessStatus);
        Py_VISIT(state->type_AppCapability);
        Py_VISIT(state->type_AppCapabilityAccessChangedEventArgs);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_AppCapabilityAccessStatus);
        Py_CLEAR(state->type_AppCapability);
        Py_CLEAR(state->type_AppCapabilityAccessChangedEventArgs);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Security_Authorization_AppCapabilityAccess",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Security::Authorization::AppCapabilityAccess

PyMODINIT_FUNC PyInit__winsdk_Windows_Security_Authorization_AppCapabilityAccess(void) noexcept
{
    using namespace py::cpp::Windows::Security::Authorization::AppCapabilityAccess;

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

    state->type_AppCapability = py::register_python_type(module.get(), type_name_AppCapability, &type_spec_AppCapability, bases.get(), nullptr);
    if (!state->type_AppCapability)
    {
        return nullptr;
    }

    state->type_AppCapabilityAccessChangedEventArgs = py::register_python_type(module.get(), type_name_AppCapabilityAccessChangedEventArgs, &type_spec_AppCapabilityAccessChangedEventArgs, bases.get(), nullptr);
    if (!state->type_AppCapabilityAccessChangedEventArgs)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authorization::AppCapabilityAccess;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authorization::AppCapabilityAccess");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AppCapabilityAccessStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authorization::AppCapabilityAccess;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authorization::AppCapabilityAccess");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AppCapability;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authorization::AppCapabilityAccess;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authorization::AppCapabilityAccess");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AppCapabilityAccessChangedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}
