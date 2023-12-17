class Solution {
    Integer[][] dp;
    String s1,s2;

    int dfs(int i,int j){
        if(i==-1 || j==-1) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        int x=0,y=0;
        
        if(s1.charAt(i)==s2.charAt(j)) x = 1 + dfs(i - 1, j - 1);

        y = Math.max(dfs(i - 1, j), dfs(i, j - 1));

        dp[i][j] = Math.max(x, y);

        return dp[i][j];
    }
    public int longestCommonSubsequence(String text1, String text2) {
        int n=text1.length();
        int m=text2.length();
        this.s1=text1;
        this.s2=text2;
        dp=new Integer[n+1][m+1];
        for(Integer[] x:dp) Arrays.fill(x,-1);
        return dfs(n-1,m-1);
    }
}
