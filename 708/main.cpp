#include <iostream>

using namespace std;

int main()
{
    int t, s, c;
    cin>>t;
    while(t--)
    {
        cin>>s;
        c=0;
        for(;;)
        {
            if(s==1)
            {
                break;
            }
            ++c;
            if(s%2==0)
            {
                s=s/2;
            }
            else
            {
                s=(3*s)+1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
