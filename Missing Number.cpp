#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long arr[n];
    int m = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+m);
    for(int i=1;i<=n;i++)
    {
        if(i!=arr[i-1])
        {
            cout << i;
            break;
        }
    }
    return 0;
}
