#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
   int temp=a;
   a=b;
   b=temp;  
}

void Display(int *a,int N)
{
    cout<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<*(a+i)<<" ";
    }
}

void SelectionSort(int *a,int N)
{
    
    for(int i=0;i<N;i++)
    {
        int sorted=0;
        int minindex=i;
        int min=*(a+i);
        for(int j=i+1;j<N;j++)
        {
            if(a[j]<min) 
            {
                min=a[j];
                minindex=j;
                sorted=1;
            }
        }
        if(sorted==0) continue;
       swap(a[i],a[minindex]);
       Display(a,N);
    }
}

void InsertionSort(int *a,int N)
{
    int count=1;
    for(int i=0;i<N-1;i++)
    {
       
        int sorted=0;
        for(int j=count;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
                sorted=1;
            }
        }
        count++;
        if(sorted==0) continue;
        Display(a,N);
      
        
    }
}