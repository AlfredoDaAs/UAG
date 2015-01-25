/*
 * main implementation: use this 'C' sample to create your own application
 *
 */





#include "derivative.h" /* include peripheral declarations */


void cfgPorts(void);

int main(void)
{
	cfgPorts();
	
	GPIOB_PDDR = 0x00000000;
	
	
	for(;;) {	   
	   	
	}
	
	return 0;
}
void cfgPorts(void){
	
	SIM_SCGC5 =  SIM_SCGC5_PORTB_MASK;
	SIM_SCGC5 |=  SIM_SCGC5_PORTA_MASK; 
	
	PORTB_PCR18 = PORT_PCR_MUX(1);
	PORTB_PCR19 = PORT_PCR_MUX(1);
	
	//CONFIGURE PORTS AS OUTPUT
	GPIOB_PDDR = 0xFFFFFFFF;
}
