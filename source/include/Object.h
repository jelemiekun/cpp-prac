#pragma once

struct Object {
  static int counter;

  static void displayCount();

  int ID;

  Object();
  ~Object();

  void displayID() const;
};
