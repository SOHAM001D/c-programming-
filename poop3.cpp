//POP procedure oriented programming

#include<iostream>
using namespace std;

int add(int no1,int no2)
{
    int ans =0;
    ans = no1+no2;
    return ans;
}
int main()
{
    int value1=0, value2=0, result=0;

    cout<<"Enter 1st number: \n";
    cin>>value1;

    cout<<"Enter 2nd number: \n";
    cin>>value2;

    result = add(value1,value2);

    cout<<"Addition is : "<<result<<"\n";
    
    return 0;
}