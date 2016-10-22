#include <stdio.h>
#include<math.h>

int main(void)
 {
	int c,n,temp,ans=0,count=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
	    temp/=10;
	    count++;
	}
	temp=n;
	while(temp!=0)
	{
	    c=temp%10;
	    ans=ans+pow(c,count);
	temp=temp/10;
	}
	if(ans==n)
	printf("%d Armstrong number",ans);
	else
	printf("%d Not an Armstrong number",ans);
	
return 0;

}
