/*
 * RGB.h
 *
 * Created: 8/27/2022 2:35:50 PM
 *  Author: Sayed Ibraheem
 */ 


#ifndef RGB_H_
#define RGB_H_

#include <atmel_start.h>
#include <clock_config.h>
#include <util/delay.h>
#define MIN(x,y)   (((x)<(y))? (x):(y))
#define MAX(x,y)   (((x)>(y))? (x):(y))
typedef enum 
{
	Red,//0001
	Green,//0010
	Blue,//0100
	Cyan,//0110
	Yellow,//0011
	Magenta,//0101
	White,//1000
	Off,//0000
}color_enum;

void RGB_init(void) ;
void RGB_Set_color (uint8_t *arr);
#endif /* RGB_H_ */