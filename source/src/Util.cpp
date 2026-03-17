#include "Util.h"
#include "Object.h"
#include <memory>
#include <vector>

void run() {
  std::vector<std::unique_ptr<Object>> objects;
  for (int i = 0; i < 50; i++) {
    objects.push_back(std::make_unique<Object>());

    if (objects.at(objects.size() - 1)->ID % 7 == 0) {
      objects.pop_back();
    }
  }
}
