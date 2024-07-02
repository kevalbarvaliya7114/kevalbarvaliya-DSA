#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

    int n[10];
    for(int i=0;i<10;i++)
    {
        n[i]=rand()%100;
    }

    for(int i=0;i<10-1;i++)
    {
        for(int j=i+1;j<10;j++)
        {       
            if(n[i]>n[j])
            {
                int b=n[i];
                n[i]=n[j];
                n[j]=b;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<n[i]<<" ";
    }

    return 0;
}