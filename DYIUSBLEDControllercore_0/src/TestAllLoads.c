/*
 * TestAllLoads.c
 *
 * Created: 8/17/2022 10:48:21 PM
 *  Author: Sayed Ibraheem
 */ 

#include <TestAllLoads.h>

static uint8_t data_array [4] = {1,5,0xA,0};
static uint8_t address_arr [2] = {1,5};
static uint8_t read_array [4]={0};
void Test_All_Loads_init(void) 
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
	W1_set_dir(PORT_DIR_OUT);
	W2_set_dir(PORT_DIR_OUT);
	W3_set_dir(PORT_DIR_OUT);
	W4_set_dir(PORT_DIR_OUT);
	W5_set_dir(PORT_DIR_OUT);
	W6_set_dir(PORT_DIR_OUT);
	W7_set_dir(PORT_DIR_OUT);
	W8_set_dir(PORT_DIR_OUT);
	W9_set_dir(PORT_DIR_OUT);
	W10_set_dir(PORT_DIR_OUT);
	
	B1_set_level(false);
	G1_set_level(false);
	R1_set_level(false);
	W1_set_level(true);
	B2_set_level(false);
	G2_set_level(false);
	R2_set_level(false);
	W2_set_level(true);
	B3_set_level(false);
	G3_set_level(false);
	R3_set_level(false);
	W3_set_level(true);
	B4_set_level(false);
	G4_set_level(false);
	R4_set_level(false);
	W4_set_level(true);
	B5_set_level(false);
	G5_set_level(false);
	R5_set_level(false);
	W5_set_level(true);
	B6_set_level(false);
	G6_set_level(false);
	R6_set_level(false);
	W6_set_level(true);
	B7_set_level(false);
	G7_set_level(false);
	R7_set_level(false);
	W7_set_level(true);
	B8_set_level(false);
	G8_set_level(false);
	R8_set_level(false);
	W8_set_level(true);
	B9_set_level(false);
	G9_set_level(false);
	R9_set_level(false);
	W9_set_level(true);
	B10_set_level(false);
	G10_set_level(false);
	R10_set_level(false);
	W10_set_level(true);
	status_led_set_dir(PORT_DIR_OUT);
	status_led_set_level(false);

	//I2C_0_init();
	//I2C_0_initialization();
	//
	//USART_0_init()      ;
	//USART_0_enable()    ;
	//USART_0_enable_rx() ;
	//USART_0_enable_tx() ;
	//USART_1_init()      ;
	//USART_1_enable()    ;
	//USART_1_enable_rx() ;
	//USART_1_enable_tx() ;
}


void Test_RGB (void) 
{
	B1_set_level(false);
	G1_set_level(false);
	R1_set_level(false);
	W1_set_level(true);
	B2_set_level(false);
	G2_set_level(false);
	R2_set_level(false);
	W2_set_level(true);
	B3_set_level(false);
	G3_set_level(false);
	R3_set_level(false);
	W3_set_level(true);
	B4_set_level(false);
	G4_set_level(false);
	R4_set_level(false);
	W4_set_level(true);
	B5_set_level(false);
	G5_set_level(false);
	R5_set_level(false);
	W5_set_level(true);
	B6_set_level(false);
	G6_set_level(false);
	R6_set_level(false);
	W6_set_level(true);
	B7_set_level(false);
	G7_set_level(false);
	R7_set_level(false);
	W7_set_level(true);
	B8_set_level(false);
	G8_set_level(false);
	R8_set_level(false);
	W8_set_level(true);
	B9_set_level(false);
	G9_set_level(false);
	R9_set_level(false);
	W9_set_level(true);
	B10_set_level(false);
	G10_set_level(false);
	R10_set_level(false);
	W10_set_level(true);
	_delay_ms(500);
	
	B1_set_level(false);
	G1_set_level(true);
	R1_set_level(true);
	W1_set_level(true);
	B2_set_level(false);
	G2_set_level(true);
	R2_set_level(true);
	W2_set_level(true);
	B3_set_level(false);
	G3_set_level(true);
	R3_set_level(true);
	W3_set_level(true);
	B4_set_level(false);
	G4_set_level(true);
	R4_set_level(true);
	W4_set_level(true);
	B5_set_level(false);
	G5_set_level(true);
	R5_set_level(true);
	W5_set_level(true);
	B6_set_level(false);
	G6_set_level(true);
	R6_set_level(true);
	W6_set_level(true);
	B7_set_level(false);
	G7_set_level(true);
	R7_set_level(true);
	W7_set_level(true);
	B8_set_level(false);
	G8_set_level(true);
	R8_set_level(true);
	W8_set_level(true);
	B9_set_level(false);
	G9_set_level(true);
	R9_set_level(true);
	W9_set_level(true);
	B10_set_level(false);
	G10_set_level(true);
	R10_set_level(true);
	W10_set_level(true);
	_delay_ms(500);
	B1_set_level(true);
	G1_set_level(false);
	R1_set_level(true);
	W1_set_level(true);
	B2_set_level(true);
	G2_set_level(false);
	R2_set_level(true);
	W2_set_level(true);
	B3_set_level(true);
	G3_set_level(false);
	R3_set_level(true);
	W3_set_level(true);
	B4_set_level(true);
	G4_set_level(false);
	R4_set_level(true);
	W4_set_level(true);
	B5_set_level(true);
	G5_set_level(false);
	R5_set_level(true);
	W5_set_level(true);
	B6_set_level(true);
	G6_set_level(false);
	R6_set_level(true);
	W6_set_level(true);
	B7_set_level(true);
	G7_set_level(false);
	R7_set_level(true);
	W7_set_level(true);
	B8_set_level(true);
	G8_set_level(false);
	R8_set_level(true);
	W8_set_level(true);
	B9_set_level(true);
	G9_set_level(false);
	R9_set_level(true);
	W9_set_level(true);
	B10_set_level(true);
	G10_set_level(false);
	R10_set_level(true);
	W10_set_level(true);
	_delay_ms(500);
	
	B1_set_level(true);
	G1_set_level(true);
	R1_set_level(false);
	W1_set_level(true);
	B2_set_level(true);
	G2_set_level(true);
	R2_set_level(false);
	W2_set_level(true);
	B3_set_level(true);
	G3_set_level(true);
	R3_set_level(false);
	W3_set_level(true);
	B4_set_level(true);
	G4_set_level(true);
	R4_set_level(false);
	W4_set_level(true);
	B5_set_level(true);
	G5_set_level(true);
	R5_set_level(false);
	W5_set_level(true);
	B6_set_level(true);
	G6_set_level(true);
	R6_set_level(false);
	W6_set_level(true);
	B7_set_level(true);
	G7_set_level(true);
	R7_set_level(false);
	W7_set_level(true);
	B8_set_level(true);
	G8_set_level(true);
	R8_set_level(false);
	W8_set_level(true);
	B9_set_level(true);
	G9_set_level(true);
	R9_set_level(false);
	W9_set_level(true);
	B10_set_level(true);
	G10_set_level(true);
	R10_set_level(false);
	W10_set_level(true);
	_delay_ms(500);
	
	B1_set_level(true);
	G1_set_level(false);
	R1_set_level(false);
	W1_set_level(true);
	B2_set_level(true);
	G2_set_level(false);
	R2_set_level(false);
	W2_set_level(true);
	B3_set_level(true);
	G3_set_level(false);
	R3_set_level(false);
	W3_set_level(true);
	B4_set_level(true);
	G4_set_level(false);
	R4_set_level(false);
	W4_set_level(true);
	B5_set_level(true);
	G5_set_level(false);
	R5_set_level(false);
	W5_set_level(true);
	B6_set_level(true);
	G6_set_level(false);
	R6_set_level(false);
	W6_set_level(true);
	B7_set_level(true);
	G7_set_level(false);
	R7_set_level(false);
	W7_set_level(true);
	B8_set_level(true);
	G8_set_level(false);
	R8_set_level(false);
	W8_set_level(true);
	B9_set_level(true);
	G9_set_level(false);
	R9_set_level(false);
	W9_set_level(true);
	B10_set_level(true);
	G10_set_level(false);
	R10_set_level(false);
	W10_set_level(true);
	_delay_ms(500);
	
	B1_set_level(false);
	G1_set_level(true);
	R1_set_level(false);
	W1_set_level(true);
	B2_set_level(false);
	G2_set_level(true);
	R2_set_level(false);
	W2_set_level(true);
	B3_set_level(false);
	G3_set_level(true);
	R3_set_level(false);
	W3_set_level(true);
	B4_set_level(false);
	G4_set_level(true);
	R4_set_level(false);
	W4_set_level(true);
	B5_set_level(false);
	G5_set_level(true);
	R5_set_level(false);
	W5_set_level(true);
	B6_set_level(false);
	G6_set_level(true);
	R6_set_level(false);
	W6_set_level(true);
	B7_set_level(false);
	G7_set_level(true);
	R7_set_level(false);
	W7_set_level(true);
	B8_set_level(false);
	G8_set_level(true);
	R8_set_level(false);
	W8_set_level(true);
	B9_set_level(false);
	G9_set_level(true);
	R9_set_level(false);
	W9_set_level(true);
	B10_set_level(false);
	G10_set_level(true);
	R10_set_level(false);
	W10_set_level(true);
	_delay_ms(500);
	
	B1_set_level(false);
	G1_set_level(false);
	R1_set_level(true);
	W1_set_level(true);
	B2_set_level(false);
	G2_set_level(false);
	R2_set_level(true);
	W2_set_level(true);
	B3_set_level(false);
	G3_set_level(false);
	R3_set_level(true);
	W3_set_level(true);
	B4_set_level(false);
	G4_set_level(false);
	R4_set_level(true);
	W4_set_level(true);
	B5_set_level(false);
	G5_set_level(false);
	R5_set_level(true);
	W5_set_level(true);
	B6_set_level(false);
	G6_set_level(false);
	R6_set_level(true);
	W6_set_level(true);
	B7_set_level(false);
	G7_set_level(false);
	R7_set_level(true);
	W7_set_level(true);
	B8_set_level(false);
	G8_set_level(false);
	R8_set_level(true);
	W8_set_level(true);
	B9_set_level(false);
	G9_set_level(false);
	R9_set_level(true);
	W9_set_level(true);
	B10_set_level(false);
	G10_set_level(false);
	R10_set_level(true);
	W10_set_level(true);
	_delay_ms(500);
	
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
	_delay_ms(500);
}


void Test_I2C (void) {
	//for (uint8_t i=0;i<LEN;i++)USART_1_write(data_array[i]);
	I2C_0_writeNBytes(SLAVE_ADRESS, data_array , LEN);
	_delay_ms(1000);
	I2C_0_readDataBlock_EEPROM(SLAVE_ADRESS, address_arr, 2 , read_array, LEN ) ;
	//for (uint8_t i=0;i<LEN;i++)USART_1_write(read_array[i]);
	_delay_ms(1000);
} 
void Test_UART (void) {
	USART_0_write('s');
	USART_1_write('a');
	//_delay_ms(1000);
} 