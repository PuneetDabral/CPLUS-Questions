#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
// for(int i=1; i<=n; i++)
// {
//     for(int j=1; j<=n; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
return 0;
}