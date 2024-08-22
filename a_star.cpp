#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[20];
    gets(a);
    int x= strlen(a);
    int count;

    for(int i=0;i<x;i++){
        if(a[i]=='a'){
            count++;
        }else{
            count=0;
            break;
        }
    }

    if(count==x){
        cout<<"accepted";
    }else{
        cout<<"not accepted";
    }
return 0;
}