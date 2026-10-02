#include<iostream>
using namespace std;

class demo
{
    int i;
    char ch;
    float f;
};
int main()
{
    demo dobj;
    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 3.14;


    return 0;
}

/*Encapsulation3.cpp: In function 'int main()':
Encapsulation3.cpp:13:10: error: 'int demo::i' is private within this context
     dobj.i = 11;
          ^
Encapsulation3.cpp:6:9: note: declared private here
     int i;
         ^
Encapsulation3.cpp:14:10: error: 'char demo::ch' is private within this context
     dobj.ch = 'A';
          ^~
Encapsulation3.cpp:7:10: note: declared private here
     char ch;
          ^~
Encapsulation3.cpp:15:10: error: 'float demo::f' is private within this context
     dobj.f = 3.14;
          ^
Encapsulation3.cpp:8:11: note: declared private here
     float f;*/