#include<iostream>

using namespace std;

int factorial(int n)

{

    int fact=1;

    while(n>0)

    {

        fact = fact *n;

    }

    return fact;

}

int main(){

    int n ,r,combination;

    cout << "Enter the value of n and r : " ;

    cin >> n >> r;

    combination = factorial(n) /( factorial(n-r) * factorial(r));

    cout << combination;

    return 0;

}
