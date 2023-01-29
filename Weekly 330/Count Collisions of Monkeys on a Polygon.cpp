//https://leetcode.com/contest/weekly-contest-330/problems/count-collisions-of-monkeys-on-a-polygon/

class Solution {
public:
  long long Mod = 1e9+7;
    long long power(long long a ,int n){
        if(n==0){
            return 1;
        }
        if(n%2==1){
            return(a*power(a,n-1))%Mod;
        }
        long long k= power(a,n/2);
        return(k*k)%Mod;
        
    }
    int monkeyMove(int n){
         return(power(2,n)-2ll+Mod)%Mod;
    
        }
};
