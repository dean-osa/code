#include <iostream>
unsigned long left(unsigned long num,int n);
char *left(const char *str,int n=1);
int main()
{
    using namespace std;
    char *trip = "Hawail!!";
    unsigned long num=12345678;
    int i;
    char *temp;
    for(i=1;i<10;i++)
    {
        cout<<left(num,i)<<endl;
        temp=left(trip,i);
        cout<<temp<<endl;
        delete[]temp;
    }
    return 0;
}
unsigned long left(unsigned long num,int n)
{
    int digit=1;
    unsigned long num1=num;
    if(n==0||num==0)
        return 0;
    while(num1/=10)
    {
        digit++;
    }
    int ct;
    if(digit>n)
    {
        ct=(digit<n)?digit:digit-n;
        while(ct--)
        {
            num/=10;
        }
        return num;
    }
    else
        return num;
}
char *left(const char *str,int n)
{
    if(n<0)
        n=0;
    char *pr=new char [n+1];
    int i;
    for(i=0;i<n&&str[i];i++)
    {
        pr[i]=str[i];
    }
    while(i<=n)
    {
        pr[i++]='\0';
    }
    return pr;
}