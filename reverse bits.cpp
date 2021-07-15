#include<bitset>

unsigned int Solution::reverse(unsigned int A) {
    
   unsigned int rev = 0;
      for(int i = 31; i >= 0; i--){
         rev |= (A & 1) <<i;
         A>>=1;
      }
      return rev;

}
