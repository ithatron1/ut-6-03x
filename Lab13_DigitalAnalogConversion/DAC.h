/*****************************************************************************

UTAustinX: UT.6.03x Embedded Systems - Shape the World
Lab 13: Digital-Analog Conversion

File Name: DAC.h

Description: Create a sinusoid sound wave using 4-bit DAC
and simulate C, D, E, and G notes of the piano.

Compatibility: EK-TM4C123GXL

Phi Luu
Portland, Oregon, United States
Created April 22, 2016
Updated July 17, 2016

*****************************************************************************/

// 4-bit DAC connected to PB3-PB0

//**********DAC_Init**********
// Initializes 4-bit DAC
// Inputs: None
// Outputs: None
void DAC_Init(void);

//**********DAC_Out**********
// Writes output to DAC
// Inputs: data    4-bit data, 0 to 15
// Outputs: None
void DAC_Out(unsigned long data);
