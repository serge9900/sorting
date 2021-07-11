#include<iostream>
using namespace std;
#define ARR_SIZE 15
#define RANCE 10000
void quick_sort(int* sarr, int j){
	int size = j;
	int k=0;
	int c = sarr[(int)(j/2)];
	int tmp =0;
	do {
		while(sarr[k] < c) k++;
		while(sarr[j] >c ) j--;

		if(k<=j){
			tmp = sarr[k];
			sarr[k]=sarr[j];
			sarr[j]=tmp;
			k++;
			j--;
		}
	}while(k<=j);
	if(j>0)quick_sort(sarr, j);
	if(size>k) quick_sort(sarr+k, size-k);


}



int main(){
int arr[ARR_SIZE];
for(int i=0; i<ARR_SIZE; i++) arr[i] = rand()%ERANGE;
for(int i =0; i<ARR_SIZE; i++)printf("%i element -> %i/n", i,arr[i]);
printf("/n/n/n"); 
quick_sort(arr,ARR_SIZE-1);

for(int i = 0; i<ARR_SIZE; i++)printf("%i element -> %i/n", i,arr[i]);
getchar();
return 0;
}



