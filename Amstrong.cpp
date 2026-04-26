#include<bits/stdc++.h>
using namespace std;

void printdigit(int n){
   int sum = 0;

   while(n!= 0){
    int digit = n%10;
    sum +=digit;

    n = n/10;
   }

}

bool isArmstrong(int n)
{
    int copyN=n;
    int sumofCubes = 0;

    while(n != 0){
        int dig = n % 10;
        sumofCubes +=(dig*dig*dig);

        n = n/10;
    }
    return sumofCubes == copyN;
}

int main()
{
    int n;
    cin >> n;
    if(isArmstrong(n)){
        cout << "is an armstrong number\n";
    }else{
        cout << "Not armstrong number\n";
    }
   return 0;
   
}
