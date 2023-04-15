// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#include "pybase.h"
#include "py.Windows.Security.Authentication.Web.h"


namespace py::cpp::Windows::Security::Authentication::Web
{
    struct module_state
    {
        PyObject* type_TokenBindingKeyType;
        PyObject* type_WebAuthenticationOptions;
        PyObject* type_WebAuthenticationStatus;
        PyTypeObject* type_WebAuthenticationBroker;
        PyTypeObject* type_WebAuthenticationResult;
    };

    static PyObject* register_TokenBindingKeyType(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_TokenBindingKeyType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_TokenBindingKeyType = type;
        Py_INCREF(state->type_TokenBindingKeyType);


        Py_RETURN_NONE;
    }

    static PyObject* register_WebAuthenticationOptions(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_WebAuthenticationOptions)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_WebAuthenticationOptions = type;
        Py_INCREF(state->type_WebAuthenticationOptions);


        Py_RETURN_NONE;
    }

    static PyObject* register_WebAuthenticationStatus(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_WebAuthenticationStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_WebAuthenticationStatus = type;
        Py_INCREF(state->type_WebAuthenticationStatus);


        Py_RETURN_NONE;
    }

    // ----- WebAuthenticationBroker class --------------------
    static constexpr const char* const type_name_WebAuthenticationBroker = "WebAuthenticationBroker";

    static PyObject* _new_WebAuthenticationBroker(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_WebAuthenticationBroker);
        return nullptr;
    }

    static PyObject* WebAuthenticationBroker_AuthenticateAndContinue(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"AuthenticateAndContinue", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 0);

                winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::AuthenticateAndContinue(param0);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"AuthenticateAndContinue", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 1);

                winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::AuthenticateAndContinue(param0, param1);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 4)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"AuthenticateAndContinue", 4))
            {
                py::set_arg_count_version_error(4);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Foundation::Collections::ValueSet>(args, 2);
                auto param3 = py::convert_to<winrt::Windows::Security::Authentication::Web::WebAuthenticationOptions>(args, 3);

                winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::AuthenticateAndContinue(param0, param1, param2, param3);
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

    static PyObject* WebAuthenticationBroker_AuthenticateAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"AuthenticateAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Security::Authentication::Web::WebAuthenticationOptions>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 1);

                return py::convert(winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::AuthenticateAsync(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"AuthenticateAsync", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Security::Authentication::Web::WebAuthenticationOptions>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 2);

                return py::convert(winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::AuthenticateAsync(param0, param1, param2));
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

    static PyObject* WebAuthenticationBroker_AuthenticateSilentlyAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"AuthenticateSilentlyAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 0);

                return py::convert(winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::AuthenticateSilentlyAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"AuthenticateSilentlyAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Uri>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Security::Authentication::Web::WebAuthenticationOptions>(args, 1);

                return py::convert(winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::AuthenticateSilentlyAsync(param0, param1));
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

    static PyObject* WebAuthenticationBroker_GetCurrentApplicationCallbackUri(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Authentication.Web.WebAuthenticationBroker", L"GetCurrentApplicationCallbackUri", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker::GetCurrentApplicationCallbackUri());
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

    static PyMethodDef _methods_WebAuthenticationBroker[] = {
        { "authenticate_and_continue", reinterpret_cast<PyCFunction>(WebAuthenticationBroker_AuthenticateAndContinue), METH_VARARGS | METH_STATIC, nullptr },
        { "authenticate_async", reinterpret_cast<PyCFunction>(WebAuthenticationBroker_AuthenticateAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "authenticate_silently_async", reinterpret_cast<PyCFunction>(WebAuthenticationBroker_AuthenticateSilentlyAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_current_application_callback_uri", reinterpret_cast<PyCFunction>(WebAuthenticationBroker_GetCurrentApplicationCallbackUri), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WebAuthenticationBroker[] = {
        { }
    };

    static PyType_Slot _type_slots_WebAuthenticationBroker[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_WebAuthenticationBroker) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_WebAuthenticationBroker) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_WebAuthenticationBroker) },
        { },
    };

    static PyType_Spec type_spec_WebAuthenticationBroker =
    {
        "_winsdk_Windows_Security_Authentication_Web.WebAuthenticationBroker",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WebAuthenticationBroker
    };

    // ----- WebAuthenticationResult class --------------------
    static constexpr const char* const type_name_WebAuthenticationResult = "WebAuthenticationResult";

    static PyObject* _new_WebAuthenticationResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_WebAuthenticationResult);
        return nullptr;
    }

    static void _dealloc_WebAuthenticationResult(py::wrapper::Windows::Security::Authentication::Web::WebAuthenticationResult* self) noexcept
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

    static PyObject* WebAuthenticationResult_get_ResponseData(py::wrapper::Windows::Security::Authentication::Web::WebAuthenticationResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Security.Authentication.Web.WebAuthenticationResult", L"ResponseData"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ResponseData());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WebAuthenticationResult_get_ResponseErrorDetail(py::wrapper::Windows::Security::Authentication::Web::WebAuthenticationResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Security.Authentication.Web.WebAuthenticationResult", L"ResponseErrorDetail"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ResponseErrorDetail());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WebAuthenticationResult_get_ResponseStatus(py::wrapper::Windows::Security::Authentication::Web::WebAuthenticationResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Security.Authentication.Web.WebAuthenticationResult", L"ResponseStatus"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ResponseStatus());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_WebAuthenticationResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Security::Authentication::Web::WebAuthenticationResult>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_WebAuthenticationResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::Authentication::Web::WebAuthenticationResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WebAuthenticationResult[] = {
        { "_assign_array_", _assign_array_WebAuthenticationResult, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_WebAuthenticationResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WebAuthenticationResult[] = {
        { "response_data", reinterpret_cast<getter>(WebAuthenticationResult_get_ResponseData), nullptr, nullptr, nullptr },
        { "response_error_detail", reinterpret_cast<getter>(WebAuthenticationResult_get_ResponseErrorDetail), nullptr, nullptr, nullptr },
        { "response_status", reinterpret_cast<getter>(WebAuthenticationResult_get_ResponseStatus), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_WebAuthenticationResult[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_WebAuthenticationResult) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_WebAuthenticationResult) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_WebAuthenticationResult) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_WebAuthenticationResult) },
        { },
    };

    static PyType_Spec type_spec_WebAuthenticationResult =
    {
        "_winsdk_Windows_Security_Authentication_Web.WebAuthenticationResult",
        sizeof(py::wrapper::Windows::Security::Authentication::Web::WebAuthenticationResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WebAuthenticationResult
    };

    // ----- Windows.Security.Authentication.Web Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Security::Authentication::Web");

    static PyMethodDef module_methods[] = {
        {"_register_TokenBindingKeyType", register_TokenBindingKeyType, METH_O, "registers type"},
        {"_register_WebAuthenticationOptions", register_WebAuthenticationOptions, METH_O, "registers type"},
        {"_register_WebAuthenticationStatus", register_WebAuthenticationStatus, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_TokenBindingKeyType);
        Py_VISIT(state->type_WebAuthenticationOptions);
        Py_VISIT(state->type_WebAuthenticationStatus);
        Py_VISIT(state->type_WebAuthenticationBroker);
        Py_VISIT(state->type_WebAuthenticationResult);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_TokenBindingKeyType);
        Py_CLEAR(state->type_WebAuthenticationOptions);
        Py_CLEAR(state->type_WebAuthenticationStatus);
        Py_CLEAR(state->type_WebAuthenticationBroker);
        Py_CLEAR(state->type_WebAuthenticationResult);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Security_Authentication_Web",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Security::Authentication::Web

PyMODINIT_FUNC PyInit__winsdk_Windows_Security_Authentication_Web(void) noexcept
{
    using namespace py::cpp::Windows::Security::Authentication::Web;

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

    state->type_WebAuthenticationBroker = py::register_python_type(module.get(), type_name_WebAuthenticationBroker, &type_spec_WebAuthenticationBroker, nullptr, nullptr);
    if (!state->type_WebAuthenticationBroker)
    {
        return nullptr;
    }

    state->type_WebAuthenticationResult = py::register_python_type(module.get(), type_name_WebAuthenticationResult, &type_spec_WebAuthenticationResult, bases.get(), nullptr);
    if (!state->type_WebAuthenticationResult)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Security::Authentication::Web::TokenBindingKeyType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authentication::Web;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authentication::Web");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_TokenBindingKeyType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authentication::Web::TokenBindingKeyType is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Security::Authentication::Web::WebAuthenticationOptions>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authentication::Web;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authentication::Web");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WebAuthenticationOptions;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authentication::Web::WebAuthenticationOptions is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Security::Authentication::Web::WebAuthenticationStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authentication::Web;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authentication::Web");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WebAuthenticationStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authentication::Web::WebAuthenticationStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authentication::Web;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authentication::Web");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WebAuthenticationBroker;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::Authentication::Web::WebAuthenticationResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Authentication::Web;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Authentication::Web");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WebAuthenticationResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Authentication::Web::WebAuthenticationResult is not registered");
        return nullptr;
    }

    return python_type;
}
