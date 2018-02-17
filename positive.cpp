#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter the checking number"<<endl;
cin>>a;
if(a==0)
{
    cout<<"The given number is zero";
}
else if(a>0)
{
     cout<<"The given number is Positive";
}
else
{
     cout<<"The given number is Negative";
    
}
return 0;
}