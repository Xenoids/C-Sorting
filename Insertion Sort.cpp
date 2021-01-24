#include <stdio.h>

void insertsort(long long int A[],long long int N);
int main()
{
	long long int T;
	long long int N;
	long long int sum;
	scanf("%lld",&T);
	for(int i=0;i<T;i++){
		scanf("%lld",&N);
		sum = 0;
		long long int A[N+10];
		for(int j=0;j<N;j++){
			scanf("%lld",&A[j]);
		}
		insertsort(A,N);
		    for(int j=0;j<N;j++){
			sum = sum + A[j];
		}
		double mean;
		mean = sum /(double)N;
		printf("Case #%lld:\n",i+1);
		printf("Mean : %.2lf\n",mean);
		if(N % 2 ==1) printf("Median : %.2lf\n",(double)A[N/2] );
		else printf("Median : %.2lf\n",(A[N/2] + A[(N/2)-1]) /2);
	}
}

void insertsort(long long int A[],long long int N)
{
	long long int key;
    for(int i=1;i<N;i++)
    {
        key = A[i];
        int j;
        j = i - 1;
        while(j>=0 && A[j] > key)
        {
            A[j+1] = A[j];
            j = j - 1;
            A[j+1] = key;
        }
    }
}
