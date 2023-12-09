class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int n=word.size();
        int i=1,ops=0;
        while(i<n){
            bool left=(word[i]==word[i-1] || word[i]==(word[i-1]+1) || word[i]==(word[i-1]-1));
            if(left==0) i+=1;
            else{
                ops++;
                i+=2;
            }
        }
        return ops;
    }
};
