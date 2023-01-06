
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

void WrappedVulkan::vkCreateAccelerationStructureKHR(
    VkDevice device, const VkAccelerationStructureCreateInfoKHR *pCreateInfo,
    const VkAllocationCallbacks *pAllocator, VkAccelerationStructureKHR *pAccelerationStructure)
{
  VkAccelerationStructureCreateInfoKHR unwrapped_asci = {};
  
  if(pCreateInfo)
    unwrapped_asci = *pCreateInfo;

  unwrapped_asci.buffer = Unwrap(unwrapped_asci.buffer);
  ObjDisp(device)->CreateAccelerationStructureKHR(Unwrap(device), pCreateInfo ? &unwrapped_asci : nullptr,
                                                  pAllocator,
                                                  pAccelerationStructure);
}