#include <Sandbox/System.h>

System *System::getInstance() {
  static System instance;
  return &instance;
}

void System::run() {
  if (!initSDL() || !initOpenGLContext() || !loadGLAD())
    return;
}
