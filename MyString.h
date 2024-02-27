#pragma once

#include <iostream>

class MyString
{
  private:
    char string[256] = {};
    int count = 0;
    int capacitor = 256;

  public:
    MyString() = default;
    MyString(const char* message);
    void MyStringError(int ErrorNo);
    friend std::ostream& operator<<(std::ostream& os, const MyString& message);
};
