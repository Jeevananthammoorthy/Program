#include <stdio.h>
#include<math.h>

int main(void)
 {
	int c,i,max=0,min=0,temp=0,ans=0,count=0;
	scanf("%d",&min);
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	{
	temp=i;
	while(temp!=0)
	{
	    temp/=10;
	    count++;
	}
	//printf("\n%d=count=%d",i,count);
	temp=i;
	while(temp!=0)
	{
	    c=temp%10;
	    ans=ans+pow(c,count);
	temp=temp/10;
	}
    if(ans==i)
	printf("%d  ",ans);
	count=ans=0;
	}
	
return 0;

}
