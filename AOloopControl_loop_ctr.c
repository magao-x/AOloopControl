/**
 * @file    AOloopControl_loop_ctr.c 
 * @brief   AO loop Control functions wave front sensor and deformable mirror 
 * 
 * LOOP CONTROL INTERFACE
 *  
 *
 * 
 * @bug No known bugs.
 * 
 */



#define _GNU_SOURCE

#include "AOloopControl.h"
#include "string.h"


extern AOLOOPCONTROL_CONF *AOconf; // configuration - this can be an array
extern AOloopControl_var aoloopcontrol_var;




/* =============================================================================================== */
/* =============================================================================================== */
/** @name AOloopControl - 3.   LOOP CONTROL INTERFACE - AOloopControl_loop_ctr.c
 *  Set parameters */
/* =============================================================================================== */
/* =============================================================================================== */

int_fast8_t AOloopControl_setLoopNumber(long loop)
{


    printf("LOOPNUMBER = %ld\n", loop);
    aoloopcontrol_var.LOOPNUMBER = loop;

    /** append process name with loop number */


    return 0;
}


int_fast8_t AOloopControl_setparam(long loop, const char *key, double value)
{
    int pOK=0;
    char kstring[200];



    strcpy(kstring, "PEperiod");
    if((strncmp (key, kstring, strlen(kstring)) == 0)&&(pOK==0))
    {
        //AOconf[loop].WFScamPEcorr_period = (long double) value;
        pOK = 1;
    }

    if(pOK==0)
        printf("Parameter not found\n");



    return (0);
}

