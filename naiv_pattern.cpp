#include<bits/stdc++.h>
using namespace std;

int main()
{
    char text[]="aabcabaacba";
    char p1[]="ab";
    char p2[]="ba";
    char p3[]="cb";

    int n=11; //length of text
    int m=2; // length of pattern

    cout<<" Pattern ab: ";
    for(int i=0;i<=n-m; i++)
    {
        if(text[i]==p1[0] && text[i+1]==p1[1]){
            cout<< i <<" "<<endl;
        }
    }

   cout<<"Pattern ba :";
   for(int i=0;i<=n-m; i++){
    if(text[i]==p2[0] && text[i+1]==p2[1]){
        cout<< i <<" "<<endl;
     }
   }

   cout<<"Pattern cb : ";
   for(int i= 0; i <= n-m; i++){
    if(text[i]== p3[0] && text[i+1] == p3[1]){
        cout<< i << " "<<endl;
    }
   }

}
