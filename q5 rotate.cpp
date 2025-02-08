#include<iostream>
using namespace std;
int main(){
    int arr[3][3],array[3][3],i,j,k;
    cout<<"enter terms of array : ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            array[j][i]=arr[i][j];
        }
    }
    for(i=0;i<3;i++){
        k=array[i][0];
        array[i][0]=array[i][2];
        array[i][2]=k;
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }
}