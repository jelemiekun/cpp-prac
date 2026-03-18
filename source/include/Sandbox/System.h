#include <SDL2/SDL.h>

class System {
private:
  SDL_Window *gWindow;
  SDL_GLContext gGLContext;
  bool running;

public:
  static System *getInstance();

  void run();

private:
  System();

  bool initSDL();
  void setOpenGLAttributes();
  bool initOpenGLContext();
  bool loadGLAD();

  void input();
  void update();
  void render();

private:
};
