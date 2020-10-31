//By Prajawal Kumar Pandey
//Oct 31 2020

vector<vector<string>> vec;
 
bool check(string x){
    string y=x;
    reverse(y.begin(),y.end());
    if(y!=x)
    return false;
    
    return true;
}
 
void func(string s,int last,vector<string> &ans){
    
    if(last+1==s.length()){
        vec.push_back(ans);
        return ;
    }
    
    string str="";
    for(int i=last+1;i<s.length();i++){
        str+=s[i];
        // cout<<str<<endl;
        if(check(str)){
            // cout<<str<<endl;
            ans.push_back(str);
            func(s,i,ans);
            ans.pop_back();
            
        }
    }
}
 
vector<vector<string> > Solution::partition(string A) {
    
    vector<string> ans;
    vec.clear();
    func(A,-1,ans);
    
    return vec;
}