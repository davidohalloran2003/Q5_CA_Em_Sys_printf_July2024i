#include "mbed.h"

/*
if button is pressed - print 'buttn pressed' on coolterm
*/

InterruptIn buttn(PC_13);


volatile int myflag = 0;

void buttnRise(){
    //ISR service routine
    myflag = 1;

}

int main()
{
        buttn.rise(&buttnRise);
    while (1) {
        if(myflag == 1){
            printf("buttn pressed \r\n");
            myflag = 0;
        }   

        }
    }
