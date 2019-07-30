// `ifndef ILI_CTRL_SV
//     `define ILI_CTRL_SV
//
// module ili_ctrl
// import pkg_ili9341::*;
// #(
//     parameter DW = 8
// )(
// 	input  clk,
// 	input  rst,
//
// 	input  i_ena_btn,
// 	input  i_resets_sent,
// 	input  i_command_sent,
//
// 	output o_reset_ini_ena,
// 	output o_send_comm_ena,
// 	output o_command
// );
//   /*------------------------------------- STATES -------------------------------------*/
//
//   typedef enum logic [2:0] {IDLE,RESET,INIT,LOOP} state_t;
//   state_t    state = IDLE;
//
//   /*----------------------------------- REGISTERS ------------------------------------*/
//
//   logic r_send_comm_ena;
//   logic r_reset_ini_ena;
//   logic r_command;
//
//   /*---------------------------------- FSM STATES ------------------------------------*/


#include <stdio.h>
#include <stdlib.h>


int main(void){

    int n   = 0;
    int max = 0;

    printf("N: ");
    scanf("%d", &n);

    int str[n];

    for (int x = 0; x < n;x++){
        printf("Val %d del arreglo: ",x);
        scanf("%d", &str[n]);
        if (str[n] > max){
            max = str[n];
        }
    }

    printf("Max: %d",max);


    return 0;
}
