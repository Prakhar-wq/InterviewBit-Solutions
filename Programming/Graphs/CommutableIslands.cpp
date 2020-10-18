bool comp(vector<int> v1, vector<int> v2)
{
    return v1[2]<v2[2];
}
int find(int i, vector<int> &parent)
{
    if(parent[i]==i)
    return i;
    int result = find(parent[i],parent);
    parent[i]=result;
    return result;
}
void union1(int x,int y,vector<int> &rank, vector<int> &parent)
{
    int xx=find(x,parent);
    int yy=find(y,parent);
    if(xx==yy)
    return;
    int xrank=rank[xx];
    int yrank=rank[yy];
    if(xrank<yrank)
    {
        parent[xx]=yy;
    }
    else if(yrank<xrank)
    {
        parent[yy]=xx;
    }
    else
    {
        parent[yy]=xx;
        rank[xx]++;
    }
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> parent(A+1),rank(A+1,0);
    int c=0;
    int costtotal=0;
    for(int i=0;i<=A;i++)
    {
        parent[i]=i;
    }
    sort(B.begin(),B.end(),comp);
    for(int i=0;i<B.size();i++)
    {
        int x=B[i][0],y=B[i][1],cost=B[i][2];
        int xx=find(x,parent),yy=find(y,parent);
        if(xx!=yy)
        {
            c++;
            costtotal+=cost;
            if(c==A-1)
            return costtotal;
            union1(xx,yy,rank,parent);
        }
    }
    return 0;
}
