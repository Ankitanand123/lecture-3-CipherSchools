#include<iostream> //header file 
using namespace std;

int main(){
    int num1, num2, sum; // declare variables and int as a data type
    cout<<"Enter first number: "; // ask user to enter first number
    cin>>num1; // store the first number in num1
    cout<<"Enter second number: "; // ask user to enter second number
    cin>>num2; // store the second number in num2
    sum = num1 + num2; // add the two numbers and store the result in sum
    cout<<"The sum of the two numbers is: "<<sum; // print the sum
    return 0; // return 0 to indicate successful execution
}
