#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Input ur age : ";
	cin>>age;
	
	if(age>=0 && age<=3){
		cout<<"Free Tickets";
	} else if(age>=4&&age<=6){
		cout<<"Discounted Tickets";
	} else{
		cout<<"Normal Tickets";
	}
}
