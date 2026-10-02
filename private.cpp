//AccessSpecifier
#include<iostream>
using namespace std;

class demo
{
    public:
        int i;
        char ch;
    private:
        float f;
};
int main()
{
    demo dobj;
    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 3.14;

    cout<<dobj.i<<"\n";
    cout<<dobj.ch<<"\n";
    cout<<dobj.f<<"\n";
    return 0;
}

/*
private.cpp: In function 'int main()':
private.cpp:18:10: error: 'float demo::f' is private within this context
     dobj.f = 3.14;
          ^
private.cpp:11:15: note: declared private here
         float f;
               ^
private.cpp:22:16: error: 'float demo::f' is private within this context
     cout<<dobj.f<<"\n";
                ^
private.cpp:11:15: note: declared private here
         float f;
*/