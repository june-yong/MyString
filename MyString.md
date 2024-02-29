# MyString
std::string을 MyString Class를 통해서 구현해 보고자함

## 구현 내용

1. 객체 생성과 대입  
   생성자 함수를 이용해서 대입 구현   
```C++
  MyString str1 = "Hellow";  
  MyString str2 = "World";
```

2. 객체 결합  
   연산자 오버로딩을 이용해서 객체 결합을 구현  
```C++
  std::cout << str1 + str2 << std::endl; 
  std::cout << str1 + " " + str2 << std::endl;
```

3. 객체 입력  
   연산자 오버로딩을 이용해서 객체 입력을 구현  
```C++
  std::cin >> str1 >> str2;
```

4. 더이상의 구현이 의미가 있나요 ?????
   이만큼 만든 것으로 마무리할려고 .... 

