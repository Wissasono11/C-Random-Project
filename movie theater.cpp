#include <iostream>
using namespace std;

int main() {
    
    int rows = 6;
    int cols = 6;
    
    float matrix[rows][cols] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
    };
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            matrix[i][j] = 1;
        }
    }
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
          cout<<matrix[i][j];
        }
        cout<<endl;
    }
    // your code goes here
    
}
