/*
//
//                  INTEL CORPORATION PROPRIETARY INFORMATION
//     This software is supplied under the terms of a license agreement or
//     nondisclosure agreement with Intel Corporation and may not be copied
//     or disclosed except in accordance with the terms of that agreement.
//          Copyright(c) 2003-2006 Intel Corporation. All Rights Reserved.
//
//     Intel Integrated Performance Primitives AAC Encode Sample for Windows*
//
//  By downloading and installing this sample, you hereby agree that the
//  accompanying Materials are being provided to you under the terms and
//  conditions of the End User License Agreement for the Intel Integrated
//  Performance Primitives product previously accepted by you. Please refer
//  to the file ipplic.htm located in the root directory of your Intel IPP
//  product installation for more information.
//
//  MPEG-4 and AAC are international standards promoted by ISO, IEC, ITU, ETSI
//  and other organizations. Implementations of these standards, or the standard
//  enabled platforms may require licenses from various entities, including
//  Intel Corporation.
//
*/

#ifndef __ENC_HUFF_TABLES_H
#define __ENC_HUFF_TABLES_H

#include "ippac.h"
#include "ippdc.h"

extern int vlcEncShifts[];
extern int vlcEncOffsets[];
extern int vlcEncTypes[];

#ifdef  __cplusplus
extern "C" {
#endif

void BuildHuffmanTables(IppsVLCEncodeSpec_32s** pTables);
void FreeHuffmanTables(IppsVLCEncodeSpec_32s** pTables);


#ifdef  __cplusplus
}
#endif


#endif//__ENC_HUFF_TABLES_H
