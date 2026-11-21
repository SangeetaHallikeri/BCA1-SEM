#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*ptr,n,i,sum=0;
	int largest,smallest;
	float average;
	printf("enter number of elements: ");
	scanf("%d",&n);
	if(n <=0 ||n>1000)
	{
		printf("invalid number of elements.\n");
		return 0;
	}
	ptr = (int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory allocation failed.\n");
		return 1;
	}
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
		if(*(ptr + i)>largest)
		largest=*(ptr+i);
		if(*(ptr+i)<smallest)
		smallest=*(ptr+i);
	}
	average=(float)sum/n;
	printf("sum=%d\n",sum);
	printf("average=%.2f\n",average);
	printf("largest=%d\n",smallest);
	free(ptr);
	printf("memory released successfully.\n");
	return 0;
}
	