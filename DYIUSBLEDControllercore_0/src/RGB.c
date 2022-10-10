/*
 * RGB.c
 *
 * Created: 8/27/2022 2:34:54 PM
 *  Author: Sayed Ibraheem
 */ 

#include <RGB.h>

void RGB_init(void) 
{
		R1_set_dir(PORT_DIR_OUT);
		R2_set_dir(PORT_DIR_OUT);
		R3_set_dir(PORT_DIR_OUT);
		R4_set_dir(PORT_DIR_OUT);
		R5_set_dir(PORT_DIR_OUT);
		R6_set_dir(PORT_DIR_OUT);
		R7_set_dir(PORT_DIR_OUT);
		R8_set_dir(PORT_DIR_OUT);
		R9_set_dir(PORT_DIR_OUT);
		R10_set_dir(PORT_DIR_OUT);
		
		B1_set_dir(PORT_DIR_OUT);
		B2_set_dir(PORT_DIR_OUT);
		B3_set_dir(PORT_DIR_OUT);
		B4_set_dir(PORT_DIR_OUT);
		B5_set_dir(PORT_DIR_OUT);
		B6_set_dir(PORT_DIR_OUT);
		B7_set_dir(PORT_DIR_OUT);
		B8_set_dir(PORT_DIR_OUT);
		B9_set_dir(PORT_DIR_OUT);
		B10_set_dir(PORT_DIR_OUT);
		
		G1_set_dir(PORT_DIR_OUT);
		G2_set_dir(PORT_DIR_OUT);
		G3_set_dir(PORT_DIR_OUT);
		G4_set_dir(PORT_DIR_OUT);
		G5_set_dir(PORT_DIR_OUT);
		G6_set_dir(PORT_DIR_OUT);
		G7_set_dir(PORT_DIR_OUT);
		G8_set_dir(PORT_DIR_OUT);
		G9_set_dir(PORT_DIR_OUT);
		G10_set_dir(PORT_DIR_OUT);
		
		W1_set_dir (PORT_DIR_OUT);
		W2_set_dir (PORT_DIR_OUT);
		W3_set_dir (PORT_DIR_OUT);
		W4_set_dir (PORT_DIR_OUT);
		W5_set_dir (PORT_DIR_OUT);
		W6_set_dir (PORT_DIR_OUT);
		W7_set_dir (PORT_DIR_OUT);
		W8_set_dir (PORT_DIR_OUT);
		W9_set_dir (PORT_DIR_OUT);
		W10_set_dir (PORT_DIR_OUT);
		
		B1_set_level(true);
		G1_set_level(true);
		R1_set_level(true);
		W1_set_level(true);
		B2_set_level(true);
		G2_set_level(true);
		R2_set_level(true);
		W2_set_level(true);
		B3_set_level(true);
		G3_set_level(true);
		R3_set_level(true);
		W3_set_level(true);
		B4_set_level(true);
		G4_set_level(true);
		R4_set_level(true);
		W4_set_level(true);
		B5_set_level(true);
		G5_set_level(true);
		R5_set_level(true);
		W5_set_level(true);
		B6_set_level(true);
		G6_set_level(true);
		R6_set_level(true);
		W6_set_level(true);
		B7_set_level(true);
		G7_set_level(true);
		R7_set_level(true);
		W7_set_level(true);
		B8_set_level(true);
		G8_set_level(true);
		R8_set_level(true);
		W8_set_level(true);
		B9_set_level(true);
		G9_set_level(true);
		R9_set_level(true);
		W9_set_level(true);
		B10_set_level(true);
		G10_set_level(true);
		R10_set_level(true);
		W10_set_level(true);
}

void RGB_Set_color (uint8_t *arr)
{
	R1_set_level(((arr[0]>>0)&0x01));G1_set_level(((arr[0]>>1)&0x01));B1_set_level(((arr[0]>>2)&0x01));W1_set_level(((arr[0]>>3)&0x01));
	R2_set_level(((arr[0]>>4)&0x01));G2_set_level(((arr[0]>>5)&0x01));B2_set_level(((arr[0]>>6)&0x01));W2_set_level(((arr[0]>>7)&0x01));
	R3_set_level(((arr[1]>>0)&0x01));G3_set_level(((arr[1]>>1)&0x01));B3_set_level(((arr[1]>>2)&0x01));W3_set_level(((arr[1]>>3)&0x01));
	R4_set_level(((arr[1]>>4)&0x01));G4_set_level(((arr[1]>>5)&0x01));B4_set_level(((arr[1]>>6)&0x01));W4_set_level(((arr[1]>>7)&0x01));
	R5_set_level(((arr[2]>>0)&0x01));G5_set_level(((arr[2]>>1)&0x01));B5_set_level(((arr[2]>>2)&0x01));W5_set_level(((arr[2]>>3)&0x01));
	R6_set_level(((arr[2]>>4)&0x01));G6_set_level(((arr[2]>>5)&0x01));B6_set_level(((arr[2]>>6)&0x01));W6_set_level(((arr[2]>>7)&0x01));
	R7_set_level(((arr[3]>>0)&0x01));G7_set_level(((arr[3]>>1)&0x01));B7_set_level(((arr[3]>>2)&0x01));W7_set_level(((arr[3]>>3)&0x01));
	R8_set_level(((arr[3]>>4)&0x01));G8_set_level(((arr[3]>>5)&0x01));B8_set_level(((arr[3]>>6)&0x01));W8_set_level(((arr[3]>>7)&0x01));
	R9_set_level(((arr[4]>>0)&0x01));G9_set_level(((arr[4]>>1)&0x01));B9_set_level(((arr[4]>>2)&0x01));W9_set_level(((arr[4]>>3)&0x01));
	R10_set_level(((arr[4]>>4)&0x01));G10_set_level(((arr[4]>>5)&0x01));B10_set_level(((arr[4]>>6)&0x01));W10_set_level(((arr[4]>>7)&0x01));
}