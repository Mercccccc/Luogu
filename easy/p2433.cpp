#include<iostream>
#include<cmath>
using namespace std;

double pi=3.141593;
int t;

int main(){
	cin>>t;
	switch(t){
		case 1:
			cout<<"I love Luogu!";
			break;
		case 2:
			cout << 2 + 4 << " " << 10 - 2 - 4;
			break;
		case 3:
			cout<<14/4<<endl<<14-14%4<<endl<<14%4;
			break;
		case 4:
			cout<<"166.667";
			break;
		case 5:
			cout<<480/32;
			break;
		case 6:
			cout<<sqrt(6*6+9*9);
			break;
		case 7:
			cout<<"110"<<endl<<"90"<<endl<<"0";
			break;
		case 8:
			cout<<pi*10<<endl<<pi*25<<endl<<4/3.0*pi*125<<endl;
			break;
		case 9:
			cout<<(((((1+1)*2)+1)*2)+1)*2;
			break;
		case 10:
			cout<<"9";
			break;
		case 11:
			cout<<1.0*100/3;
			break;
		case 12:
			cout<<(int)('M'-'A')+1<<endl<<(char)(18+'A'-1);
			break;
		case 13:
			cout<<"16";
			break;
		case 14:
			cout<<"50";
			break;
	}
	return 0;
}
