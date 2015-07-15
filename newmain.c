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
_CONFIG2( IESO_OFF & SOSCSEL_SOSC & WUTSEL_LEG & FNOSC_PRIPLL & FCKSM_CSDCMD & OSCIOFNC_OFF &
    IOL1WAY_OFF & I2C1SEL_PRI & POSCMOD_XT )
 
  

int main(void) {
    AD1PCFG = 0xFFFF; // All pins to digital
    TRISBbits.TRISB2 = 0;
    TRISBbits.TRISB2 = 1;
    //use LATBbits.LATB2
    LATBbits.LATB2 = 1;
    LATBbits.LATB2 = 0;
    
    //set pin to open drain
    
    while(1){
         init();
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
//        TRISB = 0xFFFF;
          assembly();
        //asmVariable = 0x1234;          
    }
    return 0;
}

