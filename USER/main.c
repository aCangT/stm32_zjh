#include "stm32f10x.h"
#include "stm32f10x_usart.h"
#include "i2c_ee.h"

int main(void)
{
	USART1_Config();
	I2C_EE_Init();
		
	USART1_printf(USART1,"/r/n /r/n");
	USART1_printf(USART1,"/r/n /r/n");
	
	I2C_Test();
	
	while(1)
	{
	
	}
}
