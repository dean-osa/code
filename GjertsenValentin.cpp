#include <iostream>
#include <string>

using namespace std;
string version1(string &s1,const string &s2);
string &version2(string &s1,const string &s2);
string &version3(string &s1,const string &s2);

int main()
{
    string input,copy,result;

    cout<<"Enter a string: ";
    getline(cin,input);
    copy=input;
    cout<<"Your string as entered: "<<input<<endl;
    result=version1(input,"****");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;

    result=version2(input,"####");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;

    cout<<"Resetting original string.\n";
    input =copy;
    result = version3(input,"@@@@");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;
}
string version1(string &s1,const string &s2)
{
    string temp;
    temp = s2+s1+s1;
    return temp;
}
string &version2(string &s1,const string &s2)
{
    s1=s2+s1+s2;
    return s1;
}
string &version3(string &s1,const string &s2)
{
    string temp;
    temp=s2+s1+s2;
    return temp;
}//因为返回的是引用所以不会去创建副本，导致temp已经被释放从而引起错误。