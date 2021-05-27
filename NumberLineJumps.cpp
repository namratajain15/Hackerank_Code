
#include<bits/stdc++.h>

using namespace std;

int number(int k1,int v1,int k2,int v2)
{
    if(k1==k2&&v1==v2)
    return 1;
    if(k1==k2&&v1!=v2)
    return 0;
     while(k1!=k2)
    {
        if(k1!=k2&&v1==v2)
        return 0;
        if((k1>k2&&v1>v2)||(k2>k1&&v2>v1))
        return 0;
        k1=k1+v1;
        k2=k2+v2;

    }

    return 1;

}


int main()
{
    int k1 , k2 , v1 , v2,r;

    cin>>k1>>v1>>k2>>v2;

    r=number(k1,v1,k2,v2);

    if(r==0)
    cout<<"NO";
    else
    cout<<"YES";     
    return 0;
}
