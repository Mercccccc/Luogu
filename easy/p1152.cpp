#include<iostream>
#include<cmath>
using namespace std;

int n,a[1001];
bool b[200000001];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		if(b[abs(a[i]-a[i+1])]) {
			cout<<"Not jolly";
			return 0;
		}
		b[abs(a[i]-a[i+1])] = true;
	}
	cout<<"Jolly";
}
