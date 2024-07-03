//文件：select.cpp
//包括机器选择selection_by_machine和
//玩家选择selection_by_player函数的实现

#include "select.h"
#include "print.h"
#include <iostream>
#include <cstdlib>
using namespace std;

p_r_s selection_by_machine( )
{ 
  // int select = (rand() * 3 / (RAND_MAX + 1));
  int select = rand() % 5; 
  cout << select + 1;
  return ((p_r_s) select);
}

p_r_s selection_by_player()
{
  char c;
  p_r_s player_choice;
  //prn_help(); //显示输入提示
  cin >> c;
  switch(c) {
     case '1':  player_choice = rock; break;
     case '2':  player_choice = scissor; break;
     case '3':  player_choice = water;  break;
     case '4':  player_choice = fire;  break;
     case '5':  player_choice = paper;  break;
     case '6' : player_choice = help;  break;
     case '7':  player_choice = game;   break;
     case '0':  player_choice = quit;  break;
     default:    
          cout << "Undefined choice\n";
          exit(1);
  }
  return player_choice;  
}
