#include "delay.h"


/*------------------��ʱ����-------------------
��ڲ�����dly
���ڲ�������

dly=10  ��ʱ4.97us   dly=100  ��ʱ45.66us   dly=1000 ��ʱ452us
��dly=1��Ӧ0.45us
-----------------------------------------------*/
void delay(unsigned int dly)
{
	unsigned int i;
	
	for ( ; dly>0; dly--)
		for (i=0; i<50; i++);

}
