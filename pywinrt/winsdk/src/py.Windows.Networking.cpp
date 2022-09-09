// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#include "pybase.h"
#include "py.Windows.Networking.h"


namespace py::cpp::Windows::Networking
{
    struct module_state
    {
        PyObject* type_DomainNameType;
        PyObject* type_HostNameSortOptions;
        PyObject* type_HostNameType;
        PyTypeObject* type_EndpointPair;
        PyTypeObject* type_HostName;
    };

    static PyObject* register_DomainNameType(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DomainNameType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DomainNameType = type;
        Py_INCREF(state->type_DomainNameType);


        Py_RETURN_NONE;
    }

    static PyObject* register_HostNameSortOptions(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_HostNameSortOptions)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_HostNameSortOptions = type;
        Py_INCREF(state->type_HostNameSortOptions);


        Py_RETURN_NONE;
    }

    static PyObject* register_HostNameType(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_HostNameType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_HostNameType = type;
        Py_INCREF(state->type_HostNameType);


        Py_RETURN_NONE;
    }

    // ----- EndpointPair class --------------------
    constexpr const char* const type_name_EndpointPair = "EndpointPair";

    static PyObject* _new_EndpointPair(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 4)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::HostName>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Networking::HostName>(args, 2);
                auto param3 = py::convert_to<winrt::hstring>(args, 3);

                winrt::Windows::Networking::EndpointPair instance{ param0, param1, param2, param3 };
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

    static void _dealloc_EndpointPair(py::wrapper::Windows::Networking::EndpointPair* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* EndpointPair_get_RemoteServiceName(py::wrapper::Windows::Networking::EndpointPair* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"RemoteServiceName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.RemoteServiceName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int EndpointPair_put_RemoteServiceName(py::wrapper::Windows::Networking::EndpointPair* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"RemoteServiceName"))
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

            self->obj.RemoteServiceName(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* EndpointPair_get_RemoteHostName(py::wrapper::Windows::Networking::EndpointPair* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"RemoteHostName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.RemoteHostName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int EndpointPair_put_RemoteHostName(py::wrapper::Windows::Networking::EndpointPair* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"RemoteHostName"))
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
            auto param0 = py::convert_to<winrt::Windows::Networking::HostName>(arg);

            self->obj.RemoteHostName(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* EndpointPair_get_LocalServiceName(py::wrapper::Windows::Networking::EndpointPair* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"LocalServiceName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.LocalServiceName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int EndpointPair_put_LocalServiceName(py::wrapper::Windows::Networking::EndpointPair* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"LocalServiceName"))
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

            self->obj.LocalServiceName(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* EndpointPair_get_LocalHostName(py::wrapper::Windows::Networking::EndpointPair* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"LocalHostName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.LocalHostName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int EndpointPair_put_LocalHostName(py::wrapper::Windows::Networking::EndpointPair* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.EndpointPair", L"LocalHostName"))
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
            auto param0 = py::convert_to<winrt::Windows::Networking::HostName>(arg);

            self->obj.LocalHostName(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_EndpointPair(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Networking::EndpointPair>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_EndpointPair[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_EndpointPair), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_EndpointPair[] = {
        { "remote_service_name", reinterpret_cast<getter>(EndpointPair_get_RemoteServiceName), reinterpret_cast<setter>(EndpointPair_put_RemoteServiceName), nullptr, nullptr },
        { "remote_host_name", reinterpret_cast<getter>(EndpointPair_get_RemoteHostName), reinterpret_cast<setter>(EndpointPair_put_RemoteHostName), nullptr, nullptr },
        { "local_service_name", reinterpret_cast<getter>(EndpointPair_get_LocalServiceName), reinterpret_cast<setter>(EndpointPair_put_LocalServiceName), nullptr, nullptr },
        { "local_host_name", reinterpret_cast<getter>(EndpointPair_get_LocalHostName), reinterpret_cast<setter>(EndpointPair_put_LocalHostName), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_EndpointPair[] = 
    {
        { Py_tp_new, _new_EndpointPair },
        { Py_tp_dealloc, _dealloc_EndpointPair },
        { Py_tp_methods, _methods_EndpointPair },
        { Py_tp_getset, _getset_EndpointPair },
        { },
    };

    static PyType_Spec type_spec_EndpointPair =
    {
        "_winsdk_Windows_Networking.EndpointPair",
        sizeof(py::wrapper::Windows::Networking::EndpointPair),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_EndpointPair
    };

    // ----- HostName class --------------------
    constexpr const char* const type_name_HostName = "HostName";

    static PyObject* _new_HostName(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                winrt::Windows::Networking::HostName instance{ param0 };
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

    static void _dealloc_HostName(py::wrapper::Windows::Networking::HostName* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* HostName_Compare(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Networking.HostName", L"Compare", 2))
            {
                PyErr_SetString(PyExc_AttributeError, "method 2 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);

                return py::convert(winrt::Windows::Networking::HostName::Compare(param0, param1));
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

    static PyObject* HostName_IsEqual(py::wrapper::Windows::Networking::HostName* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Networking.HostName", L"IsEqual", 1))
            {
                PyErr_SetString(PyExc_AttributeError, "method 1 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::HostName>(args, 0);

                return py::convert(self->obj.IsEqual(param0));
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

    static PyObject* HostName_ToString(py::wrapper::Windows::Networking::HostName* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Networking.HostName", L"ToString", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.ToString());
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

    static PyObject* HostName_get_CanonicalName(py::wrapper::Windows::Networking::HostName* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.HostName", L"CanonicalName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.CanonicalName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* HostName_get_DisplayName(py::wrapper::Windows::Networking::HostName* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.HostName", L"DisplayName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DisplayName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* HostName_get_IPInformation(py::wrapper::Windows::Networking::HostName* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.HostName", L"IPInformation"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.IPInformation());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* HostName_get_RawName(py::wrapper::Windows::Networking::HostName* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.HostName", L"RawName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.RawName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* HostName_get_Type(py::wrapper::Windows::Networking::HostName* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Networking.HostName", L"Type"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Type());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_HostName(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Networking::HostName>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _str_HostName(py::wrapper::Windows::Networking::HostName* self) noexcept
    {
        try
        {
            return py::convert(self->obj.ToString());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_HostName[] = {
        { "compare", reinterpret_cast<PyCFunction>(HostName_Compare), METH_VARARGS | METH_STATIC, nullptr },
        { "is_equal", reinterpret_cast<PyCFunction>(HostName_IsEqual), METH_VARARGS, nullptr },
        { "to_string", reinterpret_cast<PyCFunction>(HostName_ToString), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_HostName), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_HostName[] = {
        { "canonical_name", reinterpret_cast<getter>(HostName_get_CanonicalName), nullptr, nullptr, nullptr },
        { "display_name", reinterpret_cast<getter>(HostName_get_DisplayName), nullptr, nullptr, nullptr },
        { "i_p_information", reinterpret_cast<getter>(HostName_get_IPInformation), nullptr, nullptr, nullptr },
        { "raw_name", reinterpret_cast<getter>(HostName_get_RawName), nullptr, nullptr, nullptr },
        { "type", reinterpret_cast<getter>(HostName_get_Type), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_HostName[] = 
    {
        { Py_tp_new, _new_HostName },
        { Py_tp_dealloc, _dealloc_HostName },
        { Py_tp_methods, _methods_HostName },
        { Py_tp_getset, _getset_HostName },
        { Py_tp_str, _str_HostName },
        { },
    };

    static PyType_Spec type_spec_HostName =
    {
        "_winsdk_Windows_Networking.HostName",
        sizeof(py::wrapper::Windows::Networking::HostName),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_HostName
    };

    // ----- Windows.Networking Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Networking");

    static PyMethodDef module_methods[] = {
        {"_register_DomainNameType", register_DomainNameType, METH_O, "registers type"},
        {"_register_HostNameSortOptions", register_HostNameSortOptions, METH_O, "registers type"},
        {"_register_HostNameType", register_HostNameType, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DomainNameType);
        Py_VISIT(state->type_HostNameSortOptions);
        Py_VISIT(state->type_HostNameType);
        Py_VISIT(state->type_EndpointPair);
        Py_VISIT(state->type_HostName);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DomainNameType);
        Py_CLEAR(state->type_HostNameSortOptions);
        Py_CLEAR(state->type_HostNameType);
        Py_CLEAR(state->type_EndpointPair);
        Py_CLEAR(state->type_HostName);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Networking",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Networking

PyMODINIT_FUNC PyInit__winsdk_Windows_Networking(void) noexcept
{
    using namespace py::cpp::Windows::Networking;

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

    state->type_EndpointPair = py::register_python_type(module.get(), type_name_EndpointPair, &type_spec_EndpointPair, bases.get());
    if (!state->type_EndpointPair)
    {
        return nullptr;
    }

    Py_INCREF(state->type_EndpointPair);

    state->type_HostName = py::register_python_type(module.get(), type_name_HostName, &type_spec_HostName, bases.get());
    if (!state->type_HostName)
    {
        return nullptr;
    }

    Py_INCREF(state->type_HostName);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Networking::DomainNameType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Networking;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Networking");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DomainNameType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Networking::DomainNameType is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Networking::HostNameSortOptions>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Networking;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Networking");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_HostNameSortOptions;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Networking::HostNameSortOptions is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Networking::HostNameType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Networking;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Networking");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_HostNameType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Networking::HostNameType is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Networking::EndpointPair>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Networking;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Networking");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_EndpointPair;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Networking::EndpointPair is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Networking::HostName>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Networking;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Networking");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_HostName;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Networking::HostName is not registered");
        return nullptr;
    }

    return python_type;
}
