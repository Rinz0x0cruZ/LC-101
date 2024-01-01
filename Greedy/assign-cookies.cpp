class Solution {
public:
    int findC(int target,vector<int>& s,int l,int h){
        int mid;
        h=h-1;
        while(l<h){
            mid=l+((h-l)>>1);
            if(s[mid]<target) l=mid+1;
            else h=mid;
        }
        return l;
    }
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans,si,n=g.size(),m=s.size();
        if (n==0 || m==0) return 0;
        ans=si=0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for (auto child : g) {
            if(s[si]<child){ 
                si=findC(child,s,si,m);
                if(s[si]<child) return ans;
            }
            ++si,++ans;
            if (si >= m) return ans;
        }

        return ans;
    }
};
