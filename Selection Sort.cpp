#include <bits/stdc++.h> // buat semua library
void selectionsort(int arr[],int N);
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N+5];
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	printf("value dalam array : ");
	for(int i=0;i<N;i++){
		printf("%d ",arr[i]);
	}
	selectionsort(arr,N);
	printf("\n");
	for(int i=0;i<N;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
void selectionsort(int arr[],int N)
{
	int min,temp;
	for(int i=0;i<N-1;i++)
	{
		min = i;
		for(int j=i+1;j<N;j++)
		{
			if(arr[j] < arr[min]) min = j;
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

