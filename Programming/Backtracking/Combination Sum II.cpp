//By Prajawal Kumar Pandey
//Oct 31 2020

set<vector<int>> vec;
 
void func(int sum,vector<int> &a,int k,vector<int> &ans,int last){
    if(sum>k)
    return;
    if(sum==k){
        sort(ans.begin(),ans.end());
        vec.insert(ans);
        return;
    }
    
    for(int i=last+1;i<a.size();i++){
        if(ans.size()==0||a[i]>=ans[ans.size()-1]){
            ans.push_back(a[i]);
            func(sum+a[i],a,k,ans,i);
            ans.pop_back();
        }
    }
}
vector<vector<int>> res;
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<int> ans;
    vec.clear();
    res.clear();
    func(0,A,B,ans,-1);
    for(auto i=vec.begin();i!=vec.end();i++)
    res.push_back(*i);
    
    return res;
}