#include<iostream>
using namespace std;

int main(){
	int csv;
	cout<<"Welcome to Call Center Bot"<<endl;
	cin>>csv;
	
	switch(csv){
		case 1:
			cout<<"Choose language";
		break;
		case 2:
			cout<<"Contact the operator";
		break;
		case 3:
			cout<<"Leave feedback";
		break;
		default:
			cout<<"Great choice u blind?";
		
		
		
	}
}
