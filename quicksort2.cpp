#include<iostream>
using namespace std;



int num[10] = {
1,3,4,5,7,8,9,2,6,0};

int comp (const int *, const int *);
int main (void){
int i;
cout<<"original array: "<<endl;
for (i=0; i<10; i++) printf("%d", num[i]);
cout<<endl;
qsort(num, 10, sizeof (int), (int(*)(const void *, const void *)) comp);
cout<<"sorted array: "<<endl;
for(i=0;i<10; i++) printf("%d", num[i]);
cout<<endl;
return 0;

}
int comp (const int *i,const int *j){
return *i-*j;
}
