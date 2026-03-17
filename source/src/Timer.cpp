#include <Timer.h>
#include <chrono>

Timer::Timer() {}

Timer::~Timer() {}

void Timer::start() { mStart = std::chrono::steady_clock::now(); }

void Timer::stop() {
  mEnd = std::chrono::steady_clock::now();

  duration = mEnd - mStart;
}
