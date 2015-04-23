/*************************************************************************
	> File Name: main.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年04月20日 星期一 14时29分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Cat.h"
#include "Animal.h"
int main()
{
    Animal *animal;
	Cat cat;
	animal = &cat;
	animal->SetAge(3);
	animal->GetAge();
    return 0;
}
