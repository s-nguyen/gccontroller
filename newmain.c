/* 
 * File:   newmain.c
 * Author: Stephen
 *
 * Created on July 12, 2015, 9:48 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <p24FJ64GA002.h>
#include "functions.h"
_CONFIG1( JTAGEN_OFF & GCP_OFF & GWRP_OFF & BKBUG_ON & COE_ON & ICS_PGx1 &
    FWDTEN_OFF & WINDIS_OFF & FWPSA_PR128 & WDTPS_PS32768 )
_CONFIG2( IESO_OFF & SOSCSEL_SOSC & WUTSEL_LEG & FNOSC_SOSC & FCKSM_CSDCMD & OSCIOFNC_OFF &
    IOL1WAY_OFF & I2C1SEL_PRI & POSCMOD_XT )
 
  
void initSW1(){
    TRISBbits.TRISB5 = 1;
    IFS1bits.CNIF = 0;
    IEC1bits.CNIE = 1;
    CNEN2bits.CN27IE = 1;
}

int main(void) {
    initSW1();
    AD1PCFG = 0xFFFF; // All pins to digital
    ODCBbits.ODB2 = 1;
    TRISBbits.TRISB2 = 0;

    //use LATBbits.LATB2
    LATBbits.LATB2 = 1; //1 is high
  
    
    //set pin to open drain
    
    while(1){
        //assembly();
        // init();
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
         // assembly();
        //asmVariable = 0x1234;          
    }
    return 0;
}

void _ISR _CNInterrupt(void){
     
    IFS1bits.CNIF = 0;
    if(PORTBbits.RB5 == 0){
     
    }
    else if(PORTBbits.RB5 == 1){
        toggle();
        
    }
  
}

