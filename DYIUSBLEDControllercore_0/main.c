#include <atmel_start.h>
#include <clock_config.h>
#include <util/delay.h>
#include <usart_basic.h>
#include <stdio.h>
#include <TestAllLoads.h>
#include <tca.h>
#include <RGB.h>
unsigned char mode=0;
#define MAX_HIGH_ADDRESS 0xF0
#define MAX_LOW_ADDRESS  0xF0
int main(void)
{
	/* Initializes MCU, drivers and middle ware */
	cli();
	atmel_start_init();
	RGB_init();
	sei();
	 uint8_t device_number=(VPORTA.IN&0x0f);
	 uint16_t max_row=0;
	 //printf("device_number: %d\r\n",device_number);
	// char str[]="hello world!\r\n";
	// printf("%s",str);
	// uint8_t i=0;while(str[i]){USART_0_write(str[i]);i++;}
	//Test_I2C();
	//printf("hello port 0\r\n");
	uint8_t led_row[RX_FRAME_SIZE+2]={0};
	uint8_t data_array[5]={0};
	uint16_t row_num=0;
	uint16_t address=0;
	uint8_t address_arr[2];
	address_arr[0]=MAX_LOW_ADDRESS;
	address_arr[1]=MAX_HIGH_ADDRESS;
	i2c_error_t i2c_error_status=I2C_0_readDataBlock_EEPROM(SLAVE_ADRESS, address_arr, 2 , data_array, 2) ;
	if (i2c_error_status==I2C_NOERR)
	{
		max_row=data_array[1];
		max_row=(max_row<<8)|data_array[0];
	}
	printf("read max_row:%d\r\n",max_row);
	if((max_row<0)||(max_row==0xffff))
	{
		max_row=0;
		data_array[0]=MAX_LOW_ADDRESS;data_array[1]=MAX_HIGH_ADDRESS;
		data_array[2]=0;data_array[3]=0;
		i2c_error_status=I2C_0_writeNBytes(SLAVE_ADRESS,data_array,4);
		if (i2c_error_status==I2C_NOERR)
		{
			i2c_error_status=I2C_0_readDataBlock_EEPROM(SLAVE_ADRESS, address_arr, 2 , data_array, 2) ;
			if (i2c_error_status==I2C_NOERR)
			{
				max_row=0;
				max_row=data_array[1];
				max_row=(max_row<<8)|data_array[0];
				if(max_row==0x00)
				printf("Clear max_row:%d\r\n",max_row);
			}
		}
	}
	else printf("max_row:%d\r\n",max_row);
	/* Replace with your application code */
	while (1)
	{
		if(device_number==0)
		{
			if ((comm_get_RXbuffer(RX_CON_COMMAND)==0x05)||(comm_get_RXbuffer(RX_CON_COMMAND)==0x02))
			{
				mode=2;
				RGB_init();
				if (comm_get_RXbuffer(RX_CON_COMMAND)==0x05)
					max_row=0;
			}	
		}
		else
		{
			mode=0;
		}
		switch (mode)
		{
			case 0:
			{
				//normal operation mode
				address =((51*row_num));
				// low address first element in array
				address_arr[0]=(uint8_t)(address&0xFF);
				address_arr[1]=(uint8_t)((address>>8)&0xFF);
				i2c_error_t i2c_error_status=I2C_0_readDataBlock_EEPROM(SLAVE_ADRESS,address_arr,2,led_row,51);
				if (i2c_error_status==I2C_NOERR)
				{
					counter_clear();
					printf("hello row_num: %d\r\n",row_num);
					//for (int i=0;i<50;i++)USART_0_write(led_row[i]);
					while(counter_get()<led_row[RX_DELAY])
					RGB_Set_color (led_row);
					row_num++;if (row_num>max_row)row_num=0;
					
				}
				break;	
			}
			case 1:
			{
				//test communication with app
				//test loads
				//test EEPROM 
				break;
			}
			case 2:
			{				
				 if(new_fram_status_flag_get())  //check for new row fram
				 {
					 //write row fram to EEPROM
					 //printf("new_fram_status_flag_get\r\n");
					 row_num=comm_get_RXbuffer(RX_ROW_HIGH);
					 row_num=(row_num<<8)|comm_get_RXbuffer(RX_ROW_LOW);
					 address =((51*row_num));
					 // low address first element in array
					 led_row[0]=(uint8_t)(address&0xFF);
					 led_row[1]=(uint8_t)((address>>8)&0xFF);
					 for (uint8_t i=0;i<RX_ROW_HIGH;i++)led_row[i+2]=comm_get_RXbuffer(i);
				     i2c_error_t i2c_error_status=I2C_0_writeNBytes(SLAVE_ADRESS,led_row,53);
					 if (i2c_error_status==I2C_NOERR)	//check if data written to EEPROM
					 {
						//for (int i=0;i<53;i++)USART_0_write(led_row[i]);
						 if(row_num>max_row)
						 {
							max_row=row_num;
							data_array[0]=(MAX_LOW_ADDRESS);data_array[1]=(MAX_HIGH_ADDRESS);
							data_array[2]=(uint8_t)(max_row&0xFF);data_array[3]=(uint8_t)((max_row>>8)&0xFF);
							i2c_error_status=I2C_0_writeNBytes(SLAVE_ADRESS,data_array,4);
							if (i2c_error_status==I2C_NOERR)printf("update max_row:%d\r\n",max_row); 
						 }
						printf("new_fram_status_flag_clear address:%d\r\n",address);
						 {
							//normal operation mode
							address =((51*row_num));
							// low address first element in array
							address_arr[0]=(uint8_t)(address&0xFF);
							address_arr[1]=(uint8_t)((address>>8)&0xFF);
							i2c_error_t i2c_error_status=I2C_0_readDataBlock_EEPROM(SLAVE_ADRESS,address_arr,2,led_row,51);
							if (i2c_error_status==I2C_NOERR)
							{
								//for (int i=0;i<51;i++)USART_0_write(led_row[i]);
								new_fram_status_flag_clear();
								comm_set_data(row_num);
								USART_1_write(0);
							}
							_delay_ms(50);
						}
						 // to app to receive new row fram
					 }
					 //else
					 //{
						 //printf("error EEPROM:%d\r\n",address);
					 //}
				 }
				break;
			}
			default:
			{
				break;
			} 
		}//switch
	}//while(1)
}//main()