#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
   int temp=a;
   a=b;
   b=temp;  
}

void SelectionSort(int *a,int N)
{
    
    for(int i=0;i<N;i++)
    {
        int minindex=i;
        int min=*(a+i);
        for(int j=i;j<N;j++)
        {
            if(a[j]<min) 
            {
                min=a[j];
                minindex=j;
            }
        }
        //cout<<endl<<a[minindex]<<" "<<a[i]<<endl;
       swap(a[i],a[minindex]);

    }
}
void Display(int *a,int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<*(a+i)<<" ";
    }
}