#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = INT_MIN;
    for(int i = 0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    int record_days = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > mx && arr[i] >arr[i+1])
        {
            record_days++;
        }
        mx = max(arr[i], mx);
    }
    cout<<record_days;
    return 0;
}