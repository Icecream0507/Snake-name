//文件：main.cpp
// 石头、剪子、布游戏的主模块

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "p_r_s.h"
#include "select.h"
#include "compare.h"
#include "print.h"
using namespace std;

int main()
{
  outcome result;
  p_r_s player_choice, machine_choice;

  srand(time(NULL));

  while((player_choice = selection_by_player()) != quit)
    switch(player_choice) { 
      case paper:
      case rock:
      case scissor:
      case fire:
      case water:
        machine_choice = selection_by_machine();
        result = compare(player_choice, machine_choice);
        report(result);
				break;
      case game:
			 	prn_game_status();  
				break;
      case help: 
				prn_help();   
				break;
      default:
        cout<< "PROGRAMMER ERROR!\n\n";      
        exit(1);
    }
  prn_game_status(); 
  return 0;
}
