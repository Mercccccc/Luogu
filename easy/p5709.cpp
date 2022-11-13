#include<cstdio>
#include<cmath>

using namespace std;

double t,s;
int now,m;

int main(){
	scanf("%d%lf%lf",&m,&t,&s);
	if(t==0){
		printf("0");
		return 0;
	}
	now=ceil(s/t);
	if(now>m){
		printf("0");
		return 0;
	}
	printf("%d",m-now);
	return 0;
}
