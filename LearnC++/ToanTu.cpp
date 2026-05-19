#include <iostream>

using namespace std;
// Dấu '=' được gọi là toán từ gán (Assigment Operator)
// Toán tử toán học: + - * / %  
// Toan tu so sanh : >, >=, <, <=, ==, !=
// Toan tu logic And or not
// AND : &&
// Or: ||
// Not: !
int main(){
    int a ;
    long long b = 100; 
    float c = 3.141;
    double d = 5758235.34343;
    char kitu = 'r'; // nhay don
    bool ok = true ;
    cout << b << endl;  
    cout << "Nhap gia tri cho a :";
    cin >> a; 
    cout << "Gia tri cua a la: " << a << endl ;
    float thuong = 1.0*a / b; // (float)a/b or a/(float)b
    cout << thuong << endl;
    return 0;
}

