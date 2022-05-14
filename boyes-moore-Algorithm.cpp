// * Code by : hr-hackjack

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string txt = "AABAACAADAABAABA";
    string pat = "AABA";
    int j=0,a;
    
    for(int i=0;i<txt.length();i++)
    {
        j=0;
        a=i;
        while(j!=pat.length())
        {
            if(pat[j]==txt[a])
            {
                j++;
                a++;
            }
            else
            {
                break;
            }
        }
        
        if(j==pat.length())
        {
            cout << a-4 << endl;
        }
    }

    return 0;
}
