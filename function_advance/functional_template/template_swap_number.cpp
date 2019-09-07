#include<iostream>
using namespace std;
template <class T> T swap(T& a,T& b){
	T mid=a;
	a=b;b=mid;
	return a,b;
	}
int main()
{
	double x=1.4,y=3.2;
	swap<double>(x,y);
		cout<<"swap variable dual type double :"<<" x="<<x<<"y="<<y;
	int x_int=1,y_int=2;
	swap<int>(x_int,y_int);
		cout<<"\n dual variable type integer :"<<"xint="<<x_int<<"yint="<<y_int;
		return 0;
}
