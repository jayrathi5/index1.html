#include<bits/stdc++.h>
using namespace std;
class A
{   int n,m;
    static int c;
        public:
    void g()
    {

        std::cout<<"enter n&m:";
        std::cin>>n>>m;
        c++;
    }
    void p()
    {   std::cout<<n+m<<"\n";


    }
   static void print()
    {
        std::cout<<"count="<<c<<"\n";
    }

}s[3];
int A::c=0;
int main()
{   int i;
    for(i=0;i<3;i++)
    {
        s[i].g();
    }
    for(i=0;i<3;i++)
    {
        s[i].p();
    }
    A::print();

    return 0;
}