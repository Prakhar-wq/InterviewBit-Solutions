vector<int> xx={1,1,1,-1,-1,-1,0,0};
vector<int> yy={1,-1,0,-1,1,0,-1,1};
bool inCircle(int i,int j, int c, int d, vector<int> &e, vector<int> &f){
    for(int k=0;k<c;k++)
    {
        if(sqrt(pow(i-e[k],2)+pow(j-f[k],2))<= d)
        return true;
        
    }
    return false;
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    int arr[A+1][B+1];
    for(int i=0;i<A+1;i++)
    {
        for(int j=0;j<B+1;j++)
        {
            if(inCircle(i,j,C,D,E,F))
            arr[i][j]=-1;
            else
            arr[i][j]=0;
        }
    }
    if(arr[0][0]==-1 || arr[A][B]==-1)
    return "NO";
    
    queue<pair<int,int>> q;
    q.push({0,0});
    arr[0][0]=1;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        int x=p.first;
        int y=p.second;
        for(int i=0;i<8;i++)
        {
            int xc=x+xx[i];
            int yc=y+yy[i];
            if(xc==A && yc==B)
            return "YES";
            if(xc<0 || xc>A || yc<0 || yc>B || arr[xc][yc]!=0)
            continue;
            arr[xc][yc]=1;
            q.push({xc,yc});
            
        }
    }
    
    return "NO";
     
}
