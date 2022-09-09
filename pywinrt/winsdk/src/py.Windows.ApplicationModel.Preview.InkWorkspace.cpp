// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#include "pybase.h"
#include "py.Windows.ApplicationModel.Preview.InkWorkspace.h"


namespace py::cpp::Windows::ApplicationModel::Preview::InkWorkspace
{
    struct module_state
    {
        PyTypeObject* type_InkWorkspaceHostedAppManager;
    };

    // ----- InkWorkspaceHostedAppManager class --------------------
    constexpr const char* const type_name_InkWorkspaceHostedAppManager = "InkWorkspaceHostedAppManager";

    static PyObject* _new_InkWorkspaceHostedAppManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_InkWorkspaceHostedAppManager);
        return nullptr;
    }

    static void _dealloc_InkWorkspaceHostedAppManager(py::wrapper::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* InkWorkspaceHostedAppManager_GetForCurrentApp(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager", L"GetForCurrentApp", 0))
            {
                PyErr_SetString(PyExc_AttributeError, "method 0 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager::GetForCurrentApp());
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

    static PyObject* InkWorkspaceHostedAppManager_SetThumbnailAsync(py::wrapper::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager", L"SetThumbnailAsync", 1))
            {
                PyErr_SetString(PyExc_AttributeError, "method 1 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::SoftwareBitmap>(args, 0);

                return py::convert(self->obj.SetThumbnailAsync(param0));
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

    static PyObject* _from_InkWorkspaceHostedAppManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_InkWorkspaceHostedAppManager[] = {
        { "get_for_current_app", reinterpret_cast<PyCFunction>(InkWorkspaceHostedAppManager_GetForCurrentApp), METH_VARARGS | METH_STATIC, nullptr },
        { "set_thumbnail_async", reinterpret_cast<PyCFunction>(InkWorkspaceHostedAppManager_SetThumbnailAsync), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_InkWorkspaceHostedAppManager), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_InkWorkspaceHostedAppManager[] = {
        { }
    };

    static PyType_Slot _type_slots_InkWorkspaceHostedAppManager[] = 
    {
        { Py_tp_new, _new_InkWorkspaceHostedAppManager },
        { Py_tp_dealloc, _dealloc_InkWorkspaceHostedAppManager },
        { Py_tp_methods, _methods_InkWorkspaceHostedAppManager },
        { Py_tp_getset, _getset_InkWorkspaceHostedAppManager },
        { },
    };

    static PyType_Spec type_spec_InkWorkspaceHostedAppManager =
    {
        "_winsdk_Windows_ApplicationModel_Preview_InkWorkspace.InkWorkspaceHostedAppManager",
        sizeof(py::wrapper::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_InkWorkspaceHostedAppManager
    };

    // ----- Windows.ApplicationModel.Preview.InkWorkspace Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::Preview::InkWorkspace");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_InkWorkspaceHostedAppManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_InkWorkspaceHostedAppManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_Preview_InkWorkspace",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::Preview::InkWorkspace

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_Preview_InkWorkspace(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::Preview::InkWorkspace;

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

    state->type_InkWorkspaceHostedAppManager = py::register_python_type(module.get(), type_name_InkWorkspaceHostedAppManager, &type_spec_InkWorkspaceHostedAppManager, bases.get());
    if (!state->type_InkWorkspaceHostedAppManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_InkWorkspaceHostedAppManager);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Preview::InkWorkspace;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Preview::InkWorkspace");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_InkWorkspaceHostedAppManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager is not registered");
        return nullptr;
    }

    return python_type;
}
