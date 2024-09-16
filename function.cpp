#include <iostream>
using namespace std;

int myFun1(int a, int b){
    return a + b;
}

int myFun2(int &a, int &b){
    return  a++;
}

int main(){

    cout<<myFun1(1,2);
    int a=10,b=20;
    cout<<endl<<myFun2(a,b);
    cout<<endl<<"a "<<a;
    cout << endl
         << myFun2(a, b);

    return 0;
}