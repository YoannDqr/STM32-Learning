/*******************************************************************************
* File Name      : 	main.c
* Author         : 	timmy00274672 (timmy00274672@gmail.com)
* Date           : 	06/09/2014
* Version        : 	Version 1.0
* Description    : 	This source file for ADC_Basic 
*******************************************************************************/
#include "main.h"
#include "stm32f10x_lib.h"

int main(void)
{

}

/**
*	open clock on APB2 : USART1 for communication
						 GPIOA PA[9:10] 
						 GPIOB PB0 is connected to VR3
						 ADC1

**/
void RCC_Configuration(void)
{

}

/**
*	PA9 as Tx in AF_PP mode @ 50 MHz
*	PA10 as Rx in floating mode
*	PB0 as analog signal in AIN mode
**/
void GPIO_Configuration(void)
{
	
}

/**
*	1.	Configurate ADC1 clock as PCLK2/4
*	2.	Mode : independent
		Scan Mode : enable
		Continuous Mode : enable
		Trigger : S/W
		Align : right
		Channel # : 1
	3.	ADC1 Channel
		Channel 8 (Default alternative function of PB0 is ADC_IN8.)
		Rank 1
		Sampling cycle : 55.5
	4.	Calibrate
**/
void ADC_Configuration(void)
{
	
}

/**
	Set the clock including CPOL, CPHA, LastBit
	Set the Frame including BaudRate, WordLength, StopBits, Parity, HardareFlowControl, Mode
**/
void USART_Configuration(void)
{
	
}