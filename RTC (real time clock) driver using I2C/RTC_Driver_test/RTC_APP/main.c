/*******************************************************************************************
 *
 * Module: RTC_APP (Real Time Clock App test)
 *
 * File Name: main.c
 *
 * Description: test file.c to check the functionality of the RTC driver
 *
 * Author: (Youssef Abdelaziz - Seif Ahmed - Tarek Gamal)

 *
 * *******************************************************************************************/


#include "../HAL/RTC/RTC_Inter.h"
#include "../HAL/LCD/LCD_Interface.h"



void APP_RTC_Display_Time_and_Date(Date_And_Time * ptr);
int main(void)
{	/*the next line hashed is only for the setup of the RTC in the first time
 	  pass arr of {sec,min,hour,day_name,day_date,month,year}*/
	//Date_And_Time Current_Date_And_Time={35,11,9,6,29,3,24};
	Date_And_Time Get_Date_Time;
	RTC_Init();
	H_Lcd_Void_LCDInit();
	/*these next 2 line are also for setup of the first time then they are not needed*/
	//RTC_Set_Time(&Current_Date_And_Time);
	//RTC_Set_Date(&Current_Date_And_Time);

 while(1)
 {	 H_Lcd_Void_LCDClear();
 	 RTC_Get_Time(&Get_Date_Time);
 	 RTC_Get_Date(&Get_Date_Time);
	 APP_RTC_Display_Time_and_Date(&Get_Date_Time);
	 for(long i =0 ; i<300000;i++);//wait for the user to watch the current time then update it for the next min
 }
 return 0;
}
void  APP_RTC_Display_Time_and_Date(Date_And_Time * ptr)
{

	H_Lcd_Void_LCDWriteNumber(ptr->hours);
	H_Lcd_Void_LCDWriteCharacter(':');
	H_Lcd_Void_LCDWriteNumber(ptr->min);
	H_Lcd_Void_LCDWriteCharacter(':');
	H_Lcd_Void_LCDWriteNumber(ptr->sec);
	H_Lcd_Void_LCDGoTo(1,0);
	//H_Lcd_Void_LCDWriteNumber(Get_Date_Time.date);
	H_Lcd_Void_LCDWriteString(RTC_Day_str_display[ptr->day]);
	H_Lcd_Void_LCDWriteCharacter(' ');
	H_Lcd_Void_LCDWriteNumber(ptr->date);
	H_Lcd_Void_LCDWriteCharacter('/');
	H_Lcd_Void_LCDWriteNumber(ptr->month);
	H_Lcd_Void_LCDWriteCharacter('/');
	H_Lcd_Void_LCDWriteNumber(20);
	H_Lcd_Void_LCDWriteNumber(ptr->year);
}
