/*
 * Lab5_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Lab5".
 *
 * Model version              : 1.49
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Fri Feb 28 14:13:40 2020
 *
 * Target selection: rti1104.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lab5_types_h_
#define RTW_HEADER_Lab5_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_isB4Cw3Ovpp8VfzP6RUqbD_
#define DEFINED_TYPEDEF_FOR_struct_isB4Cw3Ovpp8VfzP6RUqbD_

typedef struct {
  int32_T OutputPortsWidth;
} struct_isB4Cw3Ovpp8VfzP6RUqbD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_dZjXwTiylTPloSUBFpnHJB_
#define DEFINED_TYPEDEF_FOR_struct_dZjXwTiylTPloSUBFpnHJB_

typedef struct {
  int32_T InputPortsWidth;
} struct_dZjXwTiylTPloSUBFpnHJB;

#endif

#ifndef typedef_dsp_private_SlidingWindowAver_T
#define typedef_dsp_private_SlidingWindowAver_T

typedef struct {
  int32_T isInitialized;
  real_T pCumSum;
  real_T pCumSumRev[24];
  real_T pCumRevIndex;
} dsp_private_SlidingWindowAver_T;

#endif                                 /*typedef_dsp_private_SlidingWindowAver_T*/

#ifndef typedef_cell_wrap_Lab5_T
#define typedef_cell_wrap_Lab5_T

typedef struct {
  uint32_T f1[8];
} cell_wrap_Lab5_T;

#endif                                 /*typedef_cell_wrap_Lab5_T*/

#ifndef typedef_dsp_MovingAverage_Lab5_T
#define typedef_dsp_MovingAverage_Lab5_T

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_Lab5_T inputVarSize;
  dsp_private_SlidingWindowAver_T *pStatistic;
  int32_T NumChannels;
} dsp_MovingAverage_Lab5_T;

#endif                                 /*typedef_dsp_MovingAverage_Lab5_T*/

/* Parameters (auto storage) */
typedef struct P_Lab5_T_ P_Lab5_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Lab5_T RT_MODEL_Lab5_T;

#endif                                 /* RTW_HEADER_Lab5_types_h_ */
