/*************************************************************************
	> File Name: Animal.h
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年04月23日 星期四 07时46分50秒
 ************************************************************************/
#pragma once
class Animal
{
	public:
		Animal();
		~Animal();
	public:
		virtual void Cry();
		void SetAge(int age);
		void  GetAge();
	private:
		int m_age;
};
