#pragma once

#include "../dxvk/dxvk_device.h"

namespace dxvk {
  
  struct DxbcOptions {
    DxbcOptions();
    DxbcOptions(const Rc<DxvkDevice>& device);

    /// Use the ShaderImageReadWithoutFormat capability.
    /// Enabled by default on GPUs which support this.
    bool useStorageImageReadWithoutFormat = false;

    /// Use subgroup operations to discard fragment
    /// shader invocations if derivatives remain valid.
    bool useSubgroupOpsForEarlyDiscard = false;
  };
  
}