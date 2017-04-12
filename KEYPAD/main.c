/*
PROJECT Name: LED
Author      : Etiq Technologies
Created on  :4 May 2016
Description: A 4x4 matrix keyboard is interfaced in the project.The key pressed is displayed on LCD.

*/


#include <REG8253.H>
#include "delay.h"           //delay header
#include "lcd.h"

void main()
{
	LCD_init();               //initialises the LCD 
	
	/* keypad identification columns are connected to lower four
	 bits of the port and rows to the higher pins of the port.
   columns are configured output and rows configured as input pins	
	 Each column is made low and rows are scanned continously for input
	 low.corresponding row with low input is identified and the respective 
	 key identified*/
	
	P0=0x0F;                 // all row pins configured as input pins
	while(1)
	{
	 LCD_write_text_at(1,1 ,"PRESS ANY KEY");
	 /*1st column made low keeping other columns high and scan for the rows*/
   P0=0XFE;                
	 if(P0_4==0)
		LCD_write_char_at(2,1,'1');
	 if(P0_5==0)
	 LCD_write_char_at(2,1,'4');
	 if(P0_6==0)
	 LCD_write_char_at(2,1,'7');
	 if(P0_7==0)
	 LCD_write_char_at(2,1,'*');
	 
	 /*2nd column made low keeping other columns high and scan for the rows*/
	 P0=0xFD;
	 if(P0_4==0)
	 LCD_write_char_at(2,1,'2');
	 if(P0_5==0)
	 LCD_write_char_at(2,1,'5');
	 if(P0_6==0)
	 LCD_write_char_at(2,1,'8');
	 if(P0_7==0)
	 LCD_write_char_at(2,1,'0');
	 
	 /*3rd column made low keeping other columns high and scan for the rows*/
	 P0=0xFB;
	 if(P0_4==0)
	 LCD_write_char_at(2,1,'3');
	 if(P0_5==0)
	 LCD_write_char_at(2,1,'6');
	 if(P0_6==0)
	 LCD_write_char_at(2,1,'9');
	 if(P0_7==0)
	 LCD_write_char_at(2,1,'#');
	 
	 /*4th column made low keeping other columns high and scan for the rows*/
	 P0=0xF7;
	 if(P0_4==0)
	 LCD_write_char_at(2,1,'A');
	 if(P0_5==0)
	 LCD_write_char_at(2,1,'B');
	 if(P0_6==0)
	 LCD_write_char_at(2,1,'C');
	 if(P0_7==0)
	 LCD_write_char_at(2,1,'D');
	}
}
