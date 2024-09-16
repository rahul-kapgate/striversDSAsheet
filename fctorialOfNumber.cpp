#include <iostream>
using namespace std;

int main(){

    int n,fact=1;

    cout<<"Enter a nmber to find fatorial : "<<endl;
    cin>>n;

    while(n > 0){

        fact *= n;
        n--;
    }

    cout<<fact;

    return 0;
}