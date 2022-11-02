#include<cstdio>

int n,m,a,maxn,minn=99999;
double ans,maxans;

int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &a);
			ans+=a;
			if(a>maxn){
				maxn=a;
			}
			if(a<minn){
				minn=a;
			}
		}
		ans-=(maxn+minn);
		if(ans/(m-2)>maxans){
			maxans=ans/(m-2);
		}
		ans=0;
		maxn=0;
		minn=99999;
	}
	printf("%.2lf", maxans);
	return 0;
}
