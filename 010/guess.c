#include <stdio.h>

int main()
{
  int Password = 0,i = 0;
  while(Password != 1234){
  	if(i >=3)
	   return ;
        i++;
        puts("you are wrong,pls input numbers:");
        scanf("%d",&Password);
  }
  printf("ok");
  return 0;
}
