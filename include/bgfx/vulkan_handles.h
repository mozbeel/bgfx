#pragma once

#if defined(BGFX_CONFIG_RENDERER_VULKAN)

#include <vulkan-local/vulkan.h> // Must define Vulkan types correctly

namespace bgfx
{
    struct VulkanHandles
    {
        VkInstance         instance = VK_NULL_HANDLE;
        VkPhysicalDevice   physicalDevice = VK_NULL_HANDLE;
        VkDevice           device = VK_NULL_HANDLE;
        VkQueue            queue = VK_NULL_HANDLE;
        uint32_t           queueFamilyIndex = 0;
    };

    bool getVulkanHandles(VulkanHandles& out);
}

#endif // BGFX_CONFIG_RENDERER_VULKAN
