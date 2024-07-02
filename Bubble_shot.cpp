#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

    int k[10];
    for(int i=0;i<10;i++)
    {
        k[i]=rand()%100;
    }

    for(int i=0;i<10-i-1;i++)
    {
        std::cout<<k[i]<<" ";
        for(int j=0;j<i;j++)
        {       

        }
    }

    return 0;
}