#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a[200],k,t,j,l,x,y,i;
	
	printf("welcome aadesh agrawal(2019uec1660)\nenter number of values= ");
	scanf("%d",&x);

	for(i=0;i<x;i++)
	{
		printf("enter value ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<x;i++)
	{
		k=a[i];
		for(l=i-1;l>=0;l--)
		{
			if(a[l]>k)
			{	
				t=a[l];
				a[l]=a[l+1];
				a[l+1]=t;
			}
		}
	}
					
	for(i=0;i<x;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
