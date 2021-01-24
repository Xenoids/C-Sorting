#include <stdio.h>
int partition(int angka[],int lb,int ub);
void quicksort(int angka[],int lb,int ub);
void swap(int angka[],int x,int y);
int lb,ub,pivot,start,end,loc=0;
int main()
{
	int angka[200];
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&angka[i]);
	}
	quicksort(angka,0,N-1);
	for(int i=0;i<N;i++){
		printf("%d ",angka[i]);
	}

}

void swap(int angka[],int x,int y)
{
	int temp;
	temp = angka[x];
	angka[x] = angka[y];
	angka[y] =temp;
}
int partition(int angka[],int lb,int ub)
{
	pivot = angka[lb];
	start = lb;
	end = ub;
	while(start < end){
		while(angka[start] <= pivot){
			start++;
		}
		while(angka[end] > pivot){
			end--;
		}
		if(start < end)
		{
		swap(angka,start,end);
		}
	}
	swap(angka,lb,end); return end;
}
void quicksort(int angka[],int lb,int ub)
{
	if(lb < ub)
	{
		loc = partition(angka,lb,ub);
		quicksort(angka,lb,loc-1);
		quicksort(angka,loc+1,ub);
	}

}
