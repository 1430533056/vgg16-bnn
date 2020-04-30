/**
 * Finnthesizer Config-File Generation
 *
 **/

#ifndef __LAYER_CONFIG_H_
#define __LAYER_CONFIG_H_

/**
 * Convolutional Layer L0:
 *      IFM  =   188  IFM_CH =     3
 *      OFM  =   186  OFM_CH =    16
 *     SIMD  =     3    PE   =    16
 *     WMEM  =     9   TMEM  =     1
 *     #Ops  = 29890944   Ext Latency  = 311364
**/

#define L0_K 3
#define L0_IFM_CH 3
#define L0_IFM_DIM 188
#define L0_OFM_CH 16
#define L0_OFM_DIM 186
#define L0_SIMD 3
#define L0_PE 16
#define L0_WMEM 9
#define L0_TMEM 1
#define L0_WPI 1
#define L0_API 1
#define L0_WPF 0
#define L0_APF 0

/**
 * Convolutional Layer L1:
 *      IFM  =   186  IFM_CH =    16
 *      OFM  =   184  OFM_CH =    16
 *     SIMD  =    16    PE   =    16
 *     WMEM  =     9   TMEM  =     1
 *     #Ops  = 156008448   Ext Latency  = 304704
**/

#define L1_K 3
#define L1_IFM_CH 16
#define L1_IFM_DIM 186
#define L1_OFM_CH 16
#define L1_OFM_DIM 184
#define L1_SIMD 16
#define L1_PE 16
#define L1_WMEM 9
#define L1_TMEM 1
#define L1_WPI 1
#define L1_API 1
#define L1_WPF 0
#define L1_APF 0

/**
 * Convolutional Layer L2:
 *      IFM  =    92  IFM_CH =    16
 *      OFM  =    90  OFM_CH =    32
 *     SIMD  =     8    PE   =    16
 *     WMEM  =    36   TMEM  =     2
 *     #Ops  = 74649600   Ext Latency  = 291600
**/

#define L2_K 3
#define L2_IFM_CH 16
#define L2_IFM_DIM 92
#define L2_OFM_CH 32
#define L2_OFM_DIM 90
#define L2_SIMD 8
#define L2_PE 16
#define L2_WMEM 36
#define L2_TMEM 2
#define L2_WPI 1
#define L2_API 1
#define L2_WPF 0
#define L2_APF 0

/**
 * Convolutional Layer L3:
 *      IFM  =    90  IFM_CH =    32
 *      OFM  =    88  OFM_CH =    32
 *     SIMD  =    16    PE   =    16
 *     WMEM  =    36   TMEM  =     2
 *     #Ops  = 142737408   Ext Latency  = 278784
**/

#define L3_K 3
#define L3_IFM_CH 32
#define L3_IFM_DIM 90
#define L3_OFM_CH 32
#define L3_OFM_DIM 88
#define L3_SIMD 16
#define L3_PE 16
#define L3_WMEM 36
#define L3_TMEM 2
#define L3_WPI 1
#define L3_API 1
#define L3_WPF 0
#define L3_APF 0

/**
 * Convolutional Layer L4:
 *      IFM  =    44  IFM_CH =    32
 *      OFM  =    42  OFM_CH =    64
 *     SIMD  =     8    PE   =    16
 *     WMEM  =   144   TMEM  =     4
 *     #Ops  = 65028096   Ext Latency  = 254016
**/

#define L4_K 3
#define L4_IFM_CH 32
#define L4_IFM_DIM 44
#define L4_OFM_CH 64
#define L4_OFM_DIM 42
#define L4_SIMD 8
#define L4_PE 16
#define L4_WMEM 144
#define L4_TMEM 4
#define L4_WPI 1
#define L4_API 1
#define L4_WPF 0
#define L4_APF 0

/**
 * Convolutional Layer L5:
 *      IFM  =    42  IFM_CH =    64
 *      OFM  =    40  OFM_CH =    64
 *     SIMD  =    16    PE   =    16
 *     WMEM  =   144   TMEM  =     4
 *     #Ops  = 117964800   Ext Latency  = 230400
**/

#define L5_K 3
#define L5_IFM_CH 64
#define L5_IFM_DIM 42
#define L5_OFM_CH 64
#define L5_OFM_DIM 40
#define L5_SIMD 16
#define L5_PE 16
#define L5_WMEM 144
#define L5_TMEM 4
#define L5_WPI 1
#define L5_API 1
#define L5_WPF 0
#define L5_APF 0

/**
 * Convolutional Layer L6:
 *      IFM  =    40  IFM_CH =    64
 *      OFM  =    40  OFM_CH =    64
 *     SIMD  =     8    PE   =     4
 *     WMEM  =   128   TMEM  =    16
 *     #Ops  = 13107200   Ext Latency  = 204800
**/

#define L6_K 1
#define L6_IFM_CH 64
#define L6_IFM_DIM 40
#define L6_OFM_CH 64
#define L6_OFM_DIM 40
#define L6_SIMD 8
#define L6_PE 4
#define L6_WMEM 128
#define L6_TMEM 16
#define L6_WPI 1
#define L6_API 1
#define L6_WPF 0
#define L6_APF 0

/**
 * Convolutional Layer L7:
 *      IFM  =    20  IFM_CH =    64
 *      OFM  =    18  OFM_CH =   128
 *     SIMD  =    16    PE   =     8
 *     WMEM  =   576   TMEM  =    16
 *     #Ops  = 47775744   Ext Latency  = 186624
**/

#define L7_K 3
#define L7_IFM_CH 64
#define L7_IFM_DIM 20
#define L7_OFM_CH 128
#define L7_OFM_DIM 18
#define L7_SIMD 16
#define L7_PE 8
#define L7_WMEM 576
#define L7_TMEM 16
#define L7_WPI 1
#define L7_API 1
#define L7_WPF 0
#define L7_APF 0

/**
 * Convolutional Layer L8:
 *      IFM  =    18  IFM_CH =   128
 *      OFM  =    16  OFM_CH =   128
 *     SIMD  =    16    PE   =     8
 *     WMEM  =  1152   TMEM  =    16
 *     #Ops  = 75497472   Ext Latency  = 294912
**/

#define L8_K 3
#define L8_IFM_CH 128
#define L8_IFM_DIM 18
#define L8_OFM_CH 128
#define L8_OFM_DIM 16
#define L8_SIMD 16
#define L8_PE 8
#define L8_WMEM 1152
#define L8_TMEM 16
#define L8_WPI 1
#define L8_API 1
#define L8_WPF 0
#define L8_APF 0

/**
 * Convolutional Layer L9:
 *      IFM  =    16  IFM_CH =   128
 *      OFM  =    16  OFM_CH =   128
 *     SIMD  =     4    PE   =     4
 *     WMEM  =  1024   TMEM  =    32
 *     #Ops  = 8388608   Ext Latency  = 262144
**/

#define L9_K 1
#define L9_IFM_CH 128
#define L9_IFM_DIM 16
#define L9_OFM_CH 128
#define L9_OFM_DIM 16
#define L9_SIMD 4
#define L9_PE 4
#define L9_WMEM 1024
#define L9_TMEM 32
#define L9_WPI 1
#define L9_API 1
#define L9_WPF 0
#define L9_APF 0

/**
 * Convolutional Layer L10:
 *      IFM  =     8  IFM_CH =   128
 *      OFM  =     6  OFM_CH =   128
 *     SIMD  =     8    PE   =     4
 *     WMEM  =  4608   TMEM  =    32
 *     #Ops  = 10616832   Ext Latency  = 165888
**/

#define L10_K 3
#define L10_IFM_CH 128
#define L10_IFM_DIM 8
#define L10_OFM_CH 128
#define L10_OFM_DIM 6
#define L10_SIMD 8
#define L10_PE 4
#define L10_WMEM 4608
#define L10_TMEM 32
#define L10_WPI 1
#define L10_API 1
#define L10_WPF 0
#define L10_APF 0

/**
 * Convolutional Layer L11:
 *      IFM  =     6  IFM_CH =   128
 *      OFM  =     4  OFM_CH =   128
 *     SIMD  =     4    PE   =     4
 *     WMEM  =  9216   TMEM  =    32
 *     #Ops  = 4718592   Ext Latency  = 147456
**/

#define L11_K 3
#define L11_IFM_CH 128
#define L11_IFM_DIM 6
#define L11_OFM_CH 128
#define L11_OFM_DIM 4
#define L11_SIMD 4
#define L11_PE 4
#define L11_WMEM 9216
#define L11_TMEM 32
#define L11_WPI 1
#define L11_API 1
#define L11_WPF 0
#define L11_APF 0

/**
 * Convolutional Layer L12:
 *      IFM  =     4  IFM_CH =   128
 *      OFM  =     4  OFM_CH =   128
 *     SIMD  =     4    PE   =     4
 *     WMEM  =  1024   TMEM  =    32
 *     #Ops  = 524288   Ext Latency  = 16384
**/

#define L12_K 1
#define L12_IFM_CH 128
#define L12_IFM_DIM 4
#define L12_OFM_CH 128
#define L12_OFM_DIM 4
#define L12_SIMD 4
#define L12_PE 4
#define L12_WMEM 1024
#define L12_TMEM 32
#define L12_WPI 1
#define L12_API 1
#define L12_WPF 0
#define L12_APF 0

/**
 * Fully-Connected Layer L13:
 *     MatW =   512 MatH =   512
 *     SIMD =     8  PE  =     1
 *     WMEM = 32768 TMEM =   512
 *     #Ops  = 524288   Ext Latency  = 32768
**/

#define L13_SIMD 8
#define L13_PE 1
#define L13_WMEM 32768
#define L13_TMEM 512
#define L13_MW 512
#define L13_MH 512
#define L13_WPI 1
#define L13_API 1
#define L13_WPF 0
#define L13_APF 0

/**
 * Fully-Connected Layer L14:
 *     MatW =   512 MatH =   512
 *     SIMD =     8  PE  =     1
 *     WMEM = 32768 TMEM =   512
 *     #Ops  = 524288   Ext Latency  = 32768
**/

#define L14_SIMD 8
#define L14_PE 1
#define L14_WMEM 32768
#define L14_TMEM 512
#define L14_MW 512
#define L14_MH 512
#define L14_WPI 1
#define L14_API 1
#define L14_WPF 0
#define L14_APF 0

/**
 * Fully-Connected Layer L15:
 *     MatW =   512 MatH =    64
 *     SIMD =     1  PE  =     4
 *     WMEM =  8192 TMEM =    16
 *     #Ops  = 65536   Ext Latency  =  8192
**/

#define L15_SIMD 1
#define L15_PE 4
#define L15_WMEM 8192
#define L15_TMEM 16
#define L15_MW 512
#define L15_MH 64
#define L15_WPI 1
#define L15_API 16
#define L15_WPF 0
#define L15_APF 0

#endif //__LAYER_CONFIG_H_
