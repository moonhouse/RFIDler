/***************************************************************************
 * A copy of the GNU GPL is appended to this file.                         *
 *                                                                         *
 * This licence is based on the nmap licence, and we express our gratitude *
 * for the work that went into producing it. There is no other connection  *
 * between RFIDler and nmap either expressed or implied.                   *
 *                                                                         *
 ********************** IMPORTANT RFIDler LICENSE TERMS ********************
 *                                                                         *
 *                                                                         *
 * All references to RFIDler herein imply all it's derivatives, namely:    *
 *                                                                         *
 * o RFIDler-LF Standard                                                   *
 * o RFIDler-LF Lite                                                       *
 * o RFIDler-LF Nekkid                                                     *
 *                                                                         *
 *                                                                         *
 * RFIDler is (C) 2013-2014 Aperture Labs Ltd.                             *
 *                                                                         *
 * This program is free software; you may redistribute and/or modify it    *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; Version 2 ("GPL"), BUT ONLY WITH ALL OF THE   *
 * CLARIFICATIONS AND EXCEPTIONS DESCRIBED HEREIN.  This guarantees your   *
 * right to use, modify, and redistribute this software under certain      *
 * conditions.  If you wish to embed RFIDler technology into proprietary   *
 * software or hardware, we sell alternative licenses                      *
 * (contact sales@aperturelabs.com).                                       *
 *                                                                         *
 * Note that the GPL places important restrictions on "derivative works",  *
 * yet it does not provide a detailed definition of that term.  To avoid   *
 * misunderstandings, we interpret that term as broadly as copyright law   *
 * allows.  For example, we consider an application to constitute a        *
 * derivative work for the purpose of this license if it does any of the   *
 * following with any software or content covered by this license          *
 * ("Covered Software"):                                                   *
 *                                                                         *
 * o Integrates source code from Covered Software.                         *
 *                                                                         *
 * o Is designed specifically to execute Covered Software and parse the    *
 * results (as opposed to typical shell or execution-menu apps, which will *
 * execute anything you tell them to).                                     *
 *                                                                         *
 * o Includes Covered Software in a proprietary executable installer.  The *
 * installers produced by InstallShield are an example of this.  Including *
 * RFIDler with other software in compressed or archival form does not     *
 * trigger this provision, provided appropriate open source decompression  *
 * or de-archiving software is widely available for no charge.  For the    *
 * purposes of this license, an installer is considered to include Covered *
 * Software even if it actually retrieves a copy of Covered Software from  *
 * another source during runtime (such as by downloading it from the       *
 * Internet).                                                              *
 *                                                                         *
 * o Links (statically or dynamically) to a library which does any of the  *
 * above.                                                                  *
 *                                                                         *
 * o Executes a helper program, module, or script to do any of the above.  *
 *                                                                         *
 * This list is not exclusive, but is meant to clarify our interpretation  *
 * of derived works with some common examples.  Other people may interpret *
 * the plain GPL differently, so we consider this a special exception to   *
 * the GPL that we apply to Covered Software.  Works which meet any of     *
 * these conditions must conform to all of the terms of this license,      *
 * particularly including the GPL Section 3 requirements of providing      *
 * source code and allowing free redistribution of the work as a whole.    *
 *                                                                         *
 * As another special exception to the GPL terms, Aperture Labs Ltd. grants*
 * permission to link the code of this program with any version of the     *
 * OpenSSL library which is distributed under a license identical to that  *
 * listed in the included docs/licenses/OpenSSL.txt file, and distribute   *
 * linked combinations including the two.                                  *
 *                                                                         *
 * Any redistribution of Covered Software, including any derived works,    *
 * must obey and carry forward all of the terms of this license, including *
 * obeying all GPL rules and restrictions.  For example, source code of    *
 * the whole work must be provided and free redistribution must be         *
 * allowed.  All GPL references to "this License", are to be treated as    *
 * including the terms and conditions of this license text as well.        *
 *                                                                         *
 * Because this license imposes special exceptions to the GPL, Covered     *
 * Work may not be combined (even as part of a larger work) with plain GPL *
 * software.  The terms, conditions, and exceptions of this license must   *
 * be included as well.  This license is incompatible with some other open *
 * source licenses as well.  In some cases we can relicense portions of    *
 * RFIDler or grant special permissions to use it in other open source     *
 * software.  Please contact sales@aperturelabs.com with any such requests.*
 * Similarly, we don't incorporate incompatible open source software into  *
 * Covered Software without special permission from the copyright holders. *
 *                                                                         *
 * If you have any questions about the licensing restrictions on using     *
 * RFIDler in other works, are happy to help.  As mentioned above, we also *
 * offer alternative license to integrate RFIDler into proprietary         *
 * applications and appliances.  These contracts have been sold to dozens  *
 * of software vendors, and generally include a perpetual license as well  *
 * as providing for priority support and updates.  They also fund the      *
 * continued development of RFIDler.  Please email sales@aperturelabs.com  *
 * for further information.                                                *
 * If you have received a written license agreement or contract for        *
 * Covered Software stating terms other than these, you may choose to use  *
 * and redistribute Covered Software under those terms instead of these.   *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes (none     *
 * have been found so far).                                                *
 *                                                                         *
 * Source code also allows you to port RFIDler to new platforms, fix bugs, *
 * and add new features.  You are highly encouraged to send your changes   *
 * to the RFIDler mailing list for possible incorporation into the         *
 * main distribution.  By sending these changes to Aperture Labs Ltd. or   *
 * one of the Aperture Labs Ltd. development mailing lists, or checking    *
 * them into the RFIDler source code repository, it is understood (unless  *
 * you specify otherwise) that you are offering the RFIDler Project        *
 * (Aperture Labs Ltd.) the unlimited, non-exclusive right to reuse,       *
 * modify, and relicense the code.  RFIDler will always be available Open  *
 * Source, but this is important because the inability to relicense code   *
 * has caused devastating problems for other Free Software projects (such  *
 * as KDE and NASM).  We also occasionally relicense the code to third     *
 * parties as discussed above. If you wish to specify special license      *
 * conditions of your contributions, just say so when you send them.       *
 *                                                                         *
 * This program is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the RFIDler   *
 * license file for more details (it's in a COPYING file included with     *
 * RFIDler, and also available from                                        *
 *   https://github.com/ApertureLabsLtd/RFIDler/COPYING                    *
 *                                                                         *
 ***************************************************************************/

// Author: Adam Laurie <adam@aperturelabs.com>



#include "HardwareProfile.h"
#include "rfidler.h"
#include "clock.h"
#include "USB/usb.h"
#include "clock.h"
#include "comms.h"

//const unsigned int TimeScaler= (GetSystemClock() / US_TO_TICKS);
const unsigned int TimeScaler= (GetSystemClock() / TIMER5_PRESCALER) / 1000000; // compensate for pre-scaler
const unsigned long TimeScaler2= (GetSystemClock() / 10000000L);

// inialise OCM for H/W reader clock
// clock will be toggled by the OCM
// OCM ISR will process RWD commands
// user timer3 so timer2 can be used simultaneously by SmartCard or SD Card
// width/period in uS/100 (will be rounded to uS/10 (as accurate as we can get on a 80MHz pic))
void InitHWReaderClock(BYTE type, unsigned long width, unsigned long period, BYTE initial_state)
{
    // reader mode
    COIL_MODE_READER();

    // disable timer2 interrupts
    mT3IntEnable(0);
    CloseTimer3();
    mT3ClearIntFlag();

    CloseOC5();
    // some strange behaviour when switching from pulse to toggle. double open seems to fix it!
    OpenOC5( OC_ON | OC_TIMER3_SRC | OC_TIMER_MODE16 | OC_TOGGLE_PULSE, CONVERT_TO_TICKS(period) / 8L, CONVERT_TO_TICKS(period) / 8L);
    CloseOC5();
    
    // clear error led
    mLED_Error_Off();

    // in sniff mode we don't use our own clock!
    if (SnifferMode)
    {
        READER_CLOCK_ENABLE_OFF(LOW);
        return;
    }

    // enable tri-state
    READER_CLOCK_ENABLE_ON();

    // set clock state & command parameters
    RWD_State= initial_state;
    RWD_OC5_config= (OC_ON | OC_TIMER3_SRC | OC_TIMER_MODE16 | type);
    RWD_OC5_rs= RWD_OC5_r= CONVERT_TO_TICKS(period / (period / width) / 2L);

    OpenOC5(RWD_OC5_config, RWD_OC5_rs, RWD_OC5_r);
    OpenTimer3(T3_ON | T3_PS_1_1 | T3_SOURCE_INT, CONVERT_TO_TICKS(period / 2L) - 1L);
    mOC5SetIntPriority(5);
    mOC5ClearIntFlag();
    mOC5IntEnable(1);           // enable OC5 interrupts
}

// use timer4 to allow timers 2/3 to be linked to OCMs for other functions
void InitHWReaderISR(unsigned long time, BOOL immediate)
{
    // clear bit counter && type
    Reader_Bit_Count= 0L;
    Previous= -1;
    
    mT4SetIntPriority(6);
    // start timer4 to read data - ISR will do the actual read
    mT4IntEnable(1);
    OpenTimer4( T4_ON | T4_PS_1_1 | T4_SOURCE_INT | T4_32BIT_MODE_OFF, time);

    // switch on reader LED
    // this is also a semaphore so the rest of the code knows we're running
    mLED_Read_On();

    // clear error led
    mLED_Error_Off();
    
    // force an immediate interrupt so we read this bit
    if(immediate)
        IFS0bits.T4IF= TRUE;
}

// temporarily pause carrier - specify period in FCs
// we use clock counter in ISR to create very precise timing
void pause_HW_clock_FC(unsigned long fc, BYTE state)
{
    Clock_Tick_Counter_Reset= TRUE;
    // wait for reset
    while(Clock_Tick_Counter_Reset)
        ;

    READER_CLOCK_ENABLE_OFF(state);
    fc *= 2L; // two ticks per FC
    while(Clock_Tick_Counter <= fc)
        ;

    READER_CLOCK_ENABLE_ON();
}

void TimerWait_FC(unsigned long fc)
{
    Clock_Tick_Counter_Reset= TRUE;
    // wait for reset
    while(Clock_Tick_Counter_Reset)
        ;
    fc *= 2L; // two ticks per FC
    while(Clock_Tick_Counter <= fc)
        ;
}

// shutdown reader coil
void stop_HW_clock(void)
{
    mT3IntEnable(0);
    CloseTimer3();
    CloseOC5();
    mLED_Clock_Off();
    mLED_Emulate_Off();

    // tri-state-off
    READER_CLOCK_ENABLE_OFF(LOW);

    // usb back on
    USBUnmaskInterrupts();
    
    stop_HW_reader_ISR();
}

// shutdown reader ISR
void stop_HW_reader_ISR(void)
{
    mT4IntEnable(0);
    CloseTimer4();
    mLED_Read_Off();
}

void clock_test()
    {
    unsigned int test;

    GetTimer_us(RESET);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    Delay_us(1);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    test= GetTimer_us(NO_RESET);
    UserMessageNum("\r\nticks %ld", GetTimer_ticks(NO_RESET));
    UserMessageNum("\r\n1 us: %d", test);
    UserMessage("%s", "\r\n");

    GetTimer_us(RESET);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    Delay_us(10);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    test= GetTimer_us(NO_RESET);
    UserMessageNum("\r\nticks %ld", GetTimer_ticks(NO_RESET));
    UserMessageNum("\r\n10 us: %d", test);
    UserMessage("%s", "\r\n");

    GetTimer_us(RESET);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    Delay_us(100);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    test= GetTimer_us(NO_RESET);
    UserMessageNum("\r\nticks %ld", GetTimer_ticks(NO_RESET));
    UserMessageNum("\r\n100 us: %d", test);
    UserMessage("%s", "\r\n");

    GetTimer_us(RESET);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    Delay_us(1000);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    test= GetTimer_us(NO_RESET);
    UserMessageNum("\r\nticks %ld", GetTimer_ticks(NO_RESET));
    UserMessageNum("\r\n1000 us: %d", test);
    UserMessage("%s", "\r\n");

    GetTimer_us(RESET);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    Delay_us(10000);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    test= GetTimer_us(NO_RESET);
    UserMessageNum("\r\nticks %ld", GetTimer_ticks(NO_RESET));
    UserMessageNum("\r\n10,000 us: %d", test);
    UserMessage("%s", "\r\n");

    GetTimer_us(RESET);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    Delay_us(100000);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    test= GetTimer_us(NO_RESET);
    UserMessageNum("\r\nticks %ld", GetTimer_ticks(NO_RESET));
    UserMessageNum("\r\n100,000 us: %d", test);
    UserMessage("%s", "\r\n");

    GetTimer_us(RESET);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    Delay_us(1000000);
    //DEBUG_PIN_4= !DEBUG_PIN_4;
    test= GetTimer_us(NO_RESET);
    UserMessageNum("\r\nticks %ld", GetTimer_ticks(NO_RESET));
    UserMessageNum("\r\n1,000,000 us: %d", test);
    UserMessage("%s", "\r\n");
}

// low level pulse timer
unsigned int GetTimer_us(BYTE reset)
{
    unsigned int time;

    time= ReadTimer5();

    if(reset)
       WriteTimer5(0L);
    return time / TimeScaler;
}

// low level pulse timer - return prescaled ticks converted back to a long
unsigned long GetTimer_ticks(BYTE reset)
{
    unsigned long time;

    time= ReadTimer5();

    if(reset)
       WriteTimer5(0);
    return time * TIMER5_PRESCALER;
}

// bad stuff happens if this gets optimised!
#pragma GCC optimize("O0")

// raw timer wait - for things that don't want any delays...
// tuned by eye with logic analyser!
// 1us == x/2 timer ticks where x is what MHz chip is running at (e.g. 4 for 80MHz)
void TimerWait(unsigned long ticks)
{
    // deduct 2 for processing time
    ticks -= 2;
    WriteTimer5(0);
    while (ReadTimer5() < ticks)
        ;
}

void Delay_us(unsigned long us)
{
    unsigned long ticks= us * TimeScaler2;

    while (ticks--)
        ;
}

// end optimisation
#pragma GCC reset_options

