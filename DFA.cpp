//input: A string of 0 and 1 that ends with 01
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[1000];
    cout<<"enter string"<<endl;
    
    gets(a);
    int n = strlen(a);
    const char stateA = 'A';
    const char stateB = 'B';
    const char stateC = 'C';

    char current_state = stateA;

    for(int i=0;i<n;i++){
        switch(current_state){
            case stateA:
                if(a[i]=='1'){
                    current_state= stateA;
                }else if(a[i]=='0'){
                    current_state= stateB;
                }
                break;

            case stateB:
                if(a[i]=='1'){
                    current_state= stateC;
                }else if(a[i]=='0'){
                    current_state= stateB;
                }
                break;

            case stateC:
                if(a[i]=='1'){
                    current_state= stateA;
                }else if(a[i]='0'){
                    current_state= stateB;
                }
                break;    
        }
    }

    if(current_state==stateC){
        cout<<"Accepted"<<endl;
    }else{
        cout<<"Not accepted"<<endl;
    }
    return 0;
}