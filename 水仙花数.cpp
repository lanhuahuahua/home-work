#include<stdio.h>
int main(){
	int n[999],m[999],T,a,b,c,i,g=1,x=1;
	scanf("%d",&T);
	for(g=0;g<T;g++)
	scanf("%d %d",&n[g],&m[g]);
	for(g=0;g<T;g++){
	for(i=n[g];i<=m[g];i++)
	 {
	a=i/100;
	b=i%10;
	c=(i/10)%10;
	 if(a*a*a+b*b*b+c*c*c==i)
	 {
	 x=x+1;
	 printf("%d ",i);
     }
	 }
	 if(x==1)
	 printf("-1");
	 printf("\n");}
     return 0;
} 
