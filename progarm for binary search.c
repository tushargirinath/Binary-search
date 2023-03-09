#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,a[20],key,high,low,mid;
printf(" Enter the size of an array ");
scanf("%d",&n);
printf("Enter the elements to an array:\n");
for(i=0;i<n;i++)
{
	mid=(low+high)/2;
	if(key=a[mid];
	{
		printf(" Element found at loctaion %d\n",mid+1);
		exit(0);
	}
	else if (key<a[mid])
		high=mid-1;
	else
		low=mid+1;
	}
	printf("key not found\n);
}
	