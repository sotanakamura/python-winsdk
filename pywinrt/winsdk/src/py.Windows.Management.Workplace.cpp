// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#include "pybase.h"
#include "py.Windows.Management.Workplace.h"


namespace py::cpp::Windows::Management::Workplace
{
    struct module_state
    {
        PyObject* type_MessagingSyncPolicy;
        PyTypeObject* type_MdmPolicy;
        PyTypeObject* type_WorkplaceSettings;
    };

    static PyObject* register_MessagingSyncPolicy(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_MessagingSyncPolicy)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_MessagingSyncPolicy = type;
        Py_INCREF(state->type_MessagingSyncPolicy);


        Py_RETURN_NONE;
    }

    // ----- MdmPolicy class --------------------
    constexpr const char* const type_name_MdmPolicy = "MdmPolicy";

    static PyObject* _new_MdmPolicy(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_MdmPolicy);
        return nullptr;
    }

    static PyObject* MdmPolicy_GetMessagingSyncPolicy(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.Workplace.MdmPolicy", L"GetMessagingSyncPolicy", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Management::Workplace::MdmPolicy::GetMessagingSyncPolicy());
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

    static PyObject* MdmPolicy_IsBrowserAllowed(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.Workplace.MdmPolicy", L"IsBrowserAllowed", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Management::Workplace::MdmPolicy::IsBrowserAllowed());
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

    static PyObject* MdmPolicy_IsCameraAllowed(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.Workplace.MdmPolicy", L"IsCameraAllowed", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Management::Workplace::MdmPolicy::IsCameraAllowed());
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

    static PyObject* MdmPolicy_IsMicrosoftAccountAllowed(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.Workplace.MdmPolicy", L"IsMicrosoftAccountAllowed", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Management::Workplace::MdmPolicy::IsMicrosoftAccountAllowed());
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

    static PyObject* MdmPolicy_IsStoreAllowed(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.Workplace.MdmPolicy", L"IsStoreAllowed", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Management::Workplace::MdmPolicy::IsStoreAllowed());
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

    static PyMethodDef _methods_MdmPolicy[] = {
        { "get_messaging_sync_policy", reinterpret_cast<PyCFunction>(MdmPolicy_GetMessagingSyncPolicy), METH_VARARGS | METH_STATIC, nullptr },
        { "is_browser_allowed", reinterpret_cast<PyCFunction>(MdmPolicy_IsBrowserAllowed), METH_VARARGS | METH_STATIC, nullptr },
        { "is_camera_allowed", reinterpret_cast<PyCFunction>(MdmPolicy_IsCameraAllowed), METH_VARARGS | METH_STATIC, nullptr },
        { "is_microsoft_account_allowed", reinterpret_cast<PyCFunction>(MdmPolicy_IsMicrosoftAccountAllowed), METH_VARARGS | METH_STATIC, nullptr },
        { "is_store_allowed", reinterpret_cast<PyCFunction>(MdmPolicy_IsStoreAllowed), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_MdmPolicy[] = {
        { }
    };

    static PyType_Slot _type_slots_MdmPolicy[] = 
    {
        { Py_tp_new, _new_MdmPolicy },
        { Py_tp_methods, _methods_MdmPolicy },
        { Py_tp_getset, _getset_MdmPolicy },
        { },
    };

    static PyType_Spec type_spec_MdmPolicy =
    {
        "_winsdk_Windows_Management_Workplace.MdmPolicy",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_MdmPolicy
    };

    // ----- WorkplaceSettings class --------------------
    constexpr const char* const type_name_WorkplaceSettings = "WorkplaceSettings";

    static PyObject* _new_WorkplaceSettings(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_WorkplaceSettings);
        return nullptr;
    }

    static PyObject* WorkplaceSettings_get_IsMicrosoftAccountOptional(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.Workplace.WorkplaceSettings", L"IsMicrosoftAccountOptional"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Management::Workplace::WorkplaceSettings::IsMicrosoftAccountOptional());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WorkplaceSettings[] = {
        { "get_is_microsoft_account_optional", reinterpret_cast<PyCFunction>(WorkplaceSettings_get_IsMicrosoftAccountOptional), METH_NOARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WorkplaceSettings[] = {
        { }
    };

    static PyType_Slot _type_slots_WorkplaceSettings[] = 
    {
        { Py_tp_new, _new_WorkplaceSettings },
        { Py_tp_methods, _methods_WorkplaceSettings },
        { Py_tp_getset, _getset_WorkplaceSettings },
        { },
    };

    static PyType_Spec type_spec_WorkplaceSettings =
    {
        "_winsdk_Windows_Management_Workplace.WorkplaceSettings",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WorkplaceSettings
    };

    // ----- Windows.Management.Workplace Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Management::Workplace");

    static PyMethodDef module_methods[] = {
        {"_register_MessagingSyncPolicy", register_MessagingSyncPolicy, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_MessagingSyncPolicy);
        Py_VISIT(state->type_MdmPolicy);
        Py_VISIT(state->type_WorkplaceSettings);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_MessagingSyncPolicy);
        Py_CLEAR(state->type_MdmPolicy);
        Py_CLEAR(state->type_WorkplaceSettings);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Management_Workplace",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Management::Workplace

PyMODINIT_FUNC PyInit__winsdk_Windows_Management_Workplace(void) noexcept
{
    using namespace py::cpp::Windows::Management::Workplace;

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

    state->type_MdmPolicy = py::register_python_type(module.get(), type_name_MdmPolicy, &type_spec_MdmPolicy, nullptr);
    if (!state->type_MdmPolicy)
    {
        return nullptr;
    }

    Py_INCREF(state->type_MdmPolicy);

    state->type_WorkplaceSettings = py::register_python_type(module.get(), type_name_WorkplaceSettings, &type_spec_WorkplaceSettings, nullptr);
    if (!state->type_WorkplaceSettings)
    {
        return nullptr;
    }

    Py_INCREF(state->type_WorkplaceSettings);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Management::Workplace::MessagingSyncPolicy>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Workplace;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Workplace");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MessagingSyncPolicy;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Workplace::MessagingSyncPolicy is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::Workplace::MdmPolicy>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Workplace;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Workplace");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MdmPolicy;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Workplace::MdmPolicy is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::Workplace::WorkplaceSettings>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Workplace;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Workplace");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WorkplaceSettings;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Workplace::WorkplaceSettings is not registered");
        return nullptr;
    }

    return python_type;
}
