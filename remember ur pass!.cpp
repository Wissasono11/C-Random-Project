#include<iostream>
using namespace std;

int main(){
	string pass, attempt;
	cout<<"Input ur pass\t\t: ";
	cin>>pass;
	cout<<"Input ur pass again\t: ";
	cin>>attempt;
	
	if(pass==attempt){
		cout<<"Welcome";
	} else{
		cout<<"Try again";
	}
}
