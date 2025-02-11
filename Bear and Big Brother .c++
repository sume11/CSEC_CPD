#include <iostream>

using namespace std;

int main()
{
   int i,a=0,b=0;
   cin>>a>>b;
   int year=0;
   while (a<=b){
    a=a*3;
    b=b*2;
    year++;
   }
    cout<<year<<endl;
    return 0;
}
