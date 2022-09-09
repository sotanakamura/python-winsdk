// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#include "pybase.h"
#include "py.Windows.Management.Core.h"


namespace py::cpp::Windows::Management::Core
{
    struct module_state
    {
        PyTypeObject* type_ApplicationDataManager;
    };

    // ----- ApplicationDataManager class --------------------
    constexpr const char* const type_name_ApplicationDataManager = "ApplicationDataManager";

    static PyObject* _new_ApplicationDataManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ApplicationDataManager);
        return nullptr;
    }

    static void _dealloc_ApplicationDataManager(py::wrapper::Windows::Management::Core::ApplicationDataManager* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* ApplicationDataManager_CreateForPackageFamily(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.Core.ApplicationDataManager", L"CreateForPackageFamily", 1))
            {
                PyErr_SetString(PyExc_AttributeError, "method 1 args is not available in this version of Windows");
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Management::Core::ApplicationDataManager::CreateForPackageFamily(param0));
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

    static PyObject* _from_ApplicationDataManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Management::Core::ApplicationDataManager>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ApplicationDataManager[] = {
        { "create_for_package_family", reinterpret_cast<PyCFunction>(ApplicationDataManager_CreateForPackageFamily), METH_VARARGS | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ApplicationDataManager), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ApplicationDataManager[] = {
        { }
    };

    static PyType_Slot _type_slots_ApplicationDataManager[] = 
    {
        { Py_tp_new, _new_ApplicationDataManager },
        { Py_tp_dealloc, _dealloc_ApplicationDataManager },
        { Py_tp_methods, _methods_ApplicationDataManager },
        { Py_tp_getset, _getset_ApplicationDataManager },
        { },
    };

    static PyType_Spec type_spec_ApplicationDataManager =
    {
        "_winsdk_Windows_Management_Core.ApplicationDataManager",
        sizeof(py::wrapper::Windows::Management::Core::ApplicationDataManager),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ApplicationDataManager
    };

    // ----- Windows.Management.Core Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Management::Core");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ApplicationDataManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ApplicationDataManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Management_Core",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Management::Core

PyMODINIT_FUNC PyInit__winsdk_Windows_Management_Core(void) noexcept
{
    using namespace py::cpp::Windows::Management::Core;

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

    state->type_ApplicationDataManager = py::register_python_type(module.get(), type_name_ApplicationDataManager, &type_spec_ApplicationDataManager, bases.get());
    if (!state->type_ApplicationDataManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_ApplicationDataManager);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::Core::ApplicationDataManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Core;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Core");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ApplicationDataManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Core::ApplicationDataManager is not registered");
        return nullptr;
    }

    return python_type;
}
