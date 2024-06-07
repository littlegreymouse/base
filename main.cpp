#include "main.h"
#include <cstdlib> // 包含srand和rand函数  
#include <ctime>   // 包含time函数  
#include<stdlib.h>
/*
在 C 语言中，<>和""都是用于包含头文件的符号，但它们在搜索头文件的方式上有所不同：
使用尖括号<>，编译器会到系统路径下查找头文件；
使用双引号""，编译器首先在当前目录下查找头文件，如果没有找到，再到系统路径下查找。
因此，使用双引号比使用尖括号多了一个查找路径，它的功能更为强大。而我们自己编写的头文件
，一般存放于当前项目的路径下，所以不能使用尖括号，只能使用双引号。
*/

//类是对象的抽象，对象是类的的具体
//封装的方法：将该类的属性和方法归为一类，对方法和属性的权限做保护
using namespace std;
class Circle {
	//authority
public:
//private:
//protected:
	//artribute 
	u8 radius = 0;
#define pi 3.14
	float circle = 0;
	//behavior
	 float get_circle() {
		return (2 * pi * (this->radius));
	}
};	

 
class guasse {
public:
	u8 num[4] = {0};	
public:
	void varies(){
		srand((unsigned int)time(NULL)); //函数调用要在函数内部
		num[0] = rand() % 10;
		num[1] = rand() % 10;
		num[2] = rand() % 10;
		num[3] = rand() % 10;
	}
	void print(){
		cout << (int)num[0] << "\t";
		cout << (int)num[1] << "\t";
		cout << (int)num[2] << "\t";
		cout << (int)num[3] << "\t";
	}
	guasse(){
		varies();
	}

};


//函数默认值，引用作为参数类型，占位符==》函数重载
const i32& add_3(i32 fir , i32 sec , i32 thi ,int);
//函数声明，和函数实现只能有一个有默认参数,最好写在上声明上，重载时好分
const i32& add_3(i32 fir , i32 sec , i32 thi ,int ){ //该值算出来后不可更改,没有传值就用默认值，第一个有默认参数后其余都要有

	static i32 sum = fir + sec + thi;
	return sum;
}
const i32& add_3(i32& fir, i32 sec, i32 thi){
	static i32 sum = fir + sec + thi;
	return sum;
}
const i32& add_3(const i32& fir, i32 sec, i32 thi) {
	static i32 sum = fir - sec + thi;
	return sum;
}
//利用引用修改实参 / 做返回值存在,不要返回死了的变量
static u32& swap_int_2(u32 &num1, u32 &num2) { //int &num1=num1;
static	u32 temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
 	return temp; //错误 ,加static正确
}

void ptrfuc() {
	int a = 10;  //变量名的地址是改变不了的
	int& b = a;  //引用本身就是一种数据类型
	int& c = b;
	printf("%d  ,%d  ,%d \n", &a, &b, &c);
	int* ptr = &b;
	printf("%d  ,%d  ,%d \n", a, &b, &c);

	//int& d = 10; //错误，引用的地址要是合法的
	//a=1;不能在函数外修改变量值
	int arr[10]; char crr[26];
	int* ptr1 = arr; //数组指针，指向数组第一个元素，+1扩四个字节
	int(*ptr2)[10] = &arr;  //数组指针  int arr [10] ,数组指针，指向数组第一个元素+1扩四十个字节
	//函数指针

	//指针常量：数据类型 指针 const 指针名| int * const ptr  指向地址无法修改，及只能指向这个变量名,但是值可以改
	int* const ptr_c = &a;
	//ptr_c = b; //error
	*ptr_c = 199;

	//常量指针：const 数据类型 指针 指针名 | const int * ptr_s  指针指向的值不可以改变，但是可以指向其他地址
	const int* ptr_s = &a;
	ptr_s = &b; //error
	//*ptr_s = 10;

//函数指针书写 返回值 （*函数名）（参数类型）=函数名
	int (*test1)(int) = test;
	int age1 = test1(10);
	cout << age1 << endl;
}

int main(){
	//枚举的赋值
	enum week day1 = 星期天;
	printf("今天是=%  \n",day1);
 cout << "今天是" << day1 << endl;
	
 //srand((unsigned int)time(NULL)); //函数调用要在函数内部
	//数据类型大小的确认
	cout << sizeof("month")<<endl; cout << sizeof("week") << endl;	cout << sizeof("day1");
	cout <<endl <<sizeof(long long) << endl;	cout << sizeof(short);
	char chr = 124;
	cout << chr<<endl;
    //print_ascii();
	
	//引用的实例 ，引用的本质是指针常量，指针的指向不可改变，内容可以改变
	u32 num1 = 1;
	u32 num2 = 2;	
	cout << "引用的实例：";
	cout << num1 << "___" << num2 << endl;
	u32& temp = swap_int_2(num1, num2);  
	cout << temp << " " << temp << endl;
	 cout << num1 << "___" << num2 << endl;
	 //函数的返回值是个引用，函数可以作为左值
	 swap_int_2(num1,num2) = 12;


	//常量引用，用来修饰形参，防止误操作
	//int& num3 = 10;//错误，不合法
	const int& num3 = 10; //合法，原理int temp=10; const int &num3=temp; 不可修改值 等同于const int* const ptr

	//默认参数
	const i32& sum1 = add_3(1, 1, 1);
	cout <<"默认参数：" << sum1 << endl;

    //函数重载：1、函数名同，2、作用域相同 3、形式参数类型或个数不同，顺序不同，函数返回值不可以作为重载条件
	const i32& sum2 = add_3(1, 2, 1,1);
	cout << "默认参数：" << sum2 << endl;

	//类的使用
	Circle circl1;
	circl1.radius = 3;
	const float& com = circl1.get_circle(); //字符类型时一定要将数据转换为int，否则数值小会不现实
	cout <<"类的使用" << com<<endl ;
	guasse caishuzi;
	
		caishuzi.print();
	
	

	system("pause");
	return 0;
}

