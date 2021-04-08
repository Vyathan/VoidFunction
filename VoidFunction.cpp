//Programmer: Matt Brundage II
//Date: 4/8/21

#include <iostream>
#include <iomanip>

using namespace std;

void calcSumAndDiff(int n1, int n2, int &sum, int &diff);
int main()
{
    //Declare Variables
    int num1;
    int num2;
    int numSum;
    int numDiff;

    //Receive User Input
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2

    //Run calcSumAndDiff
    calcSumAndDiff(num1, num2, numSum, numDiff);

    //Output Results
    cout << "The Sum of the two numbers is: " << numSum << endl;
    cout << "The difference is: " << numDiff << endl;

}   //End Program