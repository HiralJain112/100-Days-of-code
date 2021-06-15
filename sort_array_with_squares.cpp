#include<bits/stdc++.h>
vector<int> Solution::solve(vector<int> &A) 
{
    /*
    vector<int> result(A.size());
    int left = 0;
    int right = A.size()-1;
    int idx = A.size()-1;

    while(idx >= 0)
    {
        if(abs(A[left] > abs(A[right])))
        {
            result[idx] = A[left] * A[left];
            left++;
        }
        else
        {
            result[idx] = A[right] * A[right];
            right--;
        }
        idx--;
    }

    return result;
    */
    int n = A.size();
    int K = 0;
    for (K = 0; K < n; K++)
        if (A[K] >= 0)
            break;
 
    int i = K - 1;
    int j = K; 
    int ind = 0;
 
    vector<int> temp(n);
    while (i >= 0 && j < n) {
        if (A[i] * A[i] < A[j] * A[j]) {
            temp[ind] = A[i] * A[i];
            i--;
        }
        else {
            temp[ind] = A[j] * A[j];
            j++;
        }
        ind++;
    }
 
    while (i >= 0) {
        temp[ind] = A[i] * A[i];
        i--;
        ind++;
    }
 
    while (j < n) {
        temp[ind] = A[j] * A[j];
        j++;
        ind++;
    }
    return temp;
}
