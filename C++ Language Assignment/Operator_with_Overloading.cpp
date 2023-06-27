#include<iostream>
using namespace std;
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

int main()
{
    float num1, num2;
    char op;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the Character (a=Add, s=Sub, m=Mul, d=Div): ";
    cin>>op;
    if(op=='a')
        cout<<endl<<"Addition Result = "<<add(num1, num2);
    else if(op=='s')
        cout<<endl<<"Subtraction Result = "<<sub(num1, num2);
    else if(op=='m')
        cout<<endl<<"Multiplication Result = "<<mul(num1, num2);
    else if(op=='d')
        cout<<endl<<"Division Result = "<<div(num1, num2);
    else
        cout<<endl<<"Wrong Character!";
    cout<<endl;
    return 0;
}
float add(float a, float b)
{
    return a+b;
}
float sub(float a, float b)
{
    return a-b;
}
float mul(float a, float b)
{
    return a*b;
}
float div(float a, float b)
{
    return a/b;
}