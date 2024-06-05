/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

/*TEST QUE PRUEBA LA FUNCIONALIDAD DE LOS TC[129,1] y TC[129,2]*/
#define FT_UAH_EXP_SERV_129_0080

/*TEST QUE PRUEBA LA FUNCIONALIDAD DE LOS TC[129,1] y TC[129,2] ANTE VALORES DE K y V FUERA DE RANGO*/
// #define FT_UAH_EXP_SERV_129_0090

//TODO

/*TEST QUE PRUEBA LA FUNCIONALIDAD DE LOS TC[129,1] y TC[129,2]*/

#ifdef FT_UAH_EXP_SERV_129_0080
#define FT_UAH_EXP_SERV_129_0080_step0 (UNITIME_AFTER_POWER_ON + 4)
#define FT_UAH_EXP_SERV_129_0080_step1 (UNITIME_AFTER_POWER_ON + 5)
#define FT_UAH_EXP_SERV_129_0080_step2 (UNITIME_AFTER_POWER_ON + 60)

EmuGSS_TCProgram129_2 prog_FT_0080_step_0(FT_UAH_EXP_SERV_129_0080_step0,
                "FT_UAH_EXP_SERV_129_0080 step 0, Set Kp", 0.3, 0.3);

EmuGSS_TCProgram129_1 prog_FT_0080_step_1( FT_UAH_EXP_SERV_129_0080_step1,
                    "FT_UAH_EXP_SERV_129_0080 step 1, Set Command Vx and Vy ", -0.9 ,0.5 );

EmuGSS_TCProgram128_1 prog_FT_0080_step_2(FT_UAH_EXP_SERV_129_0080_step2,
                    "FT_UAH_EXP_SERV_129_0080  001 step 2, Finish test "); // Finish test

#endif

#ifdef FT_UAH_EXP_SERV_129_0090
#define FT_UAH_EXP_SERV_129_0090_step0 (UNITIME_AFTER_POWER_ON + 50)
#define FT_UAH_EXP_SERV_129_0090_step1 (UNITIME_AFTER_POWER_ON + 52)
#define FT_UAH_EXP_SERV_129_0090_step2 (UNITIME_AFTER_POWER_ON + 100)

// Establecemos valores fuera del rango propuesto para que se genere la TM[1,8]
EmuGSS_TCProgram129_2 prog_FT_0090_step_0(FT_UAH_EXP_SERV_129_0090_step0,
                "FT_UAH_EXP_SERV_129_0090 step 0, Set Kp", -0.3, -0.3);

EmuGSS_TCProgram129_1 prog_FT_0090_step_1( FT_UAH_EXP_SERV_129_0090_step1,
                    "FT_UAH_EXP_SERV_129_0090 step 1, Set Command Vx and Vy ",-1.1 ,1.2 );

EmuGSS_TCProgram128_1 prog_FT_0090_step_2(FT_UAH_EXP_SERV_129_0090_step2,
                    "FT_UAH_EXP_SERV_129_0090  001 step 2, Finish test "); // Finish test

#endif



