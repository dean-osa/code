#include <iostream>
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws &targets,const free_throws &source);

int main()
{
    using namespace std;
    free_throws one = {"A",13,14};
    free_throws two = {"B",10,16};
    free_throws three = {"C",7,9};
    free_throws four = {"D",5,9};
    free_throws five = {"E",6,14};
    free_throws team = {"G",0,0};

    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team,one);
    display(team);
    display(accumulate(team,two));
    display(accumulate(accumulate(team,three),four));
    display(team);
    dup = accumulate(team,five);
    std::cout<<"Displaying team:\n";
    display(team);
    std::cout<<"Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);
    accumulate(dup,five);
    std::cout<<"displaying dup after ill-advised assignment:\n";
    display(dup);
    system("pause");
    return 0;
}
void display(const free_throws & ft)
{
    using std::cout;
    cout<<"Name: "<<ft.name<<'\n';
    cout<<"    Made: "<<ft.made<<"\t";
    cout<<"Attempts: "<<ft.attempts<<'\t';
    cout<<"Percent: "<<ft.percent<<'\n';
}
void set_pc(free_throws & ft)
{
    if(ft.attempts!=0)
        ft.percent=100.0f*float(ft.made)/float(ft.attempts);
    else
        ft.percent=0;
}
free_throws & accumulate (free_throws &targets,const free_throws &source)
{
    targets.attempts+=source.attempts;
    targets.made+=source.made;
    set_pc(targets);
    return targets;
}