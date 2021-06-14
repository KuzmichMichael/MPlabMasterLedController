/* 
 * File:   Main.h
 * Author: xatini
 *
 * Created on 30 апреля 2021 г., 23:57
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
    
#define oneSecondDelay 25
#define shortButDelay 25
    
#define modeChangeButt RA0
#define settingModeButt RA1
#define resetButt RA4

#define firstLEDcode   0b00000001
#define secondLEDcode  0b00000010
#define thirdLEDcode   0b00000100
#define fourthdLEDcode 0b00001000    
#define fifthLEDcode   0b00010000
#define sixthLEDcode   0b00100000

char ledStateBuffer = 0b00000000;
    
enum ModeCodes{
    FIRST_MODE  = 0x01,
    SECOND_MODE = 0x02,
    THIRD_MODE  = 0x03,
    FOURTH_MODE = 0x04,
    FIFTH_MODE  = 0x05,
    SIXTH_MODE  = 0x06
}; 

enum curModes{
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH,
    SIXTH
};    
enum curModes LEDcurrentMode = FIRST;
enum curModes LEDbufferMode = FIRST;

unsigned char delayBuffer = 0;
unsigned char globalCounter = 0;
unsigned char resetFlag = 0;
unsigned char indicationMode = 0;


unsigned long modeChangeButtDelay = 0;
unsigned long settingModeButtDelay = 0;
unsigned long resetButtDelay = 0;





void initHW();  
unsigned char checkButtons();
void processModes();
void myShortDelay();
void myLongDelay();
#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

