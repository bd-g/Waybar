#include "ipc.hpp"

void *waybar::IPC::testThread(void *ptr) {
  for (int i = 0; i < 10; i++) {
    spdlog::trace("I have run");
    sleep(5);
  }
  return NULL;
}
