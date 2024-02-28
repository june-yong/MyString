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

MyString& MyString::operator+(MyString& message)
{
    for (int i = 0; i < message.count; ++i)
    {
        if (capacitor - 1 < count + i)
        {
            MyString::MyStringError(capacitor);
            break;
        }
        string[count] = message.string[i];
        count++;
    }
    return *this;
}

MyString& MyString::operator+(const char* message)
{
    for (int i = 0; '\0' != message[i]; ++i)
    {
        if (capacitor - 1 < count + i)
        {
            MyString::MyStringError(capacitor);
            break;
        }
        string[count] = message[i];
        count++;
    }
    return *this;
}

void MyString::MyStringError(int ErrorNo)
{
    if (256 == ErrorNo)
    {
        std::cout << "입력된 문자열이 너무 길어요 ~~!! \n";
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

std::istream& operator>>(std::istream& is, MyString& message)
{
    char temp[256];

    is >> temp;

    message.count = 0;
    for (int i = 0; '\0' != temp[i]; ++i)
    {
        message.string[i] = temp[i];
        message.count++;
    }
    return is;
}
