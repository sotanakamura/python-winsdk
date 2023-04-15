// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#include "pybase.h"
#include "py.Windows.UI.Accessibility.h"


namespace py::cpp::Windows::UI::Accessibility
{
    struct module_state
    {
        PyTypeObject* type_ScreenReaderPositionChangedEventArgs;
        PyTypeObject* type_ScreenReaderService;
    };

    // ----- ScreenReaderPositionChangedEventArgs class --------------------
    static constexpr const char* const type_name_ScreenReaderPositionChangedEventArgs = "ScreenReaderPositionChangedEventArgs";

    static PyObject* _new_ScreenReaderPositionChangedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ScreenReaderPositionChangedEventArgs);
        return nullptr;
    }

    static void _dealloc_ScreenReaderPositionChangedEventArgs(py::wrapper::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs* self) noexcept
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

    static PyObject* ScreenReaderPositionChangedEventArgs_get_IsReadingText(py::wrapper::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.UI.Accessibility.ScreenReaderPositionChangedEventArgs", L"IsReadingText"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.IsReadingText());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ScreenReaderPositionChangedEventArgs_get_ScreenPositionInRawPixels(py::wrapper::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.UI.Accessibility.ScreenReaderPositionChangedEventArgs", L"ScreenPositionInRawPixels"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ScreenPositionInRawPixels());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_ScreenReaderPositionChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_ScreenReaderPositionChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ScreenReaderPositionChangedEventArgs[] = {
        { "_assign_array_", _assign_array_ScreenReaderPositionChangedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ScreenReaderPositionChangedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ScreenReaderPositionChangedEventArgs[] = {
        { "is_reading_text", reinterpret_cast<getter>(ScreenReaderPositionChangedEventArgs_get_IsReadingText), nullptr, nullptr, nullptr },
        { "screen_position_in_raw_pixels", reinterpret_cast<getter>(ScreenReaderPositionChangedEventArgs_get_ScreenPositionInRawPixels), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ScreenReaderPositionChangedEventArgs[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_ScreenReaderPositionChangedEventArgs) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_ScreenReaderPositionChangedEventArgs) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_ScreenReaderPositionChangedEventArgs) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_ScreenReaderPositionChangedEventArgs) },
        { },
    };

    static PyType_Spec type_spec_ScreenReaderPositionChangedEventArgs =
    {
        "_winsdk_Windows_UI_Accessibility.ScreenReaderPositionChangedEventArgs",
        sizeof(py::wrapper::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ScreenReaderPositionChangedEventArgs
    };

    // ----- ScreenReaderService class --------------------
    static constexpr const char* const type_name_ScreenReaderService = "ScreenReaderService";

    static PyObject* _new_ScreenReaderService(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        auto arg_count = PyTuple_Size(args);
        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::UI::Accessibility::ScreenReaderService instance{  };
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

    static void _dealloc_ScreenReaderService(py::wrapper::Windows::UI::Accessibility::ScreenReaderService* self) noexcept
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

    static PyObject* ScreenReaderService_get_CurrentScreenReaderPosition(py::wrapper::Windows::UI::Accessibility::ScreenReaderService* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.UI.Accessibility.ScreenReaderService", L"CurrentScreenReaderPosition"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.CurrentScreenReaderPosition());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ScreenReaderService_add_ScreenReaderPositionChanged(py::wrapper::Windows::UI::Accessibility::ScreenReaderService* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.UI.Accessibility.ScreenReaderService", L"ScreenReaderPositionChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Accessibility::ScreenReaderService, winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs>>(arg);

            return py::convert(self->obj.ScreenReaderPositionChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ScreenReaderService_remove_ScreenReaderPositionChanged(py::wrapper::Windows::UI::Accessibility::ScreenReaderService* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.UI.Accessibility.ScreenReaderService", L"ScreenReaderPositionChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.ScreenReaderPositionChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_ScreenReaderService(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::UI::Accessibility::ScreenReaderService>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_ScreenReaderService(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::UI::Accessibility::ScreenReaderService>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ScreenReaderService[] = {
        { "add_screen_reader_position_changed", reinterpret_cast<PyCFunction>(ScreenReaderService_add_ScreenReaderPositionChanged), METH_O, nullptr },
        { "remove_screen_reader_position_changed", reinterpret_cast<PyCFunction>(ScreenReaderService_remove_ScreenReaderPositionChanged), METH_O, nullptr },
        { "_assign_array_", _assign_array_ScreenReaderService, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ScreenReaderService), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ScreenReaderService[] = {
        { "current_screen_reader_position", reinterpret_cast<getter>(ScreenReaderService_get_CurrentScreenReaderPosition), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ScreenReaderService[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_ScreenReaderService) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_ScreenReaderService) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_ScreenReaderService) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_ScreenReaderService) },
        { },
    };

    static PyType_Spec type_spec_ScreenReaderService =
    {
        "_winsdk_Windows_UI_Accessibility.ScreenReaderService",
        sizeof(py::wrapper::Windows::UI::Accessibility::ScreenReaderService),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ScreenReaderService
    };

    // ----- Windows.UI.Accessibility Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::UI::Accessibility");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ScreenReaderPositionChangedEventArgs);
        Py_VISIT(state->type_ScreenReaderService);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ScreenReaderPositionChangedEventArgs);
        Py_CLEAR(state->type_ScreenReaderService);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_UI_Accessibility",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::UI::Accessibility

PyMODINIT_FUNC PyInit__winsdk_Windows_UI_Accessibility(void) noexcept
{
    using namespace py::cpp::Windows::UI::Accessibility;

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

    state->type_ScreenReaderPositionChangedEventArgs = py::register_python_type(module.get(), type_name_ScreenReaderPositionChangedEventArgs, &type_spec_ScreenReaderPositionChangedEventArgs, bases.get(), nullptr);
    if (!state->type_ScreenReaderPositionChangedEventArgs)
    {
        return nullptr;
    }

    state->type_ScreenReaderService = py::register_python_type(module.get(), type_name_ScreenReaderService, &type_spec_ScreenReaderService, bases.get(), nullptr);
    if (!state->type_ScreenReaderService)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::UI::Accessibility;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::UI::Accessibility");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ScreenReaderPositionChangedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::UI::Accessibility::ScreenReaderService>::get_python_type() noexcept {
    using namespace py::cpp::Windows::UI::Accessibility;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::UI::Accessibility");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ScreenReaderService;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::UI::Accessibility::ScreenReaderService is not registered");
        return nullptr;
    }

    return python_type;
}
