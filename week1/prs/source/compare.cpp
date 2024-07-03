//文件：compare.cpp 
//包括compare函数的实现

#include "compare.h"
#include <iostream>
using namespace std;

outcome compare(p_r_s player_choice, p_r_s machine_choice)
{
  outcome result;
  if (player_choice == machine_choice)   return tie;
  switch(player_choice) {
    case paper:
      result = (machine_choice == rock || machine_choice == scissor) ? win : lose;
      break; 
    
		case rock:
      result = (machine_choice == scissor || machine_choice == water) ? win : lose;
		 	break;
    
    case scissor: 
      result = (machine_choice == water || machine_choice == fire) ? win : lose;
			break;

    case fire: 
      result = (machine_choice == rock || machine_choice == paper) ? win : lose;
      break;

    case water: 
      result = (machine_choice == paper || machine_choice == fire) ? win : lose;
      break;

    default:
			cout << " PROGRAMMER ERROR：Unexpected choice!\n\n";
      exit(1);  
  }
  return result; 
}
