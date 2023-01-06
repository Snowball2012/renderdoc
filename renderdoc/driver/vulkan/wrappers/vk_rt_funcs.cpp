
#include "../vk_core.h"
#include "../vk_debug.h"
#include "api/replay/version.h"

void WrappedVulkan::vkGetAccelerationStructureBuildSizesKHR(
    VkDevice device, VkAccelerationStructureBuildTypeKHR buildType,
    const VkAccelerationStructureBuildGeometryInfoKHR *pBuildInfo,
    const uint32_t *pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR *pSizeInfo)
{
  ObjDisp(device)->GetAccelerationStructureBuildSizesKHR(Unwrap(device), buildType, pBuildInfo,
                                                         pMaxPrimitiveCounts, pSizeInfo);
}