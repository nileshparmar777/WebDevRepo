#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

main() {
   int length, breadth, area;

   cout << "Area Of Rectangle\n";
   cout << "\nEnter the Length of Rectangle : ";
   cin>>length;

   cout << "\nEnter the Breadth of Rectangle : ";
   cin>>breadth;

   area = length * breadth;
   cout << "\nArea of Rectangle : " << area;

   getch();
   
}
