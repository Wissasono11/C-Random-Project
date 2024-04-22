#include<iostream>
using namespace std;

int main(){
	string breakfast[] = {"Cinnamon Doughnuts","Waffles","Granola","Chorizo Burrito","French Toast"};
	string newItem ="Fluffy Pancakes";
	
	int index;
	cin>>index;
	breakfast[index]=newItem;
	
	for(int i=0;i<=4;i++){
		cout<<breakfast[i]<<", ";
	}

}
