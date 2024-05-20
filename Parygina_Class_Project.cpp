#include <iostream>
#include <cmath>
using namespace std;

/**
    @file       Parygina_Class_Project.cpp
    @brief      Файл исходных кодов класса проекта
    @copyright  ВоГУ
    @author     Парыгина А.Д.
    @date       20-05-2024
    @version    1.0.0
\par Использует файл:
    @ref Parygina_Class_Project.h
\par Содержит класс:
    @ref Parygina_Class_Project
*/

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
    double fracX, intX;
    double fracY, intY;
    double fracZ, intZ;
    double sum;
    fracX = modf(x, &intX);
    fracY = modf(y, &intY);
    fracZ = modf(z, &intZ);
    sum = fracX + fracY + fracZ;
    cout << "The sum of fractional parts: ";
    cout << sum << endl;
}

void FindIntSum(double x, double y, double z)
{
    double fracX, intX;
    double fracY, intY;
    double fracZ, intZ;
    double sum;
    fracX = modf(x, &intX);
    fracY = modf(y, &intY);
    fracZ = modf(z, &intZ);
    sum = intX + intY + intZ;
    cout << "The sum of integer parts: ";
    cout << sum << endl;
}

int main()
{   
    double x, y, z;
    cout << "1. Enter a real number x" << endl;  
    cout << "2. Enter a real number y" << endl; 
    cout << "3. Enter a real number z" << endl; 
    cout << "4. Find the sum of the fractional parts of these 3 numbers" << endl; 
    cout << "5. Find the sum of the integer parts of these 3 numbers" << endl; 
    
    int a;
    bool While = true;
    while (While) {
        cout << "\nPlease enter the number of the desired function or 0 if you want to close the up: " << endl;
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