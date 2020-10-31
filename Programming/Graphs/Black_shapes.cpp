bool vis[1001][1001];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
void dfs(vector<string> &A,int x,int y){
    vis[x][y] = true;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if( nx>=0 and nx<A.size() and ny>=0 and ny<A[0].size() and A[nx][ny]=='X' and vis[nx][ny]==false)
            dfs(A,nx,ny);
    }
    return;
    
}
int Solution::black(vector<string> &A) {
    memset(vis,false,sizeof(vis));
    int n = A.size();
    int m = A[0].size();
    int c = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if( A[i][j]=='X' and vis[i][j]==false)
            {
                dfs(A,i,j);
                c++;
            }
        }
    }
    return c;
    
}
