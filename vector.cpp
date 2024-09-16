#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> unionArr;

    unionArr.push_back(1);
    unionArr.push_back(5);
    unionArr.push_back(7);
    unionArr.push_back(9);
    unionArr.push_back(13);
    unionArr.push_back(5);

    int size = unionArr.size();

    for (int i = 0; i < size; i++)
    {
        cout << unionArr[i] << endl;
    }

    return 0;
}