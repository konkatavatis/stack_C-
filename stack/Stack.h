#ifndef STACK_H  //�� ������� #ifndef, #define ��� #endif ����������� �����������.  
	#define STACK_H  //��� ����� �����������, ���� ������ �� ���������� ������������ (��� �� 2� ����������� ��� ����) ��� �������.
	
	#include <iostream> //��� �� cout/cin
	#include <cstring>  //��� �� ������������ � strlen() ��� ����� �� ������ ��� ��������� ���� ��������������
	#include <cstdlib>  //��� �� ����� ��� ������� system()
	//#include <cstdio>  //��� �� ����� ��� printf ��� ������ debugging
	#include <ctime>  //��� �� ����� ��� time() ���� ���� srand()
	using namespace std;
	
	#define SIZE 5 //�� ������� ������� ��� �������
	
	class Stack
	{
		private:
			char stack[SIZE]; //� ���� ��� ������� ������������ �� ������������ ������ ����������
			int top; //��������� ��� ������ �� ��������� �������� ��� �������������� ��� �� ������
			
		public:
			Stack(); //constructor �������
			
			//setters
			void setStack(char);  //�������� ���� ��������� ��� ������ - ����� ��� ������� push()
			void setTop(int);  //������ ��� index ��� ������� - ����� ��� ������� push()/pop()
			//getters
			char getStack() const; //��������� �� ��������� �������� ��� ������� 
			int getTop() const;  //��������� �� index ��� ���������� ��������� ��� �������
			
			void print();  //H print ��� ����������� �� ������ �� const ���� ��� ����� ���� ���� ������ ��� ��� pop()
			void push(char);  //����� ���� ��� ������ - ������� �� ������, ��� ��� ������ �� ������ const.
			char pop();//������� ��� �� ������ - ������� �� ������, ��� ��� ������ �� ������ const.
	};
#endif
