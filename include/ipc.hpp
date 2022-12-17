#pragma once

#include <spdlog/spdlog.h>

#include <condition_variable>
#include <mutex>
#include <string>

struct ipc_message_v1 {
  std::string module_name;
  std::string module_id;  // Ignored
  std::string command;
  std::string metadata;
}

namespace waybar {
  class IPC {
   public:
    static void *receiveIPCEvents(void *ptr);
    static void *processIPCEvents(void *ptr);
  };

}  // namespace waybar
