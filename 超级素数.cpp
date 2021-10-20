#include<stdio.h>
    int n[999],b,p,a,x;
	void sushu(){
	if(n[b]==1||n[b]==2)
	p=0;
	 else
	for(a=2;a<n[b];a++)
	{
	x=n[b]%a;
	if(x=0)
	{
	p=1;
	break;}
	if(a==n[b]-1&&x!=0)
	{
	p=0;
	break;}}}
	int main(){
		int num,n[999],b,p,x,f;
		scanf("%d",&num);
		n[1]=num/100;
		n[2]=num%10;
		n[3]=(num/10)%10; 
		n[4]=num;
		n[5]=n[1]*n[1]+n[2]*n[2]+n[3]*n[3];
		n[6]=n[1]+n[2]+n[3];
		for(b=1;b<=6;b++)
		{
		sushu();
		if(p==0)
		f=0;
		if(p!=0)
		f++;}
		if(f==0)
		printf("这是一个超级素数\n");
		else
		printf("这不是一个超级素数\n");
		return 0;
		}
		
		
		
		
		
	
		
		
	
	
	
	
	
	
	
	

