#include<stdio.h>
int main()
{
	int p,q,a,b,c,d,e; 
	for(p=1;p<=100;p++)
	{
		for(q=1;q<=100;q++)
		{
			c=p;
			d=q;
			for(a=1;a<q;a++)
				c=c*p;
			for(a=1;a<p;a++)
				d=d*q;
			e=c+d;
			for(a=2;a<=e;a++)
	    	{
		    	if(e%a==0)
		        	break;
	        }
	        if(a==e&&q!=0&&p!=0)
	        	printf("%d %d\n",p,q);
		}	
	}		 	
	return 0; 
	        
}
