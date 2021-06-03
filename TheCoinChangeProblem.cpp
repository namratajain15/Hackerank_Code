#include<iostream>
using namespace std;

long long CountWaysToFindAmt(int *a,int n,int sum)
{
    long long T[n+1][sum+1];

    for(int i=1 ; i<=sum ; i++ )
    {
        T[0][i] = 0;
    }

    for(int i=0 ; i<=n ; i++ )
    {
        T[i][0] = 1;
    }

    for(int i=1 ; i<=n ; i++ )
    {
       for(int j=1 ; j<=sum ; j++ )
    {
        if(a[i-1]>j)
        T[i][j] = T[i-1][j];
        else
        T[i][j] = T[i-1][j] + T[i][j-a[i-1]];
    }
    }

    return T[n][sum];
}

int main()
{
    int n,m;                    
    cin>>n>>m;
    int *a = new int[m];                  
    for(int i=0;i < m ; i++)
    {
       cin>>a[i];
    }
    cout<<CountWaysToFindAmt(a,m,n);                        
    

}
