#include "MKL25Z4.h"

int main (){
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTB_MASK;
    PTA -> PDDR |= 0X00000000;
    PTB -> PDDR |= 0XFFFFFFFF;
    int arrayPinBpositivo[]={4,5,6,7};
    int arrayPinBnegativo[]={0,1,2,3};
    while(1){
       uint32_t EST_B =  PTB -> PDIR & (1u<<0);
            if(EST_B==0){
                
                 for(int i=0;i<4;i++){
                PTA -> PSOR |= (1u<<arrayPinBnegativo[i]);
                PTA -> PSOR |= (0u<<arrayPinBpositivo[i]);
                 }
            }else{
                for(int i=0;i<4;i++){
                PTA -> PSOR |= (0u<<arrayPinBnegativo[i]);
                PTA -> PSOR |= (1u<<arrayPinBpositivo[i]);
                }
            }


        }
        return 0;

        }
    