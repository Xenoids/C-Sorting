#include <stdio.h>
#define ll long long int
void mergesetengah(long long int arr[], long long int left, long long int middle, long long int right);
void mergesetengah2(ll arr[], ll left, ll middle, ll right);
void mergeSort(ll arr[], ll left, ll right);
void mergeSort2(ll arr[], ll left, ll right);
int main()
{
	long long int T;
	scanf("%lld",&T);
	for(int i=0;i<T;i++){
		long long int N;
		scanf("%lld",&N);
		long long int A1[N];
		long long int A2[N];
		for(int j=0;j<N;j++){
			scanf("%lld",&A1[j]);
		}
		for(int j=0;j<N;j++){
			scanf("%lld",&A2[j]);
		}
		mergeSort(A1,0,N-1);
		mergeSort2(A2,0,N-1);
		long long int sum =0;
		for(int k=0;k<N;k++){
			sum += (A1[k] * A2[k]);
		}
		printf("Case #%d: %lld\n",i+1,sum);
	}
	return 0;
}
void mergesetengah(long long int arr[], long long int left, long long int middle, long long int right)
{
    ll temp[right];
    ll p = left;
    ll q = middle + 1;
    ll index = left;
    while(p <= middle && q <= right){
        if(arr[p] < arr[q]){
            temp[index] = arr[p];
            p++;
            index++;
        }
        else{
            temp[index] = arr[q];
            q++;
            index++;
        }
    }
    while(p <= middle){
        temp[index] = arr[p];
        p++;
        index++;
    }
    while(q <= right){
        temp[index] = arr[q];
        q++;
        index++;
    }
    for(ll i = left; i <= right; i++){
        arr[i] = temp[i];
    }
}

void mergesetengah2(ll arr[], ll left, ll middle, ll right)
{
    ll temp[right];
    ll p = left;
    ll q = middle + 1;
    ll index = left;
    while(p <= middle && q <= right){
        if(arr[p] > arr[q]){
            temp[index] = arr[p];
            p++;
            index++;
        }
        else{
            temp[index] = arr[q];
            q++;
            index++;
        }
    }
    while(p <= middle){
        temp[index] = arr[p];
        p++;
        index++;
    }
    while(q <= right){
        temp[index] = arr[q];
        q++;
        index++;
    }
    for(ll i = right; i >= left; i--){
        arr[i] = temp[i];
    }
}

void mergeSort(ll arr[], ll left, ll right)
{
    if(left == right){
        return;
    }
    ll middle = (left + right) / 2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle+1, right);
    mergesetengah(arr, left, middle, right);
}

void mergeSort2(ll arr[], ll left, ll right)
{
    if(left == right){
        return;
    }
    ll middle = (left+right) / 2;
    mergeSort2(arr, left, middle);
    mergeSort2(arr, middle+1, right);
    mergeSort2(arr, left, middle);
    mergesetengah2(arr, left, middle, right);
}

