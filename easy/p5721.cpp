#include<cstdio>

int n,sum,k=1;

int main(){
    scanf("%d",&n);
    sum=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(k<10){
				printf("0");
				printf("%lld",k);
			}
            else{
            	printf("%lld",k);
			}
            k++;
        }
        printf("\n");
        sum--;
    }
    return 0;
}

