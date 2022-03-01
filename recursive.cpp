#include<iostream>
using namespace std;
int recf(string s1, string s2, string s3, string s4,int i)
{
    
    recf(s1,s2,s3,s4,i--);
}
int main()
{
    string s1,s2,s3,s4,result;
    cout<<"enter the string\n";
    cin>>s1>>s2>>s3>>s4;
    cout<<"concratenate of string : "<<recf(s1,s2,s3,s4,3);
    return 0;
}