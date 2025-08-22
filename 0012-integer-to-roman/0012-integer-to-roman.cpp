class Solution {
public:
    string intToRoman(int num) {
        string str = "";
        if(num>999){
            int th = num/1000;
            // cout << th;
            while(th--)
                str.append("M");
        }
        if(num>99){
            int hun = (num%1000)/100;
            // cout << hun;
            if(hun == 9){
                str.append("CM");
            }
            if(hun>=5 && hun!=9){
                str.append("D");
                hun-=5;
            }
            if(hun == 4) str.append("CD");
            while(hun!=4 && hun!=9 && hun--){
                str.append("C");
            }
        }
        if(num>9){
            int ten = (num%100)/10;
            if(ten>=5 && ten!=9){
                str.append("L");
                ten-=5;
            }
            if(ten == 9) str.append("XC");
            if(ten == 4) str.append("XL");
            while(ten!=4 && ten!=9 && ten--)
                str.append("X");
        }
        int one = num%10;
        if(one>=5 && one!=9){
            str.append("V");
            one-=5;
        }
        if(one == 9) str.append("IX");
        if(one == 4) str.append("IV");
        while(one!=4 && one!=9 && one--)
            str.append("I");
        return str;
    }
};