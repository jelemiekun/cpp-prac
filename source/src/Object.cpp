#include "Object.h"
#include "Util.h"
#include <string>

int Object::counter = 0;

void Object::displayCount() {
  print("Object count: " + std::to_string(counter) + "\n");
}

Object::Object() {
  Object::counter++;
  ID = counter;
  print("Object " + std::to_string(counter) + " with ID " + std::to_string(ID) +
        " created.\n");
}

Object::~Object() {
  print("Object ID " + std::to_string(ID) + " destroyed.\n");
}

void Object::displayID() const {
  print("Object ID: " + std::to_string(ID) + "\n");
}
