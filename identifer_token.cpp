// input: apple = money + tech
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[1000];
    gets(a);
    int y= strlen(a);

    for(int i=0; a[i] != '\0';i++){
        if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='=' ){
            cout<<a[i]<<" is an operator.\n";
        }
        if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
            while((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
                cout<<a[i];
                i++;
            }
            cout<<" is a variable.\n";
            i--;
        }
        if(a[i] >= '0' && a[i] <= '9'){
            while(a[i] >= '0' && a[i] <= '9'){
                cout<<a[i];
                i++;
            }
            cout<<" is a number.\n";
            i--;
        }
    }
    return 0;
}