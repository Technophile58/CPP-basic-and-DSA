// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

    int n,count=0;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        
     
    }
    if(count==2){
            cout<<n<<" is a prime number";
        }
 else{
     cout<<n<<" is not a prme number";
 }
    return 0;
}