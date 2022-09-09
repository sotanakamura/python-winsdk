# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.AI.MachineLearning.Preview")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.graphics.imaging
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class FeatureElementKindPreview(enum.IntEnum):
    UNDEFINED = 0
    FLOAT = 1
    UINT8 = 2
    INT8 = 3
    UINT16 = 4
    INT16 = 5
    INT32 = 6
    INT64 = 7
    STRING = 8
    BOOLEAN = 9
    FLOAT16 = 10
    DOUBLE = 11
    UINT32 = 12
    UINT64 = 13
    COMPLEX64 = 14
    COMPLEX128 = 15

class LearningModelDeviceKindPreview(enum.IntEnum):
    LEARNING_DEVICE_ANY = 0
    LEARNING_DEVICE_CPU = 1
    LEARNING_DEVICE_GPU = 2
    LEARNING_DEVICE_NPU = 3
    LEARNING_DEVICE_DSP = 4
    LEARNING_DEVICE_FPGA = 5

class LearningModelFeatureKindPreview(enum.IntEnum):
    UNDEFINED = 0
    TENSOR = 1
    SEQUENCE = 2
    MAP = 3
    IMAGE = 4

_ns_module._register_FeatureElementKindPreview(FeatureElementKindPreview)
_ns_module._register_LearningModelDeviceKindPreview(LearningModelDeviceKindPreview)
_ns_module._register_LearningModelFeatureKindPreview(LearningModelFeatureKindPreview)

ImageVariableDescriptorPreview = _ns_module.ImageVariableDescriptorPreview
InferencingOptionsPreview = _ns_module.InferencingOptionsPreview
LearningModelBindingPreview = _ns_module.LearningModelBindingPreview
LearningModelDescriptionPreview = _ns_module.LearningModelDescriptionPreview
LearningModelEvaluationResultPreview = _ns_module.LearningModelEvaluationResultPreview
LearningModelPreview = _ns_module.LearningModelPreview
LearningModelVariableDescriptorPreview = _ns_module.LearningModelVariableDescriptorPreview
MapVariableDescriptorPreview = _ns_module.MapVariableDescriptorPreview
SequenceVariableDescriptorPreview = _ns_module.SequenceVariableDescriptorPreview
TensorVariableDescriptorPreview = _ns_module.TensorVariableDescriptorPreview
ILearningModelVariableDescriptorPreview = _ns_module.ILearningModelVariableDescriptorPreview
