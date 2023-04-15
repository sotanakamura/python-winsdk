// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#include "pybase.h"
#include "py.Windows.Management.h"


namespace py::cpp::Windows::Management
{
    struct module_state
    {
        PyObject* type_MdmAlertDataType;
        PyObject* type_MdmAlertMark;
        PyObject* type_MdmSessionState;
        PyTypeObject* type_MdmAlert;
        PyTypeObject* type_MdmSession;
        PyTypeObject* type_MdmSessionManager;
    };

    static PyObject* register_MdmAlertDataType(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_MdmAlertDataType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_MdmAlertDataType = type;
        Py_INCREF(state->type_MdmAlertDataType);


        Py_RETURN_NONE;
    }

    static PyObject* register_MdmAlertMark(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_MdmAlertMark)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_MdmAlertMark = type;
        Py_INCREF(state->type_MdmAlertMark);


        Py_RETURN_NONE;
    }

    static PyObject* register_MdmSessionState(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_MdmSessionState)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_MdmSessionState = type;
        Py_INCREF(state->type_MdmSessionState);


        Py_RETURN_NONE;
    }

    // ----- MdmAlert class --------------------
    static constexpr const char* const type_name_MdmAlert = "MdmAlert";

    static PyObject* _new_MdmAlert(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
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
                winrt::Windows::Management::MdmAlert instance{  };
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

    static void _dealloc_MdmAlert(py::wrapper::Windows::Management::MdmAlert* self) noexcept
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

    static PyObject* MdmAlert_get_Type(py::wrapper::Windows::Management::MdmAlert* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Type"))
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

    static int MdmAlert_put_Type(py::wrapper::Windows::Management::MdmAlert* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Type"))
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

            self->obj.Type(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* MdmAlert_get_Target(py::wrapper::Windows::Management::MdmAlert* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Target"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Target());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int MdmAlert_put_Target(py::wrapper::Windows::Management::MdmAlert* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Target"))
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

            self->obj.Target(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* MdmAlert_get_Source(py::wrapper::Windows::Management::MdmAlert* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Source"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Source());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int MdmAlert_put_Source(py::wrapper::Windows::Management::MdmAlert* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Source"))
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

            self->obj.Source(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* MdmAlert_get_Mark(py::wrapper::Windows::Management::MdmAlert* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Mark"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Mark());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int MdmAlert_put_Mark(py::wrapper::Windows::Management::MdmAlert* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Mark"))
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
            auto param0 = py::convert_to<winrt::Windows::Management::MdmAlertMark>(arg);

            self->obj.Mark(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* MdmAlert_get_Format(py::wrapper::Windows::Management::MdmAlert* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Format"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Format());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int MdmAlert_put_Format(py::wrapper::Windows::Management::MdmAlert* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Format"))
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
            auto param0 = py::convert_to<winrt::Windows::Management::MdmAlertDataType>(arg);

            self->obj.Format(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* MdmAlert_get_Data(py::wrapper::Windows::Management::MdmAlert* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Data"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Data());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int MdmAlert_put_Data(py::wrapper::Windows::Management::MdmAlert* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Data"))
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

            self->obj.Data(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* MdmAlert_get_Status(py::wrapper::Windows::Management::MdmAlert* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmAlert", L"Status"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Status());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_MdmAlert(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Management::MdmAlert>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_MdmAlert(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Management::MdmAlert>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_MdmAlert[] = {
        { "_assign_array_", _assign_array_MdmAlert, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_MdmAlert), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_MdmAlert[] = {
        { "type", reinterpret_cast<getter>(MdmAlert_get_Type), reinterpret_cast<setter>(MdmAlert_put_Type), nullptr, nullptr },
        { "target", reinterpret_cast<getter>(MdmAlert_get_Target), reinterpret_cast<setter>(MdmAlert_put_Target), nullptr, nullptr },
        { "source", reinterpret_cast<getter>(MdmAlert_get_Source), reinterpret_cast<setter>(MdmAlert_put_Source), nullptr, nullptr },
        { "mark", reinterpret_cast<getter>(MdmAlert_get_Mark), reinterpret_cast<setter>(MdmAlert_put_Mark), nullptr, nullptr },
        { "format", reinterpret_cast<getter>(MdmAlert_get_Format), reinterpret_cast<setter>(MdmAlert_put_Format), nullptr, nullptr },
        { "data", reinterpret_cast<getter>(MdmAlert_get_Data), reinterpret_cast<setter>(MdmAlert_put_Data), nullptr, nullptr },
        { "status", reinterpret_cast<getter>(MdmAlert_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_MdmAlert[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_MdmAlert) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_MdmAlert) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_MdmAlert) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_MdmAlert) },
        { },
    };

    static PyType_Spec type_spec_MdmAlert =
    {
        "_winsdk_Windows_Management.MdmAlert",
        sizeof(py::wrapper::Windows::Management::MdmAlert),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_MdmAlert
    };

    // ----- MdmSession class --------------------
    static constexpr const char* const type_name_MdmSession = "MdmSession";

    static PyObject* _new_MdmSession(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_MdmSession);
        return nullptr;
    }

    static void _dealloc_MdmSession(py::wrapper::Windows::Management::MdmSession* self) noexcept
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

    static PyObject* MdmSession_AttachAsync(py::wrapper::Windows::Management::MdmSession* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.MdmSession", L"AttachAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.AttachAsync());
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

    static PyObject* MdmSession_Delete(py::wrapper::Windows::Management::MdmSession* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.MdmSession", L"Delete", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Delete();
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

    static PyObject* MdmSession_StartAsync(py::wrapper::Windows::Management::MdmSession* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.MdmSession", L"StartAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.StartAsync());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.MdmSession", L"StartAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::MdmAlert>>(args, 0);

                return py::convert(self->obj.StartAsync(param0));
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

    static PyObject* MdmSession_get_Alerts(py::wrapper::Windows::Management::MdmSession* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmSession", L"Alerts"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Alerts());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* MdmSession_get_ExtendedError(py::wrapper::Windows::Management::MdmSession* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmSession", L"ExtendedError"))
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

    static PyObject* MdmSession_get_Id(py::wrapper::Windows::Management::MdmSession* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmSession", L"Id"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Id());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* MdmSession_get_State(py::wrapper::Windows::Management::MdmSession* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmSession", L"State"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.State());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_MdmSession(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Management::MdmSession>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_MdmSession(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Management::MdmSession>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_MdmSession[] = {
        { "attach_async", reinterpret_cast<PyCFunction>(MdmSession_AttachAsync), METH_VARARGS, nullptr },
        { "delete", reinterpret_cast<PyCFunction>(MdmSession_Delete), METH_VARARGS, nullptr },
        { "start_async", reinterpret_cast<PyCFunction>(MdmSession_StartAsync), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_MdmSession, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_MdmSession), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_MdmSession[] = {
        { "alerts", reinterpret_cast<getter>(MdmSession_get_Alerts), nullptr, nullptr, nullptr },
        { "extended_error", reinterpret_cast<getter>(MdmSession_get_ExtendedError), nullptr, nullptr, nullptr },
        { "id", reinterpret_cast<getter>(MdmSession_get_Id), nullptr, nullptr, nullptr },
        { "state", reinterpret_cast<getter>(MdmSession_get_State), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_MdmSession[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_MdmSession) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_MdmSession) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_MdmSession) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_MdmSession) },
        { },
    };

    static PyType_Spec type_spec_MdmSession =
    {
        "_winsdk_Windows_Management.MdmSession",
        sizeof(py::wrapper::Windows::Management::MdmSession),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_MdmSession
    };

    // ----- MdmSessionManager class --------------------
    static constexpr const char* const type_name_MdmSessionManager = "MdmSessionManager";

    static PyObject* _new_MdmSessionManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_MdmSessionManager);
        return nullptr;
    }

    static PyObject* MdmSessionManager_DeleteSessionById(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.MdmSessionManager", L"DeleteSessionById", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                winrt::Windows::Management::MdmSessionManager::DeleteSessionById(param0);
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

    static PyObject* MdmSessionManager_GetSessionById(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.MdmSessionManager", L"GetSessionById", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Management::MdmSessionManager::GetSessionById(param0));
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

    static PyObject* MdmSessionManager_TryCreateSession(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.MdmSessionManager", L"TryCreateSession", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Management::MdmSessionManager::TryCreateSession());
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

    static PyObject* MdmSessionManager_get_SessionIds(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.MdmSessionManager", L"SessionIds"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Management::MdmSessionManager::SessionIds());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_MdmSessionManager[] = {
        { "delete_session_by_id", reinterpret_cast<PyCFunction>(MdmSessionManager_DeleteSessionById), METH_VARARGS | METH_STATIC, nullptr },
        { "get_session_by_id", reinterpret_cast<PyCFunction>(MdmSessionManager_GetSessionById), METH_VARARGS | METH_STATIC, nullptr },
        { "try_create_session", reinterpret_cast<PyCFunction>(MdmSessionManager_TryCreateSession), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_MdmSessionManager[] = {
        { }
    };

    static PyType_Slot _type_slots_MdmSessionManager[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_MdmSessionManager) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_MdmSessionManager) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_MdmSessionManager) },
        { },
    };

    static PyType_Spec type_spec_MdmSessionManager =
    {
        "_winsdk_Windows_Management.MdmSessionManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_MdmSessionManager
    };

    static PyGetSetDef getset_MdmSessionManager_Meta[] = {
        { "session_ids", reinterpret_cast<getter>(MdmSessionManager_get_SessionIds), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_MdmSessionManager_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_MdmSessionManager_Meta) },
        { }
    };

    static PyType_Spec type_spec_MdmSessionManager_Meta =
    {
        "_winsdk_Windows_Management.MdmSessionManager_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_MdmSessionManager_Meta
    };

    // ----- Windows.Management Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Management");

    static PyMethodDef module_methods[] = {
        {"_register_MdmAlertDataType", register_MdmAlertDataType, METH_O, "registers type"},
        {"_register_MdmAlertMark", register_MdmAlertMark, METH_O, "registers type"},
        {"_register_MdmSessionState", register_MdmSessionState, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_MdmAlertDataType);
        Py_VISIT(state->type_MdmAlertMark);
        Py_VISIT(state->type_MdmSessionState);
        Py_VISIT(state->type_MdmAlert);
        Py_VISIT(state->type_MdmSession);
        Py_VISIT(state->type_MdmSessionManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_MdmAlertDataType);
        Py_CLEAR(state->type_MdmAlertMark);
        Py_CLEAR(state->type_MdmSessionState);
        Py_CLEAR(state->type_MdmAlert);
        Py_CLEAR(state->type_MdmSession);
        Py_CLEAR(state->type_MdmSessionManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Management",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Management

PyMODINIT_FUNC PyInit__winsdk_Windows_Management(void) noexcept
{
    using namespace py::cpp::Windows::Management;

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

    state->type_MdmAlert = py::register_python_type(module.get(), type_name_MdmAlert, &type_spec_MdmAlert, bases.get(), nullptr);
    if (!state->type_MdmAlert)
    {
        return nullptr;
    }

    state->type_MdmSession = py::register_python_type(module.get(), type_name_MdmSession, &type_spec_MdmSession, bases.get(), nullptr);
    if (!state->type_MdmSession)
    {
        return nullptr;
    }

    py::pyobj_handle type_MdmSessionManager_Meta{PyType_FromSpec(&type_spec_MdmSessionManager_Meta)};
    if (!type_MdmSessionManager_Meta)
    {
        return nullptr;
    }

    state->type_MdmSessionManager = py::register_python_type(module.get(), type_name_MdmSessionManager, &type_spec_MdmSessionManager, nullptr, reinterpret_cast<PyTypeObject*>(type_MdmSessionManager_Meta.get()));
    if (!state->type_MdmSessionManager)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Management::MdmAlertDataType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MdmAlertDataType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::MdmAlertDataType is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Management::MdmAlertMark>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MdmAlertMark;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::MdmAlertMark is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Management::MdmSessionState>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MdmSessionState;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::MdmSessionState is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::MdmAlert>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MdmAlert;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::MdmAlert is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::MdmSession>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MdmSession;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::MdmSession is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::MdmSessionManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MdmSessionManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::MdmSessionManager is not registered");
        return nullptr;
    }

    return python_type;
}
