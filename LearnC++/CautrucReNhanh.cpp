#include<iostream>
#include <math.h>

using namespace std;

int main(){
// abs(x) : tri tuyet doi
//pow(a, b) tinh a^b tra ve double
//sqrt(n) tinh can bac 2 tra ve so double
// round(a): lam tron so 
    float a = 12.1231;
    int b = round(a);
    cout << b << endl;

/* Cau truc re nhanh if else
    if(condition){
    // block of code if condition is true
    } 
*/
    if (100> 50){
        cout << "Xin Chao \n";
    }
    if(200 % 2 == 0){
        cout << "Ky Su Ngao Da !" << a << endl;
    }
/*
if-else
if(condition){
    block of code if condition is true
}
else{
    block of code if condition is false
}
*/
int m;
cin >> m;
if(m % 2 == 0){
    cout << "So chan";
}
else
{
cout << "So le";
}
    return 0;
}