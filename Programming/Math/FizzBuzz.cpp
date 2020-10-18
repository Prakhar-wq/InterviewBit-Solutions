vector<string> Solution::fizzBuzz(int A) {
    int n=A;
    vector<string>v(n);
     
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0)
            v[i-1]="FizzBuzz";
        else if(i%3==0)
           v[i-1]="Fizz";
        else if(i%5==0)
            v[i-1]="Buzz";
        else{
            string s=to_string(i);
            v[i-1]=s;
        }
            
        }
    return v;
}
