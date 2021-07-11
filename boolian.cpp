#include<iostream>
using namespace std;


int main(){
	int a;
	cout<<"arr size"<<endl;
	cin>>a;
int arr[a];
cout<<"nums"<<endl;
for(int i=0; i<a; i++){
 cin>>arr[i];
}
for(int i=0; i<a; i++){
	for(int j=0; j<a-1; j++){
		if(arr[j]>arr[j+1]){
		  int temp = arr[j];
		  arr[j]= arr[j+1];
		  arr[j+1] = temp;
		
		
		}
	}
}
cout<<endl;
for(int i=0; i<a; i++){
 cout<<arr[i]<<endl;
}

}
