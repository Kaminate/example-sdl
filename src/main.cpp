#include <iostream>
using namespace std;

#include "App.h"

// int main() won't work with sdl. Needs argc, argv
int main(int argc, char * argv[]) 
{
  cout << "hello world" << endl;
  App myApp;
  return myApp.OnExecute();
  

  return 0;
}
