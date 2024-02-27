#include "MyString.h"

MyString::MyString(const char* message)
{
    for (int i = 0; '\0' != message[i]; ++i)
    {
        if (capacitor - 1 < count)
        {
            MyString::MyStringError(capacitor);
            break;
        }

        string[i] = message[i];
        count++;
    }
}

void MyString::MyStringError(int ErrorNo)
{
    if (256 == ErrorNo)
    {
        std::cout << "입력된 문자열이 길어요 ~~!! \n";
    }
}

std::ostream& operator<<(std::ostream& os, const MyString& message)
{
    for (int i = 0; i < message.count; ++i)
    {
        os << message.string[i];
    }

    return os;
}
