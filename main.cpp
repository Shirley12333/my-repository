#include <iostream>
#include "Milktea.h"
using namespace std;
int main()
{
	//����Milktea��������飬�Լ�����ָ��
	Milktea milktea[5] = { Milktea("���ನ��" ,"��",17,0.9),
						   Milktea("����ˮ","��",15,0.9),
						   Milktea("��������","��",18,0.8),
						   Milktea("��֭","��",15,0.7),
						   Milktea("Ҭ��","�ٱ�",13,0.9) };
	Milktea *p;
	p = milktea;
	float min = 100;                 //��������min���ڶԱ����Żݼ۸��̲�
	int count = 0;                   //��������
	float TotalMoneyDiscounted = 0;  //�ۺ���ܼ�
	for (int i = 0; i < 5; i++)
	{
		printf("����� %d���̲�Ļ�����Ϣ\n", i + 1);
		p->data_display();
		//���ۺ���ܼ�
		TotalMoneyDiscounted = p->get_priceDiscounted() + TotalMoneyDiscounted;

		//���ۺ�����Ż��̲�
		if (min > p->get_priceDiscounted())
		{
			min = p->get_priceDiscounted();
			count = i;
		}
		p++;
		cout << endl;
	}
	//��Ϣ���
	cout << "�ۺ��ܼۣ�" << TotalMoneyDiscounted << endl;
	cout << "\n�ۺ�����Ż��̲���Ϣ:"  << endl;
	milktea[count].data_display();

	cout << "\n�˳�������\n";
	return 0;
}