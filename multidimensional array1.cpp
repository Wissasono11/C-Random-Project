#include<iostream>
using namespace std;

int main(){
	int matrix[2][3]={{1,6,9},{2,4,7}};
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<endl;
		}
	}
}
