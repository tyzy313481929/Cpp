#include <stdio.h>

int main(){
   int i,j,n;
   long sum=0,temp=0;
   printf("pls input a number:\n");
   scanf("%d",&n);
   if(n<1){
      printf("the number must no less than 1");
   }
   for(i=1;i<=n;++i){
     temp = 0;
     for(j=1;j<=i;++j)
        temp+=j;
   sum+=temp;
   }   
   printf("the sequence is %d",sum);
   return 0;  
}
