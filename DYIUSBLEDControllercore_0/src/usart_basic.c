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

/**
 * \defgroup doc_driver_usart_basic USART Basic
 * \ingroup doc_driver_usart
 *
 * \section doc_driver_usart_basic_rev Revision History
 * - v0.0.0.1 Initial Commit
 *
 *@{
 */
#include <compiler.h>
#include <clock_config.h>
#include <usart_basic.h>
#include <atomic.h>
#include <stdio.h>
#if 1
#if defined(__GNUC__)

int USART_0_printCHAR(char character, FILE *stream)
{
	USART_0_write(character);
	return 0;
}

FILE USART_0_stream = FDEV_SETUP_STREAM(USART_0_printCHAR, NULL, _FDEV_SETUP_WRITE);

#elif defined(__ICCAVR__)

int putchar(int outChar)
{
	USART_0_write(outChar);
	return outChar;
}
#endif
#endif
//#if 0
//
//#if defined(__GNUC__)
//
//int USART_1_printCHAR(char character, FILE *stream)
//{
	//USART_1_write(character);
	//return 0;
//}
//
//FILE USART_1_stream = FDEV_SETUP_STREAM(USART_1_printCHAR, NULL, _FDEV_SETUP_WRITE);
//
//#elif defined(__ICCAVR__)
//
//int putchar(int outChar)
//{
	//USART_1_write(outChar);
	//return outChar;
//}
//#endif
//#endif
/**
 * \brief Initialize USART interface
 * If module is configured to disabled state, the clock to the USART is disabled
 * if this is supported by the device's clock system.
 *
 * \return Initialization status.
 * \retval 0 the USART init was successful
 * \retval 1 the USART init was not successful
 */
int8_t USART_0_init()
{

	USART0.BAUD = (uint16_t)USART0_BAUD_RATE(115200); /* set baud rate register */

	// USART0.CTRLA = 0 << USART_ABEIE_bp /* Auto-baud Error Interrupt Enable: disabled */
	//		 | 0 << USART_DREIE_bp /* Data Register Empty Interrupt Enable: disabled */
	//		 | 0 << USART_LBME_bp /* Loop-back Mode Enable: disabled */
	//		 | USART_RS485_DISABLE_gc /* RS485 Mode disabled */
	//		 | 0 << USART_RXCIE_bp /* Receive Complete Interrupt Enable: disabled */
	//		 | 0 << USART_RXSIE_bp /* Receiver Start Frame Interrupt Enable: disabled */
	//		 | 0 << USART_TXCIE_bp; /* Transmit Complete Interrupt Enable: disabled */

	USART0.CTRLB = 0 << USART_MPCM_bp       /* Multi-processor Communication Mode: disabled */
	               | 0 << USART_ODME_bp     /* Open Drain Mode Enable: disabled */
	               | 1 << USART_RXEN_bp     /* Receiver Enable: enabled */
	               | USART_RXMODE_NORMAL_gc /* Normal mode */
	               | 0 << USART_SFDEN_bp    /* Start Frame Detection Enable: disabled */
	               | 1 << USART_TXEN_bp;    /* Transmitter Enable: enabled */

	// USART0.CTRLC = USART_CMODE_ASYNCHRONOUS_gc /* Asynchronous Mode */
	//		 | USART_CHSIZE_8BIT_gc /* Character size: 8 bit */
	//		 | USART_PMODE_DISABLED_gc /* No Parity */
	//		 | USART_SBMODE_1BIT_gc; /* 1 stop bit */

	// USART0.DBGCTRL = 0 << USART_DBGRUN_bp; /* Debug Run: disabled */

	// USART0.EVCTRL = 0 << USART_IREI_bp; /* IrDA Event Input Enable: disabled */

	// USART0.RXPLCTRL = 0x0 << USART_RXPL_gp; /* Receiver Pulse Length: 0x0 */

	// USART0.TXPLCTRL = 0x0 << USART_TXPL_gp; /* Transmit pulse length: 0x0 */
#if defined(__GNUC__)
stdout = &USART_0_stream;
#endif
	return 0;
}

/**
 * \brief Enable RX and TX in USART_0
 * 1. If supported by the clock system, enables the clock to the USART
 * 2. Enables the USART module by setting the RX and TX enable-bits in the USART control register
 *
 * \return Nothing
 */
void USART_0_enable()
{
	USART0.CTRLB |= USART_RXEN_bm | USART_TXEN_bm;
}

/**
 * \brief Enable RX in USART_0
 * 1. If supported by the clock system, enables the clock to the USART
 * 2. Enables the USART module by setting the RX enable-bit in the USART control register
 *
 * \return Nothing
 */
void USART_0_enable_rx()
{
	USART0.CTRLB |= USART_RXEN_bm;
}

/**
 * \brief Enable TX in USART_0
 * 1. If supported by the clock system, enables the clock to the USART
 * 2. Enables the USART module by setting the TX enable-bit in the USART control register
 *
 * \return Nothing
 */
void USART_0_enable_tx()
{
	USART0.CTRLB |= USART_TXEN_bm;
}

/**
 * \brief Disable USART_0
 * 1. Disables the USART module by clearing the enable-bit(s) in the USART control register
 * 2. If supported by the clock system, disables the clock to the USART
 *
 * \return Nothing
 */
void USART_0_disable()
{
	USART0.CTRLB &= ~(USART_RXEN_bm | USART_TXEN_bm);
}

/**
 * \brief Get recieved data from USART_0
 *
 * \return Data register from USART_0 module
 */
uint8_t USART_0_get_data()
{
	return USART0.RXDATAL;
}

/**
 * \brief Check if the usart can accept data to be transmitted
 *
 * \return The status of USART TX data ready check
 * \retval false The USART can not receive data to be transmitted
 * \retval true The USART can receive data to be transmitted
 */
bool USART_0_is_tx_ready()
{
	return (USART0.STATUS & USART_DREIF_bm);
}

/**
 * \brief Check if the USART has received data
 *
 * \return The status of USART RX data ready check
 * \retval true The USART has received data
 * \retval false The USART has not received data
 */
bool USART_0_is_rx_ready()
{
	return (USART0.STATUS & USART_RXCIF_bm);
}

/**
 * \brief Check if USART_0 data is transmitted
 *
 * \return Receiver ready status
 * \retval true  Data is not completely shifted out of the shift register
 * \retval false Data completely shifted out if the USART shift register
 */
bool USART_0_is_tx_busy()
{
	return (!(USART0.STATUS & USART_TXCIF_bm));
}

/**
 * \brief Read one character from USART_0
 *
 * Function will block if a character is not available.
 *
 * \return Data read from the USART_0 module
 */
uint8_t USART_0_read()
{
	while (!(USART0.STATUS & USART_RXCIF_bm));
	return USART0.RXDATAL;
}

/**
 * \brief Write one character to USART_0
 *
 * Function will block until a character can be accepted.
 *
 * \param[in] data The character to write to the USART
 *
 * \return Nothing
 */
void USART_0_write(const uint8_t data)
{
	while (!(USART0.STATUS & USART_DREIF_bm));
	USART0.TXDATAL = data;
}


/* Static Variables holding the ring buffer used in IRQ mode */
static uint8_t          USART_1_rxbuf[RX_FRAME_SIZE];
static volatile uint8_t USART_1_rx_head;
static volatile uint8_t USART_1_rx_tail;
static volatile uint8_t USART_1_rx_elements;
static uint8_t          USART_1_txbuf[TX_FRAME_SIZE];
static volatile uint8_t USART_1_tx_head;
static volatile uint8_t USART_1_tx_tail;
static volatile uint8_t USART_1_tx_elements;
volatile uint8_t frheader=0,frcount=0;

uint8_t comm_chk_sum(uint8_t *data,uint8_t StartIndex,uint8_t data_size,Chk_Sum_Typedef chk_sum_t)
{
	uint16_t sum=0;
	uint8_t chk_sum=0;
	for(uint8_t i=StartIndex;i<data_size;i++) {sum+=data[i];}
	if(chk_sum_t==EVEN) chk_sum=((uint8_t)(((sum)>>8)&0xFF));
	else chk_sum=((uint8_t)((sum)&0xFF));
	return(chk_sum);
}

unsigned char comm_get_RXbuffer(unsigned char index)
{
	return(USART_1_rxbuf[index]);
}
void comm_set_TXbuffer(unsigned char index,unsigned char data)
{
	USART_1_txbuf[index]=data;
}
static volatile uint8_t new_fram_status_flag=0;

uint8_t new_fram_status_flag_get(void)
{
	return new_fram_status_flag;
}
void new_fram_status_flag_clear(void)
{
	new_fram_status_flag=0;
}
void comm_set_data( uint16_t data)
{
	for (unsigned char i=0;i<TX_FRAME_SIZE;i++) {USART_1_txbuf[i]=0x00;}
	USART_1_txbuf[TX_HEADER]=COMM_FRAME_HEADER;
	USART_1_txbuf[TX_SOURCE_ID]=COMM_SOURCE_ID;
	USART_1_txbuf[TX_DESTINATION_ID]=COMM_DESTINATION_ID;
	USART_1_txbuf[TX_ROW_HIGH]=(uint8_t)((data>>8)&0xFF);
	USART_1_txbuf[TX_ROW_LOW]=(uint8_t)(data&0xFF);
	USART_1_txbuf[TX_CHECK_SUM_EVEN]=comm_chk_sum(USART_1_txbuf,3,TX_FRAME_SIZE-2,EVEN);
	USART_1_txbuf[TX_CHECK_SUM_ODD]=comm_chk_sum(USART_1_txbuf,3,TX_FRAME_SIZE-2,ODD);
	for (uint8_t i=0;i<TX_FRAME_SIZE;i++)USART_1_write(USART_1_txbuf[i]);
}
void USART_1_default_rx_isr_cb(void)
{
	uint8_t data;
	/* Read the received data */
	data = USART3.RXDATAL;
	//USART_0_write(data);
	//receiving my message
	if (frheader == 0x03)
	{
		USART_1_rxbuf[frcount] = data;
		if (frcount == RX_FRAME_SIZE-1)
		{
			if((USART_1_rxbuf[RX_CHECK_SUM_EVEN]==comm_chk_sum(USART_1_rxbuf,0,RX_FRAME_SIZE-2,EVEN))
			&&(USART_1_rxbuf[RX_CHECK_SUM_ODD]==comm_chk_sum(USART_1_rxbuf,0,RX_FRAME_SIZE-2,ODD)))
			{
				USART_1_write(0x06);	//send acknowledge
				if (USART_1_rxbuf[RX_CON_COMMAND]==0x5)
				{
					new_fram_status_flag=true;
					//printf("Data is correct\r\n");
				}	
			}
			//else printf("ERROR\r\n");
			frheader = 0; frcount = 0;
		}
		else
		{
			frcount++;
		}
	}
	else
	{
		if ((frheader == 0x02)&&(data ==COMM_SOURCE_ID)){frheader = 0x03;/*printf("COMM DESTINATION ID verify\r\n");*/}
		if ((frheader == 0x01)&&(data==COMM_DESTINATION_ID)){frheader = 0x02;/*printf("COMM SOURCE ID verify\r\n");*/}else if (frheader == 0x01){frheader = 0;}
		if ((frheader == 0x00)&&(data == COMM_FRAME_HEADER)){frheader = 0x01;/*printf("COMM FRAME HEADER capture\r\n");*/}
	}	
}
ISR(USART3_RXC_vect)
{
	//uint8_t data;
	///* Read the received data */
	//data = USART3.RXDATAL;
	//USART_0_write(data);
	USART_1_default_rx_isr_cb();
}

/**
 * \brief Initialize USART interface
 * If module is configured to disabled state, the clock to the USART is disabled
 * if this is supported by the device's clock system.
 *
 * \return Initialization status.
 * \retval 0 the USART init was successful
 * \retval 1 the USART init was not successful
 */
int8_t USART_1_init()
{
	USART3.BAUD = (uint16_t)USART3_BAUD_RATE(115200); /* set baud rate register */
	 USART3.CTRLA = 0 << USART_ABEIE_bp /* Auto-baud Error Interrupt Enable: disabled */
			 | 0 << USART_DREIE_bp /* Data Register Empty Interrupt Enable: disabled */
			 | 0 << USART_LBME_bp /* Loop-back Mode Enable: disabled */
			 | USART_RS485_DISABLE_gc /* RS485 Mode disabled */
			 | 1 << USART_RXCIE_bp /* Receive Complete Interrupt Enable: disabled */
			 | 0 << USART_RXSIE_bp /* Receiver Start Frame Interrupt Enable: disabled */
			 | 0 << USART_TXCIE_bp; /* Transmit Complete Interrupt Enable: disabled */
	USART3.CTRLB = 0 << USART_MPCM_bp       /* Multi-processor Communication Mode: disabled */
	               | 0 << USART_ODME_bp     /* Open Drain Mode Enable: disabled */
	               | 1 << USART_RXEN_bp     /* Receiver Enable: enabled */
	               | USART_RXMODE_NORMAL_gc /* Normal mode */
	               | 0 << USART_SFDEN_bp    /* Start Frame Detection Enable: disabled */
	               | 1 << USART_TXEN_bp;    /* Transmitter Enable: enabled */
	// USART3.CTRLC = USART_CMODE_ASYNCHRONOUS_gc /* Asynchronous Mode */
	//		 | USART_CHSIZE_8BIT_gc /* Character size: 8 bit */
	//		 | USART_PMODE_DISABLED_gc /* No Parity */
	//		 | USART_SBMODE_1BIT_gc; /* 1 stop bit */

	// USART3.DBGCTRL = 0 << USART_DBGRUN_bp; /* Debug Run: disabled */

	// USART3.EVCTRL = 0 << USART_IREI_bp; /* IrDA Event Input Enable: disabled */

	// USART3.RXPLCTRL = 0x0 << USART_RXPL_gp; /* Receiver Pulse Length: 0x0 */

	// USART3.TXPLCTRL = 0x0 << USART_TXPL_gp; /* Transmit pulse length: 0x0 */

//#if defined(__GNUC__)
	//stdout = &USART_1_stream;
//#endif

	return 0;
}

/**
 * \brief Enable RX and TX in USART_1
 * 1. If supported by the clock system, enables the clock to the USART
 * 2. Enables the USART module by setting the RX and TX enable-bits in the USART control register
 *
 * \return Nothing
 */
void USART_1_enable()
{
	USART3.CTRLB |= USART_RXEN_bm | USART_TXEN_bm;
}

/**
 * \brief Enable RX in USART_1
 * 1. If supported by the clock system, enables the clock to the USART
 * 2. Enables the USART module by setting the RX enable-bit in the USART control register
 *
 * \return Nothing
 */
void USART_1_enable_rx()
{
	USART3.CTRLB |= USART_RXEN_bm;
}

/**
 * \brief Enable TX in USART_1
 * 1. If supported by the clock system, enables the clock to the USART
 * 2. Enables the USART module by setting the TX enable-bit in the USART control register
 *
 * \return Nothing
 */
void USART_1_enable_tx()
{
	USART3.CTRLB |= USART_TXEN_bm;
}

/**
 * \brief Disable USART_1
 * 1. Disables the USART module by clearing the enable-bit(s) in the USART control register
 * 2. If supported by the clock system, disables the clock to the USART
 *
 * \return Nothing
 */
void USART_1_disable()
{
	USART3.CTRLB &= ~(USART_RXEN_bm | USART_TXEN_bm);
}

/**
 * \brief Get recieved data from USART_1
 *
 * \return Data register from USART_1 module
 */
uint8_t USART_1_get_data()
{
	return USART3.RXDATAL;
}

/**
 * \brief Check if the usart can accept data to be transmitted
 *
 * \return The status of USART TX data ready check
 * \retval false The USART can not receive data to be transmitted
 * \retval true The USART can receive data to be transmitted
 */
bool USART_1_is_tx_ready()
{
	return (USART3.STATUS & USART_DREIF_bm);
}

/**
 * \brief Check if the USART has received data
 *
 * \return The status of USART RX data ready check
 * \retval true The USART has received data
 * \retval false The USART has not received data
 */
bool USART_1_is_rx_ready()
{
	return (USART3.STATUS & USART_RXCIF_bm);
}

/**
 * \brief Check if USART_1 data is transmitted
 *
 * \return Receiver ready status
 * \retval true  Data is not completely shifted out of the shift register
 * \retval false Data completely shifted out if the USART shift register
 */
bool USART_1_is_tx_busy()
{
	return (!(USART3.STATUS & USART_TXCIF_bm));
}

/**
 * \brief Read one character from USART_1
 *
 * Function will block if a character is not available.
 *
 * \return Data read from the USART_1 module
 */
uint8_t USART_1_read()
{
	while (!(USART3.STATUS & USART_RXCIF_bm))
		;
	return USART3.RXDATAL;
}

/**
 * \brief Write one character to USART_1
 *
 * Function will block until a character can be accepted.
 *
 * \param[in] data The character to write to the USART
 *
 * \return Nothing
 */
void USART_1_write(const uint8_t data)
{
	while (!(USART3.STATUS & USART_DREIF_bm))
		;
	USART3.TXDATAL = data;
}
