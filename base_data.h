//.h文件中只能不可以有定义的东西，否则就会出现重定义
//基本变量，指针类型的变量都不可以出现在.h文件中
 
#ifndef BASE_DATA_H
#define BASE_DATA_H

#include <string>
#include <fstream>

typedef unsigned char u8;
typedef  char c8;
typedef unsigned short u16;
typedef  short s16;
typedef unsigned int u32;
typedef  int i32;

using namespace std;
//基础变量数据类型 
//bool num1 ;
//char num2 ;
//short num3 ;
//int num4 ;
//long num5 ;
//long long num6;
//float num7 ;
//double num8 ;

//复合数据类型
//1、数组（多个相同数据类型的集合）
//int arr[10]; char crr[26]; 
//2、结构体（多种数据类型的集合）
struct tree { 
	char guoshi_name[10];
	int guoshi_num;
	float tree_age;
	int* p = &guoshi_num;
	};

//3、枚举（数字的映射）
enum week {
	星期天 = 2, 星期一=7,星期二
};
enum month { 星期天1 = 2, 星期一1 = 7, 星期二1 };
//4、class（数据和方法的集合体，对象的创建）

class people{
	//数据类型

	int age;
	string name;
	std::fstream* filePtr = new std::fstream("example.txt", std::ios::out);
	//函数
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return this->name;
	}
	//析构函数
	people() {
		this->age = 10;
	}
	~people() {
		delete filePtr;
	}
};
int test(int age);
//5、指针类型 //指针类型 指针名 =指向地址
//数组指针
//int* ptr1 = arr; //数组指针，指向数组第一个元素，+1扩四个字节
//int(* ptr2)[10] = &arr;  //数组指针  int arr [10] ,数组指针，指向数组第一个元素+1扩四十个字节
 //函数指针
//int (*test1)(int) = test;     //函数指针是指指向函数地址的指针 
//6、引用
//  int a =10;
//int& b = a;
//int& c = b;
//7、常量
// 常量1
#define  cycle1   12
 //常量2
const int week = 7;

#endif // !BASE_DATA_H
