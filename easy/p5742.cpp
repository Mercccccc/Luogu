#include<cstdio>

struct Student {
	int xh,xycj,sztz;
};
Student a[1001];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d", &a[i].xh, &a[i].xycj, &a[i].sztz);
		if(a[i].xycj+a[i].sztz>140&&a[i].xycj*7+a[i].sztz*3>=800){
			printf("Excellent\n");
		} else {
			printf("Not excellent\n");
		}
	}
	return 0;
}
