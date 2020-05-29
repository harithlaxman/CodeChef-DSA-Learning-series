#include <stdio.h>
#include <iostream>
using namespace std;

void main(){
    for(;;){
        int n;
        cin>>n;
        if(n==42) break;
        else{
            cout<<n<<"\n";
        }
    }
}