#include <iostream>
#include <cmath>
using namespace std;

double EnterX()
{   
   cout << "Enter x: ";
   double a; cin >> a;
   return a;
}
    
double EnterY()
{
    cout << "Enter y: ";
    double a; cin >> a;
    return a;
}
    
double EnterZ()
{
   cout << "Enter z: ";
   double a; cin >> a;
   return a;
}
    
void FindFracSum(double x, double y, double z)
{
   
}

void FindIntSum(double x, double y, double z)
{
   
}

int main()
{   
    double x, y, z;
    cout << "1. Enter a real number x" << endl;  
    cout << "2. Enter a real number y" << endl; 
    cout << "3. Enter a real number z" << endl; 
    cout << "4. Find the sum of the fractional parts of these 3 numbers" << endl; 
    cout << "5. Find the sum of the integer parts of these 3 numbers" << endl; 
    
    cout << "\nPlease enter the number of the desired function or 0 if you want to close the up: " << endl; 
    int a;
    bool While = true;
    while (While) {
        cin >> a;
        switch (a)
        {
        case 1:
            x = EnterX();
            break;
        case 2:
            y = EnterY();
            break;
        case 3:
            z = EnterZ();
            break;
        case 4:
            FindFracSum(x,y,z);
            break;
        case 5:
            FindIntSum(x,y,z);
            break;
        case 0:
            While = false;
            break;
        default:
            cout << "error\n";
            While = false;
            break;
        }
    }
    return 0;
}