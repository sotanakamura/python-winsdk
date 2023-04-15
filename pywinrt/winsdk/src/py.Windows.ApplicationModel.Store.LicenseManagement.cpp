// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#include "pybase.h"
#include "py.Windows.ApplicationModel.Store.LicenseManagement.h"


namespace py::cpp::Windows::ApplicationModel::Store::LicenseManagement
{
    struct module_state
    {
        PyObject* type_LicenseRefreshOption;
        PyTypeObject* type_LicenseManager;
        PyTypeObject* type_LicenseSatisfactionInfo;
        PyTypeObject* type_LicenseSatisfactionResult;
    };

    static PyObject* register_LicenseRefreshOption(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_LicenseRefreshOption)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_LicenseRefreshOption = type;
        Py_INCREF(state->type_LicenseRefreshOption);


        Py_RETURN_NONE;
    }

    // ----- LicenseManager class --------------------
    static constexpr const char* const type_name_LicenseManager = "LicenseManager";

    static PyObject* _new_LicenseManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_LicenseManager);
        return nullptr;
    }

    static PyObject* LicenseManager_AddLicenseAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager", L"AddLicenseAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 0);

                return py::convert(winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager::AddLicenseAsync(param0));
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

    static PyObject* LicenseManager_GetSatisfactionInfosAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager", L"GetSatisfactionInfosAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 1);

                return py::convert(winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager::GetSatisfactionInfosAsync(param0, param1));
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

    static PyObject* LicenseManager_RefreshLicensesAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager", L"RefreshLicensesAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption>(args, 0);

                return py::convert(winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager::RefreshLicensesAsync(param0));
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

    static PyMethodDef _methods_LicenseManager[] = {
        { "add_license_async", reinterpret_cast<PyCFunction>(LicenseManager_AddLicenseAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_satisfaction_infos_async", reinterpret_cast<PyCFunction>(LicenseManager_GetSatisfactionInfosAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "refresh_licenses_async", reinterpret_cast<PyCFunction>(LicenseManager_RefreshLicensesAsync), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_LicenseManager[] = {
        { }
    };

    static PyType_Slot _type_slots_LicenseManager[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_LicenseManager) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_LicenseManager) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_LicenseManager) },
        { },
    };

    static PyType_Spec type_spec_LicenseManager =
    {
        "_winsdk_Windows_ApplicationModel_Store_LicenseManagement.LicenseManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_LicenseManager
    };

    // ----- LicenseSatisfactionInfo class --------------------
    static constexpr const char* const type_name_LicenseSatisfactionInfo = "LicenseSatisfactionInfo";

    static PyObject* _new_LicenseSatisfactionInfo(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_LicenseSatisfactionInfo);
        return nullptr;
    }

    static void _dealloc_LicenseSatisfactionInfo(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self) noexcept
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

    static PyObject* LicenseSatisfactionInfo_get_IsSatisfied(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo", L"IsSatisfied"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.IsSatisfied());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LicenseSatisfactionInfo_get_SatisfiedByDevice(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo", L"SatisfiedByDevice"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SatisfiedByDevice());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LicenseSatisfactionInfo_get_SatisfiedByInstallMedia(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo", L"SatisfiedByInstallMedia"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SatisfiedByInstallMedia());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LicenseSatisfactionInfo_get_SatisfiedByOpenLicense(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo", L"SatisfiedByOpenLicense"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SatisfiedByOpenLicense());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LicenseSatisfactionInfo_get_SatisfiedByPass(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo", L"SatisfiedByPass"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SatisfiedByPass());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LicenseSatisfactionInfo_get_SatisfiedBySignedInUser(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo", L"SatisfiedBySignedInUser"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SatisfiedBySignedInUser());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LicenseSatisfactionInfo_get_SatisfiedByTrial(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo", L"SatisfiedByTrial"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SatisfiedByTrial());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_LicenseSatisfactionInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_LicenseSatisfactionInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_LicenseSatisfactionInfo[] = {
        { "_assign_array_", _assign_array_LicenseSatisfactionInfo, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_LicenseSatisfactionInfo), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_LicenseSatisfactionInfo[] = {
        { "is_satisfied", reinterpret_cast<getter>(LicenseSatisfactionInfo_get_IsSatisfied), nullptr, nullptr, nullptr },
        { "satisfied_by_device", reinterpret_cast<getter>(LicenseSatisfactionInfo_get_SatisfiedByDevice), nullptr, nullptr, nullptr },
        { "satisfied_by_install_media", reinterpret_cast<getter>(LicenseSatisfactionInfo_get_SatisfiedByInstallMedia), nullptr, nullptr, nullptr },
        { "satisfied_by_open_license", reinterpret_cast<getter>(LicenseSatisfactionInfo_get_SatisfiedByOpenLicense), nullptr, nullptr, nullptr },
        { "satisfied_by_pass", reinterpret_cast<getter>(LicenseSatisfactionInfo_get_SatisfiedByPass), nullptr, nullptr, nullptr },
        { "satisfied_by_signed_in_user", reinterpret_cast<getter>(LicenseSatisfactionInfo_get_SatisfiedBySignedInUser), nullptr, nullptr, nullptr },
        { "satisfied_by_trial", reinterpret_cast<getter>(LicenseSatisfactionInfo_get_SatisfiedByTrial), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_LicenseSatisfactionInfo[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_LicenseSatisfactionInfo) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_LicenseSatisfactionInfo) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_LicenseSatisfactionInfo) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_LicenseSatisfactionInfo) },
        { },
    };

    static PyType_Spec type_spec_LicenseSatisfactionInfo =
    {
        "_winsdk_Windows_ApplicationModel_Store_LicenseManagement.LicenseSatisfactionInfo",
        sizeof(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_LicenseSatisfactionInfo
    };

    // ----- LicenseSatisfactionResult class --------------------
    static constexpr const char* const type_name_LicenseSatisfactionResult = "LicenseSatisfactionResult";

    static PyObject* _new_LicenseSatisfactionResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_LicenseSatisfactionResult);
        return nullptr;
    }

    static void _dealloc_LicenseSatisfactionResult(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult* self) noexcept
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

    static PyObject* LicenseSatisfactionResult_get_ExtendedError(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult", L"ExtendedError"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ExtendedError());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LicenseSatisfactionResult_get_LicenseSatisfactionInfos(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult", L"LicenseSatisfactionInfos"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.LicenseSatisfactionInfos());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_LicenseSatisfactionResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_LicenseSatisfactionResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_LicenseSatisfactionResult[] = {
        { "_assign_array_", _assign_array_LicenseSatisfactionResult, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_LicenseSatisfactionResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_LicenseSatisfactionResult[] = {
        { "extended_error", reinterpret_cast<getter>(LicenseSatisfactionResult_get_ExtendedError), nullptr, nullptr, nullptr },
        { "license_satisfaction_infos", reinterpret_cast<getter>(LicenseSatisfactionResult_get_LicenseSatisfactionInfos), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_LicenseSatisfactionResult[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_LicenseSatisfactionResult) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_LicenseSatisfactionResult) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_LicenseSatisfactionResult) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_LicenseSatisfactionResult) },
        { },
    };

    static PyType_Spec type_spec_LicenseSatisfactionResult =
    {
        "_winsdk_Windows_ApplicationModel_Store_LicenseManagement.LicenseSatisfactionResult",
        sizeof(py::wrapper::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_LicenseSatisfactionResult
    };

    // ----- Windows.ApplicationModel.Store.LicenseManagement Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::Store::LicenseManagement");

    static PyMethodDef module_methods[] = {
        {"_register_LicenseRefreshOption", register_LicenseRefreshOption, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_LicenseRefreshOption);
        Py_VISIT(state->type_LicenseManager);
        Py_VISIT(state->type_LicenseSatisfactionInfo);
        Py_VISIT(state->type_LicenseSatisfactionResult);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_LicenseRefreshOption);
        Py_CLEAR(state->type_LicenseManager);
        Py_CLEAR(state->type_LicenseSatisfactionInfo);
        Py_CLEAR(state->type_LicenseSatisfactionResult);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_Store_LicenseManagement",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::Store::LicenseManagement

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_Store_LicenseManagement(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::Store::LicenseManagement;

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

    state->type_LicenseManager = py::register_python_type(module.get(), type_name_LicenseManager, &type_spec_LicenseManager, nullptr, nullptr);
    if (!state->type_LicenseManager)
    {
        return nullptr;
    }

    state->type_LicenseSatisfactionInfo = py::register_python_type(module.get(), type_name_LicenseSatisfactionInfo, &type_spec_LicenseSatisfactionInfo, bases.get(), nullptr);
    if (!state->type_LicenseSatisfactionInfo)
    {
        return nullptr;
    }

    state->type_LicenseSatisfactionResult = py::register_python_type(module.get(), type_name_LicenseSatisfactionResult, &type_spec_LicenseSatisfactionResult, bases.get(), nullptr);
    if (!state->type_LicenseSatisfactionResult)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Store::LicenseManagement;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Store::LicenseManagement");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_LicenseRefreshOption;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Store::LicenseManagement;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Store::LicenseManagement");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_LicenseManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Store::LicenseManagement;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Store::LicenseManagement");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_LicenseSatisfactionInfo;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Store::LicenseManagement;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Store::LicenseManagement");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_LicenseSatisfactionResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult is not registered");
        return nullptr;
    }

    return python_type;
}
