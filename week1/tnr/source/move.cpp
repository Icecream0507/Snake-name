#include <cstdlib>
#include "move.h"
int move_tortoise()
{
  //产生0到9之间的随机数
  int probability = rand() % 9; 
  if (probability < 5) return 3; //快走
  else if (probability < 7) return -6; //后滑
  else return 1; //慢走
}
int move_rabbit()
{
  int probability = rand() % 9;
  if (probability < 2) return 0; //睡觉
  else if (probability < 4) return -9; //大后滑
  else if (probability < 5) return 14; //快走
  else if (probability < 8) return 3; //小步跳
  else return -2; //慢后滑
}