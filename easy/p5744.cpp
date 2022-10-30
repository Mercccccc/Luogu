#include<iostream>
using namespace std;

struct Student {
	string name;
	int age, score;
};

Student a[6];
int n;

Student translate(Student x) {
	x.age++;
	if(x.score*1.2>=600) x.score = 600;
	else x.score = x.score *1.2;
	return x;
}

void print(Student x){
	cout<<x.name<<" "<<x.age<<" "<<x.score<<endl;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].name>>a[i].age>>a[i].score;
		a[i] = translate(a[i]);
		print(a[i]);
	}
	return 0;
}
