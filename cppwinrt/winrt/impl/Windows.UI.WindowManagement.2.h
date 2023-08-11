// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Windows_UI_WindowManagement_2_H
#define WINRT_Windows_UI_WindowManagement_2_H
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct WINRT_IMPL_EMPTY_BASES AppWindow : winrt::Windows::UI::WindowManagement::IAppWindow
    {
        AppWindow(std::nullptr_t) noexcept {}
        AppWindow(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindow(ptr, take_ownership_from_abi) {}
        static auto TryCreateAsync();
        static auto ClearAllPersistedState();
        static auto ClearPersistedState(param::hstring const& key);
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowChangedEventArgs : winrt::Windows::UI::WindowManagement::IAppWindowChangedEventArgs
    {
        AppWindowChangedEventArgs(std::nullptr_t) noexcept {}
        AppWindowChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowCloseRequestedEventArgs : winrt::Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs
    {
        AppWindowCloseRequestedEventArgs(std::nullptr_t) noexcept {}
        AppWindowCloseRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowClosedEventArgs : winrt::Windows::UI::WindowManagement::IAppWindowClosedEventArgs
    {
        AppWindowClosedEventArgs(std::nullptr_t) noexcept {}
        AppWindowClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowFrame : winrt::Windows::UI::WindowManagement::IAppWindowFrame,
        impl::require<AppWindowFrame, winrt::Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        AppWindowFrame(std::nullptr_t) noexcept {}
        AppWindowFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowPlacement : winrt::Windows::UI::WindowManagement::IAppWindowPlacement
    {
        AppWindowPlacement(std::nullptr_t) noexcept {}
        AppWindowPlacement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowPlacement(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowPresentationConfiguration : winrt::Windows::UI::WindowManagement::IAppWindowPresentationConfiguration
    {
        AppWindowPresentationConfiguration(std::nullptr_t) noexcept {}
        AppWindowPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowPresentationConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowPresenter : winrt::Windows::UI::WindowManagement::IAppWindowPresenter
    {
        AppWindowPresenter(std::nullptr_t) noexcept {}
        AppWindowPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowPresenter(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowTitleBar : winrt::Windows::UI::WindowManagement::IAppWindowTitleBar,
        impl::require<AppWindowTitleBar, winrt::Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        AppWindowTitleBar(std::nullptr_t) noexcept {}
        AppWindowTitleBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowTitleBar(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppWindowTitleBarOcclusion : winrt::Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion
    {
        AppWindowTitleBarOcclusion(std::nullptr_t) noexcept {}
        AppWindowTitleBarOcclusion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CompactOverlayPresentationConfiguration : winrt::Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration,
        impl::base<CompactOverlayPresentationConfiguration, winrt::Windows::UI::WindowManagement::AppWindowPresentationConfiguration>,
        impl::require<CompactOverlayPresentationConfiguration, winrt::Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        CompactOverlayPresentationConfiguration(std::nullptr_t) noexcept {}
        CompactOverlayPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration(ptr, take_ownership_from_abi) {}
        CompactOverlayPresentationConfiguration();
    };
    struct WINRT_IMPL_EMPTY_BASES DefaultPresentationConfiguration : winrt::Windows::UI::WindowManagement::IDefaultPresentationConfiguration,
        impl::base<DefaultPresentationConfiguration, winrt::Windows::UI::WindowManagement::AppWindowPresentationConfiguration>,
        impl::require<DefaultPresentationConfiguration, winrt::Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        DefaultPresentationConfiguration(std::nullptr_t) noexcept {}
        DefaultPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IDefaultPresentationConfiguration(ptr, take_ownership_from_abi) {}
        DefaultPresentationConfiguration();
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayRegion : winrt::Windows::UI::WindowManagement::IDisplayRegion
    {
        DisplayRegion(std::nullptr_t) noexcept {}
        DisplayRegion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IDisplayRegion(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FullScreenPresentationConfiguration : winrt::Windows::UI::WindowManagement::IFullScreenPresentationConfiguration,
        impl::base<FullScreenPresentationConfiguration, winrt::Windows::UI::WindowManagement::AppWindowPresentationConfiguration>,
        impl::require<FullScreenPresentationConfiguration, winrt::Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        FullScreenPresentationConfiguration(std::nullptr_t) noexcept {}
        FullScreenPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IFullScreenPresentationConfiguration(ptr, take_ownership_from_abi) {}
        FullScreenPresentationConfiguration();
    };
    struct WindowServices
    {
        WindowServices() = delete;
        static auto FindAllTopLevelWindowIds();
    };
    struct WINRT_IMPL_EMPTY_BASES WindowingEnvironment : winrt::Windows::UI::WindowManagement::IWindowingEnvironment
    {
        WindowingEnvironment(std::nullptr_t) noexcept {}
        WindowingEnvironment(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IWindowingEnvironment(ptr, take_ownership_from_abi) {}
        static auto FindAll();
        static auto FindAll(winrt::Windows::UI::WindowManagement::WindowingEnvironmentKind const& kind);
    };
    struct WINRT_IMPL_EMPTY_BASES WindowingEnvironmentAddedEventArgs : winrt::Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs
    {
        WindowingEnvironmentAddedEventArgs(std::nullptr_t) noexcept {}
        WindowingEnvironmentAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES WindowingEnvironmentChangedEventArgs : winrt::Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs
    {
        WindowingEnvironmentChangedEventArgs(std::nullptr_t) noexcept {}
        WindowingEnvironmentChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES WindowingEnvironmentRemovedEventArgs : winrt::Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs
    {
        WindowingEnvironmentRemovedEventArgs(std::nullptr_t) noexcept {}
        WindowingEnvironmentRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
