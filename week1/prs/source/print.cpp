//文件：print.cpp 
//包括所有与输出有关的模块。
//有prn_game_status，prn_help和report函数

#include "print.h"
#include <iostream>
using namespace std;

//模块的内部状态
static int win_cnt = 0, lose_cnt = 0, tie_cnt = 0; 

void report(outcome result)
{
  switch(result) {  
    case win:   ++win_cnt; cout << ", you win\n"; break;
    case lose:  ++lose_cnt; cout << ", ai win\n"; break;
    case tie:   ++tie_cnt; cout << ", tie game\n"; break;
    default:    
                cout << " PROGRAMMER ERROR!\n\n";        
                exit(1);
  }
}
void prn_game_status()
{
  cout << "you win: " << win_cnt;
  cout << "; ai win: " << lose_cnt;
  cout << "; tie: " << tie_cnt << "\n";
}

void prn_help()
{
	cout << endl
       << "The following characters can be used:\n"
       << "   1   for rock\n"
       << "   2   for scissors\n"
       << "   3   for water\n"
       << "   4   for fire\n"
       << "   5   for paper\n"
	   	 << "   6   help, print this list\n"
       << "   7   print the game status\n"
       << "   0   quit the game\n";
}
