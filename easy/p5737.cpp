#include<cstdio>

int a,b,cnt;

int main(){
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if((((i) % 4) == 0 && ((i) % 100) != 0) || ((i) % 400) == 0){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	for(;a<=b;a++){
		if((((a) % 4) == 0 && ((a) % 100) != 0) || ((a) % 400) == 0){
			printf("%d ",a);
		}
	}
	
	return 0;
}
