/*
 * uart.h
 *
 *  Created on: December 11, 2019
 *      Author: Diesson Stefano Allebrandt e Felipe Rodrigues Broering
 *      Instituto Federal de Santa Catarina
 * 
 * 
 */


#include "utils.h"
#include "tft.h"
#include "hardware.h"
#include <limits.h>


int main(){
	
	TFT_DATA0 = 0xFFFFFFFF;
	
	delay_(250);
	
	TFT_DATA2 = 0x000A000A;
	TFT_DATA1 = 0x000F000F;
	TFT_DATA0 = 0x0002FF00;
	
	delay_(250);
    
	TFT_DATA0 = 0x000100FF;
	
    while(1){

	}
	return 0;
}
