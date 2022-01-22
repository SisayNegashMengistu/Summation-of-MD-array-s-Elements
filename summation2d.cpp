#include<iostream>
using namespace std;

int main(){
    //int ;
    int b[3][3];
    int a[3][3];
    int C[3][3];
    //acceptdata
    //1. accept elements of a.
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    //2. accept elements of b.
     for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    //dispay element's of a:
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
    }
    //display elements of b:
   for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j];
        }
    }
    //summation of elements of array:
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //display the sum;
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j];
        }
    }
    return 0;
}