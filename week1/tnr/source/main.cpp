#include <iostream>
#include <cstdlib>
#include <string>
#include "print.h"
#include "move.h"
using namespace std;

int RACE_END = 100;

int main()
{ 
  int rabbit = 0, tortoise = 0, timer = 0; 
  cout << "timer  tortoise  rabbit\n"; //输出表头
  while (rabbit < RACE_END && tortoise < RACE_END)
  {
    tortoise += move_tortoise(); //乌龟移动
    rabbit += move_rabbit(); //兔子移动
    print_position(timer, tortoise, rabbit);
    ++timer;
  }
  if (rabbit > tortoise)
    cout << "\n rabbit wins!\n";
  else 
    cout << "\n tortoise wins!\n";
   return 0;
}