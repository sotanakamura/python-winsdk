// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.Enumeration.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Devices.Midi.h>

namespace py::proj::Windows::Devices::Midi
{}

namespace py::impl::Windows::Devices::Midi
{}

namespace py::wrapper::Windows::Devices::Midi
{
    using MidiActiveSensingMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiActiveSensingMessage>;
    using MidiChannelPressureMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiChannelPressureMessage>;
    using MidiContinueMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiContinueMessage>;
    using MidiControlChangeMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiControlChangeMessage>;
    using MidiInPort = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiInPort>;
    using MidiMessageReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs>;
    using MidiNoteOffMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiNoteOffMessage>;
    using MidiNoteOnMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiNoteOnMessage>;
    using MidiOutPort = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiOutPort>;
    using MidiPitchBendChangeMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiPitchBendChangeMessage>;
    using MidiPolyphonicKeyPressureMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>;
    using MidiProgramChangeMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiProgramChangeMessage>;
    using MidiSongPositionPointerMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiSongPositionPointerMessage>;
    using MidiSongSelectMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiSongSelectMessage>;
    using MidiStartMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiStartMessage>;
    using MidiStopMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiStopMessage>;
    using MidiSynthesizer = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiSynthesizer>;
    using MidiSystemExclusiveMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiSystemExclusiveMessage>;
    using MidiSystemResetMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiSystemResetMessage>;
    using MidiTimeCodeMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiTimeCodeMessage>;
    using MidiTimingClockMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiTimingClockMessage>;
    using MidiTuneRequestMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::MidiTuneRequestMessage>;
    using IMidiMessage = py::winrt_wrapper<winrt::Windows::Devices::Midi::IMidiMessage>;
    using IMidiOutPort = py::winrt_wrapper<winrt::Windows::Devices::Midi::IMidiOutPort>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Midi::MidiMessageType> = "i";


    template<>
    struct py_type<winrt::Windows::Devices::Midi::MidiMessageType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiActiveSensingMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiChannelPressureMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiContinueMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiControlChangeMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiInPort>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiNoteOffMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiNoteOnMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiOutPort>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiPitchBendChangeMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiProgramChangeMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiSongPositionPointerMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiSongSelectMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiStartMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiStopMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiSynthesizer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiSystemExclusiveMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiSystemResetMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiTimeCodeMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiTimingClockMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::MidiTuneRequestMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::IMidiMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Midi::IMidiOutPort>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
