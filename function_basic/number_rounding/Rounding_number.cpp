#include<iostream>
#include<math.h>
using namespace std;
int rounding(double x);
int rounding(double x){
	if(x>=0) return x=floor(x+0.5); else return x=-floor(-x +0.5); 
}
int main(){
	double x;
	cout<<"input your double x"<<endl;cin>>x;
	cout<<rounding(x);
}
