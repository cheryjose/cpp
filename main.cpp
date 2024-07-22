#include "headers/calulator.h"
#include "carClass.cpp"
#include "array.cpp"
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    // int arr[] = {10, 25, 1, 12, 35};
    // int  arrLength {sizeof(arr)/sizeof(arr[0])};
    // std::sort(arr, arr+arrLength, greater<int>());
    int *arr = { addBonus(new int[5] {10, 25, 1, 12, 35}, 5) };
    sortedBonus(new int[5] {10, 25, 1, 12, 35}, 5);

    Car car("Toyota", 2013, "corolla");
    //cout << car.getModel();
    const string &str = string("example");
    std::cout << &str;
}