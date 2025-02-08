#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms in array";
    cin>>n;
    int array[n],i;
        for(i=0;i<n;i++){
            cin>>array[i];
        }
        for(i=n-1;i>=0;i--){
            cout<<array[i]<<endl;
        }
}