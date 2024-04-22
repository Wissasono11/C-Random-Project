/* contoh matriks 2x3
	1 3 5
	6 1 2
	dalam matematika jika diminta baris 1 kolom 3 makanya jawabannya = 5
				 				  baris 2 kolom 1 ------------------ = 6
	jika diimplementasikan ke c++ maka;
	karena array dimulai dari urutan 0 maka baris 1 dihitung dari urutan 0 */
	
#include<iostream>
using namespace std;
int main(){
	int matriks[2][3] = {{1,3,5},{6,1,2}};
	cout<<matriks[0][2];
}
	
