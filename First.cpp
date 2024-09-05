//E->+i
//F->*E
//T->F


#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string a;
    int n;
    cout<<"Enter grammer numbers: "<<endl;
    cin>>n;
    vector<string> word;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        word.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (word[i][3] == '+' || word[i][3] == '*')
        {
            cout<<" First pos is: "<<word[i][3]<<endl;
        }
        else if(word[i][3] >= 'a' && word[i][3] <= 'z' || word[i][3] >= 'A' && word[i][3] <= 'Z'){
          for (int j = 0; j < n; j++)
          {
            if (word[i][3] == word[j][0])
            {
                cout<<" First pos is: "<<word[j][3]<<endl;
            }
            
          }
          
        }

    }

}