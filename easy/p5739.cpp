#include<cstdio>

long long n, ans=1;

int main(){
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		ans*=i;
	}
	printf("%lld", ans);
}
