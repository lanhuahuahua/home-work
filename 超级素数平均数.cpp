#include<stdio.h>
	int main()
{
		int a,num,n[999],b,p[999],x,f[10000],sum=0;
	    //scanf("%d",&num);		
	   for(num=100;num<=10000;num++)
		{
		
		 	n[1]=num/100;
			n[2]=num%10;
			n[3]=(num/10)%10; 
			n[4]=num;
			n[5]=n[1]*n[1]+n[2]*n[2]+n[3]*n[3];
			n[6]=n[1]+n[2]+n[3];
			for(b=1;b<=6;b++)
			{
			if(n[b]==2)
	    	p[b]=0;
	    else if(n[b]==1&&n[b]==0)
	    	p[b]=1;
	    else 
	    {
	    	for(a=2;a<=n[b];a++)
	    	{
	        	x=n[b]%a;
	        	if(x==0)
	        	break;
	        }
	        if(a==n[b])
	            p[b]=0;
	        else
	            p[b]=1;
	}
		        }
			if(p[1]==0&&p[2]==0&&p[3]==0&&p[4]==0&&p[5]==0&&p[6]==0)
			printf("%d是一个超级素数\n",n[4]);
			sum=sum+n[4];
			sum=sum/2;
			printf("%d",sum);
		}
	    return 0;
					
}
		
		
		
		
		
	
		
		
	
	
	
