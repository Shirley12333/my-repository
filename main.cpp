#include <iostream>
#include "Milktea.h"
using namespace std;
int main()
{
	//声明Milktea类对象数组，以及数组指针
	Milktea milktea[5] = { Milktea("芋泥波波" ,"冰",17,0.9),
						   Milktea("柠檬水","冰",15,0.9),
						   Milktea("多肉葡萄","冰",18,0.8),
						   Milktea("橙汁","冰",15,0.7),
						   Milktea("椰奶","少冰",13,0.9) };
	Milktea *p;
	p = milktea;
	float min = 100;                 //声明变量min用于对比最优惠价格奶茶
	int count = 0;                   //计数变量
	float TotalMoneyDiscounted = 0;  //折后价总价
	for (int i = 0; i < 5; i++)
	{
		printf("输出第 %d杯奶茶的基本信息\n", i + 1);
		p->data_display();
		//求折后价总价
		TotalMoneyDiscounted = p->get_priceDiscounted() + TotalMoneyDiscounted;

		//求折后价最优惠奶茶
		if (min > p->get_priceDiscounted())
		{
			min = p->get_priceDiscounted();
			count = i;
		}
		p++;
		cout << endl;
	}
	//信息输出
	cout << "折后总价：" << TotalMoneyDiscounted << endl;
	cout << "\n折后价最优惠奶茶信息:"  << endl;
	milktea[count].data_display();

	cout << "\n退出主函数\n";
	return 0;
}