#include <iostream>
using namespace std;



void findMissingEl(int arr[], int n){

int sum = 0 ;

for(int i=0; i<n; i++){

    sum += arr[i];
}

int nedeedSum = (10*(10+1))/2;

cout<<"The Missing El : "<<nedeedSum-sum;

}

int main(){

    int arr[9] = {1,2,3,5,6,7,8,9,10};

    int n = sizeof(arr) / sizeof(arr[0]);

    findMissingEl(arr,n);
}