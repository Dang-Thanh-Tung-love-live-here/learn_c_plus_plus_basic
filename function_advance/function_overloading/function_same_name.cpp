#include<iostream>
#include<math.h>
using namespace std;
int rounding(double x){//one parameter
	if(x>=0) return x=floor(x+0.5); else return x=-floor(-x +0.5); 
}
double rounding(double x,int n){//two parameter
	double mediaryNumber=pow(10,n);
	x*=mediaryNumber;
	if(x>=0) return floor(x+0.5)/mediaryNumber;else return -floor(-x+0.5)/mediaryNumber;
}
int main()
{
	cout<<"this function one parameter : result="<<rounding(3.1412)<<endl;
	cout<<"this function dual parameter : result="<<rounding(3.1412,2);
}
