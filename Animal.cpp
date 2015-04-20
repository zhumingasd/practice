/*************************************************************************
	> File Name: Animal.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年04月20日 星期一 14时57分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Animal.h"
void Animal::Animal()
{
	cout << "Animal constructed" << endl;
}
void Animal::~Animal()
{
	cout << "Animal desconstructed" << endl;
}
void Animal::SetAge(int age)
{
	m_age = age;
}
void Animal::cry()
{
	cout << "animal is crying" << endl;
}
void Animal::GetAge()
{
	cout << m_age << " years old" << endl;
}
