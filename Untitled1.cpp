#include <stdio.h>
int partition(int angka[],int lb,int ub);
void quicksort(int angka[],int lb,int ub);
void swap(int angka[],int x,int y);
void reverse(int angka[],int lb,int ub);
int lb,ub,pivot,start,end,loc=0;
int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	int angka[N + 5];
	int cek;
	int flag;
	for(int i=0;i<N;i++){
		scanf("%d",&angka[i]);
	}
	for(int i=0;i<M;i++){
		scanf("%d",&cek);
	for(int j=0;j<N;j++){
	if(cek == angka[j]){
		flag++; angka[j] = -1;
		} 
	}
		}
	quicksort(angka,0,N-1);
	reverse(angka,0,N-1);
	(flag == N)? printf("Maximum number is -1\n") : printf("Maximum number is %d\n",angka[0]);
	return 0; 
}
void reverse(int angka[], int lb, int ub)
{
	if(lb < ub)
	{
		int temp = angka[lb];
		angka[lb] = angka[ub];
		angka[ub] = temp;
		reverse(angka,lb+1,ub-1);
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
