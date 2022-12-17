#pragma once

#include <spdlog/spdlog.h>
#include <unistd.h>

namespace waybar {

class IPC {
 public:
  static void *testThread(void *ptr);
};

}  // namespace waybar
