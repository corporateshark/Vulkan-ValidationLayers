#include <stdint.h>
#pragma once

// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See generate_spirv.py for modifications

/***************************************************************************
*
* Copyright (c) 2021-2024 The Khronos Group Inc.
* Copyright (c) 2021-2024 Valve Corporation
* Copyright (c) 2021-2024 LunarG, Inc.
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
*
****************************************************************************/

// To view SPIR-V, copy contents of array and paste in https://www.khronos.org/spir/visualizer/
static const uint32_t gpu_pre_trace_rays_rgen[1056] = {
    0x07230203, 0x00010500, 0x0008000b, 0x00000091, 0x00000000, 0x00020011, 0x0000117f, 0x00020011, 0x000014e3, 0x0006000a,
    0x5f565053, 0x5f52484b, 0x5f796172, 0x63617274, 0x00676e69, 0x0006000b, 0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x000014e4, 0x00000001, 0x0007000f, 0x000014c1, 0x00000004, 0x6e69616d, 0x00000000, 0x00000013,
    0x00000044, 0x00030003, 0x00000002, 0x000001cc, 0x00070004, 0x415f4c47, 0x675f4252, 0x735f7570, 0x65646168, 0x6e695f72,
    0x00343674, 0x00070004, 0x455f4c47, 0x625f5458, 0x65666675, 0x65725f72, 0x65726566, 0x0065636e, 0x00060004, 0x455f4c47,
    0x725f5458, 0x745f7961, 0x69636172, 0x0000676e, 0x000a0004, 0x475f4c47, 0x4c474f4f, 0x70635f45, 0x74735f70, 0x5f656c79,
    0x656e696c, 0x7269645f, 0x69746365, 0x00006576, 0x00080004, 0x475f4c47, 0x4c474f4f, 0x6e695f45, 0x64756c63, 0x69645f65,
    0x74636572, 0x00657669, 0x00040005, 0x00000004, 0x6e69616d, 0x00000000, 0x00090005, 0x0000000d, 0x61757067, 0x676f4c76,
    0x6f727245, 0x31752872, 0x3b31753b, 0x753b3175, 0x00003b31, 0x00050005, 0x00000009, 0x69746361, 0x635f6e6f, 0x0065646f,
    0x00040005, 0x0000000a, 0x6f727265, 0x00000072, 0x00040005, 0x0000000b, 0x6e756f63, 0x00000074, 0x00050005, 0x0000000c,
    0x77617264, 0x6d756e5f, 0x00726562, 0x00040005, 0x0000000f, 0x695f6f76, 0x00007864, 0x00060005, 0x00000011, 0x7074754f,
    0x75427475, 0x72656666, 0x00000000, 0x00050006, 0x00000011, 0x00000000, 0x67616c66, 0x00000073, 0x00080006, 0x00000011,
    0x00000001, 0x7074756f, 0x625f7475, 0x65666675, 0x6f635f72, 0x00746e75, 0x00070006, 0x00000011, 0x00000002, 0x7074756f,
    0x625f7475, 0x65666675, 0x00000072, 0x00030005, 0x00000013, 0x00000000, 0x00050005, 0x00000040, 0x66696e55, 0x496d726f,
    0x006f666e, 0x00070006, 0x00000040, 0x00000000, 0x69646e69, 0x74636572, 0x7461645f, 0x00000061, 0x00090006, 0x00000040,
    0x00000001, 0x5f796172, 0x72657571, 0x69775f79, 0x5f687464, 0x696d696c, 0x00000074, 0x00090006, 0x00000040, 0x00000002,
    0x5f796172, 0x72657571, 0x65685f79, 0x74686769, 0x6d696c5f, 0x00007469, 0x00090006, 0x00000040, 0x00000003, 0x5f796172,
    0x72657571, 0x65645f79, 0x5f687470, 0x696d696c, 0x00000074, 0x000a0005, 0x00000041, 0x72546b56, 0x52656361, 0x49737961,
    0x7269646e, 0x43746365, 0x616d6d6f, 0x484b646e, 0x00000052, 0x00050006, 0x00000041, 0x00000000, 0x74646977, 0x00000068,
    0x00050006, 0x00000041, 0x00000001, 0x67696568, 0x00007468, 0x00050006, 0x00000041, 0x00000002, 0x74706564, 0x00000068,
    0x00090005, 0x00000042, 0x69646e49, 0x74636572, 0x6d6d6f43, 0x52646e61, 0x72656665, 0x65636e65, 0x00000000, 0x00090006,
    0x00000042, 0x00000000, 0x5f796172, 0x72657571, 0x69645f79, 0x736e656d, 0x736e6f69, 0x00000000, 0x00040005, 0x00000044,
    0x6e695f75, 0x00006f66, 0x00040005, 0x00000055, 0x61726170, 0x0000006d, 0x00040005, 0x00000056, 0x61726170, 0x0000006d,
    0x00040005, 0x00000057, 0x61726170, 0x0000006d, 0x00040005, 0x0000005a, 0x61726170, 0x0000006d, 0x00040005, 0x00000067,
    0x61726170, 0x0000006d, 0x00040005, 0x00000068, 0x61726170, 0x0000006d, 0x00040005, 0x00000069, 0x61726170, 0x0000006d,
    0x00040005, 0x0000006c, 0x61726170, 0x0000006d, 0x00040005, 0x0000007a, 0x61726170, 0x0000006d, 0x00040005, 0x0000007b,
    0x61726170, 0x0000006d, 0x00040005, 0x0000007c, 0x61726170, 0x0000006d, 0x00040005, 0x0000007f, 0x61726170, 0x0000006d,
    0x00040047, 0x00000010, 0x00000006, 0x00000004, 0x00050048, 0x00000011, 0x00000000, 0x00000023, 0x00000000, 0x00050048,
    0x00000011, 0x00000001, 0x00000023, 0x00000004, 0x00050048, 0x00000011, 0x00000002, 0x00000023, 0x00000008, 0x00030047,
    0x00000011, 0x00000002, 0x00040047, 0x00000013, 0x00000022, 0x00000000, 0x00040047, 0x00000013, 0x00000021, 0x00000000,
    0x00050048, 0x00000040, 0x00000000, 0x00000023, 0x00000000, 0x00050048, 0x00000040, 0x00000001, 0x00000023, 0x00000008,
    0x00050048, 0x00000040, 0x00000002, 0x00000023, 0x0000000c, 0x00050048, 0x00000040, 0x00000003, 0x00000023, 0x00000010,
    0x00030047, 0x00000040, 0x00000002, 0x00050048, 0x00000041, 0x00000000, 0x00000023, 0x00000000, 0x00050048, 0x00000041,
    0x00000001, 0x00000023, 0x00000004, 0x00050048, 0x00000041, 0x00000002, 0x00000023, 0x00000008, 0x00050048, 0x00000042,
    0x00000000, 0x00000023, 0x00000000, 0x00030047, 0x00000042, 0x00000002, 0x00020013, 0x00000002, 0x00030021, 0x00000003,
    0x00000002, 0x00040015, 0x00000006, 0x00000020, 0x00000000, 0x00040020, 0x00000007, 0x00000007, 0x00000006, 0x00070021,
    0x00000008, 0x00000002, 0x00000007, 0x00000007, 0x00000007, 0x00000007, 0x0003001d, 0x00000010, 0x00000006, 0x0005001e,
    0x00000011, 0x00000006, 0x00000006, 0x00000010, 0x00040020, 0x00000012, 0x0000000c, 0x00000011, 0x0004003b, 0x00000012,
    0x00000013, 0x0000000c, 0x00040015, 0x00000014, 0x00000020, 0x00000001, 0x0004002b, 0x00000014, 0x00000015, 0x00000001,
    0x00040020, 0x00000016, 0x0000000c, 0x00000006, 0x0004002b, 0x00000006, 0x00000018, 0x0000000b, 0x0004002b, 0x00000006,
    0x00000019, 0x00000001, 0x0004002b, 0x00000006, 0x0000001a, 0x00000000, 0x0004002b, 0x00000006, 0x0000001d, 0x00000007,
    0x0004002b, 0x00000006, 0x0000001f, 0x00000004, 0x00020014, 0x00000024, 0x0004002b, 0x00000014, 0x00000029, 0x00000002,
    0x0004002b, 0x00000006, 0x00000035, 0x00000002, 0x0004002b, 0x00000006, 0x0000003b, 0x00000003, 0x00030027, 0x0000003f,
    0x000014e5, 0x0006001e, 0x00000040, 0x0000003f, 0x00000006, 0x00000006, 0x00000006, 0x0005001e, 0x00000041, 0x00000006,
    0x00000006, 0x00000006, 0x0003001e, 0x00000042, 0x00000041, 0x00040020, 0x0000003f, 0x000014e5, 0x00000042, 0x00040020,
    0x00000043, 0x00000009, 0x00000040, 0x0004003b, 0x00000043, 0x00000044, 0x00000009, 0x0004002b, 0x00000014, 0x00000045,
    0x00000000, 0x00040020, 0x00000046, 0x00000009, 0x0000003f, 0x00040020, 0x00000049, 0x000014e5, 0x00000006, 0x00040020,
    0x0000004c, 0x00000009, 0x00000006, 0x0004002b, 0x00000006, 0x00000052, 0x00000008, 0x0004002b, 0x00000014, 0x00000072,
    0x00000003, 0x0004002b, 0x00000006, 0x00000081, 0x0dead001, 0x0004002b, 0x00000014, 0x00000082, 0x00000007, 0x0004002b,
    0x00000014, 0x00000083, 0x00000004, 0x0004002b, 0x00000014, 0x00000084, 0x00000005, 0x0004002b, 0x00000014, 0x00000085,
    0x00000006, 0x0004002b, 0x00000014, 0x00000086, 0x00000008, 0x0004002b, 0x00000014, 0x00000087, 0x00000009, 0x0004002b,
    0x00000014, 0x00000088, 0x0000000a, 0x0004002b, 0x00000014, 0x00000089, 0x0000000b, 0x0004002b, 0x00000014, 0x0000008a,
    0x0000000c, 0x0004002b, 0x00000014, 0x0000008b, 0x0000000d, 0x0004002b, 0x00000014, 0x0000008c, 0x00000020, 0x0004002b,
    0x00000006, 0x0000008d, 0x00ffffff, 0x0004002b, 0x00000006, 0x0000008e, 0x00000018, 0x0004002b, 0x00000006, 0x0000008f,
    0x00000005, 0x0004002b, 0x00000006, 0x00000090, 0x00000006, 0x00050036, 0x00000002, 0x00000004, 0x00000000, 0x00000003,
    0x000200f8, 0x00000005, 0x0004003b, 0x00000007, 0x00000055, 0x00000007, 0x0004003b, 0x00000007, 0x00000056, 0x00000007,
    0x0004003b, 0x00000007, 0x00000057, 0x00000007, 0x0004003b, 0x00000007, 0x0000005a, 0x00000007, 0x0004003b, 0x00000007,
    0x00000067, 0x00000007, 0x0004003b, 0x00000007, 0x00000068, 0x00000007, 0x0004003b, 0x00000007, 0x00000069, 0x00000007,
    0x0004003b, 0x00000007, 0x0000006c, 0x00000007, 0x0004003b, 0x00000007, 0x0000007a, 0x00000007, 0x0004003b, 0x00000007,
    0x0000007b, 0x00000007, 0x0004003b, 0x00000007, 0x0000007c, 0x00000007, 0x0004003b, 0x00000007, 0x0000007f, 0x00000007,
    0x00050041, 0x00000046, 0x00000047, 0x00000044, 0x00000045, 0x0004003d, 0x0000003f, 0x00000048, 0x00000047, 0x00060041,
    0x00000049, 0x0000004a, 0x00000048, 0x00000045, 0x00000045, 0x0006003d, 0x00000006, 0x0000004b, 0x0000004a, 0x00000002,
    0x00000010, 0x00050041, 0x0000004c, 0x0000004d, 0x00000044, 0x00000015, 0x0004003d, 0x00000006, 0x0000004e, 0x0000004d,
    0x000500ac, 0x00000024, 0x0000004f, 0x0000004b, 0x0000004e, 0x000300f7, 0x00000051, 0x00000000, 0x000400fa, 0x0000004f,
    0x00000050, 0x00000051, 0x000200f8, 0x00000050, 0x00050041, 0x00000046, 0x00000053, 0x00000044, 0x00000045, 0x0004003d,
    0x0000003f, 0x00000054, 0x00000053, 0x0003003e, 0x00000055, 0x00000052, 0x0003003e, 0x00000056, 0x00000019, 0x00060041,
    0x00000049, 0x00000058, 0x00000054, 0x00000045, 0x00000045, 0x0006003d, 0x00000006, 0x00000059, 0x00000058, 0x00000002,
    0x00000010, 0x0003003e, 0x00000057, 0x00000059, 0x0003003e, 0x0000005a, 0x0000001a, 0x00080039, 0x00000002, 0x0000005b,
    0x0000000d, 0x00000055, 0x00000056, 0x00000057, 0x0000005a, 0x000200f9, 0x00000051, 0x000200f8, 0x00000051, 0x00050041,
    0x00000046, 0x0000005c, 0x00000044, 0x00000045, 0x0004003d, 0x0000003f, 0x0000005d, 0x0000005c, 0x00060041, 0x00000049,
    0x0000005e, 0x0000005d, 0x00000045, 0x00000015, 0x0006003d, 0x00000006, 0x0000005f, 0x0000005e, 0x00000002, 0x00000004,
    0x00050041, 0x0000004c, 0x00000060, 0x00000044, 0x00000029, 0x0004003d, 0x00000006, 0x00000061, 0x00000060, 0x000500ac,
    0x00000024, 0x00000062, 0x0000005f, 0x00000061, 0x000300f7, 0x00000064, 0x00000000, 0x000400fa, 0x00000062, 0x00000063,
    0x00000064, 0x000200f8, 0x00000063, 0x00050041, 0x00000046, 0x00000065, 0x00000044, 0x00000045, 0x0004003d, 0x0000003f,
    0x00000066, 0x00000065, 0x0003003e, 0x00000067, 0x00000052, 0x0003003e, 0x00000068, 0x00000035, 0x00060041, 0x00000049,
    0x0000006a, 0x00000066, 0x00000045, 0x00000015, 0x0006003d, 0x00000006, 0x0000006b, 0x0000006a, 0x00000002, 0x00000004,
    0x0003003e, 0x00000069, 0x0000006b, 0x0003003e, 0x0000006c, 0x0000001a, 0x00080039, 0x00000002, 0x0000006d, 0x0000000d,
    0x00000067, 0x00000068, 0x00000069, 0x0000006c, 0x000200f9, 0x00000064, 0x000200f8, 0x00000064, 0x00050041, 0x00000046,
    0x0000006e, 0x00000044, 0x00000045, 0x0004003d, 0x0000003f, 0x0000006f, 0x0000006e, 0x00060041, 0x00000049, 0x00000070,
    0x0000006f, 0x00000045, 0x00000029, 0x0006003d, 0x00000006, 0x00000071, 0x00000070, 0x00000002, 0x00000008, 0x00050041,
    0x0000004c, 0x00000073, 0x00000044, 0x00000072, 0x0004003d, 0x00000006, 0x00000074, 0x00000073, 0x000500ac, 0x00000024,
    0x00000075, 0x00000071, 0x00000074, 0x000300f7, 0x00000077, 0x00000000, 0x000400fa, 0x00000075, 0x00000076, 0x00000077,
    0x000200f8, 0x00000076, 0x00050041, 0x00000046, 0x00000078, 0x00000044, 0x00000045, 0x0004003d, 0x0000003f, 0x00000079,
    0x00000078, 0x0003003e, 0x0000007a, 0x00000052, 0x0003003e, 0x0000007b, 0x0000003b, 0x00060041, 0x00000049, 0x0000007d,
    0x00000079, 0x00000045, 0x00000029, 0x0006003d, 0x00000006, 0x0000007e, 0x0000007d, 0x00000002, 0x00000008, 0x0003003e,
    0x0000007c, 0x0000007e, 0x0003003e, 0x0000007f, 0x0000001a, 0x00080039, 0x00000002, 0x00000080, 0x0000000d, 0x0000007a,
    0x0000007b, 0x0000007c, 0x0000007f, 0x000200f9, 0x00000077, 0x000200f8, 0x00000077, 0x000100fd, 0x00010038, 0x00050036,
    0x00000002, 0x0000000d, 0x00000000, 0x00000008, 0x00030037, 0x00000007, 0x00000009, 0x00030037, 0x00000007, 0x0000000a,
    0x00030037, 0x00000007, 0x0000000b, 0x00030037, 0x00000007, 0x0000000c, 0x000200f8, 0x0000000e, 0x0004003b, 0x00000007,
    0x0000000f, 0x00000007, 0x00050041, 0x00000016, 0x00000017, 0x00000013, 0x00000015, 0x000700ea, 0x00000006, 0x0000001b,
    0x00000017, 0x00000019, 0x0000001a, 0x00000018, 0x0003003e, 0x0000000f, 0x0000001b, 0x0004003d, 0x00000006, 0x0000001c,
    0x0000000f, 0x00050080, 0x00000006, 0x0000001e, 0x0000001c, 0x0000001d, 0x00050080, 0x00000006, 0x00000020, 0x0000001e,
    0x0000001f, 0x00050044, 0x00000006, 0x00000021, 0x00000013, 0x00000002, 0x0004007c, 0x00000014, 0x00000022, 0x00000021,
    0x0004007c, 0x00000006, 0x00000023, 0x00000022, 0x000500ac, 0x00000024, 0x00000025, 0x00000020, 0x00000023, 0x000300f7,
    0x00000027, 0x00000000, 0x000400fa, 0x00000025, 0x00000026, 0x00000027, 0x000200f8, 0x00000026, 0x000100fd, 0x000200f8,
    0x00000027, 0x0004003d, 0x00000006, 0x0000002a, 0x0000000f, 0x00050080, 0x00000006, 0x0000002b, 0x0000002a, 0x0000001d,
    0x0004003d, 0x00000006, 0x0000002c, 0x00000009, 0x00060041, 0x00000016, 0x0000002d, 0x00000013, 0x00000029, 0x0000002b,
    0x0003003e, 0x0000002d, 0x0000002c, 0x0004003d, 0x00000006, 0x0000002e, 0x0000000f, 0x00050080, 0x00000006, 0x0000002f,
    0x0000002e, 0x0000001d, 0x00050080, 0x00000006, 0x00000030, 0x0000002f, 0x00000019, 0x0004003d, 0x00000006, 0x00000031,
    0x0000000a, 0x00060041, 0x00000016, 0x00000032, 0x00000013, 0x00000029, 0x00000030, 0x0003003e, 0x00000032, 0x00000031,
    0x0004003d, 0x00000006, 0x00000033, 0x0000000f, 0x00050080, 0x00000006, 0x00000034, 0x00000033, 0x0000001d, 0x00050080,
    0x00000006, 0x00000036, 0x00000034, 0x00000035, 0x0004003d, 0x00000006, 0x00000037, 0x0000000b, 0x00060041, 0x00000016,
    0x00000038, 0x00000013, 0x00000029, 0x00000036, 0x0003003e, 0x00000038, 0x00000037, 0x0004003d, 0x00000006, 0x00000039,
    0x0000000f, 0x00050080, 0x00000006, 0x0000003a, 0x00000039, 0x0000001d, 0x00050080, 0x00000006, 0x0000003c, 0x0000003a,
    0x0000003b, 0x0004003d, 0x00000006, 0x0000003d, 0x0000000c, 0x00060041, 0x00000016, 0x0000003e, 0x00000013, 0x00000029,
    0x0000003c, 0x0003003e, 0x0000003e, 0x0000003d, 0x000100fd, 0x00010038,
};
