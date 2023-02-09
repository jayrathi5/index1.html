#include<bits/stdc++.h>
int main()
{       int a[5],i,j=4;
    for(i=0;i<5;i++)
    {
        std::cout<<"Enter the number:";
        std::cin>>a[i];
    }
    int k=0,b[5];
    for(i=0;i<5;i++)
    {   
        b[k]=a[(i+1)%4];
        k++;
    }
for(i=0;i<5;i++)
{
std::cout<<b[i]<<"\n";

}
    return 0;
}