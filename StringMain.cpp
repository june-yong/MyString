
#include "MyString.h"

int main()
{
    MyString str1 = "Hellow World !!";
    MyString str2 = "World";
    MyString str3("오늘은");

    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;

    std::cout << str1 + str2 << std::endl;
    std::cout << str1 + " " + str2 << std::endl;

    std::cin >> str1 >> str2;

    std::cout << str1 + " " + str2 << std::endl;

    return 0;
}