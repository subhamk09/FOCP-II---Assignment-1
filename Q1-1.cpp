//check whether n is prime number.
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter that number : ";
    cin>>n;
    int count=1;
    for(i=2;i<n;i++){
       if(n%i==0){
        count++;
       }    
    }
    if(count==1){
        cout<<"the number is prime";
    }else
    cout<<"the number is not prime";
}