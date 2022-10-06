#include <iostream>
using namespace std;
//User defined function : 
int sum(int a,int b){
    int c = a+b;
    return c;
}
//Main function :
int main(){
    int num1,num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "The sum is ";
  //Function Called :
    sum(num1,num2);
    return 0;
}
