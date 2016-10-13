#include <stdio.h>


int main(void)
 {
	
int min,max,i,count=0;
	
scanf("%d",&min);
	
scanf("%d",&max);
	
while(min<=max)
	
{

	   
    for(i=1;i<=min;i++)
	 
     {
	      
       if(min%i==0)
	       
       count++;
	  
     }
	    
     if(count==2)
	
    {
	       
      printf("%d\n",min);
	     
      count=0;
	  
  }
	    
min++;
	    
count=0;

}
	
return 0;

}
