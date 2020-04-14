#include<iostream>
#include<stdio.h>
using namespace std;
int main(int args,char* argv[]){
    cout<<"---------------zhangzongyao-----------------------"<<endl;
    for (int i = 0; i < args; i++)
    {
        cout<<argv[i]<<endl;
    }
    cout<<"--------------------------------------"<<endl;
    return 0;
}