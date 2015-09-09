#include <stdio.h>
#include <curses.h>

int main()
{
   int i,j,x,y;
   printf("pls input number");
   x=9;
   y=5;
   for(i=1;i<9;i++){
   	move(x,y);
        printf("%2d",i);
        x+=13;
   }
   return 0;
}

