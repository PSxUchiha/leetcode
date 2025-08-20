class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = false;
        if(!flag)
            if(n==0){
                flag = true;
                return false;
            } 
        if(n==1) return true;
        if(n==0) return true;
        if(n%2!=0) return false;
        
        return isPowerOfTwo(n/2);
    }
};