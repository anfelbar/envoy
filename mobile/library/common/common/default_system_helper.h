#pragma once

#include "library/common/common/system_helper.h"

namespace Envoy {

/**
 * Default implementation of SystemHelper which invokes the appropriate
 * platform-specific system APIs.
 */
class DefaultSystemHelper : public SystemHelper {
public:
  ~DefaultSystemHelper() override = default;

  // SystemHelper:
  bool isCleartextPermitted(absl::string_view hostname) override;
};

} // namespace Envoy