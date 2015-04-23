/*************************************************************************
	> File Name: Cat.h
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年04月20日 星期一 15时41分11秒
 ************************************************************************/
#pragma once
#include<iostream>
using namespace std;
#include "Animal.h"
class Cat : public Animal
{
	public:
		virtual void Cry();
};
