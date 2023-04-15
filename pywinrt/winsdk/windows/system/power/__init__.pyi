# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation

class BatteryStatus(enum.IntEnum):
    NOT_PRESENT = 0
    DISCHARGING = 1
    IDLE = 2
    CHARGING = 3

class EnergySaverStatus(enum.IntEnum):
    DISABLED = 0
    OFF = 1
    ON = 2

class PowerSupplyStatus(enum.IntEnum):
    NOT_PRESENT = 0
    INADEQUATE = 1
    ADEQUATE = 2

Self = typing.TypeVar('Self')

class BackgroundEnergyManager(winsdk.system.Object):
    excessive_usage_level: typing.ClassVar[winsdk.system.UInt32]
    low_usage_level: typing.ClassVar[winsdk.system.UInt32]
    max_acceptable_usage_level: typing.ClassVar[winsdk.system.UInt32]
    near_max_acceptable_usage_level: typing.ClassVar[winsdk.system.UInt32]
    near_termination_usage_level: typing.ClassVar[winsdk.system.UInt32]
    recent_energy_usage: typing.ClassVar[winsdk.system.UInt32]
    recent_energy_usage_level: typing.ClassVar[winsdk.system.UInt32]
    termination_usage_level: typing.ClassVar[winsdk.system.UInt32]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundEnergyManager: ...
    @staticmethod
    def add_recent_energy_usage_increased(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_recent_energy_usage_increased(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_recent_energy_usage_returned_to_low(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_recent_energy_usage_returned_to_low(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ForegroundEnergyManager(winsdk.system.Object):
    excessive_usage_level: typing.ClassVar[winsdk.system.UInt32]
    low_usage_level: typing.ClassVar[winsdk.system.UInt32]
    max_acceptable_usage_level: typing.ClassVar[winsdk.system.UInt32]
    near_max_acceptable_usage_level: typing.ClassVar[winsdk.system.UInt32]
    recent_energy_usage: typing.ClassVar[winsdk.system.UInt32]
    recent_energy_usage_level: typing.ClassVar[winsdk.system.UInt32]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ForegroundEnergyManager: ...
    @staticmethod
    def add_recent_energy_usage_increased(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_recent_energy_usage_increased(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_recent_energy_usage_returned_to_low(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_recent_energy_usage_returned_to_low(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PowerManager(winsdk.system.Object):
    battery_status: typing.ClassVar[BatteryStatus]
    energy_saver_status: typing.ClassVar[EnergySaverStatus]
    power_supply_status: typing.ClassVar[PowerSupplyStatus]
    remaining_charge_percent: typing.ClassVar[winsdk.system.Int32]
    remaining_discharge_time: typing.ClassVar[datetime.timedelta]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PowerManager: ...
    @staticmethod
    def add_battery_status_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_battery_status_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_energy_saver_status_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_energy_saver_status_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_power_supply_status_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_power_supply_status_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_remaining_charge_percent_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_remaining_charge_percent_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_remaining_discharge_time_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_remaining_discharge_time_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

