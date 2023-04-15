// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.9

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.AppService.h")
#include "py.Windows.ApplicationModel.AppService.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Media.Capture.h")
#include "py.Windows.Media.Capture.h"
#endif

#if __has_include("py.Windows.Media.Capture.Frames.h")
#include "py.Windows.Media.Capture.Frames.h"
#endif

#if __has_include("py.Windows.Media.Devices.h")
#include "py.Windows.Media.Devices.h"
#endif

#if __has_include("py.Windows.Media.Devices.Core.h")
#include "py.Windows.Media.Devices.Core.h"
#endif

#if __has_include("py.Windows.Media.FaceAnalysis.h")
#include "py.Windows.Media.FaceAnalysis.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Media.Playback.h")
#include "py.Windows.Media.Playback.h"
#endif

#if __has_include("py.Windows.Media.Protection.h")
#include "py.Windows.Media.Protection.h"
#endif

#if __has_include("py.Windows.Media.Streaming.Adaptive.h")
#include "py.Windows.Media.Streaming.Adaptive.h"
#endif

#if __has_include("py.Windows.Networking.BackgroundTransfer.h")
#include "py.Windows.Networking.BackgroundTransfer.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.FileProperties.h")
#include "py.Windows.Storage.FileProperties.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.ApplicationModel.AppService.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Graphics.DirectX.Direct3D11.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Media.Capture.h>
#include <winrt/Windows.Media.Capture.Frames.h>
#include <winrt/Windows.Media.Devices.h>
#include <winrt/Windows.Media.Devices.Core.h>
#include <winrt/Windows.Media.FaceAnalysis.h>
#include <winrt/Windows.Media.MediaProperties.h>
#include <winrt/Windows.Media.Playback.h>
#include <winrt/Windows.Media.Protection.h>
#include <winrt/Windows.Media.Streaming.Adaptive.h>
#include <winrt/Windows.Networking.BackgroundTransfer.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.FileProperties.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.UI.h>

#include <winrt/Windows.Media.Core.h>

namespace py::proj::Windows::Media::Core
{}

namespace py::impl::Windows::Media::Core
{}

namespace py::wrapper::Windows::Media::Core
{
    using AudioStreamDescriptor = py::winrt_wrapper<winrt::Windows::Media::Core::AudioStreamDescriptor>;
    using AudioTrack = py::winrt_wrapper<winrt::Windows::Media::Core::AudioTrack>;
    using AudioTrackOpenFailedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs>;
    using AudioTrackSupportInfo = py::winrt_wrapper<winrt::Windows::Media::Core::AudioTrackSupportInfo>;
    using ChapterCue = py::winrt_wrapper<winrt::Windows::Media::Core::ChapterCue>;
    using CodecInfo = py::winrt_wrapper<winrt::Windows::Media::Core::CodecInfo>;
    using CodecQuery = py::winrt_wrapper<winrt::Windows::Media::Core::CodecQuery>;
    using CodecSubtypes = py::winrt_wrapper<winrt::Windows::Media::Core::CodecSubtypes>;
    using DataCue = py::winrt_wrapper<winrt::Windows::Media::Core::DataCue>;
    using FaceDetectedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::FaceDetectedEventArgs>;
    using FaceDetectionEffect = py::winrt_wrapper<winrt::Windows::Media::Core::FaceDetectionEffect>;
    using FaceDetectionEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Core::FaceDetectionEffectDefinition>;
    using FaceDetectionEffectFrame = py::winrt_wrapper<winrt::Windows::Media::Core::FaceDetectionEffectFrame>;
    using HighDynamicRangeControl = py::winrt_wrapper<winrt::Windows::Media::Core::HighDynamicRangeControl>;
    using HighDynamicRangeOutput = py::winrt_wrapper<winrt::Windows::Media::Core::HighDynamicRangeOutput>;
    using ImageCue = py::winrt_wrapper<winrt::Windows::Media::Core::ImageCue>;
    using InitializeMediaStreamSourceRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>;
    using LowLightFusion = py::winrt_wrapper<winrt::Windows::Media::Core::LowLightFusion>;
    using LowLightFusionResult = py::winrt_wrapper<winrt::Windows::Media::Core::LowLightFusionResult>;
    using MediaBinder = py::winrt_wrapper<winrt::Windows::Media::Core::MediaBinder>;
    using MediaBindingEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaBindingEventArgs>;
    using MediaCueEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaCueEventArgs>;
    using MediaSource = py::winrt_wrapper<winrt::Windows::Media::Core::MediaSource>;
    using MediaSourceAppServiceConnection = py::winrt_wrapper<winrt::Windows::Media::Core::MediaSourceAppServiceConnection>;
    using MediaSourceError = py::winrt_wrapper<winrt::Windows::Media::Core::MediaSourceError>;
    using MediaSourceOpenOperationCompletedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>;
    using MediaSourceStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs>;
    using MediaStreamSample = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSample>;
    using MediaStreamSamplePropertySet = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSamplePropertySet>;
    using MediaStreamSampleProtectionProperties = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSampleProtectionProperties>;
    using MediaStreamSource = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSource>;
    using MediaStreamSourceClosedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs>;
    using MediaStreamSourceClosedRequest = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceClosedRequest>;
    using MediaStreamSourceSampleRenderedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>;
    using MediaStreamSourceSampleRequest = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceSampleRequest>;
    using MediaStreamSourceSampleRequestDeferral = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>;
    using MediaStreamSourceSampleRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>;
    using MediaStreamSourceStartingEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs>;
    using MediaStreamSourceStartingRequest = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceStartingRequest>;
    using MediaStreamSourceStartingRequestDeferral = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>;
    using MediaStreamSourceSwitchStreamsRequest = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>;
    using MediaStreamSourceSwitchStreamsRequestDeferral = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>;
    using MediaStreamSourceSwitchStreamsRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>;
    using MseSourceBuffer = py::winrt_wrapper<winrt::Windows::Media::Core::MseSourceBuffer>;
    using MseSourceBufferList = py::winrt_wrapper<winrt::Windows::Media::Core::MseSourceBufferList>;
    using MseStreamSource = py::winrt_wrapper<winrt::Windows::Media::Core::MseStreamSource>;
    using SceneAnalysisEffect = py::winrt_wrapper<winrt::Windows::Media::Core::SceneAnalysisEffect>;
    using SceneAnalysisEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Core::SceneAnalysisEffectDefinition>;
    using SceneAnalysisEffectFrame = py::winrt_wrapper<winrt::Windows::Media::Core::SceneAnalysisEffectFrame>;
    using SceneAnalyzedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::SceneAnalyzedEventArgs>;
    using SpeechCue = py::winrt_wrapper<winrt::Windows::Media::Core::SpeechCue>;
    using TimedMetadataStreamDescriptor = py::winrt_wrapper<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor>;
    using TimedMetadataTrack = py::winrt_wrapper<winrt::Windows::Media::Core::TimedMetadataTrack>;
    using TimedMetadataTrackError = py::winrt_wrapper<winrt::Windows::Media::Core::TimedMetadataTrackError>;
    using TimedMetadataTrackFailedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs>;
    using TimedTextBouten = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextBouten>;
    using TimedTextCue = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextCue>;
    using TimedTextLine = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextLine>;
    using TimedTextRegion = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextRegion>;
    using TimedTextRuby = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextRuby>;
    using TimedTextSource = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextSource>;
    using TimedTextSourceResolveResultEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs>;
    using TimedTextStyle = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextStyle>;
    using TimedTextSubformat = py::winrt_wrapper<winrt::Windows::Media::Core::TimedTextSubformat>;
    using VideoStabilizationEffect = py::winrt_wrapper<winrt::Windows::Media::Core::VideoStabilizationEffect>;
    using VideoStabilizationEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Core::VideoStabilizationEffectDefinition>;
    using VideoStabilizationEffectEnabledChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>;
    using VideoStreamDescriptor = py::winrt_wrapper<winrt::Windows::Media::Core::VideoStreamDescriptor>;
    using VideoTrack = py::winrt_wrapper<winrt::Windows::Media::Core::VideoTrack>;
    using VideoTrackOpenFailedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs>;
    using VideoTrackSupportInfo = py::winrt_wrapper<winrt::Windows::Media::Core::VideoTrackSupportInfo>;
    using IMediaCue = py::winrt_wrapper<winrt::Windows::Media::Core::IMediaCue>;
    using IMediaSource = py::winrt_wrapper<winrt::Windows::Media::Core::IMediaSource>;
    using IMediaStreamDescriptor = py::winrt_wrapper<winrt::Windows::Media::Core::IMediaStreamDescriptor>;
    using IMediaStreamDescriptor2 = py::winrt_wrapper<winrt::Windows::Media::Core::IMediaStreamDescriptor2>;
    using IMediaTrack = py::winrt_wrapper<winrt::Windows::Media::Core::IMediaTrack>;
    using ISingleSelectMediaTrackList = py::winrt_wrapper<winrt::Windows::Media::Core::ISingleSelectMediaTrackList>;
    using ITimedMetadataTrackProvider = py::winrt_wrapper<winrt::Windows::Media::Core::ITimedMetadataTrackProvider>;
    using MseTimeRange = py::winrt_struct_wrapper<winrt::Windows::Media::Core::MseTimeRange>;
    using TimedTextDouble = py::winrt_struct_wrapper<winrt::Windows::Media::Core::TimedTextDouble>;
    using TimedTextPadding = py::winrt_struct_wrapper<winrt::Windows::Media::Core::TimedTextPadding>;
    using TimedTextPoint = py::winrt_struct_wrapper<winrt::Windows::Media::Core::TimedTextPoint>;
    using TimedTextSize = py::winrt_struct_wrapper<winrt::Windows::Media::Core::TimedTextSize>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::AudioDecoderDegradation> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::AudioDecoderDegradationReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::CodecCategory> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::CodecKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::FaceDetectionMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MediaDecoderStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MediaSourceState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MediaSourceStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MediaStreamSourceClosedReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MediaStreamSourceErrorStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MediaTrackKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MseAppendMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MseEndOfStreamStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MseReadyState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::SceneAnalysisRecommendation> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedMetadataKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedMetadataTrackErrorCode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextBoutenPosition> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextBoutenType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextDisplayAlignment> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextFlowDirection> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextFontStyle> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextLineAlignment> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextRubyAlign> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextRubyPosition> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextRubyReserve> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextScrollMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextUnit> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextWeight> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextWrapping> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextWritingMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::MseTimeRange> = "T{T{q:duration:}:start:T{q:duration:}:end:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextDouble> = "T{d:value:i:unit:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextPadding> = "T{d:before:d:after:d:start:d:end:i:unit:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextPoint> = "T{d:x:d:y:i:unit:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Core::TimedTextSize> = "T{d:height:d:width:i:unit:}";


    template<>
    struct py_type<winrt::Windows::Media::Core::AudioDecoderDegradation>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::AudioDecoderDegradationReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::CodecCategory>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::CodecKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::FaceDetectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MediaDecoderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MediaSourceState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MediaSourceStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MediaStreamSourceClosedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MediaStreamSourceErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MediaTrackKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MseAppendMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MseEndOfStreamStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::MseReadyState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::SceneAnalysisRecommendation>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedMetadataKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedMetadataTrackErrorCode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextBoutenPosition>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextBoutenType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextDisplayAlignment>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextFlowDirection>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextFontStyle>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextLineAlignment>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextRubyAlign>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextRubyPosition>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextRubyReserve>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextScrollMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextUnit>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextWeight>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextWrapping>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::TimedTextWritingMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::AudioStreamDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::AudioTrack>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::AudioTrackSupportInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::ChapterCue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::CodecInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::CodecQuery>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::CodecSubtypes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::DataCue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::FaceDetectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::FaceDetectionEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::FaceDetectionEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::FaceDetectionEffectFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::HighDynamicRangeControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::HighDynamicRangeOutput>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::ImageCue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::LowLightFusion>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::LowLightFusionResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaBinder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaBindingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaCueEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaSourceAppServiceConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaSourceError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSample>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSamplePropertySet>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSampleProtectionProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceClosedRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceSampleRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceStartingRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MseSourceBuffer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MseSourceBufferList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MseStreamSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::SceneAnalysisEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::SceneAnalysisEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::SceneAnalysisEffectFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::SceneAnalyzedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::SpeechCue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedMetadataTrack>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedMetadataTrackError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextBouten>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextCue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextLine>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextRegion>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextRuby>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextStyle>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextSubformat>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::VideoStabilizationEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::VideoStabilizationEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::VideoStreamDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::VideoTrack>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::VideoTrackSupportInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::IMediaCue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::IMediaSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::IMediaStreamDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::IMediaStreamDescriptor2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::IMediaTrack>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::ISingleSelectMediaTrackList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::ITimedMetadataTrackProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::MseTimeRange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextDouble>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextPadding>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextPoint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Core::TimedTextSize>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Media::Core::MseTimeRange>
    {
        static PyObject* convert(winrt::Windows::Media::Core::MseTimeRange instance) noexcept;
        static winrt::Windows::Media::Core::MseTimeRange convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Media::Core::TimedTextDouble>
    {
        static PyObject* convert(winrt::Windows::Media::Core::TimedTextDouble instance) noexcept;
        static winrt::Windows::Media::Core::TimedTextDouble convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Media::Core::TimedTextPadding>
    {
        static PyObject* convert(winrt::Windows::Media::Core::TimedTextPadding instance) noexcept;
        static winrt::Windows::Media::Core::TimedTextPadding convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Media::Core::TimedTextPoint>
    {
        static PyObject* convert(winrt::Windows::Media::Core::TimedTextPoint instance) noexcept;
        static winrt::Windows::Media::Core::TimedTextPoint convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Media::Core::TimedTextSize>
    {
        static PyObject* convert(winrt::Windows::Media::Core::TimedTextSize instance) noexcept;
        static winrt::Windows::Media::Core::TimedTextSize convert_to(PyObject* obj);
    };

}
