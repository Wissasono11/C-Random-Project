#include<iostream>
using namespace std;

int main(){
	int a = 4;
	int *p = &a;
	a += 2; //a = a + 2
	*p += 3; //*p = *p + 3
	a -= 1;// a = a - 1
	cout << a;	
}
