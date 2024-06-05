/*
 * emu_sc_pus_service129.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: user
 */


#include <stdio.h>

#include "public/emu_gss_v1.h"
#include "emu_gss/emu_gss_pus_service129.h"
#include "emu_gss/emu_gss_tc_program.h"
#include "public/icuasw_pus_services_iface_v1.h"
#define TC_129_1_APPDATA_LENGTH 8
#define TC_129_2_APPDATA_LENGTH 8



EmuGSS_TCProgram129_1::EmuGSS_TCProgram129_1(uint32_t uniTime2YK,
        					const char * brief,
							float CVx, float CVy)
       	   	   	   	   	   :EmuGSS_TCProgram(uniTime2YK,129,1,
       	   	   	   	   			   TC_129_1_APPDATA_LENGTH,brief){

	mCVx=CVx;
	mCVy=CVy;

    NewProgram(this);
}

void EmuGSS_TCProgram129_1::BuildTCAppData(tc_descriptor_t &tc_descriptor){
	SetNextFloat(mCVx);
	SetNextFloat(mCVy);
}

EmuGSS_TCProgram129_2::EmuGSS_TCProgram129_2(uint32_t uniTime2YK,
        					const char * brief,
							float KpX, float KpY)
       	   	   	   	   	   :EmuGSS_TCProgram(uniTime2YK,129,2,
       	   	   	   	   			   TC_129_2_APPDATA_LENGTH,brief){

	mKpX=KpX;
	mKpY=KpY;

    NewProgram(this);
}

void EmuGSS_TCProgram129_2::BuildTCAppData(tc_descriptor_t &tc_descriptor){

	SetNextFloat(mKpX);
	SetNextFloat(mKpY);

}
