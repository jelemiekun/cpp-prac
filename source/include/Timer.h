#pragma once
#include <chrono>

struct Timer {
  std::chrono::time_point<std::chrono::steady_clock> mStart;
  std::chrono::time_point<std::chrono::steady_clock> mEnd;
  std::chrono::duration<float> duration;

  Timer();
  ~Timer();

  void start();
  void stop();
};
