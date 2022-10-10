/**
 * \file
 *
 * \brief USART basic driver.
 *
 (c) 2020 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

#ifndef USART_BASIC_H_INCLUDED
#define USART_BASIC_H_INCLUDED

#include <atmel_start.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Normal Mode, Baud register value */
#define USART0_BAUD_RATE(BAUD_RATE) ((float)(20000000 * 64 / (16 * (float)BAUD_RATE)) + 0.5)

typedef enum
{
	COMM_FRAME_HEADER =  0x1E,
	COMM_SOURCE_ID =     0xDC,
	COMM_DESTINATION_ID =0xAC
}Header;
typedef enum
{
	EVEN,
	ODD
}Chk_Sum_Typedef;
typedef enum
{
	RX_LED_PORT_0_1,
	RX_LED_PORT_2_3,
	RX_LED_PORT_4_5,
	RX_LED_PORT_6_7,
	RX_LED_PORT_8_9,
	RX_LED_PORT_10_11,
	RX_LED_PORT_12_13,
	RX_LED_PORT_14_15,
	RX_LED_PORT_16_17,
	RX_LED_PORT_18_19,
	RX_LED_PORT_20_21,
	RX_LED_PORT_22_23,
	RX_LED_PORT_24_25,
	RX_LED_PORT_26_27,
	RX_LED_PORT_28_29,
	RX_LED_PORT_30_31,
	RX_LED_PORT_32_33,
	RX_LED_PORT_34_35,
	RX_LED_PORT_36_37,
	RX_LED_PORT_38_39,
	RX_LED_PORT_40_41,
	RX_LED_PORT_42_43,
	RX_LED_PORT_44_45,
	RX_LED_PORT_46_47,
	RX_LED_PORT_48_49,
	RX_LED_PORT_50_51,
	RX_LED_PORT_52_53,
	RX_LED_PORT_54_55,
	RX_LED_PORT_56_57,
	RX_LED_PORT_58_59,
	RX_LED_PORT_60_61,
	RX_LED_PORT_62_63,
	RX_LED_PORT_64_65,
	RX_LED_PORT_66_67,
	RX_LED_PORT_68_69,
	RX_LED_PORT_70_71,
	RX_LED_PORT_72_73,
	RX_LED_PORT_74_75,
	RX_LED_PORT_76_77,
	RX_LED_PORT_78_79,
	RX_LED_PORT_80_81,
	RX_LED_PORT_82_83,
	RX_LED_PORT_84_85,
	RX_LED_PORT_86_87,
	RX_LED_PORT_88_89,
	RX_LED_PORT_90_91,
	RX_LED_PORT_92_93,
	RX_LED_PORT_94_95,
	RX_LED_PORT_96_97,
	RX_LED_PORT_98_99,
	RX_DELAY ,
	RX_ROW_HIGH ,
	RX_ROW_LOW ,
	RX_CON_COMMAND,
	RX_CHECK_SUM_ODD,
	RX_CHECK_SUM_EVEN,
	RX_FRAME_SIZE
}Rx_Frame_Bytes_t;
typedef enum
{
	TX_HEADER,
	TX_SOURCE_ID,
	TX_DESTINATION_ID,
	TX_ROW_HIGH ,
	TX_ROW_LOW ,
	//TX_ROW_cmd ,
	TX_CHECK_SUM_ODD,
	TX_CHECK_SUM_EVEN,
	TX_FRAME_SIZE
}Tx_Frame_Bytes_t;

int8_t USART_0_init();

void USART_0_enable();

void USART_0_enable_rx();

void USART_0_enable_tx();

void USART_0_disable();

uint8_t USART_0_get_data();

bool USART_0_is_tx_ready();

bool USART_0_is_rx_ready();

bool USART_0_is_tx_busy();

uint8_t USART_0_read(void);

void USART_0_write(const uint8_t data);

/* Normal Mode, Baud register value */
#define USART3_BAUD_RATE(BAUD_RATE) ((float)(20000000 * 64 / (16 * (float)BAUD_RATE)) + 0.5)

int8_t USART_1_init();

void USART_1_enable();

void USART_1_enable_rx();

void USART_1_enable_tx();

void USART_1_disable();

uint8_t USART_1_get_data();

bool USART_1_is_tx_ready();

bool USART_1_is_rx_ready();

bool USART_1_is_tx_busy();

uint8_t USART_1_read(void);

void USART_1_write(const uint8_t data);
void new_fram_status_flag_clear(void);
uint8_t new_fram_status_flag_get(void);
void comm_set_TXbuffer(unsigned char index,unsigned char data);
unsigned char comm_get_RXbuffer(unsigned char index);
void comm_set_data(uint16_t data);
uint8_t comm_chk_sum(uint8_t *data,uint8_t StartIndex,uint8_t data_size,Chk_Sum_Typedef chk_sum_t);
#ifdef __cplusplus
}
#endif

#endif /* USART_BASIC_H_INCLUDED */
