#include<iostream>
using namespace std;
int main(){
	int num=42;
	int *p=&num;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<&p<<endl;
	cout<<num;
}
