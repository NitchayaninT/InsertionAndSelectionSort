#include<iostream>
#include "SelectionSort.h"
using namespace std;
int main(int argc,char *argv[])
{
    int N,*pt;
    N=argc-1;
    pt=new int[N];
    for(int i=0;i<N;i++)
    {
        *(pt+i)=atoi(argv[i+1]);
    }
    cout<<"Before selection sort"<<endl;
    Display(pt,N);
    SelectionSort(pt,N);
    cout<<endl<<"After selection sort"<<endl;
    Display(pt,N);
}