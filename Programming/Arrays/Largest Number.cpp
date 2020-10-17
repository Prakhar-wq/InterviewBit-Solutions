class Solution {
public:
    
    
    string largestNumber(vector<int>& nums) {
                                       
    sort(nums.begin(),nums.end(),[](int a,int b){
        string s=to_string(a);
        string s1=to_string(b);
        
        return s+s1>s1+s;
    });
    string ans="";
        for(int i=0;i<nums.size();i++)
            ans+=to_string(nums[i]);
    if(ans[0]=='0')
        return "0";
    return ans;
    }
};
    