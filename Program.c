#include <LPC23xx.h>
#include <stdio.h>
#include <stdlib.h>
#include "lcd.h"

int main()
{
	unsigned int data = 0;
	float output = 0;
	char outputstring[20];
	
	/* initialize the lcd */
	lcd_init();
	
	/* clear the LCD screen once */
	lcd_clear();
	
	/* set the LCD cursor at column 0, line 0 */
	set_cursor (0 , 0);
	
	/* printing on LCD */
	lcd_print ("ADC on Pin AD0.0");
	
	/* ADC configurations */
	/* Enable ADC using PCONP - PCAD register (bit 12) */
	PCONP |= (1 << 12);
	
	/* Enabling ADC in AD0CR register - PDN (bit 21) */
	AD0CR |= (1 << 21);
	
	/* Enabling clock for ADC - PCLK_SEL0 bit 25:24 */
	PCLKSEL0 |= (1 << 24);
	
	/* Select AD0.0 in PINSEL1 register bit 14 */
	PINSEL1 |= (1 << 14);
	
	/* Select channel 0 in AD0CR register [7:0] */
	AD0CR |= (1 << 0);
	
	/* Selecting clockdiv for ADC in AD0CR register [15:8] */
	AD0CR |= 0x0200;
	
	while(1)
	{
		/* Start ADC conversion */
		AD0CR |= (1 << 24);
		
		/* Wait for conversion result to be available - bit 31 of AD0GDR - DONE */
		while ((AD0GDR & (1 << 31)) != (1 << 31));
		
		/* Process the available results - available in AD0GDR [15:6] */
		data = AD0GDR >> 6;
		data = data & 0x3FF;
		
		/* Convert it into readable voltage with Vref = 3.3V */
		output = (float) ((data * 3.3) / 1023);
		
		sprintf(outputstring, "Output = %.2fV", output);
		set_cursor (0 , 1);
		lcd_print (outputstring);
	}
	
	return 0;
}
