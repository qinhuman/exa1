#include <lpc213x.h>
#include "delay.h"

int main(void)
{
    PINSEL0=(PINSEL0&(~(0x03<<12)))|(0x00<<12);  //GPIO P0.6	���5ָʾ��
	IO0DIR=(IO0DIR&(~(0x01<<6)))|(0x01<<6);//output
	while(1)
	{
		IO0CLR=IO0CLR|(1<<6);
		delay(10000);
	}

}
