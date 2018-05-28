#include<stdio.h>
#include<stdlib.h>

void S1(const int*  const data1)
{
	int i,j,temp;
	int dcopy[10];
	for(i=0;i<10;i++){
		dcopy[i]=data1[i];
	}
	printf("由小到大:");
	for(j=10;j>0;j--)
	{
		
			for(i=0;i<j-1;i++)
		{
		if (dcopy[i+1]>dcopy[i])
		{
			temp=dcopy[i];
			dcopy[i]=dcopy[i+1];
			dcopy[i+1]=temp;
		}
	}
	printf("%d ",dcopy[i]); 
	}
}
