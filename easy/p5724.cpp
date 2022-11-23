#include<cstdio>

int n,a,maxn=-1,minn=9999;

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		maxn=a>maxn?a:maxn;
		minn=a>minn?minn:a;
	}
	printf("%d",maxn-minn);
	return 0;
}
