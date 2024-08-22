#include<iostream>
using namespace std;

int main()
{
    char a[] = "ietsRF";  //A-> ietsRF
    char b[] = "ietsMN";  //A-> ietsMN

    char common[100];
    int i = 0;

    while(a[i] == b[i])
    {
        common[i] = a[i];
        i++;
    }
    common[i] = '\0';

    cout<<"A -> "<<common <<"A'"<<endl;
    cout<<"A' -> "<<a+i <<" | "<<b+i <<endl;
}

