//.h�ļ���ֻ�ܲ������ж���Ķ���������ͻ�����ض���
//����������ָ�����͵ı����������Գ�����.h�ļ���
 
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
//���������������� 
//bool num1 ;
//char num2 ;
//short num3 ;
//int num4 ;
//long num5 ;
//long long num6;
//float num7 ;
//double num8 ;

//������������
//1�����飨�����ͬ�������͵ļ��ϣ�
//int arr[10]; char crr[26]; 
//2���ṹ�壨�����������͵ļ��ϣ�
struct tree { 
	char guoshi_name[10];
	int guoshi_num;
	float tree_age;
	int* p = &guoshi_num;
	};

//3��ö�٣����ֵ�ӳ�䣩
enum week {
	������ = 2, ����һ=7,���ڶ�
};
enum month { ������1 = 2, ����һ1 = 7, ���ڶ�1 };
//4��class�����ݺͷ����ļ����壬����Ĵ�����

class people{
	//��������

	int age;
	string name;
	std::fstream* filePtr = new std::fstream("example.txt", std::ios::out);
	//����
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return this->name;
	}
	//��������
	people() {
		this->age = 10;
	}
	~people() {
		delete filePtr;
	}
};
int test(int age);
//5��ָ������ //ָ������ ָ���� =ָ���ַ
//����ָ��
//int* ptr1 = arr; //����ָ�룬ָ�������һ��Ԫ�أ�+1���ĸ��ֽ�
//int(* ptr2)[10] = &arr;  //����ָ��  int arr [10] ,����ָ�룬ָ�������һ��Ԫ��+1����ʮ���ֽ�
 //����ָ��
//int (*test1)(int) = test;     //����ָ����ָָ������ַ��ָ�� 
//6������
//  int a =10;
//int& b = a;
//int& c = b;
//7������
// ����1
#define  cycle1   12
 //����2
const int week = 7;

#endif // !BASE_DATA_H
