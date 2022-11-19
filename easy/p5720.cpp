#include<cstdio>

int ans=1,n;

int main(){
	scanf("%d",&n);
	while(n!=1){
		ans++;
		n/=2;
	}
	printf("%d",ans);
	return 0;
}
