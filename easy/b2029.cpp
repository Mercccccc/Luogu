#include<iostream>
#include<cmath>
using namespace std;

double h,r,v,ans;

int main(){
	cin>>h>>r;
	v=acos(-1)*r*r*h;
	ans=20*1000/v;
	cout<<ceil(ans);
	return 0;
}
