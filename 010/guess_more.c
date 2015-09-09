#include <stdio.h>
#include <curses.h>
int main()
{
   int Price = 58,Number = 0;
   while( Number != Price)
   {
	do{
           puts("pls input number 1 and 100");
           scanf("%d",&Number);
	   printf("your input number is %d\n",Number);
        }while(!(Number >=1 && Number <=100));
        if(Number >=90 ){
        	printf("Too bigerr!Press any key to continue!\n");
        }else if( Number>=70 && Number > 90){
		printf("Bigger\n");
        	
        }else if(Number >=1 && Number <= 30){
        
		printf("Too Small!\n");
       }else{
		if(Number == Price){
			printf("OK! YOU ARE RIGHT,BYE\n");
		}else if(Number < Price){
                	printf("only a litte smailler\n");
                }else if(Number > Price){
                
			printf("Only a bigger\n");
                 }	
       }
       getch();
   }
   return 0;
}
