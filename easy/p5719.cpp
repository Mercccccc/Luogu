#include<cstdio>

int n,k,cnt1,cnt2;
double ans1,ans2;

int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		if(i%k==0) {
			cnt1++;
			ans1+=i;
		} else {
			cnt2++;
			ans2+=i;
		}
	}
	printf("%.1lf %.1lf", ans1/cnt1,ans2/cnt2);
	return 0;
}
