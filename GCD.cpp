#include <iostream>
using namespace std;

int gcd(int a, int b){
    int q,r;
    while(b>0)
    {
        q = a/b; 
        r = a - q*b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
int a = 2740;
int b = 1760;
cout<<"gcd:"<<gcd(a,b);
return 0;
}