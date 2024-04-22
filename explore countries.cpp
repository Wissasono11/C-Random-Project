#include<iostream>
using namespace std;
int main(){
	int populasi, area;
	cin>>populasi>>area;
	
	if(populasi<=10000 && area<=10000){
		cout<<"Small country;"
	} else{
		cout<<"isn't that the bigger country?"
	}
}
