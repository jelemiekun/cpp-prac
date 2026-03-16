#include <chrono>
#include <spdlog/spdlog.h>

int *generateNumber() { return new int(); }

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < 99999; i++) {

    int *pInt = generateNumber();
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto duration_micro =
      std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  auto duration_milli =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

  spdlog::info("Time it took: {} microseconds", duration_micro.count());
  spdlog::info("Time it took: {} milliseconds", duration_milli.count());
  return 0;
}
