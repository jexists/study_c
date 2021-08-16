#include <stdio.h>

struct Point{
  int x;
  int y;
};
void displayPoint(struct Point p){
  printf("%d %d\n", p.x, p.y);
}
int main(){
  struct Point p;

  p.x = 10;
  p.y = 20;

  displayPoint(p);


  return 0;
}
