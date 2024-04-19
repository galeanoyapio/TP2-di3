#include "MKL25Z4.h"

int main (){
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTB_MASK;
    PTA -> PDDR |= 0X00000000;
    PTB -> PDDR |= 0XFFFFFFFF;
    
    while(1){
       uint32_t EST_A =  PTA -> PDIR;
        PTB -> PDOR|=((EST_A) ^ 0x23);
    }
    return 0;
}