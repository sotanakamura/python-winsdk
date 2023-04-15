# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking
import winsdk.windows.storage.streams

class CellularApnAuthenticationType(enum.IntEnum):
    NONE = 0
    PAP = 1
    CHAP = 2
    MSCHAPV2 = 3

class ConnectionProfileDeleteStatus(enum.IntEnum):
    SUCCESS = 0
    DENIED_BY_USER = 1
    DENIED_BY_SYSTEM = 2
    UNKNOWN_ERROR = 3

class DataUsageGranularity(enum.IntEnum):
    PER_MINUTE = 0
    PER_HOUR = 1
    PER_DAY = 2
    TOTAL = 3

class DomainAuthenticationKind(enum.IntEnum):
    NONE = 0
    LDAP = 1
    TLS = 2

class DomainConnectivityLevel(enum.IntEnum):
    NONE = 0
    UNAUTHENTICATED = 1
    AUTHENTICATED = 2

class NetworkAuthenticationType(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    OPEN80211 = 2
    SHARED_KEY80211 = 3
    WPA = 4
    WPA_PSK = 5
    WPA_NONE = 6
    RSNA = 7
    RSNA_PSK = 8
    IHV = 9
    WPA3 = 10
    WPA3_ENTERPRISE192_BITS = 10
    WPA3_SAE = 11
    OWE = 12
    WPA3_ENTERPRISE = 13

class NetworkConnectivityLevel(enum.IntEnum):
    NONE = 0
    LOCAL_ACCESS = 1
    CONSTRAINED_INTERNET_ACCESS = 2
    INTERNET_ACCESS = 3

class NetworkCostType(enum.IntEnum):
    UNKNOWN = 0
    UNRESTRICTED = 1
    FIXED = 2
    VARIABLE = 3

class NetworkEncryptionType(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    WEP = 2
    WEP40 = 3
    WEP104 = 4
    TKIP = 5
    CCMP = 6
    WPA_USE_GROUP = 7
    RSN_USE_GROUP = 8
    IHV = 9
    GCMP = 10
    GCMP256 = 11

class NetworkTypes(enum.IntFlag):
    NONE = 0
    INTERNET = 0x1
    PRIVATE_NETWORK = 0x2

class RoamingStates(enum.IntFlag):
    NONE = 0
    NOT_ROAMING = 0x1
    ROAMING = 0x2

class TriStates(enum.IntEnum):
    DO_NOT_CARE = 0
    NO = 1
    YES = 2

class WwanDataClass(enum.IntFlag):
    NONE = 0
    GPRS = 0x1
    EDGE = 0x2
    UMTS = 0x4
    HSDPA = 0x8
    HSUPA = 0x10
    LTE_ADVANCED = 0x20
    CDMA1X_RTT = 0x10000
    CDMA1X_EVDO = 0x20000
    CDMA1X_EVDO_REV_A = 0x40000
    CDMA1X_EVDV = 0x80000
    CDMA3X_RTT = 0x100000
    CDMA1X_EVDO_REV_B = 0x200000
    CDMA_UMB = 0x400000
    CUSTOM = 0x80000000

class WwanNetworkIPKind(enum.IntEnum):
    NONE = 0
    IPV4 = 1
    IPV6 = 2
    IPV4V6 = 3
    IPV4V6V4_XLAT = 4

class WwanNetworkRegistrationState(enum.IntEnum):
    NONE = 0
    DEREGISTERED = 1
    SEARCHING = 2
    HOME = 3
    ROAMING = 4
    PARTNER = 5
    DENIED = 6

Self = typing.TypeVar('Self')

class NetworkUsageStates:
    roaming: TriStates
    shared: TriStates
    def __new__(cls: typing.Type[NetworkUsageStates], roaming: TriStates, shared: TriStates) -> NetworkUsageStates: ...

class AttributedNetworkUsage(winsdk.system.Object):
    attribution_id: str
    attribution_name: str
    attribution_thumbnail: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    bytes_received: winsdk.system.UInt64
    bytes_sent: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AttributedNetworkUsage: ...

class CellularApnContext(winsdk.system.Object):
    user_name: str
    provider_id: str
    password: str
    is_compression_enabled: winsdk.system.Boolean
    authentication_type: CellularApnAuthenticationType
    access_point_name: str
    profile_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CellularApnContext: ...
    def __new__(cls: typing.Type[CellularApnContext]) -> CellularApnContext:...

class ConnectionCost(winsdk.system.Object):
    approaching_data_limit: winsdk.system.Boolean
    network_cost_type: NetworkCostType
    over_data_limit: winsdk.system.Boolean
    roaming: winsdk.system.Boolean
    background_data_usage_restricted: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ConnectionCost: ...

class ConnectionProfile(winsdk.system.Object):
    network_adapter: typing.Optional[NetworkAdapter]
    network_security_settings: typing.Optional[NetworkSecuritySettings]
    profile_name: str
    is_wlan_connection_profile: winsdk.system.Boolean
    is_wwan_connection_profile: winsdk.system.Boolean
    service_provider_guid: typing.Optional[typing.Optional[winsdk.system.Guid]]
    wlan_connection_profile_details: typing.Optional[WlanConnectionProfileDetails]
    wwan_connection_profile_details: typing.Optional[WwanConnectionProfileDetails]
    can_delete: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ConnectionProfile: ...
    def get_attributed_network_usage_async(self, start_time: datetime.datetime, end_time: datetime.datetime, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AttributedNetworkUsage]]: ...
    def get_connection_cost(self) -> typing.Optional[ConnectionCost]: ...
    def get_connectivity_intervals_async(self, start_time: datetime.datetime, end_time: datetime.datetime, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ConnectivityInterval]]: ...
    def get_data_plan_status(self) -> typing.Optional[DataPlanStatus]: ...
    def get_domain_connectivity_level(self) -> DomainConnectivityLevel: ...
    @typing.overload
    def get_local_usage(self, start_time: datetime.datetime, end_time: datetime.datetime) -> typing.Optional[DataUsage]: ...
    @typing.overload
    def get_local_usage(self, start_time: datetime.datetime, end_time: datetime.datetime, states: RoamingStates) -> typing.Optional[DataUsage]: ...
    def get_network_connectivity_level(self) -> NetworkConnectivityLevel: ...
    def get_network_names(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]: ...
    def get_network_usage_async(self, start_time: datetime.datetime, end_time: datetime.datetime, granularity: DataUsageGranularity, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[NetworkUsage]]: ...
    def get_provider_network_usage_async(self, start_time: datetime.datetime, end_time: datetime.datetime, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ProviderNetworkUsage]]: ...
    def get_signal_bars(self) -> typing.Optional[typing.Optional[winsdk.system.UInt8]]: ...
    def is_domain_authenticated_by(self, kind: DomainAuthenticationKind) -> winsdk.system.Boolean: ...
    def try_delete_async(self) -> winsdk.windows.foundation.IAsyncOperation[ConnectionProfileDeleteStatus]: ...

class ConnectionProfileFilter(winsdk.system.Object):
    service_provider_guid: typing.Optional[typing.Optional[winsdk.system.Guid]]
    network_cost_type: NetworkCostType
    is_wwan_connection_profile: winsdk.system.Boolean
    is_wlan_connection_profile: winsdk.system.Boolean
    is_connected: winsdk.system.Boolean
    is_roaming: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    is_over_data_limit: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    is_background_data_usage_restricted: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    purpose_guid: typing.Optional[typing.Optional[winsdk.system.Guid]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ConnectionProfileFilter: ...
    def __new__(cls: typing.Type[ConnectionProfileFilter]) -> ConnectionProfileFilter:...

class ConnectionSession(winsdk.system.Object):
    connection_profile: typing.Optional[ConnectionProfile]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ConnectionSession: ...
    def close(self) -> None: ...

class ConnectivityInterval(winsdk.system.Object):
    connection_duration: datetime.timedelta
    start_time: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ConnectivityInterval: ...

class ConnectivityManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ConnectivityManager: ...
    @staticmethod
    def acquire_connection_async(cellular_apn_context: typing.Optional[CellularApnContext]) -> winsdk.windows.foundation.IAsyncOperation[ConnectionSession]: ...
    @staticmethod
    def add_http_route_policy(route_policy: typing.Optional[RoutePolicy]) -> None: ...
    @staticmethod
    def remove_http_route_policy(route_policy: typing.Optional[RoutePolicy]) -> None: ...

class DataPlanStatus(winsdk.system.Object):
    data_limit_in_megabytes: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    data_plan_usage: typing.Optional[DataPlanUsage]
    inbound_bits_per_second: typing.Optional[typing.Optional[winsdk.system.UInt64]]
    max_transfer_size_in_megabytes: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    next_billing_cycle: typing.Optional[typing.Optional[datetime.datetime]]
    outbound_bits_per_second: typing.Optional[typing.Optional[winsdk.system.UInt64]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataPlanStatus: ...

class DataPlanUsage(winsdk.system.Object):
    last_sync_time: datetime.datetime
    megabytes_used: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataPlanUsage: ...

class DataUsage(winsdk.system.Object):
    bytes_received: winsdk.system.UInt64
    bytes_sent: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataUsage: ...

class IPInformation(winsdk.system.Object):
    network_adapter: typing.Optional[NetworkAdapter]
    prefix_length: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPInformation: ...

class LanIdentifier(winsdk.system.Object):
    infrastructure_id: typing.Optional[LanIdentifierData]
    network_adapter_id: winsdk.system.Guid
    port_id: typing.Optional[LanIdentifierData]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LanIdentifier: ...

class LanIdentifierData(winsdk.system.Object):
    type: winsdk.system.UInt32
    value: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.system.UInt8]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LanIdentifierData: ...

class NetworkAdapter(winsdk.system.Object):
    iana_interface_type: winsdk.system.UInt32
    inbound_max_bits_per_second: winsdk.system.UInt64
    network_adapter_id: winsdk.system.Guid
    network_item: typing.Optional[NetworkItem]
    outbound_max_bits_per_second: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkAdapter: ...
    def get_connected_profile_async(self) -> winsdk.windows.foundation.IAsyncOperation[ConnectionProfile]: ...

class NetworkInformation(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkInformation: ...
    @staticmethod
    def find_connection_profiles_async(p_profile_filter: typing.Optional[ConnectionProfileFilter]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ConnectionProfile]]: ...
    @staticmethod
    def get_connection_profiles() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ConnectionProfile]]: ...
    @staticmethod
    def get_host_names() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.networking.HostName]]: ...
    @staticmethod
    def get_internet_connection_profile() -> typing.Optional[ConnectionProfile]: ...
    @staticmethod
    def get_lan_identifiers() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[LanIdentifier]]: ...
    @staticmethod
    def get_proxy_configuration_async(uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperation[ProxyConfiguration]: ...
    @staticmethod
    def get_sorted_endpoint_pairs(destination_list: typing.Iterable[winsdk.windows.networking.EndpointPair], sort_options: winsdk.windows.networking.HostNameSortOptions) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.networking.EndpointPair]]: ...
    @staticmethod
    def add_network_status_changed(network_status_handler: typing.Optional[NetworkStatusChangedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_network_status_changed(event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class NetworkItem(winsdk.system.Object):
    network_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkItem: ...
    def get_network_types(self) -> NetworkTypes: ...

class NetworkSecuritySettings(winsdk.system.Object):
    network_authentication_type: NetworkAuthenticationType
    network_encryption_type: NetworkEncryptionType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkSecuritySettings: ...

class NetworkStateChangeEventDetails(winsdk.system.Object):
    has_new_connection_cost: winsdk.system.Boolean
    has_new_domain_connectivity_level: winsdk.system.Boolean
    has_new_host_name_list: winsdk.system.Boolean
    has_new_internet_connection_profile: winsdk.system.Boolean
    has_new_network_connectivity_level: winsdk.system.Boolean
    has_new_wwan_registration_state: winsdk.system.Boolean
    has_new_tethering_client_count: winsdk.system.Boolean
    has_new_tethering_operational_state: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkStateChangeEventDetails: ...

class NetworkUsage(winsdk.system.Object):
    bytes_received: winsdk.system.UInt64
    bytes_sent: winsdk.system.UInt64
    connection_duration: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkUsage: ...

class ProviderNetworkUsage(winsdk.system.Object):
    bytes_received: winsdk.system.UInt64
    bytes_sent: winsdk.system.UInt64
    provider_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProviderNetworkUsage: ...

class ProxyConfiguration(winsdk.system.Object):
    can_connect_directly: winsdk.system.Boolean
    proxy_uris: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.Uri]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProxyConfiguration: ...

class RoutePolicy(winsdk.system.Object):
    connection_profile: typing.Optional[ConnectionProfile]
    host_name: typing.Optional[winsdk.windows.networking.HostName]
    host_name_type: winsdk.windows.networking.DomainNameType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RoutePolicy: ...
    def __new__(cls: typing.Type[RoutePolicy], connection_profile: typing.Optional[ConnectionProfile], host_name: typing.Optional[winsdk.windows.networking.HostName], type: winsdk.windows.networking.DomainNameType) -> RoutePolicy:...

class WlanConnectionProfileDetails(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WlanConnectionProfileDetails: ...
    def get_connected_ssid(self) -> str: ...

class WwanConnectionProfileDetails(winsdk.system.Object):
    access_point_name: str
    home_provider_id: str
    i_p_kind: WwanNetworkIPKind
    purpose_guids: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.system.Guid]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WwanConnectionProfileDetails: ...
    def get_current_data_class(self) -> WwanDataClass: ...
    def get_network_registration_state(self) -> WwanNetworkRegistrationState: ...

NetworkStatusChangedEventHandler = typing.Callable[[typing.Optional[winsdk.system.Object]], None]

