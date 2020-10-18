int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
    vector<bool> visited(101, false);
    unordered_map<int,int> m;
    for(int i=0;i<A.size() ;i++)
    {
        m[A[i][0]]=A[i][1];
    }
    for(int i=0;i<B.size() ;i++)
    {
        m[B[i][0]]=B[i][1];
    }
    visited[1]=true;
    queue<pair<int,int>> q;
    q.push({1,0});
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        int moves=p.second;
        int cur=p.first;
        if(cur==100)
        return moves;
        for(int i=1;i<=6;i++)
        {
            int next=cur+i;
            if(next<=100 && visited[next]==false)
            {
                visited[next]=true;
                if(m.find(next)!=m.end())
                {
                    q.push({m[next],moves+1});
                    visited[m[next]]=true;
                }
                else
                {
                    q.push({next,moves+1});
                }
            }
        }
        
    }
    return -1;
}
