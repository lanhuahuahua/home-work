#include<stdio.h>
int main(){
	int n,a,b[20],c,d[20],x=0;
	while(1)
	{
	scanf("%d",&n);
	if(n>0&&n<=20)      
	{
	for(a=0;a<n;a++)
	scanf("%d",&b[a]);
	for(a=n-1;a>=0;a--)
	printf("%d ",b[a]);}
    else if(n<0||n>20)
    printf("input Error");
    else if(n==0)
    {
	printf("End Of input");
    break;
	}
    }	
	return 0;
	}
	
	
    
	
	
 
