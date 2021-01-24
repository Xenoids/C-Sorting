#include <stdio.h>
#include <string.h>
int temp;
void bubblesort(struct Data data[],int size);
void bubblesortname(struct Data data[],int size);
struct Data{
	char nama[101];
	int angka;
}data;

int main()
{
	int T,N;
	int index =0;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&N);
		getchar();
		Data data[N];
		for(int i=0;i<N;i++){
			scanf("%[^#]#%d",data[i].nama,&data[i].angka);
			getchar();
		}
		bubblesort(data,N);
		bubblesortname(data,N);
	printf("Case #%d:\n",i+1);
		for(int i=0;i<N;i++){
			printf("%s - %d\n",data[i].nama,data[i].angka);
		}
	}	
}

void bubblesort(struct Data data[],int size)
{
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(data[j].angka < data[j+1].angka){
				Data temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	
}
void bubblesortname(struct Data data[], int size)
{
	char temp[101];
	for(int a=0;a<size;a++){
			if(data[a].angka == data[a+1].angka){
				if(strcmp(data[a].nama, data[a+1].nama)>0){
					strcpy(temp, data[a].nama);
					strcpy(data[a].nama, data[a+1].nama);
					strcpy(data[a+1].nama,temp);
				}
			}
		}
}
