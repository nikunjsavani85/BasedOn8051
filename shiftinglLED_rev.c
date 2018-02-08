#include<reg51.h>
#include"delay_ms.h"

sfr LEDs=0xA0;	// PORT 2
main()
{
	unsigned char j,k,x=0x0F;
	while(1)
	{	
		for(k=7,j=0;k>=0,j<=7;k--,j++)
		{
			x=x^((1<<j)|(1<<k));   //shifting started from both side and blink until all blink
			LEDs=x;
			delay_ms(1000);	/*according condtion given delay*/
		}
	}
}