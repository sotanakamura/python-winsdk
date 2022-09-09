# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.storage.streams

class MidiMessageType(enum.IntEnum):
    NONE = 0
    NOTE_OFF = 128
    NOTE_ON = 144
    POLYPHONIC_KEY_PRESSURE = 160
    CONTROL_CHANGE = 176
    PROGRAM_CHANGE = 192
    CHANNEL_PRESSURE = 208
    PITCH_BEND_CHANGE = 224
    SYSTEM_EXCLUSIVE = 240
    MIDI_TIME_CODE = 241
    SONG_POSITION_POINTER = 242
    SONG_SELECT = 243
    TUNE_REQUEST = 246
    END_SYSTEM_EXCLUSIVE = 247
    TIMING_CLOCK = 248
    START = 250
    CONTINUE = 251
    STOP = 252
    ACTIVE_SENSING = 254
    SYSTEM_RESET = 255

Self = typing.TypeVar('Self')

class MidiActiveSensingMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiActiveSensingMessage: ...
    def __new__(cls: typing.Type[MidiActiveSensingMessage]) -> MidiActiveSensingMessage:...

class MidiChannelPressureMessage(_winrt.Object):
    channel: _winrt.UInt8
    pressure: _winrt.UInt8
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiChannelPressureMessage: ...
    def __new__(cls: typing.Type[MidiChannelPressureMessage], channel: _winrt.UInt8, pressure: _winrt.UInt8) -> MidiChannelPressureMessage:...

class MidiContinueMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiContinueMessage: ...
    def __new__(cls: typing.Type[MidiContinueMessage]) -> MidiContinueMessage:...

class MidiControlChangeMessage(_winrt.Object):
    channel: _winrt.UInt8
    control_value: _winrt.UInt8
    controller: _winrt.UInt8
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiControlChangeMessage: ...
    def __new__(cls: typing.Type[MidiControlChangeMessage], channel: _winrt.UInt8, controller: _winrt.UInt8, control_value: _winrt.UInt8) -> MidiControlChangeMessage:...

class MidiInPort(_winrt.Object):
    device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiInPort: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[MidiInPort]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_message_received(self, handler: winsdk.windows.foundation.TypedEventHandler[MidiInPort, MidiMessageReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_message_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MidiMessageReceivedEventArgs(_winrt.Object):
    message: typing.Optional[IMidiMessage]
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiMessageReceivedEventArgs: ...

class MidiNoteOffMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: _winrt.UInt8
    note: _winrt.UInt8
    velocity: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiNoteOffMessage: ...
    def __new__(cls: typing.Type[MidiNoteOffMessage], channel: _winrt.UInt8, note: _winrt.UInt8, velocity: _winrt.UInt8) -> MidiNoteOffMessage:...

class MidiNoteOnMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: _winrt.UInt8
    note: _winrt.UInt8
    velocity: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiNoteOnMessage: ...
    def __new__(cls: typing.Type[MidiNoteOnMessage], channel: _winrt.UInt8, note: _winrt.UInt8, velocity: _winrt.UInt8) -> MidiNoteOnMessage:...

class MidiOutPort(_winrt.Object):
    device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiOutPort: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[IMidiOutPort]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def send_buffer(self, midi_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def send_message(self, midi_message: typing.Optional[IMidiMessage]) -> None: ...

class MidiPitchBendChangeMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    bend: _winrt.UInt16
    channel: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiPitchBendChangeMessage: ...
    def __new__(cls: typing.Type[MidiPitchBendChangeMessage], channel: _winrt.UInt8, bend: _winrt.UInt16) -> MidiPitchBendChangeMessage:...

class MidiPolyphonicKeyPressureMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: _winrt.UInt8
    note: _winrt.UInt8
    pressure: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiPolyphonicKeyPressureMessage: ...
    def __new__(cls: typing.Type[MidiPolyphonicKeyPressureMessage], channel: _winrt.UInt8, note: _winrt.UInt8, pressure: _winrt.UInt8) -> MidiPolyphonicKeyPressureMessage:...

class MidiProgramChangeMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: _winrt.UInt8
    program: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiProgramChangeMessage: ...
    def __new__(cls: typing.Type[MidiProgramChangeMessage], channel: _winrt.UInt8, program: _winrt.UInt8) -> MidiProgramChangeMessage:...

class MidiSongPositionPointerMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    beats: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiSongPositionPointerMessage: ...
    def __new__(cls: typing.Type[MidiSongPositionPointerMessage], beats: _winrt.UInt16) -> MidiSongPositionPointerMessage:...

class MidiSongSelectMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    song: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiSongSelectMessage: ...
    def __new__(cls: typing.Type[MidiSongSelectMessage], song: _winrt.UInt8) -> MidiSongSelectMessage:...

class MidiStartMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiStartMessage: ...
    def __new__(cls: typing.Type[MidiStartMessage]) -> MidiStartMessage:...

class MidiStopMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiStopMessage: ...
    def __new__(cls: typing.Type[MidiStopMessage]) -> MidiStopMessage:...

class MidiSynthesizer(_winrt.Object):
    device_id: str
    volume: _winrt.Double
    audio_device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiSynthesizer: ...
    def close(self) -> None: ...
    @typing.overload
    @staticmethod
    def create_async() -> winsdk.windows.foundation.IAsyncOperation[MidiSynthesizer]: ...
    @typing.overload
    @staticmethod
    def create_async(audio_device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]) -> winsdk.windows.foundation.IAsyncOperation[MidiSynthesizer]: ...
    @staticmethod
    def is_synthesizer(midi_device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]) -> _winrt.Boolean: ...
    def send_buffer(self, midi_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def send_message(self, midi_message: typing.Optional[IMidiMessage]) -> None: ...

class MidiSystemExclusiveMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiSystemExclusiveMessage: ...
    def __new__(cls: typing.Type[MidiSystemExclusiveMessage], raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> MidiSystemExclusiveMessage:...

class MidiSystemResetMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiSystemResetMessage: ...
    def __new__(cls: typing.Type[MidiSystemResetMessage]) -> MidiSystemResetMessage:...

class MidiTimeCodeMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    frame_type: _winrt.UInt8
    values: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiTimeCodeMessage: ...
    def __new__(cls: typing.Type[MidiTimeCodeMessage], frame_type: _winrt.UInt8, values: _winrt.UInt8) -> MidiTimeCodeMessage:...

class MidiTimingClockMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiTimingClockMessage: ...
    def __new__(cls: typing.Type[MidiTimingClockMessage]) -> MidiTimingClockMessage:...

class MidiTuneRequestMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> MidiTuneRequestMessage: ...
    def __new__(cls: typing.Type[MidiTuneRequestMessage]) -> MidiTuneRequestMessage:...

class IMidiMessage(_winrt.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: _winrt.Object) -> IMidiMessage: ...

class IMidiOutPort(_winrt.Object):
    device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IMidiOutPort: ...
    def close(self) -> None: ...
    def send_buffer(self, midi_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def send_message(self, midi_message: typing.Optional[IMidiMessage]) -> None: ...

