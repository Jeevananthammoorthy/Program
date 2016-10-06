#include <stdio.h>


int main(void)
 {

      int num,rev=0,temp,a;
	
      scanf("%d",&num);

      a=num;
	
    while(num!=0)
	
   {
	   
   temp=num%10;
	
   rev=temp+(rev*10);

   num=num/10;

   }
	
   if(a==rev)
	
     printf("The number is palindrome");
	
   else
	
   printf("The number is not a palindrome");
	
   return 0;

}

