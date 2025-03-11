// SPDX-License-Identifier: MIT
#include "LinuxSyscalls/x32/Types.h"
#include "LinuxSyscalls/x32/Ioctl/HelperDefines.h"

#include <cstdint>
#include <linux/input.h>
#include <sys/ioctl.h>

namespace FEX::HLE::x32 {
namespace input {
#include "LinuxSyscalls/x32/Ioctl/input.inl"
}
} // namespace FEX::HLE::x32
