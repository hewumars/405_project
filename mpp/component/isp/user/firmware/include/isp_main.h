/******************************************************************************

  Copyright (C), 2016, Hisilicon Tech. Co., Ltd.

 ******************************************************************************
  File Name     : isp_main.h
  Version       : Initial Draft
  Author        : Hisilicon multimedia software group
  Created       : 2013/01/16
  Description   :
  History       :
  1.Date        : 2013/01/16
    Author      :
    Modification: Created file

******************************************************************************/

#ifndef __ISP_MAIN_H__
#define __ISP_MAIN_H__

#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <pthread.h>

#include "hi_comm_3a.h"
#include "isp_debug.h"
#include "mkp_isp.h"
#include "isp_dcfinfo.h"
#include "isp_frameinfo.h"
#include "isp_dnginfo.h"
#include "isp_block.h"
#include "vi_ext.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* End of #ifdef __cplusplus */

#define ISP_MAX_ALGS_NUM 64

typedef struct hiISP_LIB_NODE_S
{
    HI_BOOL           bUsed;
    ALG_LIB_S         stAlgLib;
    union
    {
        ISP_AE_REGISTER_S  stAeRegsiter;
        ISP_AWB_REGISTER_S stAwbRegsiter;
    };
} ISP_LIB_NODE_S;

typedef struct hiISP_LIB_INFO_S
{
    HI_U32          u32ActiveLib;   /* the lib used present. */
    ISP_LIB_NODE_S  astLibs[MAX_REGISTER_ALG_LIB_NUM];
} ISP_LIB_INFO_S;

typedef struct hiISP_ALG_FUNC_S
{
    HI_S32 (*pfn_alg_init)(VI_PIPE ViPipe, HI_VOID *pRegCfg);
    HI_S32 (*pfn_alg_run)(VI_PIPE ViPipe,
                          const HI_VOID *pStatInfo,
                          HI_VOID *pRegCfg,
                          HI_S32 s32Rsv);
    HI_S32 (*pfn_alg_ctrl)(VI_PIPE ViPipe, HI_U32 u32Cmd, HI_VOID *pValue);
    HI_S32 (*pfn_alg_exit)(VI_PIPE ViPipe);
} ISP_ALG_FUNC_S;

typedef struct hiISP_ALG_NODE_S
{
    HI_BOOL         bUsed;
    ISP_ALG_MOD_E   enAlgType;
    ISP_ALG_FUNC_S  stAlgFunc;
} ISP_ALG_NODE_S;

#define ISP_SYNC_ISO_BUF_MAX 6

typedef struct hiISP_DNG_CCM_S
{
    HI_U16 au16HighCcm[9];
    HI_U16 au16LowCcm[9];
    HI_U16 u16HighColorTemp;
    HI_U16 u16LowColorTemp;
} ISP_DNG_CCM_S;

typedef struct hiISP_LINKAGE_S
{
    HI_BOOL bDefectPixel;  // each alg need to check this status

    HI_U32  u32IspDgain;
    HI_U32  u32Again;
    HI_U32  u32Dgain;
    HI_U32  u32IspDgainShift;
    HI_U32  u32Iso;
    HI_U32  u32IsoMax;
    HI_U32  u32SensorIso;
    HI_U32  u32ExpRatio;
    HI_U32  au32ExpRatio[3];
    HI_U32  u32Inttime;
    HI_U32  u32PirisGain;
    HI_U8   u8AERunInterval;
    ISP_FSWDR_MODE_E enFSWDRMode;

    HI_U32  u32ColorTemp;
    HI_U32  au32WhiteBalanceGain[4];
    HI_U16  au16CCM[9];
    HI_U8   u8Saturation;
    HI_BOOL bSnapState;
    HI_BOOL bProTrigger;
    HI_BOOL bLoadCCM;
    SNAP_TYPE_E enSnapType;
    ISP_SNAP_PIPE_MODE_E enSnapPipeMode;
    HI_S32  s32PreviewPipeId;
    HI_S32  s32PicturePipeId;
    ISP_RUNNING_MODE_E enPreviewRunningMode;
    ISP_RUNNING_MODE_E enPictureRunningMode;
    HI_U32  u32UpdatePos;
    HI_U32  au32SyncIsoBuf[ISP_SYNC_ISO_BUF_MAX];
    HI_U32  au8ProIndexBuf[ISP_SYNC_ISO_BUF_MAX];
    HI_U8   u8ProIndex;
    HI_U32  u32IsoDoneFrmcnt;
    HI_U8   u8Cfg2ValidDelayMax;
    HI_BOOL bFlicker;
    HI_U8   u8Freqresult;
    HI_BOOL bStatReady;
    HI_BOOL bRunOnce;
} ISP_LINKAGE_S;

typedef struct hiISP_PARA_REC_S
{
    HI_BOOL bWDRCfg;
    HI_BOOL bPubCfg;
    HI_BOOL bInit;
    HI_BOOL bRun;
    HI_BOOL bStitchSync;

    HI_BOOL bRunEn;
} ISP_PARA_REC_S;

typedef struct hiISP_SPECIAL_OPT_S
{
    HI_BOOL abBeOnSttUpdate[ISP_MAX_BE_NUM];
    HI_BOOL bFeSttUpdate;
} ISP_SPECIAL_OPT_S;

typedef struct hiISP_SENSOR_IMAGE_MODE_S
{
    HI_U16   u16Width;
    HI_U16   u16Height;
    HI_FLOAT f32Fps;
    HI_U8 u8SnsMode;
} ISP_SENSOR_IMAGE_MODE_S;
typedef struct hiISP_BAS_OUT_IMAGE_MODE_S
{
    HI_U16   u16OutWidth;
    HI_U16   u16OutHeight;
} ISP_BAS_OUT_IMAGE_MODE_S;

typedef struct hiISP_CTX_S
{
    /* 1. ctrl param */
    HI_BOOL                 bMemInit;
    HI_BOOL                 bSnsReg;
    ISP_PARA_REC_S          stIspParaRec;
    ISP_BLOCK_ATTR_S        stBlockAttr;
    pthread_mutex_t         stLock;
    ISP_SPECIAL_OPT_S       stSpecialOpt;

    /* 2. algorithm ctrl param */
    HI_BOOL                 bFreezeFw;
    HI_BOOL                 bChangeMode;
    HI_U8                   u8Count;
    HI_U8                   u8PreSnsWDRMode;
    HI_U8                   u8SnsWDRMode;
    HI_U32                  u32FrameCnt;    /* frame count for 3a libs which can decide the interval of calculate. */
    ISP_BAYER_FORMAT_E      enBayer;

    HI_U8                    u8IspImageModeFlag;
    ISP_SENSOR_IMAGE_MODE_S  stPreSnsImageMode;
    ISP_SENSOR_IMAGE_MODE_S  stSnsImageMode;

    ISP_AE_RESULT_S          stAeResult;
    ISP_AWB_RESULT_S         stAwbResult;

    ISP_BAS_OUT_IMAGE_MODE_S stPreBasImageMode;
    ISP_BAS_OUT_IMAGE_MODE_S stCurBasImageMode;
    SIZE_S                   stPipeSize;
    VI_PIPE_HDR_ATTR_S       stHdrAttr;
    VI_PIPE_WDR_ATTR_S       stWdrAttr;
    ISP_STITCH_ATTR_S        stStitchAttr;
    COLOR_GAMUT_E            eColorGamut;

    /* 3. 3a register info */
    ISP_BIND_ATTR_S         stBindAttr;
    ISP_LIB_INFO_S          stAeLibInfo;
    ISP_LIB_INFO_S          stAwbLibInfo;
    ISP_LIB_INFO_S          stAfLibInfo;

    /* 4. algorithm ctrl */
    ISP_ALG_NODE_S          astAlgs[ISP_MAX_ALGS_NUM];
    ISP_LINKAGE_S           stLinkage;

    /* 5. debug info */
    ISP_DBG_CTRL_S          stIspDbg;

    /* 6. DCF info*/
    ISP_UPDATE_INFO_CTRL_S  stUpdateInfoCtrl;

    ISP_FRAME_INFO_CTRL_S    stFrameInfoCtrl;
    ISP_ATTACH_INFO_CTRL_S   stAttachInfoCtrl;
    ISP_COLORGAMMUT_INFO_CTRL_S  stColorGamutInfoCtrl;
    ISP_PRO_NR_PARAM_CTRL_S   stProNrParamCtrl;
    ISP_PRO_SHP_PARAM_CTRL_S  stProShpParamCtrl;

    /* DNG info*/
    ISP_DNG_INFO_CTRL_S     stDngInfoCtrl;
    ISP_DNG_COLORPARAM_S    stPreDngColorParam;
    ISP_DNG_CCM_S           stPreDngCcm;

    ISP_PRO_PARAM_S          stProParam;
    HI_U8                    u8ProFrmCnt;
    ISP_SNAP_INFO_S          stSnapIspInfo;

    /* 7. ViProc/BE Addr */
    HI_VOID                 *pIspBeVirtAddr[ISP_STRIPING_MAX_NUM];//[ISP_MAX_BE_NUM];
    HI_VOID                 *pViProcVirtAddr[ISP_STRIPING_MAX_NUM];//[ISP_MAX_BE_NUM];
} ISP_CTX_S;

extern ISP_CTX_S  g_astIspCtx[ISP_MAX_PIPE_NUM];
extern HI_S32     g_as32IspFd[ISP_MAX_PIPE_NUM];

extern ISP_REGCFG_S g_astRegCfgCtx[ISP_MAX_PIPE_NUM];
#define REGCFG_GET_CTX(dev, pstCtx)   pstCtx = &g_astRegCfgCtx[dev]

#define ISP_CHECK_OPEN(dev)\
    do{\
        if (g_as32IspFd[dev] <= 0)\
        {\
            HI_U32 arg = (dev);\
            g_as32IspFd[dev] = open("/dev/isp_dev", O_RDONLY);\
            if (g_as32IspFd[dev] <= 0)\
            {\
                perror("open isp device error!\n");\
                return HI_ERR_ISP_NOT_INIT;\
            }\
            if (ioctl(g_as32IspFd[dev], ISP_DEV_SET_FD, &arg))\
            {\
                close(g_as32IspFd[dev]);\
                g_as32IspFd[dev] = -1;\
                return HI_ERR_ISP_NOT_INIT;\
            }\
        }\
    }while(0)

#define ISP_CHECK_MEM_INIT(dev)\
    do{\
        if (g_astIspCtx[dev].bMemInit != HI_TRUE)\
        {\
            if (ioctl(g_as32IspFd[dev], ISP_MEM_INFO_GET, &g_astIspCtx[dev].bMemInit))\
            {\
                ISP_TRACE(HI_DBG_ERR, "ISP[%d] get Mem info failed!\n", dev);\
                return HI_ERR_ISP_MEM_NOT_INIT;\
            }\
            if (g_astIspCtx[dev].bMemInit != HI_TRUE)\
            {\
                ISP_TRACE(HI_DBG_ERR, "ISP[%d] Mem NOT Init %d!\n", dev, g_astIspCtx[dev].bMemInit);\
                return HI_ERR_ISP_MEM_NOT_INIT;\
            }\
        }\
    }while(0)

#define ISP_CHECK_ISP_WDR_CFG(dev)\
    do{\
        if (g_astIspCtx[dev].stIspParaRec.bWDRCfg != HI_TRUE)\
        {\
            ISP_TRACE(HI_DBG_ERR, "Isp[%d] WDR mode doesn't config!\n", dev);\
            return HI_ERR_ISP_ATTR_NOT_CFG;\
        }\
    }while(0)

#define ISP_CHECK_ISP_PUB_ATTR_CFG(dev)\
    do{\
        if (g_astIspCtx[dev].stIspParaRec.bPubCfg != HI_TRUE)\
        {\
            ISP_TRACE(HI_DBG_ERR, "Isp[%d] Pub Attr doesn't config!\n", dev);\
            return HI_ERR_ISP_ATTR_NOT_CFG;\
        }\
    }while(0)

#define ISP_CHECK_ISP_INIT(dev)\
    do{\
        if (g_astIspCtx[dev].stIspParaRec.bInit != HI_TRUE)\
        {\
            ISP_TRACE(HI_DBG_ERR, "Isp[%d] doesn't initialized!\n", dev);\
            return HI_ERR_ISP_NOT_INIT;\
        }\
    }while(0)

#define ISP_GET_CTX(dev, pstIspCtx)\
    do{\
        pstIspCtx = &g_astIspCtx[dev];\
    }while(0)


/*
 * HIGH LEVEL functions used to set-up and run ISP.
 */
/*
 * This function executes the auto-exposure algorithm
 * and its results are used to drive sensor parameters,
 * drc engine and noise reduction algorithms,
 * Results are based on the collected image histogram data.
 */
HI_S32 ISP_Run(VI_PIPE ViPipe);
HI_S32 ISP_StitchSyncExit(VI_PIPE ViPipe);

HI_S32 ISP_SwitchWDR(VI_PIPE ViPipe);
HI_S32 ISP_SwitchWDRMode(VI_PIPE ViPipe);
HI_S32 ISP_SwitchImageMode(VI_PIPE ViPipe);

HI_S32 ISP_WDRCfgSet(VI_PIPE ViPipe);
HI_U32 ISP_FrameCntGet(VI_PIPE ViPipe);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* End of #ifdef __cplusplus */

#endif /* __ISP_MAIN_H__ */

