#include<cstdio>

int n;
int a,maxn=-1,minn=99999;

double sum;

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		sum+=a;
		maxn=maxn>a?maxn:a;
		minn=minn>a?a:minn; 
	}
	sum-=(maxn+minn);
	printf("%.2lf",sum/(n-2));
	return 0;
}
