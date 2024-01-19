long long mod = 1e9+7;
const int mSize = 4;

void multi(long long a[][mSize], long long b[][mSize]){
    long long c[mSize][mSize];
    for(long long i=0;i<mSize;i++){
        for(long long j=0;j<mSize;j++){
            c[i][j]=0;
            for(long long k=0;k<mSize;k++){
                c[i][j]+=a[i][k]*b[k][j];
                c[i][j]%=mod;
            }
        }
    }
    for(long long i=0;i<mSize;i++){
        for(long long j=0;j<mSize;j++){
            b[i][j]=c[i][j];
        }
    }
}

void multiVec(long long a[][mSize], long long b[]){
    long long c[mSize];
    for(long long i=0;i<mSize;i++){
        c[i]=0;
        for(long long j=0;j<mSize;j++){
            c[i]+=b[j]*a[i][j];
            c[i]%=mod;
        }
    }
    for(long long i=0;i<mSize;i++){
        b[i]=c[i];
    }
}

