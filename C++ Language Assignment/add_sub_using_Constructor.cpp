#include<iostream>

using namespace std;

int main(){
    double a, b, w, x, y, z;
	
    cout<<"Enter first number: ";
    cin >> a;
    cout<<"Enter second number: ";
    cin >> b;
	
    w = a + b;
    x = a - b;
    y = a * b;
    z = a / b;
	
    cout<<"Addition: "<<w<<endl;
    cout<<"Subtraction: "<<x<<endl;
    cout<<"Multiplication: "<<y<<endl;
    cout<<"Division: "<<z<<endl;
    
    return 0;
}