#include<bits/stdc++.h>

using namespace std;

void timconv(string str)
{
    int i;

    // Get hh

    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = h2 * 10 + h1;


    // for AM

    if(str[8] == 'A'||str[8] == 'a')
    {
        if( hh == 12)
        {
            cout<<"00";
            for(i = 2; i<=7  ; i++)
                cout<<str[i];
        }
        else
        {
            for(i = 0 ; i <= 7 ; i++)
               cout<<str[i];
        }
    }

//for PM

    else                                    
    {
        if( hh == 12)
        {
            for( i = 0 ; i <= 7 ; i++)
               cout<<str[i];
        }
        else
        {
            hh = hh + 12;
            cout<<hh;
            for(i = 2 ; i <= 7 ; i++)
                cout<<str[i];
        }
    }

}

int main()
{
    string str;                 //hh:mm:ssAM  or PM
    cin>>str;
    timconv(str);
    return 0;
}
