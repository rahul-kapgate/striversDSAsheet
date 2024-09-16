#include <iostream>
#include <math.h>
using namespace std;


void facters(int n, int num1, int num2 ){


    int copyN = n;

    cout<<n<<" : ";

    while (copyN != 0)
    {

        if (n % copyN == 0)
        {
            
            if(num1%copyN == 0 && num2%copyN == 0)
            {
                cout<<copyN<<" ";
                return ;
            }
        }

        copyN--;
    }

    cout<<endl;
}

int main(){

    int n,m;
    cin>>n>>m;

   int num = max(n,m);

    facters(num , n, m);
    

    return 0;


    

}