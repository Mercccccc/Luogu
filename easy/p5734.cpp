#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int n,b,c;
string ans,a;

int main(){
	cin>>n;
	cin>>ans;
	for(int i=1;i<=n;i++){
		cin>>b;
		if(b==1){
			cin>>a;
			ans+=a;
			cout<<ans<<endl;
			continue;
		}
		if(b==2){
			cin>>b>>c;
			ans=ans.substr(b,c);
			cout<<ans<<endl;
			continue;
		}
		if(b==3){
			cin>>b>>a;
			ans.insert(b,a);
			cout<<ans<<endl;
			continue;
		}
		if(b==4){
			cin>>a;
			if(ans.find(a)<ans.size()){
				cout<<ans.find(a)<<endl;
				continue;
			} else {
				cout<<-1<<endl;
			}
		}
	}
	return 0;
}
