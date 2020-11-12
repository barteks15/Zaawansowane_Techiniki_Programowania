#include <iostream>
#define N 20
using namespace std;
unsigned int potega(int a, int b);
int main()
{
    int D,a,b,c;
    unsigned int wyniki[N];
    cin >> D;
    for(int i=0;i<D;i++){
        cin >> a >> b;
        int c = b%4;
        if(b>0 && c>0)
            b=c;
       wyniki[i] = potega(a,b);
    }

    for(int i=0;i<D;i++){
        cout << wyniki[i]%10 << endl;
    }
}
unsigned int potega(int a, int b){
    if(b==0)
        return 1;
    else
        return a=a*potega(a,--b);
}
