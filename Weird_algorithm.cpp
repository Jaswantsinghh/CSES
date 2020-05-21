#include <iostream>

using namespace std;

int main()
{
    long long num;
    cin >> num;
    cout << num <<" ";
    while(n!=1)
    {
        if(num%2==0)
        {
            num=num/2;
            cout << num <<" ";
        }
        else
        {
            num= (3*num)+1;
            cout << num <<" ";
        }
    }
    return 0;
}
