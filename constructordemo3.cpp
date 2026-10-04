#include<iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;

        //Default Constructor
        PPA()
        {
            cout<<"Inside default constructor\n";
        }

        //Parametrised Constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parametrised constructor\n";
        }

        //Copy Constructor
        PPA(PPA &obj)
        {
            cout<<"Inside Copy Constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }
        
};
int main()
{
    PPA pobj1;                  //default
    PPA pobj2(11,21);           //parametrised
    PPA pobj3(pobj1);           //copy

    

    return 0;
}