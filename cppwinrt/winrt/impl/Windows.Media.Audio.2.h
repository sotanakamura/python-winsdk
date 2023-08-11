// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Windows_Media_Audio_2_H
#define WINRT_Windows_Media_Audio_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Media.Render.1.h"
#include "winrt/impl/Windows.Media.Audio.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Audio
{
    struct WINRT_IMPL_EMPTY_BASES AudioDeviceInputNode : winrt::Windows::Media::Audio::IAudioDeviceInputNode,
        impl::require<AudioDeviceInputNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioDeviceInputNode(std::nullptr_t) noexcept {}
        AudioDeviceInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioDeviceInputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioDeviceOutputNode : winrt::Windows::Media::Audio::IAudioDeviceOutputNode,
        impl::require<AudioDeviceOutputNode, winrt::Windows::Media::Audio::IAudioNodeWithListener>
    {
        AudioDeviceOutputNode(std::nullptr_t) noexcept {}
        AudioDeviceOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioDeviceOutputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioFileInputNode : winrt::Windows::Media::Audio::IAudioFileInputNode,
        impl::require<AudioFileInputNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioFileInputNode(std::nullptr_t) noexcept {}
        AudioFileInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFileInputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioFileOutputNode : winrt::Windows::Media::Audio::IAudioFileOutputNode
    {
        AudioFileOutputNode(std::nullptr_t) noexcept {}
        AudioFileOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFileOutputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioFrameCompletedEventArgs : winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs
    {
        AudioFrameCompletedEventArgs(std::nullptr_t) noexcept {}
        AudioFrameCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioFrameInputNode : winrt::Windows::Media::Audio::IAudioFrameInputNode,
        impl::require<AudioFrameInputNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioFrameInputNode(std::nullptr_t) noexcept {}
        AudioFrameInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFrameInputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioFrameOutputNode : winrt::Windows::Media::Audio::IAudioFrameOutputNode
    {
        AudioFrameOutputNode(std::nullptr_t) noexcept {}
        AudioFrameOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFrameOutputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioGraph : winrt::Windows::Media::Audio::IAudioGraph,
        impl::require<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2, winrt::Windows::Media::Audio::IAudioGraph3>
    {
        AudioGraph(std::nullptr_t) noexcept {}
        AudioGraph(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraph(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Media::Audio::IAudioGraph::CreateDeviceInputNodeAsync;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateDeviceInputNodeAsync;
        using winrt::Windows::Media::Audio::IAudioGraph::CreateFileInputNodeAsync;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateFileInputNodeAsync;
        using winrt::Windows::Media::Audio::IAudioGraph::CreateFrameInputNode;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateFrameInputNode;
        using winrt::Windows::Media::Audio::IAudioGraph::CreateSubmixNode;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateSubmixNode;
        static auto CreateAsync(winrt::Windows::Media::Audio::AudioGraphSettings const& settings);
    };
    struct WINRT_IMPL_EMPTY_BASES AudioGraphBatchUpdater : winrt::Windows::Foundation::IClosable
    {
        AudioGraphBatchUpdater(std::nullptr_t) noexcept {}
        AudioGraphBatchUpdater(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IClosable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioGraphConnection : winrt::Windows::Media::Audio::IAudioGraphConnection
    {
        AudioGraphConnection(std::nullptr_t) noexcept {}
        AudioGraphConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraphConnection(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioGraphSettings : winrt::Windows::Media::Audio::IAudioGraphSettings,
        impl::require<AudioGraphSettings, winrt::Windows::Media::Audio::IAudioGraphSettings2>
    {
        AudioGraphSettings(std::nullptr_t) noexcept {}
        AudioGraphSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraphSettings(ptr, take_ownership_from_abi) {}
        explicit AudioGraphSettings(winrt::Windows::Media::Render::AudioRenderCategory const& audioRenderCategory);
    };
    struct WINRT_IMPL_EMPTY_BASES AudioGraphUnrecoverableErrorOccurredEventArgs : winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs
    {
        AudioGraphUnrecoverableErrorOccurredEventArgs(std::nullptr_t) noexcept {}
        AudioGraphUnrecoverableErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioNodeEmitter : winrt::Windows::Media::Audio::IAudioNodeEmitter,
        impl::require<AudioNodeEmitter, winrt::Windows::Media::Audio::IAudioNodeEmitter2>
    {
        AudioNodeEmitter(std::nullptr_t) noexcept {}
        AudioNodeEmitter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitter(ptr, take_ownership_from_abi) {}
        AudioNodeEmitter();
        AudioNodeEmitter(winrt::Windows::Media::Audio::AudioNodeEmitterShape const& shape, winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, winrt::Windows::Media::Audio::AudioNodeEmitterSettings const& settings);
    };
    struct WINRT_IMPL_EMPTY_BASES AudioNodeEmitterConeProperties : winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties
    {
        AudioNodeEmitterConeProperties(std::nullptr_t) noexcept {}
        AudioNodeEmitterConeProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioNodeEmitterDecayModel : winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel
    {
        AudioNodeEmitterDecayModel(std::nullptr_t) noexcept {}
        AudioNodeEmitterDecayModel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel(ptr, take_ownership_from_abi) {}
        static auto CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance);
        static auto CreateCustom(double minGain, double maxGain);
    };
    struct WINRT_IMPL_EMPTY_BASES AudioNodeEmitterNaturalDecayModelProperties : winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties
    {
        AudioNodeEmitterNaturalDecayModelProperties(std::nullptr_t) noexcept {}
        AudioNodeEmitterNaturalDecayModelProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioNodeEmitterShape : winrt::Windows::Media::Audio::IAudioNodeEmitterShape
    {
        AudioNodeEmitterShape(std::nullptr_t) noexcept {}
        AudioNodeEmitterShape(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterShape(ptr, take_ownership_from_abi) {}
        static auto CreateCone(double innerAngle, double outerAngle, double outerAngleGain);
        static auto CreateOmnidirectional();
    };
    struct WINRT_IMPL_EMPTY_BASES AudioNodeListener : winrt::Windows::Media::Audio::IAudioNodeListener
    {
        AudioNodeListener(std::nullptr_t) noexcept {}
        AudioNodeListener(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeListener(ptr, take_ownership_from_abi) {}
        AudioNodeListener();
    };
    struct WINRT_IMPL_EMPTY_BASES AudioPlaybackConnection : winrt::Windows::Media::Audio::IAudioPlaybackConnection,
        impl::require<AudioPlaybackConnection, winrt::Windows::Foundation::IClosable>
    {
        AudioPlaybackConnection(std::nullptr_t) noexcept {}
        AudioPlaybackConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioPlaybackConnection(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto TryCreateFromId(param::hstring const& id);
    };
    struct WINRT_IMPL_EMPTY_BASES AudioPlaybackConnectionOpenResult : winrt::Windows::Media::Audio::IAudioPlaybackConnectionOpenResult
    {
        AudioPlaybackConnectionOpenResult(std::nullptr_t) noexcept {}
        AudioPlaybackConnectionOpenResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioPlaybackConnectionOpenResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AudioStateMonitor : winrt::Windows::Media::Audio::IAudioStateMonitor
    {
        AudioStateMonitor(std::nullptr_t) noexcept {}
        AudioStateMonitor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioStateMonitor(ptr, take_ownership_from_abi) {}
        static auto CreateForRenderMonitoring();
        static auto CreateForRenderMonitoring(winrt::Windows::Media::Render::AudioRenderCategory const& category);
        static auto CreateForRenderMonitoring(winrt::Windows::Media::Render::AudioRenderCategory const& category, winrt::Windows::Media::Devices::AudioDeviceRole const& role);
        static auto CreateForRenderMonitoringWithCategoryAndDeviceId(winrt::Windows::Media::Render::AudioRenderCategory const& category, param::hstring const& deviceId);
        static auto CreateForCaptureMonitoring();
        static auto CreateForCaptureMonitoring(winrt::Windows::Media::Capture::MediaCategory const& category);
        static auto CreateForCaptureMonitoring(winrt::Windows::Media::Capture::MediaCategory const& category, winrt::Windows::Media::Devices::AudioDeviceRole const& role);
        static auto CreateForCaptureMonitoringWithCategoryAndDeviceId(winrt::Windows::Media::Capture::MediaCategory const& category, param::hstring const& deviceId);
    };
    struct WINRT_IMPL_EMPTY_BASES AudioSubmixNode : winrt::Windows::Media::Audio::IAudioInputNode,
        impl::require<AudioSubmixNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioSubmixNode(std::nullptr_t) noexcept {}
        AudioSubmixNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioInputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CreateAudioDeviceInputNodeResult : winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult,
        impl::require<CreateAudioDeviceInputNodeResult, winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        CreateAudioDeviceInputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioDeviceInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CreateAudioDeviceOutputNodeResult : winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult,
        impl::require<CreateAudioDeviceOutputNodeResult, winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        CreateAudioDeviceOutputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioDeviceOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CreateAudioFileInputNodeResult : winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult,
        impl::require<CreateAudioFileInputNodeResult, winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        CreateAudioFileInputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioFileInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CreateAudioFileOutputNodeResult : winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult,
        impl::require<CreateAudioFileOutputNodeResult, winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        CreateAudioFileOutputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioFileOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CreateAudioGraphResult : winrt::Windows::Media::Audio::ICreateAudioGraphResult,
        impl::require<CreateAudioGraphResult, winrt::Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        CreateAudioGraphResult(std::nullptr_t) noexcept {}
        CreateAudioGraphResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioGraphResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CreateMediaSourceAudioInputNodeResult : winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult,
        impl::require<CreateMediaSourceAudioInputNodeResult, winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        CreateMediaSourceAudioInputNodeResult(std::nullptr_t) noexcept {}
        CreateMediaSourceAudioInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES EchoEffectDefinition : winrt::Windows::Media::Audio::IEchoEffectDefinition
    {
        EchoEffectDefinition(std::nullptr_t) noexcept {}
        EchoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IEchoEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit EchoEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct WINRT_IMPL_EMPTY_BASES EqualizerBand : winrt::Windows::Media::Audio::IEqualizerBand
    {
        EqualizerBand(std::nullptr_t) noexcept {}
        EqualizerBand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IEqualizerBand(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES EqualizerEffectDefinition : winrt::Windows::Media::Audio::IEqualizerEffectDefinition
    {
        EqualizerEffectDefinition(std::nullptr_t) noexcept {}
        EqualizerEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IEqualizerEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit EqualizerEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct WINRT_IMPL_EMPTY_BASES FrameInputNodeQuantumStartedEventArgs : winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs
    {
        FrameInputNodeQuantumStartedEventArgs(std::nullptr_t) noexcept {}
        FrameInputNodeQuantumStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES LimiterEffectDefinition : winrt::Windows::Media::Audio::ILimiterEffectDefinition
    {
        LimiterEffectDefinition(std::nullptr_t) noexcept {}
        LimiterEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ILimiterEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit LimiterEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct WINRT_IMPL_EMPTY_BASES MediaSourceAudioInputNode : winrt::Windows::Media::Audio::IMediaSourceAudioInputNode
    {
        MediaSourceAudioInputNode(std::nullptr_t) noexcept {}
        MediaSourceAudioInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IMediaSourceAudioInputNode(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ReverbEffectDefinition : winrt::Windows::Media::Audio::IReverbEffectDefinition
    {
        ReverbEffectDefinition(std::nullptr_t) noexcept {}
        ReverbEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IReverbEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit ReverbEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct WINRT_IMPL_EMPTY_BASES SetDefaultSpatialAudioFormatResult : winrt::Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult
    {
        SetDefaultSpatialAudioFormatResult(std::nullptr_t) noexcept {}
        SetDefaultSpatialAudioFormatResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SpatialAudioDeviceConfiguration : winrt::Windows::Media::Audio::ISpatialAudioDeviceConfiguration
    {
        SpatialAudioDeviceConfiguration(std::nullptr_t) noexcept {}
        SpatialAudioDeviceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ISpatialAudioDeviceConfiguration(ptr, take_ownership_from_abi) {}
        static auto GetForDeviceId(param::hstring const& deviceId);
    };
    struct WINRT_IMPL_EMPTY_BASES SpatialAudioFormatConfiguration : winrt::Windows::Media::Audio::ISpatialAudioFormatConfiguration
    {
        SpatialAudioFormatConfiguration(std::nullptr_t) noexcept {}
        SpatialAudioFormatConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ISpatialAudioFormatConfiguration(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct SpatialAudioFormatSubtype
    {
        SpatialAudioFormatSubtype() = delete;
        [[nodiscard]] static auto WindowsSonic();
        [[nodiscard]] static auto DolbyAtmosForHeadphones();
        [[nodiscard]] static auto DolbyAtmosForHomeTheater();
        [[nodiscard]] static auto DolbyAtmosForSpeakers();
        [[nodiscard]] static auto DTSHeadphoneX();
        [[nodiscard]] static auto DTSXUltra();
        [[nodiscard]] static auto DTSXForHomeTheater();
    };
}
#endif
