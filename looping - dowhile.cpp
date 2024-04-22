#include<iostream>
using namespace std;

int main(){
	int L,p,l;
	string ulang;
	do{
		cout<<"========================"<<endl;
		cout<<"Masukkan panjang persegi panjang: ";
		cin>>p;
		cout<<"Masukkan lebar persegi panjang: ";
		cin>>l;
		L=p*l;
		cout<<"Luas persegi panjang tersebut adalah "<<L<<endl;
		cout<<"LAGI GA?(yes/no)";
		cin>>ulang;
	} while(ulang == "yes");
	cout<<"Program Selesai";
}
