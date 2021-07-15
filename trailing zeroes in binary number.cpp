#include<bitset>
int Solution::solve(int A) {
   bitset<64>bit;
   bit |= A;

   int count_zeroes = 0;
   for(int i = 0 ; i<64; i++)
   {
       if(bit[i]==0)
       {
           count_zeroes ++;
       }
       else
       {
           break;
       }
   }
   return count_zeroes;
}
