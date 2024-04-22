#include<iostream>
using namespace std;
int main(){
	int roti, susu, sampo, total;
	int jml_roti,jml_susu,jml_sampo;
	
	roti=5000;
	susu=4000;
	sampo=500;
	
	cout<<"Item Tersedia\n============================="<<endl;
	cout<<"Roti \t = "<<roti<<" \t/pcs"<<endl;
	cout<<"Susu \t = "<<susu<<" \t/pcs"<<endl;
	cout<<"Roti \t = "<<sampo<<" \t\t/pcs"<<endl;
	cout<<"============================="<<endl;
	
	cout<<"Masukkan Jumlah Roti \t : ";
	cin>>jml_roti;
	cout<<"Masukkan Jumlah Susu \t : ";
	cin>>jml_susu;
	cout<<"Masukkan Jumlah Sampo \t : ";
	cin>>jml_sampo;
	cout<<"============================="<<endl;
	cout<<"Harga Total Roti  :"<<roti*jml_roti<<endl;
	cout<<"Harga Total Susu  :"<<susu*jml_susu<<endl;
	cout<<"Harga Total Sampo :"<<sampo*jml_sampo<<endl;
	cout<<"============================="<<endl;
	
	total=(roti*jml_roti)+(susu*jml_susu)+(sampo*jml_sampo);
	cout<<"Total Belanja : "<<total;
}
