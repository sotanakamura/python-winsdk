# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.Appointments")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

try:
    import winsdk.windows.ui.popups
except ImportError:
    pass

class AppointmentBusyStatus(enum.IntEnum):
    BUSY = 0
    TENTATIVE = 1
    FREE = 2
    OUT_OF_OFFICE = 3
    WORKING_ELSEWHERE = 4

class AppointmentCalendarOtherAppReadAccess(enum.IntEnum):
    SYSTEM_ONLY = 0
    LIMITED = 1
    FULL = 2
    NONE = 3

class AppointmentCalendarOtherAppWriteAccess(enum.IntEnum):
    NONE = 0
    SYSTEM_ONLY = 1
    LIMITED = 2

class AppointmentCalendarSyncStatus(enum.IntEnum):
    IDLE = 0
    SYNCING = 1
    UP_TO_DATE = 2
    AUTHENTICATION_ERROR = 3
    POLICY_ERROR = 4
    UNKNOWN_ERROR = 5
    MANUAL_ACCOUNT_REMOVAL_REQUIRED = 6

class AppointmentConflictType(enum.IntEnum):
    NONE = 0
    ADJACENT = 1
    OVERLAP = 2

class AppointmentDaysOfWeek(enum.IntFlag):
    NONE = 0
    SUNDAY = 0x1
    MONDAY = 0x2
    TUESDAY = 0x4
    WEDNESDAY = 0x8
    THURSDAY = 0x10
    FRIDAY = 0x20
    SATURDAY = 0x40

class AppointmentDetailsKind(enum.IntEnum):
    PLAIN_TEXT = 0
    HTML = 1

class AppointmentParticipantResponse(enum.IntEnum):
    NONE = 0
    TENTATIVE = 1
    ACCEPTED = 2
    DECLINED = 3
    UNKNOWN = 4

class AppointmentParticipantRole(enum.IntEnum):
    REQUIRED_ATTENDEE = 0
    OPTIONAL_ATTENDEE = 1
    RESOURCE = 2

class AppointmentRecurrenceUnit(enum.IntEnum):
    DAILY = 0
    WEEKLY = 1
    MONTHLY = 2
    MONTHLY_ON_DAY = 3
    YEARLY = 4
    YEARLY_ON_DAY = 5

class AppointmentSensitivity(enum.IntEnum):
    PUBLIC = 0
    PRIVATE = 1

class AppointmentStoreAccessType(enum.IntEnum):
    APP_CALENDARS_READ_WRITE = 0
    ALL_CALENDARS_READ_ONLY = 1
    ALL_CALENDARS_READ_WRITE = 2

class AppointmentStoreChangeType(enum.IntEnum):
    APPOINTMENT_CREATED = 0
    APPOINTMENT_MODIFIED = 1
    APPOINTMENT_DELETED = 2
    CHANGE_TRACKING_LOST = 3
    CALENDAR_CREATED = 4
    CALENDAR_MODIFIED = 5
    CALENDAR_DELETED = 6

class AppointmentSummaryCardView(enum.IntEnum):
    SYSTEM = 0
    APP = 1

class AppointmentWeekOfMonth(enum.IntEnum):
    FIRST = 0
    SECOND = 1
    THIRD = 2
    FOURTH = 3
    LAST = 4

class FindAppointmentCalendarsOptions(enum.IntFlag):
    NONE = 0
    INCLUDE_HIDDEN = 0x1

class RecurrenceType(enum.IntEnum):
    MASTER = 0
    INSTANCE = 1
    EXCEPTION_INSTANCE = 2

_ns_module._register_AppointmentBusyStatus(AppointmentBusyStatus)
_ns_module._register_AppointmentCalendarOtherAppReadAccess(AppointmentCalendarOtherAppReadAccess)
_ns_module._register_AppointmentCalendarOtherAppWriteAccess(AppointmentCalendarOtherAppWriteAccess)
_ns_module._register_AppointmentCalendarSyncStatus(AppointmentCalendarSyncStatus)
_ns_module._register_AppointmentConflictType(AppointmentConflictType)
_ns_module._register_AppointmentDaysOfWeek(AppointmentDaysOfWeek)
_ns_module._register_AppointmentDetailsKind(AppointmentDetailsKind)
_ns_module._register_AppointmentParticipantResponse(AppointmentParticipantResponse)
_ns_module._register_AppointmentParticipantRole(AppointmentParticipantRole)
_ns_module._register_AppointmentRecurrenceUnit(AppointmentRecurrenceUnit)
_ns_module._register_AppointmentSensitivity(AppointmentSensitivity)
_ns_module._register_AppointmentStoreAccessType(AppointmentStoreAccessType)
_ns_module._register_AppointmentStoreChangeType(AppointmentStoreChangeType)
_ns_module._register_AppointmentSummaryCardView(AppointmentSummaryCardView)
_ns_module._register_AppointmentWeekOfMonth(AppointmentWeekOfMonth)
_ns_module._register_FindAppointmentCalendarsOptions(FindAppointmentCalendarsOptions)
_ns_module._register_RecurrenceType(RecurrenceType)

Appointment = _ns_module.Appointment
AppointmentCalendar = _ns_module.AppointmentCalendar
AppointmentCalendarSyncManager = _ns_module.AppointmentCalendarSyncManager
AppointmentConflictResult = _ns_module.AppointmentConflictResult
AppointmentException = _ns_module.AppointmentException
AppointmentInvitee = _ns_module.AppointmentInvitee
AppointmentManager = _ns_module.AppointmentManager
AppointmentManagerForUser = _ns_module.AppointmentManagerForUser
AppointmentOrganizer = _ns_module.AppointmentOrganizer
AppointmentProperties = _ns_module.AppointmentProperties
AppointmentRecurrence = _ns_module.AppointmentRecurrence
AppointmentStore = _ns_module.AppointmentStore
AppointmentStoreChange = _ns_module.AppointmentStoreChange
AppointmentStoreChangeReader = _ns_module.AppointmentStoreChangeReader
AppointmentStoreChangeTracker = _ns_module.AppointmentStoreChangeTracker
AppointmentStoreChangedDeferral = _ns_module.AppointmentStoreChangedDeferral
AppointmentStoreChangedEventArgs = _ns_module.AppointmentStoreChangedEventArgs
AppointmentStoreNotificationTriggerDetails = _ns_module.AppointmentStoreNotificationTriggerDetails
FindAppointmentsOptions = _ns_module.FindAppointmentsOptions
IAppointmentParticipant = _ns_module.IAppointmentParticipant
