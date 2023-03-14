#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,i,sum=0;
		scanf("%ld",&n);
		long int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		sum=sum+a[i];
		for(i=0;i<n;i++)
		printf("l%d\n",sum-a[i]);
	}
  return o;
}
