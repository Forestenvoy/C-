// header file
// i/o stream --> input output stream --> 輸入輸出流 Library
#include <iostream>

// 直接使用標準命名空間 --> std 可以省略 <-- 不建議
using namespace std;

// main function --> starting point of the C++ program
int main()
{

    // output console "Hello World"

    // std --> standard namespace --> C++ 標準庫 主要命名空間
    // 其中 iostream 是標準庫中專門處理輸入輸出的一部分
    // :: --> scope resolution operator --> 作用域解析運算符
    // std::cout --> standard output stream
    // << --> insertion operator
    // std::endl --> end of line
    std::cout << "Hello World" << std::endl;

    // return 0 --> means program executed successfully
    return 0;
}

// Program progress 
// Input 輸入 -> Process 過程 -> Output 輸出