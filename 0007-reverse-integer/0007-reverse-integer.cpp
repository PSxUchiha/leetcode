class Solution {
public:
    int reverse(int x) {
        int d, reverse = 0;
        bool flag = true;
        while(x){
            d = x%10;
            
            if(!flag){
                if(d>7) return 0;
                if(x!=0) return 0;
            }
            reverse*= 10;
            reverse+= d;
            x/=10;
            if (abs(reverse)>214748364) flag = false;
        }
        return reverse;
    }
};