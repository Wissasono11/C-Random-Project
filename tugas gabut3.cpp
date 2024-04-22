/*tugas gabut buat deret bilangan 1 - 10 kecuali bilangan 3,4,7
clue: gunakan continue dan perulangan for
*/

#include<iostream>
using namespace std;

int main(){
	for(int i=0;i<=10;i++){
		if(i==3){
			continue;
		} else if(i==4){
			continue;
		} else if(i==7){
			continue;
		}
		cout<<i<<" ";
	}
}
