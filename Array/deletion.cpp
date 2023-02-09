#include<bits/stdc++.h>
int main()
{   int a[100],size,i,j,k;
    std::cout<<"enter the size:";
    std::cin>>size;
    for(i=0;i<size;i++)
    {   
std::cout<<"enter the number:";
std::cin>>a[i];
  }
int n;
    std::cout<<"enter the number you want to delete:";
    std::cin>>n;
  
    for(i=0;i<size;i++)
    {
        for(k=i+1;k<size;k++)
        {   if(a[k]==n)
            {
                for(j=k;j<size;j++)
                {
                    a[j]=a[j+1];
                    size--;
                    
                }

            }

        }
    }
    for(i=0;i<size;i++)
    {
        std::cout<<a[i]<<"\n";
    }


    return 0;
}