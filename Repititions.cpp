#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin,str);
    int n = str.length();
    int max_count=0;
    int cont=1;
    char res=str[0];
    for(int i=0;i<n;i++)
    {
        if(i < n-1 &&str[i]==str[i+1])
        {
            cont=cont+1;
        }
            else
        {
            if (cont > max_count)
            {
                max_count = cont;
                res = str[i];
            }
            cont = 1;
        }
    }
    cout << max_count;
    return 0;
}
