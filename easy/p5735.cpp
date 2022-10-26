#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

double x1,x2,x3,y,y2,y3;

int main(){
	cin>>x1>>y>>x2>>y2>>x3>>y3;
	double d1=sqrt((x1-x2)*(x1-x2)+(y-y2)*(y-y2));
	double d2=sqrt((x1-x3)*(x1-x3)+(y-y3)*(y-y3));
	double d3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	printf("%.3lf",d1+d2+d3);
	return 0;
}
