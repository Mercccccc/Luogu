#include<cstdio>

int n,a[10001],ans;

void swap(int x,int y){
	int t;
	t = a[x];
	a[x]=a[y];
	a[y]=t;
}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n-1;i++){
		for(int j=i;j<=n;j++){
			if(a[i]>a[j]){
				swap(i,j);
				ans++;
			}
		}
	}
	printf("%d", ans);
	return 0;
}
