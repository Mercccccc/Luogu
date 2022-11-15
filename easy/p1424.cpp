#include<cstdio>

int n,x;
long long ans;

int main(){
	scanf("%d%d",&x,&n);
	for(int i=1;i<=n;i++){
		if(x!=6&&x!=7){
			ans+=250;
			x++;
			continue;
		}
		if(x==6) {
			x++;
			continue;
		}
		if(x==7) x=1;
	}
	printf("%lld",ans);
	return 0;
}
