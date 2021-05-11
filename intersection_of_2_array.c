#include<stdio.h>

void main()
{
	
	int i,b[40],a[100],r,s,j,t,x,m,n;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter number of values=");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d ",a[i]);
			}
		}
	}
	getch();
	
}	 		
