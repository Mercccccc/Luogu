#include<iostream>
#include<cmath>
using namespace std;

long long n;

bool isprime(long long x){
	if(x==2) return true;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}

void print(long long x){
	if(x==4){
		cout<<"4=2+2"<<endl;
		return;
	}
	for(long long i=2;i<=x/2;i++){
		if(isprime(i)&&isprime(x-i)){
			cout<<x<<"="<<i<<"+"<<x-i<<endl;
			return;
		}
	}
}

int main(){
	cin>>n;
	for(long long i=4;i<=n;i+=2){
		print(i);
	}
	return 0;
}
