/*
 * TestAllLoads.h
 *
 * Created: 8/17/2022 10:50:39 PM
 *  Author: Sayed Ibraheem
 */ 


#ifndef TESTALLLOADS_H_
#define TESTALLLOADS_H_
#include <atmel_start.h>
#include <i2c_master.h>
#include <i2c_simple_master.h>
#include <clock_config.h>
#include <util/delay.h>
#define SLAVE_ADRESS	0b1010000
#define LEN				6

void Test_All_Loads_init (void) ;
void Test_RGB            (void) ;
void Test_I2C			 (void) ;
void Test_UART			 (void) ;



#endif /* TESTALLLOADS_H_ */