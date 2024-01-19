void add(int i,long long val, int n ,long long a[]){
    for(;i<n;i=i|(i+1)){    
        a[i]+=val;
    }
}

long long sum(int i, long long a[]){
    long long ans = 0;
    for(;i>=0;i=(i&(i+1))-1){
        ans+=a[i];
    }
    return ans;
}

long long query(int l, int r, long long a[]){
    return (sum(r,a)-sum(l-1,a));
}