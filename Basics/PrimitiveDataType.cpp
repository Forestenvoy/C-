#include <iostream>
#include <cstdint>

int main()
{
    std::cout << "\n型態\t大小 (bytes)" << std::endl;
    // int 整數 4 bytes
    // -2147483648 ~ 2147483647
    std::cout << "int\t" << sizeof(int) << std::endl;
    // long 長整數 4 bytes(32位元) or 8 bytes(64位元)
    // -9223372036854775808 ~ 9223372036854775807 <-- 64位元
    std::cout << "long\t" << sizeof(long) << std::endl;
    // float 單精度浮點數 4 bytes
    // 1.17549e-38 ~ 3.40282e+38
    std::cout << "float\t" << sizeof(float) << std::endl;
    // double 雙精度浮點數 8 bytes
    // 2.22507e-308 ~ 1.79769e+308
    std::cout << "double\t" << sizeof(double) << std::endl;
    // char 字元 1 byte
    // -128 ~ 127
    std::cout << "char\t" << sizeof(char) << std::endl;
    // bool 布林 1 byte
    // true or false
    std::cout << "bool\t" << sizeof(bool) << std::endl;
    // 輸出 ASCII 碼 65
    char c = 'A';
    std::cout << int(c) << std::endl;
    // int(c) --> 這是 C++ 中的 強制類型轉換 的語法，使用了 static_cast 的形式。
    // (int)c --> 這是 C 風格的 強制類型轉換 語法
    return 0;
}
