#include<iostream>
using namespace std;
int main(){int n=7;
	int a[n]={2,3,5,8,4,1,12};
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) {int min=a[i];a[i]=a[j];a[j]=min;}
			}
		}
	for(int i=0;i<n;i++){
	cout<<a[i];
	}	
}
