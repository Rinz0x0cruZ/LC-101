class NestedIterator {
public:
    vector<int> res;
    int n_,i=0;
    NestedIterator(vector<NestedInteger> &nestedList) {
        dfs(nestedList);
        n_=res.size();
    }
    void dfs(vector<NestedInteger>& l){
        for(auto& x:l){
            if(x.isInteger()) res.push_back(x.getInteger());
            else dfs(x.getList());
        }
    }
    
    int next() {
        return res[i++];
    }
    
    bool hasNext() {
        return i!=n_;
    }
};

