#pragma once
#include <cstdint>

#if defined(BGFX_CONFIG_RENDERER_VULKAN)

// #include <vulkan-local/vulkan.h> // Must define Vulkan types correctly
typedef struct VkInstance_T*       VkInstance;
typedef struct VkPhysicalDevice_T* VkPhysicalDevice;
typedef struct VkDevice_T*         VkDevice;
typedef struct VkQueue_T*          VkQueue;

namespace bgfx
{
    struct VulkanHandles
    {
        VkInstance         instance = nullptr;
        VkPhysicalDevice   physicalDevice = nullptr;
        VkDevice           device = nullptr;
        VkQueue            queue = nullptr;
        uint32_t           queueFamilyIndex = 0;
    };

    bool getVulkanHandles(VulkanHandles& out);

}

#endif // BGFX_CONFIG_RENDERER_VULKAN
