# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.geolocation
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.ui.popups

class ManeuverWarningKind(enum.IntEnum):
    NONE = 0
    ACCIDENT = 1
    ADMINISTRATIVE_DIVISION_CHANGE = 2
    ALERT = 3
    BLOCKED_ROAD = 4
    CHECK_TIMETABLE = 5
    CONGESTION = 6
    CONSTRUCTION = 7
    COUNTRY_CHANGE = 8
    DISABLED_VEHICLE = 9
    GATE_ACCESS = 10
    GET_OFF_TRANSIT = 11
    GET_ON_TRANSIT = 12
    ILLEGAL_U_TURN = 13
    MASS_TRANSIT = 14
    MISCELLANEOUS = 15
    NO_INCIDENT = 16
    OTHER = 17
    OTHER_NEWS = 18
    OTHER_TRAFFIC_INCIDENTS = 19
    PLANNED_EVENT = 20
    PRIVATE_ROAD = 21
    RESTRICTED_TURN = 22
    ROAD_CLOSURES = 23
    ROAD_HAZARD = 24
    SCHEDULED_CONSTRUCTION = 25
    SEASONAL_CLOSURES = 26
    TOLLBOOTH = 27
    TOLL_ROAD = 28
    TOLL_ZONE_ENTER = 29
    TOLL_ZONE_EXIT = 30
    TRAFFIC_FLOW = 31
    TRANSIT_LINE_CHANGE = 32
    UNPAVED_ROAD = 33
    UNSCHEDULED_CONSTRUCTION = 34
    WEATHER = 35

class ManeuverWarningSeverity(enum.IntEnum):
    NONE = 0
    LOW_IMPACT = 1
    MINOR = 2
    MODERATE = 3
    SERIOUS = 4

class MapLocationDesiredAccuracy(enum.IntEnum):
    HIGH = 0
    LOW = 1

class MapLocationFinderStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    INVALID_CREDENTIALS = 2
    BAD_LOCATION = 3
    INDEX_FAILURE = 4
    NETWORK_FAILURE = 5
    NOT_SUPPORTED = 6

class MapManeuverNotices(enum.IntFlag):
    NONE = 0
    TOLL = 0x1
    UNPAVED = 0x2

class MapRouteFinderStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    INVALID_CREDENTIALS = 2
    NO_ROUTE_FOUND = 3
    NO_ROUTE_FOUND_WITH_GIVEN_OPTIONS = 4
    START_POINT_NOT_FOUND = 5
    END_POINT_NOT_FOUND = 6
    NO_PEDESTRIAN_ROUTE_FOUND = 7
    NETWORK_FAILURE = 8
    NOT_SUPPORTED = 9

class MapRouteManeuverKind(enum.IntEnum):
    NONE = 0
    START = 1
    STOPOVER = 2
    STOPOVER_RESUME = 3
    END = 4
    GO_STRAIGHT = 5
    U_TURN_LEFT = 6
    U_TURN_RIGHT = 7
    TURN_KEEP_LEFT = 8
    TURN_KEEP_RIGHT = 9
    TURN_LIGHT_LEFT = 10
    TURN_LIGHT_RIGHT = 11
    TURN_LEFT = 12
    TURN_RIGHT = 13
    TURN_HARD_LEFT = 14
    TURN_HARD_RIGHT = 15
    FREEWAY_ENTER_LEFT = 16
    FREEWAY_ENTER_RIGHT = 17
    FREEWAY_LEAVE_LEFT = 18
    FREEWAY_LEAVE_RIGHT = 19
    FREEWAY_CONTINUE_LEFT = 20
    FREEWAY_CONTINUE_RIGHT = 21
    TRAFFIC_CIRCLE_LEFT = 22
    TRAFFIC_CIRCLE_RIGHT = 23
    TAKE_FERRY = 24

class MapRouteOptimization(enum.IntEnum):
    TIME = 0
    DISTANCE = 1
    TIME_WITH_TRAFFIC = 2
    SCENIC = 3

class MapRouteRestrictions(enum.IntFlag):
    NONE = 0
    HIGHWAYS = 0x1
    TOLL_ROADS = 0x2
    FERRIES = 0x4
    TUNNELS = 0x8
    DIRT_ROADS = 0x10
    MOTORAIL = 0x20

class MapServiceDataUsagePreference(enum.IntEnum):
    DEFAULT = 0
    OFFLINE_MAP_DATA_ONLY = 1

class TrafficCongestion(enum.IntEnum):
    UNKNOWN = 0
    LIGHT = 1
    MILD = 2
    MEDIUM = 3
    HEAVY = 4

class WaypointKind(enum.IntEnum):
    STOP = 0
    VIA = 1

Self = typing.TypeVar('Self')

class EnhancedWaypoint(winsdk.system.Object):
    kind: WaypointKind
    point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EnhancedWaypoint: ...
    def __new__(cls: typing.Type[EnhancedWaypoint], point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], kind: WaypointKind) -> EnhancedWaypoint:...

class ManeuverWarning(winsdk.system.Object):
    kind: ManeuverWarningKind
    severity: ManeuverWarningSeverity
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ManeuverWarning: ...

class MapAddress(winsdk.system.Object):
    building_floor: str
    building_name: str
    building_room: str
    building_wing: str
    continent: str
    country: str
    country_code: str
    district: str
    neighborhood: str
    post_code: str
    region: str
    region_code: str
    street: str
    street_number: str
    town: str
    formatted_address: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapAddress: ...

class MapLocation(winsdk.system.Object):
    address: typing.Optional[MapAddress]
    description: str
    display_name: str
    point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapLocation: ...

class MapLocationFinder(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapLocationFinder: ...
    @typing.overload
    @staticmethod
    def find_locations_async(search_text: str, reference_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]) -> winsdk.windows.foundation.IAsyncOperation[MapLocationFinderResult]: ...
    @typing.overload
    @staticmethod
    def find_locations_async(search_text: str, reference_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], max_count: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncOperation[MapLocationFinderResult]: ...
    @typing.overload
    @staticmethod
    def find_locations_at_async(query_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]) -> winsdk.windows.foundation.IAsyncOperation[MapLocationFinderResult]: ...
    @typing.overload
    @staticmethod
    def find_locations_at_async(query_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], accuracy: MapLocationDesiredAccuracy) -> winsdk.windows.foundation.IAsyncOperation[MapLocationFinderResult]: ...

class MapLocationFinderResult(winsdk.system.Object):
    locations: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MapLocation]]
    status: MapLocationFinderStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapLocationFinderResult: ...

class MapManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapManager: ...
    @staticmethod
    def show_downloaded_maps_u_i() -> None: ...
    @staticmethod
    def show_maps_update_u_i() -> None: ...

class MapRoute(winsdk.system.Object):
    bounding_box: typing.Optional[winsdk.windows.devices.geolocation.GeoboundingBox]
    estimated_duration: datetime.timedelta
    is_traffic_based: winsdk.system.Boolean
    legs: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MapRouteLeg]]
    length_in_meters: winsdk.system.Double
    path: typing.Optional[winsdk.windows.devices.geolocation.Geopath]
    has_blocked_roads: winsdk.system.Boolean
    violated_restrictions: MapRouteRestrictions
    duration_without_traffic: datetime.timedelta
    traffic_congestion: TrafficCongestion
    is_scenic: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapRoute: ...

class MapRouteDrivingOptions(winsdk.system.Object):
    route_restrictions: MapRouteRestrictions
    route_optimization: MapRouteOptimization
    max_alternate_route_count: winsdk.system.UInt32
    initial_heading: typing.Optional[typing.Optional[winsdk.system.Double]]
    departure_time: typing.Optional[typing.Optional[datetime.datetime]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapRouteDrivingOptions: ...
    def __new__(cls: typing.Type[MapRouteDrivingOptions]) -> MapRouteDrivingOptions:...

class MapRouteFinder(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapRouteFinder: ...
    @typing.overload
    @staticmethod
    def get_driving_route_async(start_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], end_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_async(start_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], end_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], options: typing.Optional[MapRouteDrivingOptions]) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_async(start_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], end_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], optimization: MapRouteOptimization, restrictions: MapRouteRestrictions) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_async(start_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], end_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], optimization: MapRouteOptimization, restrictions: MapRouteRestrictions, heading_in_degrees: winsdk.system.Double) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_from_enhanced_waypoints_async(waypoints: typing.Iterable[EnhancedWaypoint]) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_from_enhanced_waypoints_async(waypoints: typing.Iterable[EnhancedWaypoint], options: typing.Optional[MapRouteDrivingOptions]) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_from_waypoints_async(way_points: typing.Iterable[winsdk.windows.devices.geolocation.Geopoint]) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_from_waypoints_async(way_points: typing.Iterable[winsdk.windows.devices.geolocation.Geopoint], optimization: MapRouteOptimization) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_from_waypoints_async(way_points: typing.Iterable[winsdk.windows.devices.geolocation.Geopoint], optimization: MapRouteOptimization, restrictions: MapRouteRestrictions) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @typing.overload
    @staticmethod
    def get_driving_route_from_waypoints_async(way_points: typing.Iterable[winsdk.windows.devices.geolocation.Geopoint], optimization: MapRouteOptimization, restrictions: MapRouteRestrictions, heading_in_degrees: winsdk.system.Double) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @staticmethod
    def get_walking_route_async(start_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], end_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...
    @staticmethod
    def get_walking_route_from_waypoints_async(way_points: typing.Iterable[winsdk.windows.devices.geolocation.Geopoint]) -> winsdk.windows.foundation.IAsyncOperation[MapRouteFinderResult]: ...

class MapRouteFinderResult(winsdk.system.Object):
    route: typing.Optional[MapRoute]
    status: MapRouteFinderStatus
    alternate_routes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MapRoute]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapRouteFinderResult: ...

class MapRouteLeg(winsdk.system.Object):
    bounding_box: typing.Optional[winsdk.windows.devices.geolocation.GeoboundingBox]
    estimated_duration: datetime.timedelta
    length_in_meters: winsdk.system.Double
    maneuvers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MapRouteManeuver]]
    path: typing.Optional[winsdk.windows.devices.geolocation.Geopath]
    duration_without_traffic: datetime.timedelta
    traffic_congestion: TrafficCongestion
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapRouteLeg: ...

class MapRouteManeuver(winsdk.system.Object):
    exit_number: str
    instruction_text: str
    kind: MapRouteManeuverKind
    length_in_meters: winsdk.system.Double
    maneuver_notices: MapManeuverNotices
    starting_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]
    end_heading: winsdk.system.Double
    start_heading: winsdk.system.Double
    street_name: str
    warnings: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ManeuverWarning]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapRouteManeuver: ...

class MapService(winsdk.system.Object):
    service_token: typing.ClassVar[str]
    world_view_region_code: typing.ClassVar[str]
    data_attributions: typing.ClassVar[str]
    data_usage_preference: typing.ClassVar[MapServiceDataUsagePreference]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MapService: ...

class PlaceInfo(winsdk.system.Object):
    display_address: str
    display_name: str
    geoshape: typing.Optional[winsdk.windows.devices.geolocation.IGeoshape]
    identifier: str
    is_show_supported: typing.ClassVar[winsdk.system.Boolean]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlaceInfo: ...
    @typing.overload
    @staticmethod
    def create(reference_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]) -> typing.Optional[PlaceInfo]: ...
    @typing.overload
    @staticmethod
    def create(reference_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], options: typing.Optional[PlaceInfoCreateOptions]) -> typing.Optional[PlaceInfo]: ...
    @typing.overload
    @staticmethod
    def create_from_address(display_address: str) -> typing.Optional[PlaceInfo]: ...
    @typing.overload
    @staticmethod
    def create_from_address(display_address: str, display_name: str) -> typing.Optional[PlaceInfo]: ...
    @typing.overload
    @staticmethod
    def create_from_identifier(identifier: str) -> typing.Optional[PlaceInfo]: ...
    @typing.overload
    @staticmethod
    def create_from_identifier(identifier: str, default_point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint], options: typing.Optional[PlaceInfoCreateOptions]) -> typing.Optional[PlaceInfo]: ...
    @staticmethod
    def create_from_map_location(location: typing.Optional[MapLocation]) -> typing.Optional[PlaceInfo]: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect) -> None: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> None: ...

class PlaceInfoCreateOptions(winsdk.system.Object):
    display_name: str
    display_address: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlaceInfoCreateOptions: ...
    def __new__(cls: typing.Type[PlaceInfoCreateOptions]) -> PlaceInfoCreateOptions:...

