#include "Stack.h"

int main()
{
	Stack s1; //��������� ��� ������ (�������� � constructor)
	size_t number_of_pushed_elements, number_of_popped_elements;
	char random_stack_element;	

	//��� (push) ����� ���� ��� ������.
	cout<<"How many random elements do you want to PUSH inside the stack? (Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_pushed_elements;
	
	cout<<endl<<endl;
	
	srand(time(NULL));//������������ ��� ��������� ������� ������� ����������� ��� ��������������� 
	                  //(���� �� C/C++ ����� ����������, ������ ������� ������� �� ���� ��������)
	for(size_t i=0; i<number_of_pushed_elements; i++)
	{
		random_stack_element = 33 + rand()%(127-33);  //�� ����������� ��������� ASCII ���������� ����� ��� �� 33 �� �� 127 ��� ������ ASCII
		//printf("Value = %d.\n", random_stack_element);  //��������������� ���� ��� deugging, ���� �� ������������� ��� �� ����� ��� ���������� ����� ��� 33 �� ��� 127. ��� ������ ��������� �� ����������.
		s1.push(random_stack_element);
	}
	
	//����� (pop) ����� ��� �� ������.
	//s1.print();   //� ������ ���� ���������� ��� ��������� (������) ���� ��������, ��� ���������� ���� ��� ������.
				    //����, �� ������ � print(), �� �� ����� �� ��������� ��� �������� ��� ����� ������ ��� ������ �� ������ ������.
					//����� �����������, ������� �� ������ �� �������� �� ������ ��� ��������� ��� �� ������ pop, ���� �� ������� � ���������� �� ���������� ������ ������.
	cout<<"\n\nHow many random elements do you want to POP outside of the stack (L.I.F.O. mode of popping)?"<<endl;
	cout<< "(Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_popped_elements;
	
	cout << "----------------------------------------" << endl;
	for(size_t i=0; i<number_of_popped_elements; i++)
		cout<<s1.pop()<<( s1.getTop() != 0 ? "'\n" : "\n");
	
	system("PAUSE > nul");
	return 0;
}
