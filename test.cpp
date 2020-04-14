#include<iostream>
#include<stdio.h>
using namespace std;
int main(int args,char* argv[]){
    for (int i = 0; i < args; i++)
    {
        cout<<argv[i]<<endl;
    }
    return 0;
}