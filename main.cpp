#include "main.h"
#include <cstdlib> // ����srand��rand����  
#include <ctime>   // ����time����  
#include<stdlib.h>
/*
�� C �����У�<>��""�������ڰ���ͷ�ļ��ķ��ţ�������������ͷ�ļ��ķ�ʽ��������ͬ��
ʹ�ü�����<>���������ᵽϵͳ·���²���ͷ�ļ���
ʹ��˫����""�������������ڵ�ǰĿ¼�²���ͷ�ļ������û���ҵ����ٵ�ϵͳ·���²��ҡ�
��ˣ�ʹ��˫���ű�ʹ�ü����Ŷ���һ������·�������Ĺ��ܸ�Ϊǿ�󡣶������Լ���д��ͷ�ļ�
��һ�����ڵ�ǰ��Ŀ��·���£����Բ���ʹ�ü����ţ�ֻ��ʹ��˫���š�
*/

//���Ƕ���ĳ��󣬶�������ĵľ���
//��װ�ķ���������������Ժͷ�����Ϊһ�࣬�Է��������Ե�Ȩ��������
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
		srand((unsigned int)time(NULL)); //��������Ҫ�ں����ڲ�
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


//����Ĭ��ֵ��������Ϊ�������ͣ�ռλ��==����������
const i32& add_3(i32 fir , i32 sec , i32 thi ,int);
//�����������ͺ���ʵ��ֻ����һ����Ĭ�ϲ���,���д���������ϣ�����ʱ�÷�
const i32& add_3(i32 fir , i32 sec , i32 thi ,int ){ //��ֵ������󲻿ɸ���,û�д�ֵ����Ĭ��ֵ����һ����Ĭ�ϲ��������඼Ҫ��

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
//���������޸�ʵ�� / ������ֵ����,��Ҫ�������˵ı���
static u32& swap_int_2(u32 &num1, u32 &num2) { //int &num1=num1;
static	u32 temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
 	return temp; //���� ,��static��ȷ
}

void ptrfuc() {
	int a = 10;  //�������ĵ�ַ�Ǹı䲻�˵�
	int& b = a;  //���ñ������һ����������
	int& c = b;
	printf("%d  ,%d  ,%d \n", &a, &b, &c);
	int* ptr = &b;
	printf("%d  ,%d  ,%d \n", a, &b, &c);

	//int& d = 10; //�������õĵ�ַҪ�ǺϷ���
	//a=1;�����ں������޸ı���ֵ
	int arr[10]; char crr[26];
	int* ptr1 = arr; //����ָ�룬ָ�������һ��Ԫ�أ�+1���ĸ��ֽ�
	int(*ptr2)[10] = &arr;  //����ָ��  int arr [10] ,����ָ�룬ָ�������һ��Ԫ��+1����ʮ���ֽ�
	//����ָ��

	//ָ�볣������������ ָ�� const ָ����| int * const ptr  ָ���ַ�޷��޸ģ���ֻ��ָ�����������,����ֵ���Ը�
	int* const ptr_c = &a;
	//ptr_c = b; //error
	*ptr_c = 199;

	//����ָ�룺const �������� ָ�� ָ���� | const int * ptr_s  ָ��ָ���ֵ�����Ըı䣬���ǿ���ָ��������ַ
	const int* ptr_s = &a;
	ptr_s = &b; //error
	//*ptr_s = 10;

//����ָ����д ����ֵ ��*�����������������ͣ�=������
	int (*test1)(int) = test;
	int age1 = test1(10);
	cout << age1 << endl;
}

int main(){
	//ö�ٵĸ�ֵ
	enum week day1 = ������;
	printf("������=%  \n",day1);
 cout << "������" << day1 << endl;
	
 //srand((unsigned int)time(NULL)); //��������Ҫ�ں����ڲ�
	//�������ʹ�С��ȷ��
	cout << sizeof("month")<<endl; cout << sizeof("week") << endl;	cout << sizeof("day1");
	cout <<endl <<sizeof(long long) << endl;	cout << sizeof(short);
	char chr = 124;
	cout << chr<<endl;
    //print_ascii();
	
	//���õ�ʵ�� �����õı�����ָ�볣����ָ���ָ�򲻿ɸı䣬���ݿ��Ըı�
	u32 num1 = 1;
	u32 num2 = 2;	
	cout << "���õ�ʵ����";
	cout << num1 << "___" << num2 << endl;
	u32& temp = swap_int_2(num1, num2);  
	cout << temp << " " << temp << endl;
	 cout << num1 << "___" << num2 << endl;
	 //�����ķ���ֵ�Ǹ����ã�����������Ϊ��ֵ
	 swap_int_2(num1,num2) = 12;


	//�������ã����������βΣ���ֹ�����
	//int& num3 = 10;//���󣬲��Ϸ�
	const int& num3 = 10; //�Ϸ���ԭ��int temp=10; const int &num3=temp; �����޸�ֵ ��ͬ��const int* const ptr

	//Ĭ�ϲ���
	const i32& sum1 = add_3(1, 1, 1);
	cout <<"Ĭ�ϲ�����" << sum1 << endl;

    //�������أ�1��������ͬ��2����������ͬ 3����ʽ�������ͻ������ͬ��˳��ͬ����������ֵ��������Ϊ��������
	const i32& sum2 = add_3(1, 2, 1,1);
	cout << "Ĭ�ϲ�����" << sum2 << endl;

	//���ʹ��
	Circle circl1;
	circl1.radius = 3;
	const float& com = circl1.get_circle(); //�ַ�����ʱһ��Ҫ������ת��Ϊint��������ֵС�᲻��ʵ
	cout <<"���ʹ��" << com<<endl ;
	guasse caishuzi;
	
		caishuzi.print();
	
	

	system("pause");
	return 0;
}

