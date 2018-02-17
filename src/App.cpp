#include "App.h"

App::App() : m_running(true), m_display(0)
{

}

int App::OnExecute()
{
  if (OnInit() == false) return -1;
  SDL_Event event;
  while (m_running)
  {
    while(SDL_PollEvent(&event))
      OnEvent(&event);
    OnLoop();
    OnRender();
  }
  OnCleanup();
  return 0;
}

bool App::OnInit()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    return false;

  m_display = SDL_SetVideoMode(640,480,32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  if (!m_display)
    return false;

  return true;
}

void App::OnEvent( SDL_Event * event )
{
  if (event->type == SDL_QUIT)
    m_running = false;
}

void App::OnLoop()
{

}

void App::OnRender()
{

}

void App::OnCleanup()
{
  SDL_Quit();
}

