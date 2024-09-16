#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int fact = 1;

     int i=1;
    while( i <= n){
        fact = fact * i;
        i++;
    }

    cout<<fact;

    return 0;
}
