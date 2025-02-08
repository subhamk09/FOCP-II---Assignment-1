#include <iostream>
using namespace std;

int main() {
    int n,p,i;
    cout << "Enter prime number : ";
    cin >> n;
    
    p=n+1;
    while(true){
        int prime =1;
        for(i=2;i<p;i++){
            if(p%i==0){
                prime=0;
                break;
            }
        }
       if(prime){
           cout<<"next prime number is "<<p;
           break;
       } 
       p++;
    }
}