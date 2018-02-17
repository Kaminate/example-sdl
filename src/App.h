#ifndef _APP_H_
#define _APP_H_

#include "SDL/SDL.h"

class App
{
  bool m_running;
  SDL_Surface * m_display;
public:
  App();
  int OnExecute();
  bool OnInit();
  void OnEvent(SDL_Event * event);
  void OnLoop();
  void OnRender();
  void OnCleanup();
};

#endif