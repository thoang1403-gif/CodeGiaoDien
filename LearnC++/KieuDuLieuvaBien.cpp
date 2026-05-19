#include <iostream> // include Library iostream

using namespace std;
/* Kieu du lieu so : 
 1.So nguyen 
 + int (integer): 4byte = 32bit
 + long long: 8byte = 64bit ( n bit => -2^(n-1)---- 2^(n-1))
 unsigned int: 0-->2^32-1
 unsigned longlong: 0-->2^32-1


 2. Số thực
 + float: 4byte
 + double: 8byte

 3. Ky tu
 char : 1byte : 256 : 0 -> 255
 4. Logic
 bool : true, false
 */

/*
 BIẾN
 Kieu_Du_Lieu Ten_Bien
int Dien_Tich ;
float Ban_Kinh ;
 - Khong bắt đầu bằng chữ số
 - Ko được có dấu cách
 - Không được trùng với các keyword
*/
/*
Chu Thich o Day
*/
int main(){
    int bankinh; // khai bao 1 ten bien
    cout << bankinh << endl;
    int a, b, c;
    // int a = 100, b = 200, c = 300;
    cin >> a; // Nhap gia tri cho a tu ban phim
    cin >> b;
    cin >> c;
    cout << a << " " << b << " " << c << endl;



    cout << "Xin Chao !\n"; // Neu khong dung thu vien std thì phải dùng câu lệnh std:: <<cout
                         // std là thư viện còn "::" là toán tử khoảng cách
                         // 


    return 0;   
}