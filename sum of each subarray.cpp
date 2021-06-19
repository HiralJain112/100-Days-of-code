#include<bits/stdc++.h>
using namespace std;

void sum_each_subarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
             sum += arr[j]; 
             cout<<sum<<" ";  
        }   
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sum_each_subarray(arr,n);
    return 0;
}