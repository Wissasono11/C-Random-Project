#include<iostream>
using namespace std;

int main(){
	int choice;
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Espresso";
		break;
		case 2:
			cout<<"Americano";
		break;
		case 3:
			cout<<"Cappucino";
		break;
		case 4:
			cout<<"Latte";
		break;
		default:
			cout<<"Not Available";
		
		
	}
}
