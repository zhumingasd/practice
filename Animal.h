*************************************************************************
	> File Name: animal.h
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年04月20日 星期一 14时42分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Animal
{
	public:
		Animal();
	    ~Animal();
	public:
		virtual void Cry();
		void setAge(int age);
		virtual int  GetAge();
	private:
		int m_age();
}
