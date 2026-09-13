# 📘 Khóa Học Lập Trình C++ (W3Schools Style Tutorial)

Chào mừng bạn đến với tài liệu tự học **C++** chuẩn phong cách **W3Schools**. Tài liệu được biên soạn ngắn gọn, trực quan, kèm theo cú pháp, ví dụ mẫu có thể chạy được ngay và phần giải thích chi tiết.

---

## 📑 Mục Lục
1. [C++ Căn Bản](#1-c-căn-bản)
   - [Giới thiệu](#11-giới-thiệu-c)
   - [Cú pháp cơ bản (Syntax)](#12-cú-pháp-cơ-bản-syntax)
   - [Xuất dữ liệu (Output / cout)](#13-xuất-dữ-liệu-output--cout)
   - [Chú thích (Comments)](#14-chú-thích-comments)
   - [Biến và Kiểu dữ liệu (Variables & Data Types)](#15-biến-và-kiểu-dữ-liệu)
   - [Nhập dữ liệu (User Input / cin)](#16-nhập-dữ-liệu-từ-bàn-phím-user-input--cin)
   - [Toán tử (Operators)](#17-toán-tử-operators)
   - [Chuỗi ký tự (Strings)](#18-chuỗi-ký-tự-string)
   - [Toán học (Math - cmath)](#19-toán-học-math)
   - [Cấu trúc điều kiện (If...Else & Switch)](#110-cấu-trúc-điều-kiện-ifelse--switch)
   - [Vòng lặp (While, Do...While, For)](#111-vòng-lặp-loops)
   - [Mảng (Arrays)](#112-mảng-arrays)
   - [Cấu trúc (Structures / struct)](#113-cấu-trúc-structures)
   - [Tham chiếu & Con trỏ (References & Pointers)](#114-tham-chiếu--con-trỏ-references--pointers)
2. [C++ Hàm (Functions)](#2-c-hàm-functions)
   - [Khai báo & Gọi hàm](#21-khai-báo-và-gọi-hàm)
   - [Tham số & Truyền tham chiếu](#22-tham-số--truyền-tham-chiếu-pass-by-reference)
   - [Nạp chồng hàm (Function Overloading)](#23-nạp-chồng-hàm-overloading)
   - [Đệ quy (Recursion)](#24-đệ-quy-recursion)
3. [C++ Lập Trình Hướng Đối Tượng (OOP)](#3-c-hướng-đối-tượng-oop)
   - [Lớp và Đối tượng (Classes & Objects)](#31-lớp-và-đối-tượng-classes--objects)
   - [Phương thức của Lớp (Class Methods)](#32-phương-thức-class-methods)
   - [Hàm tạo (Constructors)](#33-hàm-tạo-constructors)
   - [Phạm vi truy cập (Access Specifiers)](#34-phạm-vi-truy-cập-access-specifiers)
   - [Đóng gói (Encapsulation)](#35-tính-đóng-gói-encapsulation)
   - [Kế thừa (Inheritance)](#36-tính-kế-thừa-inheritance)
   - [Đa hình (Polymorphism)](#37-tính-đa-hình-polymorphism)
4. [C++ Nâng Cao & STL](#4-c-nâng-cao--stl)
   - [Xử lý ngoại lệ (Exceptions - try/catch)](#41-xử-lý-ngoại-lệ-exceptions)
   - [Làm việc với File (fstream)](#42-đọc-và-ghi-file-files)
   - [Thư viện chuẩn STL (Vector, Set, Map)](#43-thư-viện-chuẩn-stl-vector-set-map)
5. [Bài Tập Tự Luyện (Exercises)](#5-bài-tập-thực-hành)

---

# 1. C++ Căn Bản

## 1.1 Giới thiệu C++
- **C++** là một ngôn ngữ lập trình đa năng, hiệu năng cao, được phát triển bởi **Bjarne Stroustrup** tại Bell Labs vào năm 1979 như một phần mở rộng của ngôn ngữ C.
- C++ hỗ trợ lập trình thủ tục (procedural) lẫn hướng đối tượng (OOP).
- Ứng dụng phổ biến: Lập trình hệ thống, game engine (Unreal Engine), ứng dụng đồ họa 3D, phần mềm nhúng, hệ thống tài chính tốc độ cao.

---

## 1.2 Cú pháp cơ bản (Syntax)

### Ví dụ (Try it Yourself)
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}
```

### Giải thích mã nguồn:
- `#include <iostream>`: Thư viện nhập/xuất chuẩn của C++.
- `using namespace std;`: Sử dụng không gian tên `std` để không phải viết `std::cout`, `std::cin`.
- `int main()`: Hàm chính - nơi mọi chương trình C++ bắt đầu thực thi.
- `cout << "Hello World!";`: Lệnh in dữ liệu ra màn hình (`cout` viết tắt của *character output*).
- `return 0;`: Kết thúc hàm `main` thành công.
- Dấu chấm phẩy `;`: Mỗi câu lệnh trong C++ phải kết thúc bằng dấu `;`.

---

## 1.3 Xuất dữ liệu (Output / cout)

Để in dòng mới, bạn có thể dùng ký tự `\n` hoặc `endl`.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Dòng 1" << "\n";
    cout << "Dòng 2" << endl;
    cout << "Dòng 3";
    return 0;
}
```

> **Mẹo:** `\n` thực thi nhanh hơn `endl` vì `endl` sẽ kích hoạt thao tác flush buffer (xả bộ đệm).

---

## 1.4 Chú thích (Comments)

```cpp
// Đây là chú thích 1 dòng

/*
  Đây là chú thích
  trên nhiều dòng
*/
```

---

## 1.5 Biến và Kiểu dữ liệu

### Khai báo biến:
```cpp
kieu_du_lieu ten_bien = gia_tri;
```

### Các kiểu dữ liệu phổ biến:
| Kiểu dữ liệu | Kích thước | Mô tả | Ví dụ |
| :--- | :--- | :--- | :--- |
| `int` | 4 bytes | Số nguyên | `int myNum = 15;` |
| `double` | 8 bytes | Số thực độ chính xác kép (15 chữ số thập phân) | `double myFloat = 19.99;` |
| `float` | 4 bytes | Số thực đơn (6-7 chữ số thập phân) | `float myFloat = 5.75f;` |
| `char` | 1 byte | Một ký tự đơn (trong nháy đơn) | `char letter = 'A';` |
| `string` | Linh hoạt | Chuỗi ký tự (trong nháy kép) | `string name = "John";` |
| `bool` | 1 byte | Đúng/Sai (`true` hoặc `false`) | `bool isCodingFun = true;` |

### Hằng số (`const`):
Nếu không muốn giá trị của biến bị thay đổi:
```cpp
const double PI = 3.14159;
// PI = 10; // Báo lỗi biên dịch!
```

---

## 1.6 Nhập dữ liệu từ bàn phím (User Input / cin)

### Nhập số hoặc từ đơn:
```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Nhap mot so: ";
    cin >> x;
    cout << "So vua nhap la: " << x;
    return 0;
}
```

### Nhập cả chuỗi có khoảng trắng (`getline`):
Khi nhập chuỗi có dấu cách, `cin >> str` chỉ đọc từ đầu tiên. Hãy dùng `getline()`:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Nhap ho va ten: ";
    getline(cin, fullName);
    cout << "Xin chao: " << fullName;
    return 0;
}
```

> **Lưu ý:** Nếu trước `getline()` có dùng `cin >>`, hãy gọi `cin.ignore()` để loại bỏ ký tự `\n` còn đọng lại trong bộ đệm.

---

## 1.7 Toán tử (Operators)

- **Số học:** `+`, `-`, `*`, `/`, `%` (chia lấy dư), `++`, `--`
- **Gán:** `=`, `+=`, `-=`, `*=`, `/=`, `%=`
- **So sánh:** `==`, `!=`, `>`, `<`, `>=`, `<=`
- **Logic:** `&&` (AND), `||` (OR), `!` (NOT)

---

## 1.8 Chuỗi ký tự (String)

Cần `#include <string>`:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    
    // Nối chuỗi (Concatenation)
    string fullName = firstName + lastName;
    
    // Chiều dài chuỗi (Length / Size)
    cout << "Do dai: " << fullName.length() << endl;
    
    // Truy cập ký tự bằng chỉ số (Index)
    cout << "Ky tu dau tien: " << fullName[0] << endl;
    
    // Sửa ký tự
    fullName[0] = 'K';
    cout << "Sau khi sua: " << fullName << endl;
    return 0;
}
```

---

## 1.9 Toán học (Math)

Cần `#include <cmath>`:
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << max(5, 10) << endl;     // 10
    cout << min(5, 10) << endl;     // 5
    cout << sqrt(64) << endl;       // Căn bậc 2: 8
    cout << round(2.6) << endl;     // Làm tròn: 3
    cout << pow(2, 3) << endl;      // Lũy thừa 2^3: 8
    cout << abs(-15) << endl;       // Giá trị tuyệt đối: 15
    return 0;
}
```

---

## 1.10 Cấu trúc điều kiện (If...Else & Switch)

### If...Else và Toán tử 3 ngôi (Ternary Operator):
```cpp
int time = 20;

if (time < 12) {
    cout << "Chao buoi sang!";
} else if (time < 18) {
    cout << "Chao buoi chieu!";
} else {
    cout << "Chao buoi toi!";
}

// Toán tử ba ngôi (Shorthand If...Else):
string result = (time < 18) ? "Ngay" : "Dem";
```

### Switch...Case:
```cpp
int day = 4;
switch (day) {
    case 1:
        cout << "Thu Hai";
        break;
    case 2:
        cout << "Thu Ba";
        break;
    default:
        cout << "Ngay khong hop le";
}
```

---

## 1.11 Vòng lặp (Loops)

### While Loop:
```cpp
int i = 0;
while (i < 5) {
    cout << i << " ";
    i++;
}
```

### For Loop & Vòng lặp For-Each (Range-based For):
```cpp
// For tiêu chuẩn
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}

// Range-based For (Duyệt mảng/danh sách C++11 trở lên)
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int x : myNumbers) {
    cout << x << " ";
}
```

### Break & Continue:
- `break`: Dừng hẳn vòng lặp.
- `continue`: Bỏ qua bước lặp hiện tại và nhảy tới bước tiếp theo.

---

## 1.12 Mảng (Arrays)

```cpp
#include <iostream>
using namespace std;

int main() {
    // Khai báo và gán giá trị
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    
    // Truy xuất và sửa đổi
    cars[0] = "Toyota";
    cout << cars[0] << endl;
    
    // Tính kích thước của mảng
    int len = sizeof(cars) / sizeof(cars[0]);
    cout << "So phan tu: " << len << endl;
    
    // Mảng 2 chiều (Multi-dimensional Array)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "matrix[0][2] = " << matrix[0][2] << endl; // 3
    return 0;
}
```

---

## 1.13 Cấu trúc (Structures)

Gom nhóm nhiều biến có các kiểu dữ liệu khác nhau vào một thực thể:
```cpp
#include <iostream>
using namespace std;

struct SinhVien {
    string name;
    int age;
    float gpa;
};

int main() {
    SinhVien sv1;
    sv1.name = "Nguyen Van A";
    sv1.age = 20;
    sv1.gpa = 3.65f;

    cout << sv1.name << " - GPA: " << sv1.gpa << endl;
    return 0;
}
```

---

## 1.14 Tham chiếu & Con trỏ (References & Pointers)

### 1. Tham chiếu (Reference `&`):
Bí danh (tên gọi khác) của một biến đã tồn tại:
```cpp
string food = "Pizza";
string &meal = food; // meal tham chiếu tới food

meal = "Burger";
cout << food; // In ra "Burger"
```

### 2. Con trỏ (Pointer `*`):
Biến lưu trữ **địa chỉ ô nhớ** của biến khác:
```cpp
#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food; // Lưu địa chỉ ô nhớ của food

    cout << "Gia tri: " << food << endl;         // Pizza
    cout << "Dia chi o nho: " << &food << endl;  // vd: 0x61ff08
    cout << "Con tro ptr: " << ptr << endl;      // vd: 0x61ff08
    
    // Toan tu Dereference (*) de lay gia tri tai dia chi
    cout << "Gia tri tro toi: " << *ptr << endl; // Pizza

    // Thay doi gia tri thong qua con tro
    *ptr = "Pasta";
    cout << "Food sau khi sua: " << food << endl; // Pasta
    return 0;
}
```

---

# 2. C++ Hàm (Functions)

## 2.1 Khai báo và Gọi hàm

```cpp
#include <iostream>
using namespace std;

// Khai báo hàm
void sayHello() {
    cout << "Hello World!\n";
}

int add(int a, int b) {
    return a + b;
}

int main() {
    sayHello(); // Gọi hàm
    int sum = add(5, 7);
    cout << "Tong: " << sum;
    return 0;
}
```

---

## 2.2 Tham số & Truyền tham chiếu (Pass by Reference)

Nếu muốn hàm thay đổi trực tiếp giá trị của biến gốc, truyền bằng tham chiếu `&`:
```cpp
#include <iostream>
using namespace std;

void hoanDoi(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    hoanDoi(a, b);
    cout << "a: " << a << ", b: " << b; // a: 20, b: 10
    return 0;
}
```

---

## 2.3 Nạp chồng hàm (Overloading)

Nhiều hàm có **cùng tên** nhưng **khác nhau về tham số** (kiểu dữ liệu hoặc số lượng):
```cpp
int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}
```

---

## 2.4 Đệ quy (Recursion)

Hàm tự gọi lại chính nó:
```cpp
// Tính n! (Giai thừa)
int factorial(int n) {
    if (n <= 1) return 1; // Điểm dừng
    return n * factorial(n - 1);
}
```

---

# 3. C++ Hướng Đối Tượng (OOP)

OOP (Object-Oriented Programming) giúp tổ chức code dạng mô-đun, dễ tái sử dụng và bảo trì.

## 3.1 Lớp và Đối tượng (Classes & Objects)

```cpp
#include <iostream>
using namespace std;

// Định nghĩa lớp Car
class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
    // Tạo đối tượng carObj1
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    cout << carObj1.brand << " " << carObj1.model << " (" << carObj1.year << ")\n";
    return 0;
}
```

---

## 3.2 Phương thức (Class Methods)

Phương thức là hàm thuộc về lớp:
```cpp
class Car {
  public:
    void honk() {
        cout << "Tuuuu Tuuuu!\n";
    }
    
    // Khai báo bên trong, định nghĩa bên ngoài
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}
```

---

## 3.3 Hàm tạo (Constructors)

Hàm tạo tự động được gọi khi khởi tạo đối tượng:
```cpp
#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    int year;

    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }
};

int main() {
    Car car1("Ford", 1969);
    cout << car1.brand << " " << car1.year << endl;
    return 0;
}
```

---

## 3.4 Phạm vi truy cập (Access Specifiers)

- `public`: Thành viên có thể được truy cập từ bất cứ đâu bên ngoài lớp.
- `private`: Chỉ có thể truy cập bên trong nội bộ lớp (mặc định nếu không ghi gì).
- `protected`: Truy cập được trong nội bộ lớp và các lớp con kế thừa từ nó.

```cpp
class MyClass {
  public:
    int x; // Public
  private:
    int y; // Private
};
```

---

## 3.5 Tính đóng gói (Encapsulation)

Bảo vệ dữ liệu bằng cách để thuộc tính ở `private`, truy xuất thông qua các hàm `getter` và `setter`:
```cpp
#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    // Setter
    void setSalary(int s) {
        if (s > 0) salary = s;
    }
    // Getter
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    emp.setSalary(50000);
    cout << "Luong: " << emp.getSalary();
    return 0;
}
```

---

## 3.6 Tính kế thừa (Inheritance)

Cho phép một lớp kế thừa thuộc tính và phương thức từ lớp khác:
```cpp
#include <iostream>
using namespace std;

// Lớp cha (Base class)
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
        cout << "Tuuu tuuu!\n";
    }
};

// Lớp con (Derived class)
class Car : public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk(); // Kế thừa từ Vehicle
    cout << myCar.brand + " " + myCar.model << endl;
    return 0;
}
```

---

## 3.7 Tính đa hình (Polymorphism)

Khi các lớp con ghi đè (override) phương thức của lớp cha:
```cpp
#include <iostream>
using namespace std;

class Animal {
  public:
    virtual void animalSound() { // Từ khóa virtual để hỗ trợ đa hình động
        cout << "Dong vat phat ra am thanh\n";
    }
};

class Pig : public Animal {
  public:
    void animalSound() override {
        cout << "Lon keu: Ec ec\n";
    }
};

class Dog : public Animal {
  public:
    void animalSound() override {
        cout << "Cho sua: Gau gau\n";
    }
};

int main() {
    Animal* myAnimal = new Pig();
    myAnimal->animalSound(); // In ra: "Lon keu: Ec ec"
    delete myAnimal;
    return 0;
}
```

---

# 4. C++ Nâng Cao & STL

## 4.1 Xử lý ngoại lệ (Exceptions)

Sử dụng `try`, `throw`, và `catch` để xử lý lỗi khi chương trình đang chạy:
```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Truy cap hop le!";
        } else {
            throw (age); // Ném lỗi ra ngoài
        }
    }
    catch (int myNum) {
        cout << "Truy cap bi tu choi - Ban chua du 18 tuoi! Tuoi cua ban: " << myNum << endl;
    }
    return 0;
}
```

---

## 4.2 Đọc và Ghi File (Files)

Cần `#include <fstream>`:
- `ofstream`: Tạo và ghi file.
- `ifstream`: Đọc file.
- `fstream`: Kết hợp cả ghi và đọc.

### Ví dụ ghi và đọc file:
```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 1. Ghi file
    ofstream outFile("filename.txt");
    outFile << "Hello C++ File Handling!";
    outFile.close();

    // 2. Đọc file
    string myText;
    ifstream inFile("filename.txt");
    while (getline(inFile, myText)) {
        cout << myText << endl;
    }
    inFile.close();

    return 0;
}
```

---

## 4.3 Thư viện chuẩn STL (Vector, Set, Map)

### 1. `std::vector` (Mảng động tự tăng kích thước):
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1};
    nums.push_back(10); // Thêm vào cuối

    // Sắp xếp tăng dần
    sort(nums.begin(), nums.end());

    for (int n : nums) {
        cout << n << " "; // 1 2 5 9 10
    }
    return 0;
}
```

### 2. `std::map` (Cặp Key - Value):
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ages;
    ages["An"] = 20;
    ages["Binh"] = 25;

    cout << "Tuoi cua An: " << ages["An"] << endl;
    return 0;
}
```

---

# 5. Bài Tập Thực Hành

### Bài tập 1: Kiểm tra số nguyên tố
Viết chương trình nhập vào một số nguyên dương `n` và kiểm tra `n` có phải số nguyên tố hay không.

<details>
<summary>👉 Xem lời giải mẫu</summary>

```cpp
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (isPrime(n)) cout << n << " la so nguyen to.\n";
    else cout << n << " khong phai so nguyen to.\n";
    return 0;
}
```
</details>

---

### Bài tập 2: Quản lý sinh viên với Class & OOP
Tạo lớp `Student` gồm các thuộc tính `id`, `name`, `score`. Thêm phương thức in thông tin và xếp loại học lực (`>= 8.0`: Giỏi, `>= 6.5`: Khá, còn lại: Trung bình).

<details>
<summary>👉 Xem lời giải mẫu</summary>

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    string id;
    string name;
    double score;

  public:
    Student(string id, string name, double score) {
        this->id = id;
        this->name = name;
        this->score = score;
    }

    string getRank() {
        if (score >= 8.0) return "Gioi";
        if (score >= 6.5) return "Kha";
        return "Trung binh";
    }

    void display() {
        cout << "[" << id << "] " << name << " - Diem: " << score 
             << " - Xep loai: " << getRank() << endl;
    }
};

int main() {
    Student s1("SV01", "Tran Van Nam", 8.5);
    s1.display();
    return 0;
}
```
</details>

---

> 💡 **Chúc bạn học tốt C++! Bạn có thể lưu lại tài liệu này và mở trên VS Code để học và thử nghiệm trực tiếp.**

