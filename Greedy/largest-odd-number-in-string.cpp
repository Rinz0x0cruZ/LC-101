class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size(),i=n-1;
        while(i>=0){
          if((num[i]-'0')%2) break;
          --i;
        }
        if(i<0) return "";
        return num.substr(0,i+1);
    }
};
