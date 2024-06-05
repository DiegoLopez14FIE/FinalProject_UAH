/*
 * emu_sc_pus_service17.h
 *
 *  Created on: Nov 12, 2023
 *      Author: user
 */

#ifndef EMU_SC_PUS_SERVICE129_H_
#define EMU_SC_PUS_SERVICE129_H_

class EmuGSS_TCProgram129_1:public EmuGSS_TCProgram{

	float mCVx;
	float mCVy;

	virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor);

public:

	EmuGSS_TCProgram129_1(uint32_t uniTime2YK,
                 const char * brief,float CVx,float CVy);
};


class EmuGSS_TCProgram129_2:public EmuGSS_TCProgram{

	float mKpX;
	float mKpY;

	virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor);

public:

	EmuGSS_TCProgram129_2(uint32_t uniTime2YK,
                 const char * brief,float KpX,float KpY);
};





#endif /* EMU_SC_PUS_SERVICE17_H_ */
