#include<stdio.h>
int main(){
	int b[10],n,d,q;
	do{ 
	for(d=0;d<5;d++) 
	scanf("%d",&b[d]);
	if(b[1]==0&&b[2]==0&&b[3]==0&&b[4]==0&&b[5]==0)
	break;
	else if(b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0)
	{
	if(b[4]-b[3]==b[3]-b[2]&&b[3]-b[2]==b[2]-b[1]&&b[2]-b[1]==b[1]-b[0])
	{
	n=b[4]-b[3];
	printf("case one\n");
    for(d=5;d<10;d++)
	{
	b[d]=b[d-1]+n;
	printf("%d ",b[d]);
	}printf("\n");}
    if(b[4]/b[3]==b[3]/b[2]&&b[3]/b[2]==b[2]/b[1]&&b[2]/b[1]==b[1]/b[0])
	{
	if(b[4]/b[3]==0)
	break;
	else
	{
	printf("case two\n");
	for(d=5;d<10;d++)
	{
	b[d]=b[d-1]*q;
	printf("%d ",b[d]);
	}printf("\n");}}
     if(b[4]==b[3]+b[2]&&b[3]==b[2]+b[1]&&b[2]==b[1]+b[0])
	{
	printf("case three\n");
	for(d=5;d<10;d++)
	{
	b[d]=b[d-1]+b[d-2];
	printf("%d ",b[d]);}printf("\n");}}}while(b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[0]!=0);
	return 0;} 
