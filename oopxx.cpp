#include<iostream>
using namespace std;

class Arithmetic 
{
    public:
        int no1;
        int no2;

        Arithmetic()
        {
            this -> no1=0;
            this -> no2=0;
        }
        Arithmetic(int i, int j)
        {
            this -> no1 = i;
            this -> no2 = j;
        }

        //int Addition(Arithmetic *this)
        int Addition()
        {
            int Ans = 0;
            Ans = this -> no1 + this -> no2;
            return Ans;
        }

        //int Substraction(Arithmetic *this)
        int Subtraction()
        {
            int Ans = 0;
            Ans = this -> no1 - this -> no2;
            return Ans;
        }
};

int main()
{
    Arithmetic aobj1(21,10);
    int Result = 0;

    //Result = Addition(&aobj1);
    Result = aobj1.Addition();

    cout<<"Addition is : "<<Result<<"\n";
    
    //Result = Substraction(&aobj1);
    Result = aobj1.Subtraction();

    cout<<"Substraction is : "<<Result<<"\n";
    
    return 0;
}