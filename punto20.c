#include "MKL25Z4.h"

int main (){
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTB_MASK;
    PTA -> PDDR |= 0X00000000;
    PTB -> PDDR |= 0XFFFFFFFF;
    int arrayPinB0[]={0,1};
    int arrayPinB1[]={2,3};
    int arrayPinB2[]={4,5};
    int arrayPinB3[]={6,7};
    
    while(1){
       uint32_t EST_B0 =  PTB -> PDIR & (1u<<0);
       uint32_t EST_B1 =  PTB -> PDIR & (1u<<1);
       uint32_t EST_B2 =  PTB -> PDIR & (1u<<2);
       uint32_t EST_B3 =  PTB -> PDIR & (1u<<3);
            if(EST_B0==1){
                
                 for(int i=0;i<2;i++){
                PTA -> PSOR |= (1u<<arrayPinB0[i]);
                PTA -> PSOR |= (0u<<arrayPinB1[i]);
                PTA -> PSOR |= (0u<<arrayPinB2[i]);
                PTA -> PSOR |= (0u<<arrayPinB3[i]);
                 }
            }if(EST_B1==1){
                for(int i=0;i<2;i++){
                PTA -> PSOR |= (1u<<arrayPinB1[i]);
                PTA -> PSOR |= (0u<<arrayPinB0[i]);
                PTA -> PSOR |= (0u<<arrayPinB2[i]);
                PTA -> PSOR |= (0u<<arrayPinB3[i]);            
                }
            }if(EST_B2==1){
                for(int i=0;i<2;i++){
                PTA -> PSOR |= (1u<<arrayPinB2[i]);
                PTA -> PSOR |= (0u<<arrayPinB0[i]);
                PTA -> PSOR |= (0u<<arrayPinB1[i]);
                PTA -> PSOR |= (0u<<arrayPinB3[i]);
            }}if(EST_B3==1){
                for(int i=0;i<2;i++){
                PTA -> PSOR |= (1u<<arrayPinB3[i]);
                PTA -> PSOR |= (0u<<arrayPinB0[i]);
                PTA -> PSOR |= (0u<<arrayPinB2[i]);
                PTA -> PSOR |= (0u<<arrayPinB1[i]);


        }
        

        }return 0;
    }
}