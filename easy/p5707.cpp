#include<cstdio>
#include<cmath>
using namespace std;

double s,v;
int m,h,nowh,nowm;

int main(){
	scanf("%lf%lf",&s,&v);
	m=ceil(s/v);
	m+=10;
	h=m/60;
	if(h>=8&&m%60!=0){
		h-=8;
		nowh=24-h-1;
		nowm=60-(m%60);
		if(nowm<10){
			printf("%d:0%d",nowh,nowm);
		} else {
			printf("%d:%d",nowh,nowm);
		}
		return 0;
	}
	if(h>8&&m%60==0){
		h-=8;
		printf("%d:00",24-h);
		return 0;
	}
	if(h==8&&m%60==0){
		printf("00:00");
		return 0;
	}
	if(h<8&&m%60==0){
		printf("0%d:00",8-h);
		return 0;
	}
	if(h<8&&m%60!=0){
		nowm=60-m%60;
		if(nowm<10){
			printf("0%d:0%d",8-h-1,nowm);
		} else {
			printf("0%d:%d",8-h-1,nowm);
		}
		return 0;
	}
	return 0;
}
