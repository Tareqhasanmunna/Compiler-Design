#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[200];
    gets(a);
    int x= strlen(a);
    int count=0;
    int state=0;

    for(int i=0;i<x;i++){
        if(state==0 && a[i]=='a'){
            state=0;
        }
        else if(state==0 || state== 1 && a[i]== 'b'){
            state= 1;
        }
        else if(state==1 && a[i]== 'a'){
            state=2;
        }
    }

    if(state==1){
        cout<<"accepted under ab*"<<endl;
    }else cout<<"not accepted";
}