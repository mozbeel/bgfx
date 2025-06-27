#pragma once

#if defined(BGFX_CONFIG_RENDERER_VULKAN)

namespace bgfx
{
    // Forward declarations only (NO <vulkan/vulkan.h>)
    struct VkInstance_T;
    struct VkPhysicalDevice_T;
    struct VkDevice_T;
    struct VkQueue_T;

    typedef VkInstance_T* VkInstance;
    typedef VkPhysicalDevice_T* VkPhysicalDevice;
    typedef VkDevice_T* VkDevice;
    typedef VkQueue_T* VkQueue;

    struct VulkanHandles
    {
        VkInstance         instance = nullptr;
        VkPhysicalDevice   physicalDevice = nullptr;
        VkDevice           device = nullptr;
        VkQueue            queue = nullptr;
        uint32_t           queueFamilyIndex = 0;
    };

    // Returns true if Vulkan is active and fills in the handles
    bool getVulkanHandles(VulkanHandles& out);
}

#endif // BGFX_CONFIG_RENDERER_VULKAN