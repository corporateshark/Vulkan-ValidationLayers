/* *** THIS FILE IS GENERATED - DO NOT EDIT! ***
 * See parameter_validation_generator.py for modifications
 *
 * Copyright (c) 2015-2023 The Khronos Group Inc.
 * Copyright (c) 2015-2023 LunarG, Inc.
 * Copyright (C) 2015-2023 Google Inc.
 * Copyright (c) 2015-2023 Valve Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#pragma once

#include <array>
#include "vulkan/vulkan.h"

const uint32_t GeneratedVulkanHeaderVersion = 242;
const VkAccessFlags AllVkAccessFlagBits = VK_ACCESS_INDIRECT_COMMAND_READ_BIT|VK_ACCESS_INDEX_READ_BIT|VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT|VK_ACCESS_UNIFORM_READ_BIT|VK_ACCESS_INPUT_ATTACHMENT_READ_BIT|VK_ACCESS_SHADER_READ_BIT|VK_ACCESS_SHADER_WRITE_BIT|VK_ACCESS_COLOR_ATTACHMENT_READ_BIT|VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT|VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT|VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT|VK_ACCESS_TRANSFER_READ_BIT|VK_ACCESS_TRANSFER_WRITE_BIT|VK_ACCESS_HOST_READ_BIT|VK_ACCESS_HOST_WRITE_BIT|VK_ACCESS_MEMORY_READ_BIT|VK_ACCESS_MEMORY_WRITE_BIT|VK_ACCESS_NONE|VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT|VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT|VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT|VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT|VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT|VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR|VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR|VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT|VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR|VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV|VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV;
const VkAttachmentDescriptionFlags AllVkAttachmentDescriptionFlagBits = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT;
const VkBufferCreateFlags AllVkBufferCreateFlagBits = VK_BUFFER_CREATE_SPARSE_BINDING_BIT|VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT|VK_BUFFER_CREATE_SPARSE_ALIASED_BIT|VK_BUFFER_CREATE_PROTECTED_BIT|VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT|VK_BUFFER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT;
const VkBufferUsageFlags AllVkBufferUsageFlagBits = VK_BUFFER_USAGE_TRANSFER_SRC_BIT|VK_BUFFER_USAGE_TRANSFER_DST_BIT|VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT|VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT|VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT|VK_BUFFER_USAGE_STORAGE_BUFFER_BIT|VK_BUFFER_USAGE_INDEX_BUFFER_BIT|VK_BUFFER_USAGE_VERTEX_BUFFER_BIT|VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT|VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT|VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR|VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR|VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT|VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT|VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT|VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR|VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR|VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR|VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR|VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR|VK_BUFFER_USAGE_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT|VK_BUFFER_USAGE_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT|VK_BUFFER_USAGE_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT|VK_BUFFER_USAGE_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT|VK_BUFFER_USAGE_MICROMAP_STORAGE_BIT_EXT;
const VkColorComponentFlags AllVkColorComponentFlagBits = VK_COLOR_COMPONENT_R_BIT|VK_COLOR_COMPONENT_G_BIT|VK_COLOR_COMPONENT_B_BIT|VK_COLOR_COMPONENT_A_BIT;
const VkCommandBufferResetFlags AllVkCommandBufferResetFlagBits = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT;
const VkCommandBufferUsageFlags AllVkCommandBufferUsageFlagBits = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT|VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT|VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
const VkCommandPoolCreateFlags AllVkCommandPoolCreateFlagBits = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT|VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT|VK_COMMAND_POOL_CREATE_PROTECTED_BIT;
const VkCommandPoolResetFlags AllVkCommandPoolResetFlagBits = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT;
const VkCullModeFlags AllVkCullModeFlagBits = VK_CULL_MODE_NONE|VK_CULL_MODE_FRONT_BIT|VK_CULL_MODE_BACK_BIT|VK_CULL_MODE_FRONT_AND_BACK;
const VkDependencyFlags AllVkDependencyFlagBits = VK_DEPENDENCY_BY_REGION_BIT|VK_DEPENDENCY_DEVICE_GROUP_BIT|VK_DEPENDENCY_VIEW_LOCAL_BIT|VK_DEPENDENCY_FEEDBACK_LOOP_BIT_EXT;
const VkDescriptorPoolCreateFlags AllVkDescriptorPoolCreateFlagBits = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT|VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT|VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_EXT;
const VkDescriptorSetLayoutCreateFlags AllVkDescriptorSetLayoutCreateFlagBits = VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT|VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR|VK_DESCRIPTOR_SET_LAYOUT_CREATE_DESCRIPTOR_BUFFER_BIT_EXT|VK_DESCRIPTOR_SET_LAYOUT_CREATE_EMBEDDED_IMMUTABLE_SAMPLERS_BIT_EXT|VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_EXT;
const VkDeviceQueueCreateFlags AllVkDeviceQueueCreateFlagBits = VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT;
const VkEventCreateFlags AllVkEventCreateFlagBits = VK_EVENT_CREATE_DEVICE_ONLY_BIT;
const VkFenceCreateFlags AllVkFenceCreateFlagBits = VK_FENCE_CREATE_SIGNALED_BIT;
const VkFormatFeatureFlags AllVkFormatFeatureFlagBits = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT|VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT|VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT|VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_FORMAT_FEATURE_BLIT_SRC_BIT|VK_FORMAT_FEATURE_BLIT_DST_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT|VK_FORMAT_FEATURE_TRANSFER_SRC_BIT|VK_FORMAT_FEATURE_TRANSFER_DST_BIT|VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT|VK_FORMAT_FEATURE_DISJOINT_BIT|VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT|VK_FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR|VK_FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR|VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT|VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT|VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR|VK_FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR|VK_FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR;
const VkFramebufferCreateFlags AllVkFramebufferCreateFlagBits = VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT;
const VkImageAspectFlags AllVkImageAspectFlagBits = VK_IMAGE_ASPECT_COLOR_BIT|VK_IMAGE_ASPECT_DEPTH_BIT|VK_IMAGE_ASPECT_STENCIL_BIT|VK_IMAGE_ASPECT_METADATA_BIT|VK_IMAGE_ASPECT_PLANE_0_BIT|VK_IMAGE_ASPECT_PLANE_1_BIT|VK_IMAGE_ASPECT_PLANE_2_BIT|VK_IMAGE_ASPECT_NONE|VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT|VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT|VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT|VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT;
const VkImageCreateFlags AllVkImageCreateFlagBits = VK_IMAGE_CREATE_SPARSE_BINDING_BIT|VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT|VK_IMAGE_CREATE_SPARSE_ALIASED_BIT|VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT|VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT|VK_IMAGE_CREATE_ALIAS_BIT|VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT|VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT|VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT|VK_IMAGE_CREATE_EXTENDED_USAGE_BIT|VK_IMAGE_CREATE_PROTECTED_BIT|VK_IMAGE_CREATE_DISJOINT_BIT|VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV|VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT|VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT|VK_IMAGE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT|VK_IMAGE_CREATE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT|VK_IMAGE_CREATE_2D_VIEW_COMPATIBLE_BIT_EXT|VK_IMAGE_CREATE_FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM;
const VkImageUsageFlags AllVkImageUsageFlagBits = VK_IMAGE_USAGE_TRANSFER_SRC_BIT|VK_IMAGE_USAGE_TRANSFER_DST_BIT|VK_IMAGE_USAGE_SAMPLED_BIT|VK_IMAGE_USAGE_STORAGE_BIT|VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT|VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT|VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT|VK_IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR|VK_IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR|VK_IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR|VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT|VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR|VK_IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR|VK_IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR|VK_IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR|VK_IMAGE_USAGE_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT|VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI|VK_IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM|VK_IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM;
const VkImageViewCreateFlags AllVkImageViewCreateFlagBits = VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT|VK_IMAGE_VIEW_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT|VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT;
const VkInstanceCreateFlags AllVkInstanceCreateFlagBits = VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
const VkPipelineCacheCreateFlags AllVkPipelineCacheCreateFlagBits = VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT;
const VkPipelineColorBlendStateCreateFlags AllVkPipelineColorBlendStateCreateFlagBits = VK_PIPELINE_COLOR_BLEND_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT;
const VkPipelineCreateFlags AllVkPipelineCreateFlagBits = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT|VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT|VK_PIPELINE_CREATE_DERIVATIVE_BIT|VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT|VK_PIPELINE_CREATE_DISPATCH_BASE_BIT|VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT|VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT|VK_PIPELINE_CREATE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR|VK_PIPELINE_CREATE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT|VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR|VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR|VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR|VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR|VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR|VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR|VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR|VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV|VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR|VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR|VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV|VK_PIPELINE_CREATE_LIBRARY_BIT_KHR|VK_PIPELINE_CREATE_DESCRIPTOR_BUFFER_BIT_EXT|VK_PIPELINE_CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT|VK_PIPELINE_CREATE_LINK_TIME_OPTIMIZATION_BIT_EXT|VK_PIPELINE_CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV|VK_PIPELINE_CREATE_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT|VK_PIPELINE_CREATE_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT|VK_PIPELINE_CREATE_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT|VK_PIPELINE_CREATE_NO_PROTECTED_ACCESS_BIT_EXT|VK_PIPELINE_CREATE_PROTECTED_ACCESS_ONLY_BIT_EXT;
const VkPipelineDepthStencilStateCreateFlags AllVkPipelineDepthStencilStateCreateFlagBits = VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT|VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT;
const VkPipelineLayoutCreateFlags AllVkPipelineLayoutCreateFlagBits = VK_PIPELINE_LAYOUT_CREATE_INDEPENDENT_SETS_BIT_EXT;
const VkPipelineShaderStageCreateFlags AllVkPipelineShaderStageCreateFlagBits = VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT|VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT;
const VkPipelineStageFlags AllVkPipelineStageFlagBits = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT|VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT|VK_PIPELINE_STAGE_VERTEX_INPUT_BIT|VK_PIPELINE_STAGE_VERTEX_SHADER_BIT|VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT|VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT|VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT|VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT|VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT|VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT|VK_PIPELINE_STAGE_TRANSFER_BIT|VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT|VK_PIPELINE_STAGE_HOST_BIT|VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT|VK_PIPELINE_STAGE_ALL_COMMANDS_BIT|VK_PIPELINE_STAGE_NONE|VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT|VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT|VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR|VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR|VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT|VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR|VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV|VK_PIPELINE_STAGE_TASK_SHADER_BIT_EXT|VK_PIPELINE_STAGE_MESH_SHADER_BIT_EXT;
const VkQueryControlFlags AllVkQueryControlFlagBits = VK_QUERY_CONTROL_PRECISE_BIT;
const VkQueryPipelineStatisticFlags AllVkQueryPipelineStatisticFlagBits = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT|VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT|VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_TASK_SHADER_INVOCATIONS_BIT_EXT|VK_QUERY_PIPELINE_STATISTIC_MESH_SHADER_INVOCATIONS_BIT_EXT|VK_QUERY_PIPELINE_STATISTIC_CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI;
const VkQueryResultFlags AllVkQueryResultFlagBits = VK_QUERY_RESULT_64_BIT|VK_QUERY_RESULT_WAIT_BIT|VK_QUERY_RESULT_WITH_AVAILABILITY_BIT|VK_QUERY_RESULT_PARTIAL_BIT|VK_QUERY_RESULT_WITH_STATUS_BIT_KHR;
const VkRenderPassCreateFlags AllVkRenderPassCreateFlagBits = VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM;
const VkSampleCountFlags AllVkSampleCountFlagBits = VK_SAMPLE_COUNT_1_BIT|VK_SAMPLE_COUNT_2_BIT|VK_SAMPLE_COUNT_4_BIT|VK_SAMPLE_COUNT_8_BIT|VK_SAMPLE_COUNT_16_BIT|VK_SAMPLE_COUNT_32_BIT|VK_SAMPLE_COUNT_64_BIT;
const VkSamplerCreateFlags AllVkSamplerCreateFlagBits = VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT|VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT|VK_SAMPLER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT|VK_SAMPLER_CREATE_NON_SEAMLESS_CUBE_MAP_BIT_EXT|VK_SAMPLER_CREATE_IMAGE_PROCESSING_BIT_QCOM;
const VkShaderStageFlags AllVkShaderStageFlagBits = VK_SHADER_STAGE_VERTEX_BIT|VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT|VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT|VK_SHADER_STAGE_GEOMETRY_BIT|VK_SHADER_STAGE_FRAGMENT_BIT|VK_SHADER_STAGE_COMPUTE_BIT|VK_SHADER_STAGE_ALL_GRAPHICS|VK_SHADER_STAGE_ALL|VK_SHADER_STAGE_RAYGEN_BIT_KHR|VK_SHADER_STAGE_ANY_HIT_BIT_KHR|VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR|VK_SHADER_STAGE_MISS_BIT_KHR|VK_SHADER_STAGE_INTERSECTION_BIT_KHR|VK_SHADER_STAGE_CALLABLE_BIT_KHR|VK_SHADER_STAGE_TASK_BIT_EXT|VK_SHADER_STAGE_MESH_BIT_EXT|VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI|VK_SHADER_STAGE_CLUSTER_CULLING_BIT_HUAWEI;
const VkSparseMemoryBindFlags AllVkSparseMemoryBindFlagBits = VK_SPARSE_MEMORY_BIND_METADATA_BIT;
const VkStencilFaceFlags AllVkStencilFaceFlagBits = VK_STENCIL_FACE_FRONT_BIT|VK_STENCIL_FACE_BACK_BIT|VK_STENCIL_FACE_FRONT_AND_BACK;
const VkSubpassDescriptionFlags AllVkSubpassDescriptionFlagBits = VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX|VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX|VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM|VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM|VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT|VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT|VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT|VK_SUBPASS_DESCRIPTION_ENABLE_LEGACY_DITHERING_BIT_EXT;
const VkExternalFenceHandleTypeFlags AllVkExternalFenceHandleTypeFlagBits = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT;
const VkExternalMemoryHandleTypeFlags AllVkExternalMemoryHandleTypeFlagBits = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID|VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_ZIRCON_VMO_BIT_FUCHSIA|VK_EXTERNAL_MEMORY_HANDLE_TYPE_RDMA_ADDRESS_BIT_NV;
const VkExternalSemaphoreHandleTypeFlags AllVkExternalSemaphoreHandleTypeFlagBits = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_ZIRCON_EVENT_BIT_FUCHSIA;
const VkFenceImportFlags AllVkFenceImportFlagBits = VK_FENCE_IMPORT_TEMPORARY_BIT;
const VkMemoryAllocateFlags AllVkMemoryAllocateFlagBits = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT|VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT|VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT;
const VkSemaphoreImportFlags AllVkSemaphoreImportFlagBits = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT;
const VkDescriptorBindingFlags AllVkDescriptorBindingFlagBits = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT|VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT|VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT|VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT;
const VkResolveModeFlags AllVkResolveModeFlagBits = VK_RESOLVE_MODE_NONE|VK_RESOLVE_MODE_SAMPLE_ZERO_BIT|VK_RESOLVE_MODE_AVERAGE_BIT|VK_RESOLVE_MODE_MIN_BIT|VK_RESOLVE_MODE_MAX_BIT;
const VkSemaphoreWaitFlags AllVkSemaphoreWaitFlagBits = VK_SEMAPHORE_WAIT_ANY_BIT;
const VkAccessFlags2 AllVkAccessFlagBits2 = VK_ACCESS_2_NONE|VK_ACCESS_2_INDIRECT_COMMAND_READ_BIT|VK_ACCESS_2_INDEX_READ_BIT|VK_ACCESS_2_VERTEX_ATTRIBUTE_READ_BIT|VK_ACCESS_2_UNIFORM_READ_BIT|VK_ACCESS_2_INPUT_ATTACHMENT_READ_BIT|VK_ACCESS_2_SHADER_READ_BIT|VK_ACCESS_2_SHADER_WRITE_BIT|VK_ACCESS_2_COLOR_ATTACHMENT_READ_BIT|VK_ACCESS_2_COLOR_ATTACHMENT_WRITE_BIT|VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_READ_BIT|VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT|VK_ACCESS_2_TRANSFER_READ_BIT|VK_ACCESS_2_TRANSFER_WRITE_BIT|VK_ACCESS_2_HOST_READ_BIT|VK_ACCESS_2_HOST_WRITE_BIT|VK_ACCESS_2_MEMORY_READ_BIT|VK_ACCESS_2_MEMORY_WRITE_BIT|VK_ACCESS_2_SHADER_SAMPLED_READ_BIT|VK_ACCESS_2_SHADER_STORAGE_READ_BIT|VK_ACCESS_2_SHADER_STORAGE_WRITE_BIT|VK_ACCESS_2_VIDEO_DECODE_READ_BIT_KHR|VK_ACCESS_2_VIDEO_DECODE_WRITE_BIT_KHR|VK_ACCESS_2_VIDEO_ENCODE_READ_BIT_KHR|VK_ACCESS_2_VIDEO_ENCODE_WRITE_BIT_KHR|VK_ACCESS_2_TRANSFORM_FEEDBACK_WRITE_BIT_EXT|VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT|VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT|VK_ACCESS_2_CONDITIONAL_RENDERING_READ_BIT_EXT|VK_ACCESS_2_COMMAND_PREPROCESS_READ_BIT_NV|VK_ACCESS_2_COMMAND_PREPROCESS_WRITE_BIT_NV|VK_ACCESS_2_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR|VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_KHR|VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_KHR|VK_ACCESS_2_FRAGMENT_DENSITY_MAP_READ_BIT_EXT|VK_ACCESS_2_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT|VK_ACCESS_2_DESCRIPTOR_BUFFER_READ_BIT_EXT|VK_ACCESS_2_INVOCATION_MASK_READ_BIT_HUAWEI|VK_ACCESS_2_SHADER_BINDING_TABLE_READ_BIT_KHR|VK_ACCESS_2_MICROMAP_READ_BIT_EXT|VK_ACCESS_2_MICROMAP_WRITE_BIT_EXT|VK_ACCESS_2_OPTICAL_FLOW_READ_BIT_NV|VK_ACCESS_2_OPTICAL_FLOW_WRITE_BIT_NV;
const VkPipelineStageFlags2 AllVkPipelineStageFlagBits2 = VK_PIPELINE_STAGE_2_NONE|VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT|VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT|VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT|VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT|VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT|VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT|VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT|VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT|VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT|VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT|VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT|VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT|VK_PIPELINE_STAGE_2_HOST_BIT|VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT|VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT|VK_PIPELINE_STAGE_2_COPY_BIT|VK_PIPELINE_STAGE_2_RESOLVE_BIT|VK_PIPELINE_STAGE_2_BLIT_BIT|VK_PIPELINE_STAGE_2_CLEAR_BIT|VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT|VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT|VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT|VK_PIPELINE_STAGE_2_VIDEO_DECODE_BIT_KHR|VK_PIPELINE_STAGE_2_VIDEO_ENCODE_BIT_KHR|VK_PIPELINE_STAGE_2_TRANSFORM_FEEDBACK_BIT_EXT|VK_PIPELINE_STAGE_2_CONDITIONAL_RENDERING_BIT_EXT|VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_NV|VK_PIPELINE_STAGE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR|VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_KHR|VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_KHR|VK_PIPELINE_STAGE_2_FRAGMENT_DENSITY_PROCESS_BIT_EXT|VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_EXT|VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_EXT|VK_PIPELINE_STAGE_2_SUBPASS_SHADING_BIT_HUAWEI|VK_PIPELINE_STAGE_2_INVOCATION_MASK_BIT_HUAWEI|VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_COPY_BIT_KHR|VK_PIPELINE_STAGE_2_MICROMAP_BUILD_BIT_EXT|VK_PIPELINE_STAGE_2_CLUSTER_CULLING_SHADER_BIT_HUAWEI|VK_PIPELINE_STAGE_2_OPTICAL_FLOW_BIT_NV;
const VkRenderingFlags AllVkRenderingFlagBits = VK_RENDERING_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT|VK_RENDERING_SUSPENDING_BIT|VK_RENDERING_RESUMING_BIT|VK_RENDERING_ENABLE_LEGACY_DITHERING_BIT_EXT|VK_RENDERING_ENABLE_LEGACY_DITHERING_BIT_EXT;
const VkSubmitFlags AllVkSubmitFlagBits = VK_SUBMIT_PROTECTED_BIT;
const VkCompositeAlphaFlagsKHR AllVkCompositeAlphaFlagBitsKHR = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR|VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
const VkSurfaceTransformFlagsKHR AllVkSurfaceTransformFlagBitsKHR = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR;
const VkDeviceGroupPresentModeFlagsKHR AllVkDeviceGroupPresentModeFlagBitsKHR = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR;
const VkSwapchainCreateFlagsKHR AllVkSwapchainCreateFlagBitsKHR = VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR|VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR|VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR|VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR|VK_SWAPCHAIN_CREATE_DEFERRED_MEMORY_ALLOCATION_BIT_EXT;
const VkDisplayPlaneAlphaFlagsKHR AllVkDisplayPlaneAlphaFlagBitsKHR = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
const VkVideoChromaSubsamplingFlagsKHR AllVkVideoChromaSubsamplingFlagBitsKHR = VK_VIDEO_CHROMA_SUBSAMPLING_INVALID_KHR|VK_VIDEO_CHROMA_SUBSAMPLING_MONOCHROME_BIT_KHR|VK_VIDEO_CHROMA_SUBSAMPLING_420_BIT_KHR|VK_VIDEO_CHROMA_SUBSAMPLING_422_BIT_KHR|VK_VIDEO_CHROMA_SUBSAMPLING_444_BIT_KHR;
const VkVideoCodecOperationFlagsKHR AllVkVideoCodecOperationFlagBitsKHR = VK_VIDEO_CODEC_OPERATION_NONE_KHR|VK_VIDEO_CODEC_OPERATION_ENCODE_H264_BIT_EXT|VK_VIDEO_CODEC_OPERATION_ENCODE_H265_BIT_EXT|VK_VIDEO_CODEC_OPERATION_DECODE_H264_BIT_KHR|VK_VIDEO_CODEC_OPERATION_DECODE_H265_BIT_KHR;
const VkVideoCodingControlFlagsKHR AllVkVideoCodingControlFlagBitsKHR = VK_VIDEO_CODING_CONTROL_RESET_BIT_KHR|VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_BIT_KHR|VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_LAYER_BIT_KHR;
const VkVideoComponentBitDepthFlagsKHR AllVkVideoComponentBitDepthFlagBitsKHR = VK_VIDEO_COMPONENT_BIT_DEPTH_INVALID_KHR|VK_VIDEO_COMPONENT_BIT_DEPTH_8_BIT_KHR|VK_VIDEO_COMPONENT_BIT_DEPTH_10_BIT_KHR|VK_VIDEO_COMPONENT_BIT_DEPTH_12_BIT_KHR;
const VkVideoSessionCreateFlagsKHR AllVkVideoSessionCreateFlagBitsKHR = VK_VIDEO_SESSION_CREATE_PROTECTED_CONTENT_BIT_KHR;
const VkVideoDecodeUsageFlagsKHR AllVkVideoDecodeUsageFlagBitsKHR = VK_VIDEO_DECODE_USAGE_DEFAULT_KHR|VK_VIDEO_DECODE_USAGE_TRANSCODING_BIT_KHR|VK_VIDEO_DECODE_USAGE_OFFLINE_BIT_KHR|VK_VIDEO_DECODE_USAGE_STREAMING_BIT_KHR;
const VkVideoDecodeH264PictureLayoutFlagsKHR AllVkVideoDecodeH264PictureLayoutFlagBitsKHR = VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_PROGRESSIVE_KHR|VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_INTERLEAVED_LINES_BIT_KHR|VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_SEPARATE_PLANES_BIT_KHR;
#ifdef VK_ENABLE_BETA_EXTENSIONS
const VkVideoEncodeContentFlagsKHR AllVkVideoEncodeContentFlagBitsKHR = VK_VIDEO_ENCODE_CONTENT_DEFAULT_KHR|VK_VIDEO_ENCODE_CONTENT_CAMERA_BIT_KHR|VK_VIDEO_ENCODE_CONTENT_DESKTOP_BIT_KHR|VK_VIDEO_ENCODE_CONTENT_RENDERED_BIT_KHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
const VkVideoEncodeRateControlModeFlagsKHR AllVkVideoEncodeRateControlModeFlagBitsKHR = VK_VIDEO_ENCODE_RATE_CONTROL_MODE_NONE_BIT_KHR|VK_VIDEO_ENCODE_RATE_CONTROL_MODE_CBR_BIT_KHR|VK_VIDEO_ENCODE_RATE_CONTROL_MODE_VBR_BIT_KHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
const VkVideoEncodeUsageFlagsKHR AllVkVideoEncodeUsageFlagBitsKHR = VK_VIDEO_ENCODE_USAGE_DEFAULT_KHR|VK_VIDEO_ENCODE_USAGE_TRANSCODING_BIT_KHR|VK_VIDEO_ENCODE_USAGE_STREAMING_BIT_KHR|VK_VIDEO_ENCODE_USAGE_RECORDING_BIT_KHR|VK_VIDEO_ENCODE_USAGE_CONFERENCING_BIT_KHR;
#endif
const VkDebugReportFlagsEXT AllVkDebugReportFlagBitsEXT = VK_DEBUG_REPORT_INFORMATION_BIT_EXT|VK_DEBUG_REPORT_WARNING_BIT_EXT|VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT|VK_DEBUG_REPORT_ERROR_BIT_EXT|VK_DEBUG_REPORT_DEBUG_BIT_EXT;
const VkExternalMemoryHandleTypeFlagsNV AllVkExternalMemoryHandleTypeFlagBitsNV = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV;
const VkConditionalRenderingFlagsEXT AllVkConditionalRenderingFlagBitsEXT = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT;
const VkSurfaceCounterFlagsEXT AllVkSurfaceCounterFlagBitsEXT = VK_SURFACE_COUNTER_VBLANK_BIT_EXT;
const VkDebugUtilsMessageSeverityFlagsEXT AllVkDebugUtilsMessageSeverityFlagBitsEXT = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT|VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT|VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT|VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
const VkDebugUtilsMessageTypeFlagsEXT AllVkDebugUtilsMessageTypeFlagBitsEXT = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT|VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT|VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT|VK_DEBUG_UTILS_MESSAGE_TYPE_DEVICE_ADDRESS_BINDING_BIT_EXT;
const VkBuildAccelerationStructureFlagsKHR AllVkBuildAccelerationStructureFlagBitsKHR = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_MOTION_BIT_NV|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_UPDATE_EXT|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT;
const VkBuildAccelerationStructureFlagsNV AllVkBuildAccelerationStructureFlagBitsNV = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR|VK_BUILD_ACCELERATION_STRUCTURE_MOTION_BIT_NV|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_UPDATE_EXT|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT|VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT;
const VkGeometryFlagsKHR AllVkGeometryFlagBitsKHR = VK_GEOMETRY_OPAQUE_BIT_KHR|VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR;
const VkPresentGravityFlagsEXT AllVkPresentGravityFlagBitsEXT = VK_PRESENT_GRAVITY_MIN_BIT_EXT|VK_PRESENT_GRAVITY_MAX_BIT_EXT|VK_PRESENT_GRAVITY_CENTERED_BIT_EXT;
const VkPresentScalingFlagsEXT AllVkPresentScalingFlagBitsEXT = VK_PRESENT_SCALING_ONE_TO_ONE_BIT_EXT|VK_PRESENT_SCALING_ASPECT_RATIO_STRETCH_BIT_EXT|VK_PRESENT_SCALING_STRETCH_BIT_EXT;
const VkIndirectCommandsLayoutUsageFlagsNV AllVkIndirectCommandsLayoutUsageFlagBitsNV = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV;
const VkIndirectStateFlagsNV AllVkIndirectStateFlagBitsNV = VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV;
const VkDeviceDiagnosticsConfigFlagsNV AllVkDeviceDiagnosticsConfigFlagBitsNV = VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV|VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV|VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV|VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_ERROR_REPORTING_BIT_NV;
#ifdef VK_USE_PLATFORM_METAL_EXT
const VkExportMetalObjectTypeFlagsEXT AllVkExportMetalObjectTypeFlagBitsEXT = VK_EXPORT_METAL_OBJECT_TYPE_METAL_DEVICE_BIT_EXT|VK_EXPORT_METAL_OBJECT_TYPE_METAL_COMMAND_QUEUE_BIT_EXT|VK_EXPORT_METAL_OBJECT_TYPE_METAL_BUFFER_BIT_EXT|VK_EXPORT_METAL_OBJECT_TYPE_METAL_TEXTURE_BIT_EXT|VK_EXPORT_METAL_OBJECT_TYPE_METAL_IOSURFACE_BIT_EXT|VK_EXPORT_METAL_OBJECT_TYPE_METAL_SHARED_EVENT_BIT_EXT;
#endif
const VkGraphicsPipelineLibraryFlagsEXT AllVkGraphicsPipelineLibraryFlagBitsEXT = VK_GRAPHICS_PIPELINE_LIBRARY_VERTEX_INPUT_INTERFACE_BIT_EXT|VK_GRAPHICS_PIPELINE_LIBRARY_PRE_RASTERIZATION_SHADERS_BIT_EXT|VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_SHADER_BIT_EXT|VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT;
const VkDeviceAddressBindingFlagsEXT AllVkDeviceAddressBindingFlagBitsEXT = VK_DEVICE_ADDRESS_BINDING_INTERNAL_OBJECT_BIT_EXT;
#ifdef VK_USE_PLATFORM_FUCHSIA
const VkImageConstraintsInfoFlagsFUCHSIA AllVkImageConstraintsInfoFlagBitsFUCHSIA = VK_IMAGE_CONSTRAINTS_INFO_CPU_READ_RARELY_FUCHSIA|VK_IMAGE_CONSTRAINTS_INFO_CPU_READ_OFTEN_FUCHSIA|VK_IMAGE_CONSTRAINTS_INFO_CPU_WRITE_RARELY_FUCHSIA|VK_IMAGE_CONSTRAINTS_INFO_CPU_WRITE_OFTEN_FUCHSIA|VK_IMAGE_CONSTRAINTS_INFO_PROTECTED_OPTIONAL_FUCHSIA;
#endif
const VkBuildMicromapFlagsEXT AllVkBuildMicromapFlagBitsEXT = VK_BUILD_MICROMAP_PREFER_FAST_TRACE_BIT_EXT|VK_BUILD_MICROMAP_PREFER_FAST_BUILD_BIT_EXT|VK_BUILD_MICROMAP_ALLOW_COMPACTION_BIT_EXT;
const VkMicromapCreateFlagsEXT AllVkMicromapCreateFlagBitsEXT = VK_MICROMAP_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT;
const VkMemoryDecompressionMethodFlagsNV AllVkMemoryDecompressionMethodFlagBitsNV = VK_MEMORY_DECOMPRESSION_METHOD_GDEFLATE_1_0_BIT_NV;
const VkOpticalFlowExecuteFlagsNV AllVkOpticalFlowExecuteFlagBitsNV = VK_OPTICAL_FLOW_EXECUTE_DISABLE_TEMPORAL_HINTS_BIT_NV;
const VkOpticalFlowGridSizeFlagsNV AllVkOpticalFlowGridSizeFlagBitsNV = VK_OPTICAL_FLOW_GRID_SIZE_UNKNOWN_NV|VK_OPTICAL_FLOW_GRID_SIZE_1X1_BIT_NV|VK_OPTICAL_FLOW_GRID_SIZE_2X2_BIT_NV|VK_OPTICAL_FLOW_GRID_SIZE_4X4_BIT_NV|VK_OPTICAL_FLOW_GRID_SIZE_8X8_BIT_NV;
const VkOpticalFlowSessionCreateFlagsNV AllVkOpticalFlowSessionCreateFlagBitsNV = VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_HINT_BIT_NV|VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_COST_BIT_NV|VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_GLOBAL_FLOW_BIT_NV|VK_OPTICAL_FLOW_SESSION_CREATE_ALLOW_REGIONS_BIT_NV|VK_OPTICAL_FLOW_SESSION_CREATE_BOTH_DIRECTIONS_BIT_NV;
const VkOpticalFlowUsageFlagsNV AllVkOpticalFlowUsageFlagBitsNV = VK_OPTICAL_FLOW_USAGE_UNKNOWN_NV|VK_OPTICAL_FLOW_USAGE_INPUT_BIT_NV|VK_OPTICAL_FLOW_USAGE_OUTPUT_BIT_NV|VK_OPTICAL_FLOW_USAGE_HINT_BIT_NV|VK_OPTICAL_FLOW_USAGE_COST_BIT_NV|VK_OPTICAL_FLOW_USAGE_GLOBAL_FLOW_BIT_NV;
const VkAccelerationStructureCreateFlagsKHR AllVkAccelerationStructureCreateFlagBitsKHR = VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR|VK_ACCELERATION_STRUCTURE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT|VK_ACCELERATION_STRUCTURE_CREATE_MOTION_BIT_NV;
[[maybe_unused]] constexpr std::array AllVkQueueFlags = {VK_QUEUE_GRAPHICS_BIT,VK_QUEUE_COMPUTE_BIT,VK_QUEUE_TRANSFER_BIT,VK_QUEUE_SPARSE_BINDING_BIT,VK_QUEUE_PROTECTED_BIT,VK_QUEUE_VIDEO_DECODE_BIT_KHR,VK_QUEUE_VIDEO_ENCODE_BIT_KHR,VK_QUEUE_OPTICAL_FLOW_BIT_NV};
[[maybe_unused]] constexpr std::array AllVkShaderStageFlags = {VK_SHADER_STAGE_VERTEX_BIT,VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT,VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT,VK_SHADER_STAGE_GEOMETRY_BIT,VK_SHADER_STAGE_FRAGMENT_BIT,VK_SHADER_STAGE_COMPUTE_BIT,VK_SHADER_STAGE_ALL_GRAPHICS,VK_SHADER_STAGE_ALL,VK_SHADER_STAGE_RAYGEN_BIT_KHR,VK_SHADER_STAGE_ANY_HIT_BIT_KHR,VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR,VK_SHADER_STAGE_MISS_BIT_KHR,VK_SHADER_STAGE_INTERSECTION_BIT_KHR,VK_SHADER_STAGE_CALLABLE_BIT_KHR,VK_SHADER_STAGE_TASK_BIT_EXT,VK_SHADER_STAGE_MESH_BIT_EXT,VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI,VK_SHADER_STAGE_CLUSTER_CULLING_BIT_HUAWEI};
