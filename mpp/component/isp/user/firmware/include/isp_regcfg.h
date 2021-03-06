/******************************************************************************

  Copyright (C), 2016, Hisilicon Tech. Co., Ltd.

 ******************************************************************************
  File Name     : isp_regcfg.h
  Version       : Initial Draft
  Author        : Hisilicon multimedia software group
  Created       : 2013/05/07
  Description   :
  History       :
  1.Date        : 2013/05/07
    Author      :
    Modification: Created file

******************************************************************************/
#ifndef __ISP_REGCFG_H__
#define __ISP_REGCFG_H__

#include "hi_comm_isp.h"
#include "mpi_isp.h"
#include "isp_sensor.h"
#include "mkp_isp.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* End of #ifdef __cplusplus */

#define IS_HRS_ON(enIspRunningMode) (IS_SIDEBYSIDE_MODE(enIspRunningMode) || IS_STRIPING_MODE(enIspRunningMode))

typedef struct hiISP_BE_BUF_S
{
    HI_U64          u64BePhyAddr;
    HI_VOID        *pBeVirtAddr;

    ISP_BE_WO_CFG_BUF_S stBeWoCfgBuf;
} ISP_BE_BUF_S;

HI_S32 ISP_ClutBufInit(VI_PIPE ViPipe);
HI_S32 ISP_ClutBufExit(VI_PIPE ViPipe);
HI_S32 ISP_SpecAwbBufInit(VI_PIPE ViPipe);
HI_S32 ISP_SpecAwbBufExit(VI_PIPE ViPipe);
HI_S32 ISP_SttBufInit(VI_PIPE ViPipe);
HI_S32 ISP_SttBufExit(VI_PIPE ViPipe);
HI_S32 ISP_SttAddrInit(VI_PIPE ViPipe);
HI_S32 ISP_CfgBeBufInit(VI_PIPE ViPipe);
HI_S32 ISP_CfgBeBufExit(VI_PIPE ViPipe);
HI_S32 ISP_RegCfgInit(VI_PIPE ViPipe, HI_VOID **ppCfg);
HI_S32 ISP_RegCfgCtrl(VI_PIPE ViPipe);
HI_S32 ISP_SwitchResRegSet(VI_PIPE ViPipe);
HI_S32 ISP_SwitchWdrRegSet(VI_PIPE ViPipe);
HI_S32 ISP_GetBeLastBuf(VI_PIPE ViPipe);
//HI_S32 ISP_GetCfgBufAddr(VI_PIPE ViPipe);
HI_S32 ISP_BeVregAddrInit(VI_PIPE ViPipe);
HI_S32 ISP_GetBeVregCfgAddr(VI_PIPE ViPipe, HI_VOID *pVirtAddr[]);
HI_S32 ISP_GetBeBufFirst(VI_PIPE ViPipe);
HI_S32 ISP_GetBeFreeBuf(VI_PIPE ViPipe);
HI_S32 ISP_AllCfgsBeBufInit(VI_PIPE ViPipe);
HI_S32 ISP_SetCfgBeBufState(VI_PIPE ViPipe);
HI_S32 ISP_RegCfgInfoSet(VI_PIPE ViPipe);
HI_S32 ISP_RegCfgInfoInit(VI_PIPE ViPipe);
HI_S32 ISP_SyncCfgSet(VI_PIPE ViPipe);
HI_S32 ISP_SnapRegCfgSet(VI_PIPE ViPipe, ISP_CONFIG_INFO_S *pstSnapInfo);
HI_S32 ISP_SnapRegCfgGet(VI_PIPE ViPipe, ISP_SNAP_INFO_S *pstSnapInfo);
HI_BOOL ISP_ProTriggerGet(VI_PIPE ViPipe);
HI_VOID *ISP_GetBeVirAddr(VI_PIPE ViPipe, BLK_DEV BlkDev);
HI_VOID *ISP_VIPROC_GetVirAddr(VI_PIPE ViPipe, BLK_DEV BlkDev);
HI_VOID *ISP_HDR_GetVirAddr(VI_PIPE ViPipe, BLK_DEV BlkDev);
HI_VOID *ISP_GetFeVirAddr(VI_PIPE ViPipe);


#define ISP_CHECK_FE_PIPE(pipe)\
    do{\
        if (((pipe) < 0) || ((pipe) >= ISP_MAX_PIPE_NUM))\
        {\
            ISP_TRACE(HI_DBG_ERR, "Invalid ISP-FE Pipe!\n");\
            return HI_NULL;\
        }\
    }while(0)

#define ISP_CHECK_BE_DEV(dev)\
    do{\
        if (((dev) < 0) || ((dev) >= ISP_STRIPING_MAX_NUM))\
        {\
            ISP_TRACE(HI_DBG_ERR, "Err ISP-BE dev!\n");\
            return HI_NULL;\
        }\
    }while(0)

#define ISP_CHECK_NULLPTR(ptr)\
    do{\
        if (ptr == HI_NULL)\
        {\
            ISP_TRACE(HI_DBG_ERR, "Null point when writing isp register!\n");\
            return HI_NULL;\
        }\
    }while(0)


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* End of #ifdef __cplusplus */

#endif
