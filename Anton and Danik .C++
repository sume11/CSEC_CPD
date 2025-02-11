#include <iostream>
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>n;
    s.resize(n);
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int Anton_count=0;
    int Danik_count=0;
 for(i=0;i<n;i++){
    if(s[i]=='A'){
        Anton_count++;
    }
    else if (s[i]=='D'){
         Danik_count++;
    }
 }
     if (Anton_count>Danik_count){
        cout<<"Anton";
        }
    else if(Anton_count<Danik_count){
       cout<<"Danik";
    }
    else {
        cout<<"Friendship";
    }


    return 0;
}
