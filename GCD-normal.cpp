#include <iostream>
using namespace std;

int main(){

    int num1,num2;
    cin>>num1>>num2;

    int maxOfTwo = max(num1,num2);

    int gcd;

    for(int i=1; i<= maxOfTwo; i++){

        if(num1%i == 0 && num2%i == 0){
              gcd = i;
        }
    }

cout<<"GCD is : "<<gcd<<endl;

    return 0;
}