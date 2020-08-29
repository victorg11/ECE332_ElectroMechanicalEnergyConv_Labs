/***************************************************************************

   Source file Lab4_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1104 7.9 (02-Nov-2017)
   Fri Feb 21 13:37:35 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "Lab4_trc_ptr.h"
#include "Lab4.h"
#include "Lab4_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile real_T *p_0_Lab4_real_T_0 = NULL;
volatile real_T *p_1_Lab4_real_T_0 = NULL;
volatile int_T *p_2_Lab4_int_T_2 = NULL;
volatile boolean_T *p_2_Lab4_boolean_T_3 = NULL;
volatile real_T *p_3_Lab4_real_T_0 = NULL;
volatile real_T *p_5_Lab4_real_T_0 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_Lab4_real_T_0 = &Lab4_B.DeltaC;
  p_1_Lab4_real_T_0 = &Lab4_P.UnitConv2_Gain;
  p_2_Lab4_int_T_2 = &Lab4_DW.SFunction1_IWORK;
  p_2_Lab4_boolean_T_3 = &Lab4_DW.objisempty;
  p_3_Lab4_real_T_0 = &Lab4_X.Integrator_CSTATE;
  p_5_Lab4_real_T_0 = &Lab4_Y.RPMVelFinal_AVG;
}

void Lab4_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
