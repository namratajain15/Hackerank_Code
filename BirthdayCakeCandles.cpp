#include<bits/stdc++.h>


using namespace std;
int main()
{
    int i, n , value;
    int max = 0;
    vector<int> arr;
    cin>>n;

    for(i = 0 ; i< n;i++)
    {
        cin>>value;
        arr.push_back(value);        
    }



    map<int,int> b;
    
    
    for(i = 0 ; i< arr.size() ; i++)
    {
        if(max <= arr[i])
        {
            max = arr[i];
            b[max]++;
        }
    }

    cout<<b[max];


 return 0;
}
