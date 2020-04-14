#include<iostream>
#include<stdio.h>
using namespace std;
int main(int args,char* argv[]){
    cout<<"--------------------------------------"<<endl;
    for (int i = 0; i < args; i++)
    {
        cout<<argv[i]<<endl;
    }
    int i=0;
    int j=i++;
    cout<<j<<" "<<i<<endl;
    cout<<"--------------------------------------"<<endl;
    return 0;
}