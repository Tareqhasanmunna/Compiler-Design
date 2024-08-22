// input will have even numbers of 0 like 110000
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[1000];
    cout<<"enter the number string: "<<endl;
    gets(a);
    int c=0;
    
    int n= strlen(a);

    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            c++;
        }
    }

    if(c==n){
        if(c%2==0){
            cout<<"string accepted"<<endl;
        }else cout<<"string not accpeted"<<endl;

    }else cout<<"invalid"<<endl;

}