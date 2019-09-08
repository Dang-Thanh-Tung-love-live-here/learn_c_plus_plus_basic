#include<iostream>
using namespace std;
void exchange_sort_optimal(int a[],int  n){
	int m,j;
	for(int i=0;i<n;i++){
		for( m=i, j=i+1;j<n;j++) {
		if(a[m]>a[j]) m=j;
		}
		if(m!=i) {int center=a[i];a[i]=a[m];a[m]=center;}
	}
}
int main(){
	int n=8;
	int Test[n]={9,7,6,4,2,5,3,5};
	cout<<"before:\n";
	for(int i=0;i<n;i++){
		cout<<Test[i];
	}
	cout<<"after:";
	exchange_sort_optimal(Test,n);
	for(int i=0;i<n;i++){
		cout<<Test[i];
	}
	
}
