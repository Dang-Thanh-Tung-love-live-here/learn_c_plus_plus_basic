#include<iostream>
#include<math.h>
using namespace std;
double round(double x,int n);//x is the number to te round and rounding x to n number
double round(double x,int n){
	double mediaryNumber=pow(10,n);
	x*=mediaryNumber;
	if(x>=0) return floor(x+0.5)/mediaryNumber;else return -floor(-x+0.5)/mediaryNumber;
}
int main()
{
	double x;int n;
	cout<<"import x(real number) and n "<<endl;cin>>x>>n;
	cout<<round(x,n);
	cout<<endl<<x;//check parameter
}
