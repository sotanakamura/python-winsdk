// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

#include "pybase.h"
#include "py.Windows.Media.Core.Preview.h"


namespace py::cpp::Windows::Media::Core::Preview
{
    struct module_state
    {
        PyTypeObject* type_SoundLevelBroker;
    };

    // ----- SoundLevelBroker class --------------------
    constexpr const char* const type_name_SoundLevelBroker = "SoundLevelBroker";

    static PyObject* _new_SoundLevelBroker(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_SoundLevelBroker);
        return nullptr;
    }

    static PyObject* SoundLevelBroker_get_SoundLevel(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.Core.Preview.SoundLevelBroker", L"SoundLevel"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::Core::Preview::SoundLevelBroker::SoundLevel());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SoundLevelBroker_add_SoundLevelChanged(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Media.Core.Preview.SoundLevelBroker", L"SoundLevelChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(winrt::Windows::Media::Core::Preview::SoundLevelBroker::SoundLevelChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SoundLevelBroker_remove_SoundLevelChanged(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Media.Core.Preview.SoundLevelBroker", L"SoundLevelChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            winrt::Windows::Media::Core::Preview::SoundLevelBroker::SoundLevelChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SoundLevelBroker[] = {
        { "get_sound_level", reinterpret_cast<PyCFunction>(SoundLevelBroker_get_SoundLevel), METH_NOARGS | METH_STATIC, nullptr },
        { "add_sound_level_changed", reinterpret_cast<PyCFunction>(SoundLevelBroker_add_SoundLevelChanged), METH_O | METH_STATIC, nullptr },
        { "remove_sound_level_changed", reinterpret_cast<PyCFunction>(SoundLevelBroker_remove_SoundLevelChanged), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_SoundLevelBroker[] = {
        { }
    };

    static PyType_Slot _type_slots_SoundLevelBroker[] = 
    {
        { Py_tp_new, _new_SoundLevelBroker },
        { Py_tp_methods, _methods_SoundLevelBroker },
        { Py_tp_getset, _getset_SoundLevelBroker },
        { },
    };

    static PyType_Spec type_spec_SoundLevelBroker =
    {
        "_winsdk_Windows_Media_Core_Preview.SoundLevelBroker",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SoundLevelBroker
    };

    // ----- Windows.Media.Core.Preview Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Media::Core::Preview");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_SoundLevelBroker);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_SoundLevelBroker);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Media_Core_Preview",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Media::Core::Preview

PyMODINIT_FUNC PyInit__winsdk_Windows_Media_Core_Preview(void) noexcept
{
    using namespace py::cpp::Windows::Media::Core::Preview;

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

    state->type_SoundLevelBroker = py::register_python_type(module.get(), type_name_SoundLevelBroker, &type_spec_SoundLevelBroker, nullptr);
    if (!state->type_SoundLevelBroker)
    {
        return nullptr;
    }

    Py_INCREF(state->type_SoundLevelBroker);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Media::Core::Preview::SoundLevelBroker>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::Core::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::Core::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SoundLevelBroker;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::Core::Preview::SoundLevelBroker is not registered");
        return nullptr;
    }

    return python_type;
}
