#pragma once
#include <string>

using  namespace std;

#define ADDR_LEN  64

class Human {
public:
	Human();
	Human(int age, int salary, string bldType);
	Human(const Human&);  //不定义拷贝构造函数，编译器会生成“合成的拷贝构造函数”
	Human& operator=(const Human&);

	void eat();
	void sleep();
	void play();
	void work();

	string getName();
	int getAge();
	int getSalary();
	void setAddr(const char* newAddr);
	const char* getAddr();
	void description() const;
	//类的静态成员函数
	static int gethumanCount();

private:
	string name = "Unknown";
	int age = 28;
	int salary;
	char* addr;

	const string bloodType; 

	static int humanCount;
};