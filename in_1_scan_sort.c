#include<stdio.h>

void main()
{
	
	int i,a[100],n,m,s,j;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	m=0;s=0;j=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			m++;
		}
		if(a[i]==1)
		{
			s++;
		}
		if(a[i]==2)
		{
			j++;
		}
		i++;
	}
	for(i=0;i<m;i++)
	{
		printf("0");
	}
	for(i=0;i<s;i++)
	{
		printf("1");
	}
	for(i=0;i<j;i++)
	{
		printf("2");
	}
	getch();
}	 		
