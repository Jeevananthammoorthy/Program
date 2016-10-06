#include <stdio.h>


int main(void)
 {
	
     double base,exponent,result=1,temp=0;
     scanf("%lf",&base);
	
     scanf("%lf",&exponent);

     temp=exponent;

     while(exponent!=0)

    {
	  
          result*=base;
	  
          --exponent;
	
   }
	
    printf("The power of(%.1lf and%.1lf) is%.2lf",base,temp,result);
	
   return 0;

}

