// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#include "pybase.h"
#include "py.Windows.ApplicationModel.Wallet.System.h"


namespace py::cpp::Windows::ApplicationModel::Wallet::System
{
    struct module_state
    {
        PyObject* type_WalletItemAppAssociation;
        PyTypeObject* type_WalletItemSystemStore;
        PyTypeObject* type_WalletManagerSystem;
    };

    static PyObject* register_WalletItemAppAssociation(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_WalletItemAppAssociation)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_WalletItemAppAssociation = type;
        Py_INCREF(state->type_WalletItemAppAssociation);


        Py_RETURN_NONE;
    }

    // ----- WalletItemSystemStore class --------------------
    constexpr const char* const type_name_WalletItemSystemStore = "WalletItemSystemStore";

    static PyObject* _new_WalletItemSystemStore(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_WalletItemSystemStore);
        return nullptr;
    }

    static void _dealloc_WalletItemSystemStore(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* WalletItemSystemStore_DeleteAsync(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore", L"DeleteAsync", 1))
            {
                PyErr_SetString(PyExc_AttributeError, "method 1 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Wallet::WalletItem>(args, 0);

                return py::convert(self->obj.DeleteAsync(param0));
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

    static PyObject* WalletItemSystemStore_GetAppStatusForItem(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore", L"GetAppStatusForItem", 1))
            {
                PyErr_SetString(PyExc_AttributeError, "method 1 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Wallet::WalletItem>(args, 0);

                return py::convert(self->obj.GetAppStatusForItem(param0));
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

    static PyObject* WalletItemSystemStore_GetItemsAsync(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore", L"GetItemsAsync", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.GetItemsAsync());
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

    static PyObject* WalletItemSystemStore_ImportItemAsync(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore", L"ImportItemAsync", 1))
            {
                PyErr_SetString(PyExc_AttributeError, "method 1 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>(args, 0);

                return py::convert(self->obj.ImportItemAsync(param0));
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

    static PyObject* WalletItemSystemStore_LaunchAppForItemAsync(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore", L"LaunchAppForItemAsync", 1))
            {
                PyErr_SetString(PyExc_AttributeError, "method 1 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Wallet::WalletItem>(args, 0);

                return py::convert(self->obj.LaunchAppForItemAsync(param0));
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

    static PyObject* WalletItemSystemStore_add_ItemsChanged(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore", L"ItemsChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.ItemsChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WalletItemSystemStore_remove_ItemsChanged(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore", L"ItemsChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.ItemsChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_WalletItemSystemStore(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WalletItemSystemStore[] = {
        { "delete_async", reinterpret_cast<PyCFunction>(WalletItemSystemStore_DeleteAsync), METH_VARARGS, nullptr },
        { "get_app_status_for_item", reinterpret_cast<PyCFunction>(WalletItemSystemStore_GetAppStatusForItem), METH_VARARGS, nullptr },
        { "get_items_async", reinterpret_cast<PyCFunction>(WalletItemSystemStore_GetItemsAsync), METH_VARARGS, nullptr },
        { "import_item_async", reinterpret_cast<PyCFunction>(WalletItemSystemStore_ImportItemAsync), METH_VARARGS, nullptr },
        { "launch_app_for_item_async", reinterpret_cast<PyCFunction>(WalletItemSystemStore_LaunchAppForItemAsync), METH_VARARGS, nullptr },
        { "add_items_changed", reinterpret_cast<PyCFunction>(WalletItemSystemStore_add_ItemsChanged), METH_O, nullptr },
        { "remove_items_changed", reinterpret_cast<PyCFunction>(WalletItemSystemStore_remove_ItemsChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_WalletItemSystemStore), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WalletItemSystemStore[] = {
        { }
    };

    static PyType_Slot _type_slots_WalletItemSystemStore[] = 
    {
        { Py_tp_new, _new_WalletItemSystemStore },
        { Py_tp_dealloc, _dealloc_WalletItemSystemStore },
        { Py_tp_methods, _methods_WalletItemSystemStore },
        { Py_tp_getset, _getset_WalletItemSystemStore },
        { },
    };

    static PyType_Spec type_spec_WalletItemSystemStore =
    {
        "_winsdk_Windows_ApplicationModel_Wallet_System.WalletItemSystemStore",
        sizeof(py::wrapper::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WalletItemSystemStore
    };

    // ----- WalletManagerSystem class --------------------
    constexpr const char* const type_name_WalletManagerSystem = "WalletManagerSystem";

    static PyObject* _new_WalletManagerSystem(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_WalletManagerSystem);
        return nullptr;
    }

    static PyObject* WalletManagerSystem_RequestStoreAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Wallet.System.WalletManagerSystem", L"RequestStoreAsync", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::ApplicationModel::Wallet::System::WalletManagerSystem::RequestStoreAsync());
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

    static PyMethodDef _methods_WalletManagerSystem[] = {
        { "request_store_async", reinterpret_cast<PyCFunction>(WalletManagerSystem_RequestStoreAsync), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WalletManagerSystem[] = {
        { }
    };

    static PyType_Slot _type_slots_WalletManagerSystem[] = 
    {
        { Py_tp_new, _new_WalletManagerSystem },
        { Py_tp_methods, _methods_WalletManagerSystem },
        { Py_tp_getset, _getset_WalletManagerSystem },
        { },
    };

    static PyType_Spec type_spec_WalletManagerSystem =
    {
        "_winsdk_Windows_ApplicationModel_Wallet_System.WalletManagerSystem",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WalletManagerSystem
    };

    // ----- Windows.ApplicationModel.Wallet.System Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::Wallet::System");

    static PyMethodDef module_methods[] = {
        {"_register_WalletItemAppAssociation", register_WalletItemAppAssociation, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_WalletItemAppAssociation);
        Py_VISIT(state->type_WalletItemSystemStore);
        Py_VISIT(state->type_WalletManagerSystem);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_WalletItemAppAssociation);
        Py_CLEAR(state->type_WalletItemSystemStore);
        Py_CLEAR(state->type_WalletManagerSystem);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_Wallet_System",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::Wallet::System

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_Wallet_System(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::Wallet::System;

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

    state->type_WalletItemSystemStore = py::register_python_type(module.get(), type_name_WalletItemSystemStore, &type_spec_WalletItemSystemStore, bases.get());
    if (!state->type_WalletItemSystemStore)
    {
        return nullptr;
    }

    Py_INCREF(state->type_WalletItemSystemStore);

    state->type_WalletManagerSystem = py::register_python_type(module.get(), type_name_WalletManagerSystem, &type_spec_WalletManagerSystem, nullptr);
    if (!state->type_WalletManagerSystem)
    {
        return nullptr;
    }

    Py_INCREF(state->type_WalletManagerSystem);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Wallet::System;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Wallet::System");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WalletItemAppAssociation;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Wallet::System;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Wallet::System");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WalletItemSystemStore;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Wallet::System::WalletManagerSystem>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Wallet::System;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Wallet::System");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WalletManagerSystem;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Wallet::System::WalletManagerSystem is not registered");
        return nullptr;
    }

    return python_type;
}
