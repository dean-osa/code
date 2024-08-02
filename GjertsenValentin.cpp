#include <iostream>
int main()
{
    using namespace std;
    int rats=101;
    int *pt=&rats;
    int &rodents=*pt;
    int bunnies=50;
    pt=&bunnies;
    cout<<"*pr = "<<*pt;
    cout<<"rodents = "<<rodents;
    //从上面的例子我们可以看出来，rodents虽然通过指针才指向rats，当指针改变的时候，rodents并没有改变证明，引用变量不会改变他的指向。
//    int rats=101;
//    int &rodents=rats;
//    cout<<"rats = "<<rats;
//    cout<<", rodents = "<<rodents<<endl;
//
//    int bunnies = 50;
//    rodents = bunnies;
//    cout<<"bunnies = "<<bunnies;
//    cout<<", rats = "<<rats;
//    cout<<", rodents = "<<rodents<<endl;

//    cout<<"bunniesaddress = "<<&bunnies;
//    cout<<", rodents address = "<<&rodents<<endl;
//    return 0;
}