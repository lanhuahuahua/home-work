#include<stdio.h>
#include<math.h>
int main(void)
{
	float x,y,m,d=0.000001;
	y=1; 
	printf("������x��ֵ��\n");
	scanf("%f",&x);
	while(fabs(y*y-x)>=d)
	{
    m=x/y;
	y=(y+m)/2;
 } 
 printf("�������Ϊ%f:\n",y);
return 0;
}
