#include <stdio.h>
#define  max(x,y) x>y?x:y
int main(){
   /*
   float x,y,m;
   printf("please input two numbers:\n");
   scanf("%f%f",&x,&y);
   m = x>y ? x : y;
   printf("the larger number is %f",m);
  */

   int x,y;
   scanf("%d%d",&x,&y);
   int  m = max(x,y);   
   printf("the larger number is %d",m);
}
