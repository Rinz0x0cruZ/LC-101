class Solution {
public:
    string largestGoodInteger(string num) {
        int i=0,n=num.length(),len=1;
        string res="";
        for(int j=1;j<n;++j){
            if(num[i]!=num[j]){
                len=1;
                i=j;
            }
            else{
                ++len;
            }
            if(len==3){
                string x=num.substr(i,3);
                if(res=="") res=x;
                else res = (x>res) ? x : res;
                len=1,i=j+1,j=i;
            }
        }
        return res; 
    }
};
