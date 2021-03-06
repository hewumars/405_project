/******************************************************************************

  Copyright (C), 2016, Hisilicon Tech. Co., Ltd.

 ******************************************************************************
  File Name     : isp_ext_config.h
  Version       : Initial Draft
  Author        : Hisilicon multimedia software group
  Created       : 2016/11/4
  Description   :
  History       :
  1.Date        : 2016/11/4
    Author      :
    Modification: Created file

******************************************************************************/

#ifndef __ISP_EXT_CONFIG_H__
#define __ISP_EXT_CONFIG_H__

#include "hi_vreg.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* End of #ifdef __cplusplus */

// ------------------------------------------------------------------------------ //
// Instance 'ext' of module 'ext_config'
// ------------------------------------------------------------------------------ //

#define HI_EXT_BASE_ADDR(ViPipe) (ISP_VIR_REG_BASE(ViPipe))
#define HI_EXT_SIZE         (0x80000)

// ----------------------------------------------------------------------------------------//
// TOP: 0x10000~0x10FFF
// ----------------------------------------------------------------------------------------//
#define VREG_TOP_OFFSET     (0x0)
#define VREG_TOP_SIZE       (0x1000)
#define VREG_TOP_BASE(ViPipe)  (HI_EXT_BASE_ADDR(ViPipe) + VREG_TOP_OFFSET)
//-----------------------------------------------------------------------------------------//
// SIZE <= 0x20
// ----------------------------------------------------------------------------------------//
/*BLC:   0x1000~0x100F*/
#define VREG_BLC_OFFSET     (VREG_TOP_OFFSET + VREG_TOP_SIZE)
#define VREG_BLC_SIZE       (0x10)
#define VREG_BLC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_BLC_OFFSET)

/*FPN:   0x1010~0x102F*/
#define VREG_FPN_OFFSET     (VREG_BLC_OFFSET + VREG_BLC_SIZE)
#define VREG_FPN_SIZE       (0x20)
#define VREG_FPN_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_FPN_OFFSET)

/*RC:   0x1030~0x10FF*/
#define VREG_RC_OFFSET      (VREG_FPN_OFFSET + VREG_FPN_SIZE)
#define VREG_RC_SIZE        (0xD0)  /* 0xC0 reserved*/
#define VREG_RC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_RC_OFFSET)
//-----------------------------------------------------------------------------------------//
// SIZE <= 0x100
// ----------------------------------------------------------------------------------------//
/*MCDS: 0x1100~0x11FF*/
#define VREG_MCDS_OFFSET    (VREG_RC_OFFSET + VREG_RC_SIZE)
#define VREG_MCDS_SIZE      (0x100)
#define VREG_MCDS_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_MCDS_OFFSET)

/*WDR: 0x1200~0x12FF*/
#define VREG_WDR_OFFSET     (VREG_MCDS_OFFSET + VREG_MCDS_SIZE)
#define VREG_WDR_SIZE       (0x100)
#define VREG_WDR_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_WDR_OFFSET)

/*LCAC: 0x1300~0x13FF*/
#define VREG_LCAC_OFFSET    (VREG_WDR_OFFSET + VREG_WDR_SIZE)
#define VREG_LCAC_SIZE      (0x100)
#define VREG_LCAC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_LCAC_OFFSET)

/*GCAC: 0x1400~0x14FF*/
#define VREG_GCAC_OFFSET    (VREG_LCAC_OFFSET + VREG_LCAC_SIZE)
#define VREG_GCAC_SIZE      (0x100)
#define VREG_GCAC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_GCAC_OFFSET)

/*GE:     0x1500~0x15FF*/
#define VREG_GE_OFFSET      (VREG_GCAC_OFFSET + VREG_GCAC_SIZE)
#define VREG_GE_SIZE        (0x100)
#define VREG_GE_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_GE_OFFSET)

/*FLICKER:  0x1600~0x16FF*/
#define VREG_FLICK_OFFSET   (VREG_GE_OFFSET + VREG_GE_SIZE)
#define VREG_FLICK_SIZE     (0x100)
#define VREG_FLICK_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_FLICK_OFFSET)

/*csc: 0x1700~0x17FF*/
#define VREG_CSC_OFFSET     (VREG_FLICK_OFFSET + VREG_FLICK_SIZE)
#define VREG_CSC_SIZE       (0x100)
#define VREG_CSC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_CSC_OFFSET)

/*DngInfo : 0x1800 ~ 0x18FF*/
#define  VREG_DNGINFO_OFFSET  (VREG_CSC_OFFSET + VREG_CSC_SIZE)
#define  VREG_DNGINFO_SIZE  (0x100)
#define  VREG_DNGINFO_BASE(ViPipe)(HI_EXT_BASE_ADDR(ViPipe) + VREG_DNGINFO_OFFSET)

//-----------------------------------------------------------------------------------------//
// SIZE < 0x1000
// ----------------------------------------------------------------------------------------//
/*DEHAZE:  0x1900~0x1AFF*/
#define VREG_DEHAZE_OFFSET  (VREG_DNGINFO_OFFSET + VREG_DNGINFO_SIZE)
#define VREG_DEHAZE_SIZE    (0x200)
#define VREG_DEHAZE_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_DEHAZE_OFFSET)

/*DRC: 0x1B00~0x1DFF*/
#define VREG_DRC_OFFSET     (VREG_DEHAZE_OFFSET + VREG_DEHAZE_SIZE)
#define VREG_DRC_SIZE       (0x300)
#define VREG_DRC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_DRC_OFFSET)

/*CA:  0x1E00~0x2DFF */
#define VREG_CA_OFFSET      (VREG_DRC_OFFSET + VREG_DRC_SIZE)
#define VREG_CA_SIZE        (0x1000) /* 0xA00 reserved*/
#define VREG_CA_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_CA_OFFSET)

//-----------------------------------------------------------------------------------------//
// SIZE >= 0x1000
// ----------------------------------------------------------------------------------------//
/*LDCI: 0x2E00~0x3FFF*/
#define VREG_LDCI_OFFSET    (VREG_CA_OFFSET + VREG_CA_SIZE)
#define VREG_LDCI_SIZE      (0x1200)
#define VREG_LDCI_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_LDCI_OFFSET)

/*BNR: 0x4000~0x4FFF*/
#define VREG_BNR_OFFSET     (VREG_LDCI_OFFSET + VREG_LDCI_SIZE)
#define VREG_BNR_SIZE       (0x1000)
#define VREG_BNR_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_BNR_OFFSET)

/*DM: 0x5000~0x5FFF*/
#define VREG_DM_OFFSET      (VREG_BNR_OFFSET + VREG_BNR_SIZE)
#define VREG_DM_SIZE        (0x1000)
#define VREG_DM_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_DM_OFFSET)

/*Gamma:0x6000~0x6FFF*/
#define VREG_GAMMA_OFFSET   (VREG_DM_OFFSET + VREG_DM_SIZE)
#define VREG_GAMMA_SIZE     (0x1000)
#define VREG_GAMMA_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_GAMMA_OFFSET)

/*PreGamma:0x7000~0x7FFF*/
#define VREG_PREGAMMA_OFFSET (VREG_GAMMA_OFFSET + VREG_GAMMA_SIZE)
#define VREG_PREGAMMA_SIZE   (0x1000)
#define VREG_PREGAMMA_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_PREGAMMA_OFFSET)

/*DeGamma:0x8000~0x8FFF*/
#define VREG_DEGAMMA_OFFSET (VREG_PREGAMMA_OFFSET + VREG_PREGAMMA_SIZE)
#define VREG_DEGAMMA_SIZE   (0x1000)
#define VREG_DEGAMMA_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_DEGAMMA_OFFSET)

/*AE:0x9000~0x9FFF*/
#define VREG_AE_OFFSET    (VREG_DEGAMMA_OFFSET + VREG_DEGAMMA_SIZE)
#define VREG_AE_SIZE      (0x1000)
#define VREG_AE_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_AE_OFFSET)

/*AWB:0xA000~0xAFFF*/
#define VREG_AWB_OFFSET   (VREG_AE_OFFSET + VREG_AE_SIZE)
#define VREG_AWB_SIZE     (0x1000)
#define VREG_AWB_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_AWB_OFFSET)

/*AF:0xB000~0xBFFF*/
#define VREG_AF_OFFSET    (VREG_AWB_OFFSET + VREG_AWB_SIZE)
#define VREG_AF_SIZE      (0x1000)
#define VREG_AF_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_AF_OFFSET)

/*RLSC:0xC000~0xCFFF*/
#define VREG_RLSC_OFFSET    (VREG_AF_OFFSET + VREG_AF_SIZE)
#define VREG_RLSC_SIZE      (0x1000)
#define VREG_RLSC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_RLSC_OFFSET)

/*FeLogLUT:0xD000~0xE1FF*/
#define VREG_FELOGLUT_OFFSET    (VREG_RLSC_OFFSET + VREG_RLSC_SIZE)
#define VREG_FELOGLUT_SIZE      (0x1200)
#define VREG_FELOGLUT_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_FELOGLUT_OFFSET)

/*BeLogLUT:0xE200~0xF3FF*/
#define VREG_LOGLUT_OFFSET    (VREG_FELOGLUT_OFFSET + VREG_FELOGLUT_SIZE)
#define VREG_LOGLUT_SIZE      (0x1200)
#define VREG_LOGLUT_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_LOGLUT_OFFSET)

/*SHARPEN: 0xF400~0x113FF*/
#define VREG_SHARPEN_OFFSET (VREG_LOGLUT_OFFSET + VREG_LOGLUT_SIZE)
#define VREG_SHARPEN_SIZE   (0x1C00)
#define VREG_SHARPEN_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_SHARPEN_OFFSET)

/*LSC:  0x11000~0x15FFF*/
#define VREG_LSC_OFFSET     (VREG_SHARPEN_OFFSET + VREG_SHARPEN_SIZE)
#define VREG_LSC_SIZE       (0x5000)/* 0xB00  reserved*/
#define VREG_LSC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_LSC_OFFSET)

//-----------------------------------------------------------------------------------------//
// SIZE >= 0x10000
// ----------------------------------------------------------------------------------------//

/*CLUT:0x16000~0x32EFF*/
#define VREG_CLUT_OFFSET    (VREG_LSC_OFFSET + VREG_LSC_SIZE)
#define VREG_CLUT_SIZE      (0x1CF00)
#define VREG_CLUT_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_CLUT_OFFSET)

/*DPC:0x32F00~0x43EFF*/
#define VREG_DPC_OFFSET     (VREG_CLUT_OFFSET + VREG_CLUT_SIZE)
#define VREG_DPC_SIZE       (0x11000)
#define VREG_DPC_BASE(ViPipe) (HI_EXT_BASE_ADDR(ViPipe) + VREG_DPC_OFFSET)

// ----------------------------------------------------------------------------------------//

// ------------------------------------------------------------------------------ //
// Group: Top
// ------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------ //
// Register: hi_ext_top_wdr_cfg
// ------------------------------------------------------------------------------ //
// HI_TRUE: The state of WDR config is initialized;
// HI_FALSE: The state of WDR config is NOT initialized
// ------------------------------------------------------------------------------ //

#define HI_EXT_TOP_WDR_CFG_DEFAULT (0x0)
#define HI_EXT_TOP_WDR_CFG_DATASIZE (1)

// args: data (1-bit)
static __inline HI_VOID hi_ext_top_wdr_cfg_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0000, (data & 0x01));
}
static __inline HI_U8 hi_ext_top_wdr_cfg_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0000) & 0x01);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_top_pub_attr_cfg
// ------------------------------------------------------------------------------ //
// HI_TRUE: The state of PubAttr config is initialized;
// HI_FALSE: The state of PubAttr config is NOT initialized
// ------------------------------------------------------------------------------ //

#define HI_EXT_TOP_PUB_ATTR_CFG_DEFAULT (0x0)
#define HI_EXT_TOP_PUB_ATTR_CFG_DATASIZE (1)

// args: data (1-bit)
static __inline HI_VOID hi_ext_top_pub_attr_cfg_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0002, (data & 0x01));
}
static __inline HI_U8 hi_ext_top_pub_attr_cfg_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0002) & 0x01);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_top_wdr_switch
// ------------------------------------------------------------------------------ //
// HI_TRUE: WDR switch is complete;
// HI_FALSE: WDR switch is NOT complete
// ------------------------------------------------------------------------------ //

#define HI_EXT_TOP_WDR_SWITCH_DEFAULT (0x0)
#define HI_EXT_TOP_WDR_SWITCH_DATASIZE (1)

// args: data (1-bit)
static __inline HI_VOID hi_ext_top_wdr_switch_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0004, (data & 0x01));
}
static __inline HI_U8 hi_ext_top_wdr_switch_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0004) & 0x01);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_top_res_switch
// ------------------------------------------------------------------------------ //
// HI_TRUE: Resolution switch is complete;
// HI_FALSE: Resolution switch is NOT complete
// ------------------------------------------------------------------------------ //

#define HI_EXT_TOP_RES_SWITCH_DEFAULT (0x0)
#define HI_EXT_TOP_RES_SWITCH_DATASIZE (1)

// args: data (1-bit)
static __inline HI_VOID hi_ext_top_res_switch_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0006, (data & 0x01));
}
static __inline HI_U8 hi_ext_top_res_switch_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0006) & 0x01);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_top_sensor_width
// ------------------------------------------------------------------------------ //
//
// ------------------------------------------------------------------------------ //

#define HI_EXT_TOP_SENSOR_WIDTH_DEFAULT (0xF00)
#define HI_EXT_TOP_SENSOR_WIDTH_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_top_sensor_width_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0008, data);
}
static __inline HI_U32 hi_ext_top_sensor_width_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0008);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_top_sensor_width
// ------------------------------------------------------------------------------ //
//
// ------------------------------------------------------------------------------ //

#define HI_EXT_TOP_SENSOR_HEIGHT_DEFAULT (0x870)
#define HI_EXT_TOP_SENSOR_HEIGHT_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_top_sensor_height_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x000c, data);
}
static __inline HI_U32 hi_ext_top_sensor_height_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x000c);
}

#define HI_EXT_SYSTEM_FPS_BASE_DEFAULT (30)
#define HI_EXT_SYSTEM_FPS_BASE_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_fps_base_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0010, data);
}
static __inline HI_U32 hi_ext_system_fps_base_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0010);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sensor_max_resolution_width
// ------------------------------------------------------------------------------ //
// width of sensor resolution
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_SENSOR_MAX_RESOLUTION_WIDTH_DEFAULT (1280)
#define HI_EXT_SYSTEM_SENSOR_MAX_RESOLUTION_WIDTH_DATASIZE (16)

// args: data (16-bit)

static __inline HI_VOID hi_ext_system_sensor_max_resolution_width_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0014, data);
}

static __inline HI_U16 hi_ext_system_sensor_max_resolution_width_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0014);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sensor_max_resolution_height
// ------------------------------------------------------------------------------ //
// height of sensor resolution
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_SENSOR_MAX_RESOLUTION_HEIGHT_DEFAULT (720)
#define HI_EXT_SYSTEM_SENSOR_MAX_RESOLUTION_HEIGHT_DATASIZE (16)

// args: data (16-bit)

static __inline HI_VOID hi_ext_system_sensor_max_resolution_height_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0016, data);
}

static __inline HI_U16 hi_ext_system_sensor_max_resolution_height_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0016);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sys_debug_enable
// ------------------------------------------------------------------------------ //
// 0:disable system debug information
// 1:enable system debug information
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_SYS_DEBUG_ENABLE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_SYS_DEBUG_ENABLE_DATASIZE (1)

// args: data (1-bit)
static __inline HI_VOID hi_ext_system_sys_debug_enable_write(VI_PIPE ViPipe, HI_U16 data)
{
    HI_U16 u32Current = IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0018);
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0018, (((HI_U16) data) << 0) | (u32Current & 0xFFFE));
}

static __inline HI_U16 hi_ext_system_sys_debug_enable_read(VI_PIPE ViPipe)
{
    return (HI_U16) ((IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0018) & 0x0001) >> 0);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sys_debug_high_addr
// ------------------------------------------------------------------------------ //
// address of system debug information
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_SYS_DEBUG_HIGH_ADDR_DEFAULT (0x0)
#define HI_EXT_SYSTEM_SYS_DEBUG_HIGH_ADDR_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_sys_debug_high_addr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x001c, data);
}

static __inline HI_U32 hi_ext_system_sys_debug_high_addr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x001c);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sys_debug_low_addr
// ------------------------------------------------------------------------------ //
// address of system debug information
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_SYS_DEBUG_LOW_ADDR_DEFAULT (0x0)
#define HI_EXT_SYSTEM_SYS_DEBUG_LOW_ADDR_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_sys_debug_low_addr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0020, data);
}

static __inline HI_U32 hi_ext_system_sys_debug_low_addr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0020);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sys_debug_size
// ------------------------------------------------------------------------------ //
// size of sys debug struct
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_SYS_DEBUG_SIZE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_SYS_DEBUG_SIZE_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_sys_debug_size_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0024, data) ;
}

static __inline HI_U32 hi_ext_system_sys_debug_size_read(VI_PIPE ViPipe)
{
    return (HI_U32)IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0024);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_debug_depth
// ------------------------------------------------------------------------------ //
// the depth of all debug information
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEBUG_DEPTH_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEBUG_DEPTH_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_sys_debug_depth_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0028, data);
}

static __inline HI_U16 hi_ext_system_sys_debug_depth_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0028);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_statistics_ctrl_lowbit
// ------------------------------------------------------------------------------ //
// ISP statistics control low bit
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_STATISTICS_LOWBIT_DEFAULT  (0xFFFFBF77)
#define HI_EXT_SYSTEM_STATISTICS_LOWBIT_DATASIZE (32)

// args: data (32-bit)
static __inline HI_U32 hi_ext_system_statistics_ctrl_lowbit_read(VI_PIPE ViPipe)
{
    return  IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x002c);
}

static __inline HI_VOID hi_ext_system_statistics_ctrl_lowbit_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x002c, data);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_statistics_ctrl_highbit
// ------------------------------------------------------------------------------ //
// ISP statistics control high bit
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_STATISTICS_HIGHBIT_DEFAULT  (0xFFFFBF77)
#define HI_EXT_SYSTEM_STATISTICS_HIGHBIT_DATASIZE (32)

// args: data (32-bit)
static __inline HI_U32 hi_ext_system_statistics_ctrl_highbit_read(VI_PIPE ViPipe)
{
    return  IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0030);
}

static __inline HI_VOID hi_ext_system_statistics_ctrl_highbit_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0030, data);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bind_attr
// ------------------------------------------------------------------------------ //
// isp bind attr include AeLib AwbLib SensorId etc
//|----------------------------------------------------------------|
//|           RSV          |     AE_LIB_ID    |   AWB_LIB_ID       |
//|----------------------------------------------------------------|
//|<--------16bits--------><-------8bits------><------8bits------->|
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_BIND_ATTR_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_BIND_ATTR_DATASIZE (32)

// args: data (32-bit)
static __inline HI_U32 hi_ext_system_bind_attr_read(VI_PIPE ViPipe)
{
    return  IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0034);
}
static __inline HI_VOID hi_ext_system_bind_attr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0034, data);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_freeze_firmware
// ------------------------------------------------------------------------------ //
// Disables firmware and stops updating the ISP
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_FREEZE_FIRMWARE_DEFAULT (0)
#define HI_EXT_SYSTEM_FREEZE_FIRMWARE_DATASIZE (1)

// args: data (1-bit)
static __inline HI_VOID hi_ext_system_freeze_firmware_write(VI_PIPE ViPipe, HI_U8 data)
{
    HI_U8 u32Current = IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0038);
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0038, (data & 0x01) | (u32Current & 0xFE));
}
static __inline HI_U8 hi_ext_system_freeze_firmware_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0038) & 0x01);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sensor_wdr_mode
// ------------------------------------------------------------------------------ //
// WDR mode: 0=linear 1=built-in wdr 2=2to1 full frame wdr  ...
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_SENSOR_WDR_MODE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_SENSOR_WDR_MODE_DATASIZE (6)

// args: data (6-bit)
static __inline HI_VOID hi_ext_system_sensor_wdr_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    HI_U16 u32Current = IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x003a);
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x003a, (((HI_U16) (data & 0x003F)) << 4) | (u32Current & 0xFC0F));
}
static __inline HI_U8 hi_ext_system_sensor_wdr_mode_read(VI_PIPE ViPipe)
{
    return (HI_U8) ((IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x003a) & 0x03F0) >> 4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_sync_total_width
// ------------------------------------------------------------------------------ //
// Total frame width including horizontal blanking
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYNC_TOTAL_WIDTH_DEFAULT (0x672)
#define HI_EXT_SYNC_TOTAL_WIDTH_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_sync_total_width_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x3c, data);
}
static __inline HI_U16 hi_ext_sync_total_width_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x3c);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_sync_total_height
// ------------------------------------------------------------------------------ //
// Total frame height including vertical blanking
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYNC_TOTAL_HEIGHT_DEFAULT (0x2EE)
#define HI_EXT_SYNC_TOTAL_HEIGHT_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_sync_total_height_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x40, data);
}
static __inline HI_U16 hi_ext_sync_total_height_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x40);
}


static __inline HI_VOID hi_ext_system_update_info_high_phyaddr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT((VREG_TOP_BASE(ViPipe) + 0xa4), data);
}

static __inline HI_U32 hi_ext_system_update_info_high_phyaddr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0xa4);
}

static __inline HI_VOID hi_ext_system_update_info_low_phyaddr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT((VREG_TOP_BASE(ViPipe) + 0xa8), data);
}

static __inline HI_U32 hi_ext_system_update_info_low_phyaddr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0xa8);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_gamma_curve_type
// ------------------------------------------------------------------------------ //
// the type of gamma curve
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_GAMMA_CURVE_TYPE_DEFAULT (0)
#define HI_EXT_SYSTEM_GAMMA_CURVE_TYPE_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_gamma_curve_type_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xc8, data);
}
static __inline HI_U8 hi_ext_system_gamma_curve_type_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xc8);
}

// ------------------------------------------------------------------------------ //
// Register: isp_crop_pos_x_write
// ------------------------------------------------------------------------------ //
//
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_CORP_POS_X_DATASIZE (16)
static __inline HI_VOID hi_ext_system_corp_pos_x_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0xd4, data);
}
static __inline HI_U16 hi_ext_system_corp_pos_x_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0xd4);
}

// ------------------------------------------------------------------------------ //
// Register: isp_crop_pos_y_write
// ------------------------------------------------------------------------------ //
//
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_CORP_POS_Y_DATASIZE (16)
static __inline HI_VOID hi_ext_system_corp_pos_y_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0xd6, data);
}
static __inline HI_U16 hi_ext_system_corp_pos_y_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0xd6);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_isp_bit_bypass
// ------------------------------------------------------------------------------ //
//
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYS_ISP_BYPASS_DEFAULT (0)
#define HI_EXT_SYS_ISP_BYPASS_DATASIZE (32)

static __inline HI_VOID hi_ext_system_isp_bit_bypass_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0xd8, data);
}

static __inline HI_U32 hi_ext_system_isp_bit_bypass_read(VI_PIPE ViPipe)
{
    return  IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0xd8);
}

#define HI_EXT_SYSTEM_TOP_BIT_RESERVE0_WRITE_DEFAULT (0)
#define HI_EXT_SYSTEM_TOP_BIT_RESERVE0_WRITE_DATASIZE (2)

static __inline HI_VOID hi_ext_system_top_bit_reserve0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe0, data & 0xF);
}

static __inline HI_U8 hi_ext_system_top_bit_reserve0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe0) & 0xF);
}

#define HI_EXT_SYSTEM_TOP_BIT_RESERVE1_WRITE_DEFAULT (0)
#define HI_EXT_SYSTEM_TOP_BIT_RESERVE1_WRITE_DATASIZE (2)

static __inline HI_VOID hi_ext_system_top_bit_reserve1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe1, data & 0x3);
}

static __inline HI_U8 hi_ext_system_top_bit_reserve1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe1) & 0x3);
}

#define HI_EXT_SYSTEM_TOP_BIT_RESERVE2_WRITE_DEFAULT (0)
#define HI_EXT_SYSTEM_TOP_BIT_RESERVE2_WRITE_DATASIZE (2)

static __inline HI_VOID hi_ext_system_top_bit_reserve2_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe2, data & 0x3);
}

static __inline HI_U8 hi_ext_system_top_bit_reserve2_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe2) & 0x3);
}

#define HI_EXT_SYSTEM_TOP_BIT_RESERVE3_WRITE_DEFAULT (0)
#define HI_EXT_SYSTEM_TOP_BIT_RESERVE3_WRITE_DATASIZE (2)

static __inline HI_VOID hi_ext_system_top_bit_reserve3_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe3, data & 0x3);
}

static __inline HI_U8 hi_ext_system_top_bit_reserve3_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe3) & 0x3);
}

#define HI_EXT_SYSTEM_TOP_BIT_RESERVE4_WRITE_DEFAULT (0)
#define HI_EXT_SYSTEM_TOP_BIT_RESERVE4_WRITE_DATASIZE (2)

static __inline HI_VOID hi_ext_system_top_bit_reserve4_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe4, data & 0x7);
}

static __inline HI_U8 hi_ext_system_top_bit_reserve4_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xe4) & 0x7);
}

static __inline HI_VOID hi_ext_system_yuv_format_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0xec, data);
}

static __inline HI_U32 hi_ext_system_yuv_format_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0xec);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_rggb_cfg_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)

static __inline HI_VOID hi_ext_system_rggb_cfg_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xf0, (data & 0xff));
}
static __inline HI_U8 hi_ext_system_rggb_cfg_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0xf0) & 0xff);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sensor_mode
// ------------------------------------------------------------------------------ //
// Used to distinguish the special sensor mode
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_SENSOR_MODE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_SENSOR_MODE_DATASIZE (8)

// args: data (1-bit)
static __inline HI_VOID hi_ext_system_sensor_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x00f2, (data & 0xff));
}
static __inline HI_U8 hi_ext_system_sensor_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x00f2) & 0xff);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_isp_dgain_bypass
// ------------------------------------------------------------------------------ //
//
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYS_ISP_DGAIN_ENABLE_DEFAULT (0x0)
#define HI_EXT_SYS_ISP_DGAIN_ENABLE_DATASIZE (1)

static __inline HI_VOID hi_ext_system_isp_dgain_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x00f4, (data & 0x01));
}

static __inline HI_U8 hi_ext_system_isp_dgain_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x00f4) & 0x01);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_be_free_buffer_high_addr
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_BE_FREE_BUFFER_HIGH_ADDR_DEFAULT (0x0)
#define HI_EXT_SYSTEM_BE_FREE_BUFFER_HIGH_ADDR_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_be_free_buffer_high_addr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0100, data);
}

static __inline HI_U32 hi_ext_system_be_free_buffer_high_addr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0100);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_be_free_buffer_low_addr
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_BE_FREE_BUFFER_LOW_ADDR_DEFAULT (0x0)
#define HI_EXT_SYSTEM_BE_FREE_BUFFER_LOW_ADDR_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_be_free_buffer_low_addr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0104, data);
}

static __inline HI_U32 hi_ext_system_be_free_buffer_low_addr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0104);
}




// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_sharpen_overshootAmt
// ------------------------------------------------------------------------------ //
// sharpening overshoot Amt
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_ACTUAL_SHARPEN_OVERSHOOT_DEFAULT                  (150)

// args: data (8-bit)

static __inline HI_VOID hi_ext_system_actual_sharpen_overshootAmt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0108, data);
}
static __inline HI_U8 hi_ext_system_actual_sharpen_overshootAmt_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0108);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_sharpen_undershootAmt_write
// ------------------------------------------------------------------------------ //
// sharpening undershoot Amt
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_ACTUAL_SHARPEN_UNDERSHOOT_DEFAULT            (200)
// args: data (8-bit)

static __inline HI_VOID hi_ext_system_actual_sharpen_undershootAmt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x010a, data);
}
static __inline HI_U8 hi_ext_system_actual_sharpen_undershootAmt_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x010a);
}



#define HI_EXT_SYSTEM_ACTUAL_SHARPEN_SHOOTSUPST_DEFAULT            (1)

static __inline HI_VOID hi_ext_system_actual_sharpen_shootSupSt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x010c, data);
}

static __inline HI_U8 hi_ext_system_actual_sharpen_shootSupSt_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x010c);
}


static  __inline HI_VOID hi_ext_system_actual_sharpen_edge_frequence_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x010e, data);
}

static __inline HI_U16 hi_ext_system_actual_sharpen_edge_frequence_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x010e);
}


static  __inline HI_VOID hi_ext_system_actual_sharpen_texture_frequence_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0110, data);
}

static __inline HI_U16 hi_ext_system_actual_sharpen_texture_frequence_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0110);
}

/*0x0120~0x015f*/

static __inline HI_VOID hi_ext_system_actual_sharpen_edge_str_write(VI_PIPE ViPipe, HI_U8 index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0120 + index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_actual_sharpen_edge_str_read(VI_PIPE ViPipe, HI_U8 index)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0120 + index * sizeof(HI_U16));
}

/* 0x0160~0x019f  */

static __inline HI_VOID hi_ext_system_actual_sharpen_texture_str_write(VI_PIPE ViPipe, HI_U8 index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0160 + index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_actual_sharpen_texture_str_read(VI_PIPE ViPipe, HI_U8 index)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0160 + index * sizeof(HI_U16));

}


#define HI_EXT_SYSTEM_BAYERNR_ACTUAL_STRENGTH_DEFAULT  (100)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_actual_fine_strength_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A0, data);
}
static __inline HI_U8 hi_ext_system_bayernr_actual_fine_strength_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A0);
}

#define  HI_EXT_SYSTEM_BAYERNR_ACTUAL_CORING_WEIGHT_DEFAULT (800)
static __inline HI_VOID hi_ext_system_bayernr_actual_coring_weight_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A2, data);
}

static __inline HI_U16 hi_ext_system_bayernr_actual_coring_weight_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A2);
}


static __inline HI_VOID hi_ext_system_bayernr_actual_nr_lsc_ratio_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A4, data);
}
static __inline HI_U8 hi_ext_system_bayernr_actual_nr_lsc_ratio_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A4);
}



// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_actual_chroma_strength_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A8 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_actual_chroma_strength_read(VI_PIPE ViPipe, HI_U8 i)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01A8 + (i * sizeof(HI_U8)));
}

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_actual_wdr_frame_strength_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01AC + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_actual_wdr_frame_strength_read(VI_PIPE ViPipe, HI_U8 i)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x01AC + (i * sizeof(HI_U8)));
}

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_bayernr_actual_coarse_strength_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0200 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_actual_coarse_strength_read(VI_PIPE ViPipe, HI_U8 i)
{
    return IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x0200 + (i * sizeof(HI_U16)));
}


static __inline HI_VOID  hi_ext_system_dehaze_actual_strength_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0208, data);
}
static __inline HI_U16  hi_ext_system_dehaze_actual_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x0208);
}

static __inline HI_VOID  hi_ext_system_drc_actual_strength_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x020A, data);
}
static __inline HI_U16  hi_ext_system_drc_actual_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x020A);
}

/*0x0210 ~ 0x*/
static __inline HI_VOID  hi_ext_system_actual_wdr_exposure_ratio_write(VI_PIPE ViPipe, HI_U8 i, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0210 + (i * sizeof(HI_U32)), data);
}
static __inline HI_U32  hi_ext_system_actual_wdr_exposure_ratio_read(VI_PIPE ViPipe, HI_U8 i)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x0210 + (i * sizeof(HI_U32)));
}

static __inline HI_VOID hi_ext_system_block_num_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x220, (data & 0xff));
}
static __inline HI_U8 hi_ext_system_block_num_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x220) & 0xff);
}

#define HI_EXT_SYSTEM_TOP_CHANNEL_SELECT_WRITE_DEFAULT (0)
#define HI_EXT_SYSTEM_TOP_CHANNEL_SELECT_WRITE_DATASIZE (2)

static __inline HI_VOID hi_ext_system_top_channel_select_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x224, data & 0x3);
}

static __inline HI_U8 hi_ext_system_top_channel_select_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x224) & 0x3);
}

#define HI_EXT_SYSTEM_TOP_CHANNEL_SELECT_PRE_WRITE_DEFAULT (0)
#define HI_EXT_SYSTEM_TOP_CHANNEL_SELECT_PRE_WRITE_DATASIZE (2)

static __inline HI_VOID hi_ext_system_top_channel_select_pre_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x226, data & 0x3);
}

static __inline HI_U8 hi_ext_system_top_channel_select_pre_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_TOP_BASE(ViPipe) + 0x226) & 0x3);
}

// ------------------------------------------------------------------------------ //
// ISP Multi-Pipe Different Config Attr
// ------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_isp_pipe_diff_offset
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_ISP_PIPE_DIFF_OFFSET_DEFAULT (0x0)
#define HI_EXT_SYSTEM_ISP_PIPE_DIFF_OFFSET_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_isp_pipe_diff_offset_write(VI_PIPE ViPipe, HI_U8 index, HI_S32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x230 + (index << 2), data);
}
static __inline HI_S32 hi_ext_system_isp_pipe_diff_offset_read(VI_PIPE ViPipe, HI_U8 index)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x230 + (index << 2));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_isp_pipe_diff_gain
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_ISP_PIPE_DIFF_GAIN_DEFAULT (0x100)
#define HI_EXT_SYSTEM_ISP_PIPE_DIFF_GAIN_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_isp_pipe_diff_gain_write(VI_PIPE ViPipe, HI_U8 index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x240 + (index << 2), data);
}
static __inline HI_U32 hi_ext_system_isp_pipe_diff_gain_read(VI_PIPE ViPipe, HI_U8 index)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x240 + (index << 2));
}



// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_isp_matrix_coefft
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_ISP_PIPE_DIFF_CCM_DEFAULT (0x100)
#define HI_EXT_SYSTEM_ISP_PIPE_DIFF_CCM_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_isp_pipe_diff_ccm_write(VI_PIPE ViPipe, HI_U8 index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x250 + (index << 1), data);
}
static __inline HI_U16 hi_ext_system_isp_pipe_diff_ccm_read(VI_PIPE ViPipe, HI_U8 index)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x250 + (index << 1));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_black_level_query
// ------------------------------------------------------------------------------ //
//R channel Black level
static __inline HI_VOID hi_ext_system_black_level_query_00_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x270 , data);
}

static __inline HI_U16 hi_ext_system_black_level_query_00_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x270);
}
//Gr channel Black level
static __inline HI_VOID hi_ext_system_black_level_query_01_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x272 , data);
}

static __inline HI_U16 hi_ext_system_black_level_query_01_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x272);
}

//Gb channel Black level
static __inline HI_VOID hi_ext_system_black_level_query_10_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x274 , data);
}

static __inline HI_U16 hi_ext_system_black_level_query_10_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x274);
}

//B channel Black level
static __inline HI_VOID hi_ext_system_black_level_query_11_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x276 , data);
}

static __inline HI_U16 hi_ext_system_black_level_query_11_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_TOP_BASE(ViPipe) + 0x276);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_be_buffer_address_high
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_BE_BUFFER_ADDRESS_HIGH_DEFAULT (0x0)
#define HI_EXT_SYSTEM_BE_BUFFER_ADDRESS_HIGH_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_be_buffer_address_high_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x02a0, data);
}

static __inline HI_U32 hi_ext_system_be_buffer_address_high_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x02a0);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_be_buffer_address_low
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_BE_BUFFER_ADDRESS_LOW_DEFAULT (0x0)
#define HI_EXT_SYSTEM_BE_BUFFER_ADDRESS_LOW_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_be_buffer_address_low_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x02a4, data);
}

static __inline HI_U32 hi_ext_system_be_buffer_address_low_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x02a4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bebuf_size
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_BEBUF_SIZE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_BEBUF_SIZE_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_be_buffer_size_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x02a8, data);
}

static __inline HI_U32 hi_ext_system_be_buffer_size_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_TOP_BASE(ViPipe) + 0x02a8);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_af_enable
// ------------------------------------------------------------------------------ //
// Used to
// ------------------------------------------------------------------------------ //

// args: data (1-bit)
static __inline HI_VOID hi_ext_af_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0000, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0000) & 0x01);
}


static __inline HI_VOID hi_ext_af_iir0_enable0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0001, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir0_enable0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0001) & 0x01);
}


static __inline HI_VOID hi_ext_af_iir0_enable1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0002, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir0_enable1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0002) & 0x01);
}

static __inline HI_VOID hi_ext_af_iir0_enable2_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0003, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir0_enable2_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0003) & 0x01);
}

static __inline HI_VOID hi_ext_af_iir1_enable0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0004, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir1_enable0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0004) & 0x01);
}

static __inline HI_VOID hi_ext_af_iir1_enable1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0005, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir1_enable1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0005) & 0x01);
}


static __inline HI_VOID hi_ext_af_iir1_enable2_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0006, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir1_enable2_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0006) & 0x01);
}

static __inline HI_VOID hi_ext_af_peakmode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0007, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_peakmode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0007) & 0x01);
}

static __inline HI_VOID hi_ext_af_squmode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0008, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_squmode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0008) & 0x01);
}


static __inline HI_VOID hi_ext_af_offset_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0009, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_offset_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0009) & 0x01);
}


static __inline HI_VOID hi_ext_af_crop_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000a, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_crop_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000a) & 0x01);
}

static __inline HI_VOID hi_ext_af_lpf_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000b, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_lpf_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000b) & 0x01);
}

static __inline HI_VOID hi_ext_af_mean_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000c, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_mean_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000c) & 0x01);
}

static __inline HI_VOID hi_ext_af_rawmode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000d, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_rawmode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000d) & 0x01);
}


static __inline HI_VOID hi_ext_af_iir0_ds_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000e, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir0_ds_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000e) & 0x01);
}

static __inline HI_VOID hi_ext_af_iir1_ds_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000f, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir1_ds_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x000f) & 0x01);
}

static __inline HI_VOID hi_ext_af_fir0_lpf_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0010, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_fir0_lpf_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0010) & 0x01);
}

static __inline HI_VOID hi_ext_af_fir1_lpf_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0011, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_fir1_lpf_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0011) & 0x01);
}

static __inline HI_VOID hi_ext_af_iir0_ldg_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0012, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir0_ldg_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0012) & 0x01);
}

static __inline HI_VOID hi_ext_af_iir1_ldg_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0013, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_iir1_ldg_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0013) & 0x01);
}


static __inline HI_VOID hi_ext_af_fir0_ldg_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0014, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_fir0_ldg_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0014) & 0x01);
}

static __inline HI_VOID hi_ext_af_fir1_ldg_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0015, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_fir1_ldg_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0015) & 0x01);
}

static __inline HI_VOID hi_ext_af_updatemode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0016, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_updatemode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0016) & 0x01);
}

static __inline HI_VOID hi_ext_af_update_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0017, (data & 0x01));
}
static __inline HI_U8 hi_ext_af_update_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0017) & 0x01);
}

//8bit

static __inline HI_VOID hi_ext_af_bayermode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0018, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_bayermode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0018) & 0xff);
}

static __inline HI_VOID hi_ext_af_gamma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0019, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_gamma_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0019) & 0xff);
}

static __inline HI_VOID hi_ext_af_gain_limit_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001a, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_gain_limit_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001a) & 0xff);
}

static __inline HI_VOID hi_ext_af_iir_plg_group0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001b, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir_plg_group0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001b) & 0xff);
}


static __inline HI_VOID hi_ext_af_iir_pls_group0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001c, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir_pls_group0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001c) & 0xff);
}

static __inline HI_VOID hi_ext_af_iir_plg_group1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001d, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir_plg_group1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001d) & 0xff);
}

static __inline HI_VOID hi_ext_af_iir_pls_group1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001e, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir_pls_group1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001e) & 0xff);
}

static __inline HI_VOID hi_ext_af_cnt_shift0_h_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001f, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_cnt_shift0_h_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x001f) & 0xff);
}

static __inline HI_VOID hi_ext_af_cnt_shift1_h_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0020, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_cnt_shift1_h_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0020) & 0xff);
}

static __inline HI_VOID hi_ext_af_cnt_shift0_v_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0021, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_cnt_shift0_v_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0021) & 0xff);
}

static __inline HI_VOID hi_ext_af_cnt_shift_y_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0022, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_cnt_shift_y_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0022) & 0xff);
}

static __inline HI_VOID hi_ext_af_iir_dilate0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0023, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir_dilate0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0023) & 0xff);
}

static __inline HI_VOID hi_ext_af_iir_dilate1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0024, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir_dilate1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0024) & 0xff);
}

static __inline HI_VOID hi_ext_af_hiligh_thre_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0025, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_hiligh_thre_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0025) & 0xff);
}

static __inline HI_VOID hi_ext_af_pos_sel_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0026, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_pos_sel_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0026) & 0xff);
}

#define HI_EXT_AF_SET_FLAG_DISABLE (0x0)
#define HI_EXT_AF_SET_FLAG_ENABLE (0x1)
static __inline HI_VOID hi_ext_af_set_flag_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0027, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_set_flag_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x0027) & 0xff);
}

// args: data (16-bit)
static __inline HI_VOID hi_ext_af_mean_thres_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0028), data);
}
static __inline HI_U16 hi_ext_af_mean_thres_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0028));
}

static __inline HI_VOID hi_ext_af_window_vnum_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x002a), data);
}
static __inline HI_U16 hi_ext_af_window_vnum_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x002a));
}

static __inline HI_VOID hi_ext_af_window_hnum_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x002c), data);
}
static __inline HI_U16 hi_ext_af_window_hnum_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x002c));
}

static __inline HI_VOID hi_ext_af_iir_thre0_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x002e), data);
}
static __inline HI_U16 hi_ext_af_iir_thre0_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x002e));
}

static __inline HI_VOID hi_ext_af_iir_thre1_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0030), data);
}
static __inline HI_U16 hi_ext_af_iir_thre1_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0030));
}

static __inline HI_VOID hi_ext_af_iir_peak0_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0032), data);
}
static __inline HI_U16 hi_ext_af_iir_peak0_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0032));
}

static __inline HI_VOID hi_ext_af_iir_peak1_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0034), data);
}
static __inline HI_U16 hi_ext_af_iir_peak1_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0034));
}

static __inline HI_VOID hi_ext_af_fir_thre0_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0036), data);
}
static __inline HI_U16 hi_ext_af_fir_thre0_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0036));
}

static __inline HI_VOID hi_ext_af_fir_thre1_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0038), data);
}
static __inline HI_U16 hi_ext_af_fir_thre1_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0038));
}

static __inline HI_VOID hi_ext_af_fir_peak0_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x003a), data);
}
static __inline HI_U16 hi_ext_af_fir_peak0_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x003a));
}

static __inline HI_VOID hi_ext_af_fir_peak1_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x003c), data);
}
static __inline HI_U16 hi_ext_af_fir_peak1_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x003c));
}

static __inline HI_VOID hi_ext_af_iir_slope0_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x003e), data);
}
static __inline HI_U16 hi_ext_af_iir_slope0_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x003e));
}

static __inline HI_VOID hi_ext_af_iir_slope1_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0040), data);
}
static __inline HI_U16 hi_ext_af_iir_slope1_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0040));
}

static __inline HI_VOID hi_ext_af_fir_slope0_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0042), data);
}
static __inline HI_U16 hi_ext_af_fir_slope0_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0042));
}

static __inline HI_VOID hi_ext_af_fir_slope1_coring_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0044), data);
}
static __inline HI_U16 hi_ext_af_fir_slope1_coring_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0044));
}

static __inline HI_VOID hi_ext_af_offset_gr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0046), data);
}
static __inline HI_U16 hi_ext_af_offset_gr_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0046));
}

static __inline HI_VOID hi_ext_af_offset_gb_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0048), data);
}
static __inline HI_U16 hi_ext_af_offset_gb_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0048));
}

static __inline HI_VOID hi_ext_af_input_vsize_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x004a), data);
}
static __inline HI_U16 hi_ext_af_input_vsize_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x004a));
}

static __inline HI_VOID hi_ext_af_input_hsize_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x004c), data);
}
static __inline HI_U16 hi_ext_af_input_hsize_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x004c));
}

static __inline HI_VOID hi_ext_af_iir0_shift_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x004e), data);
}
static __inline HI_U16 hi_ext_af_iir0_shift_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x004e));
}

static __inline HI_VOID hi_ext_af_iir1_shift_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0050), data);
}
static __inline HI_U16 hi_ext_af_iir1_shift_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0050));
}

static __inline HI_VOID hi_ext_af_iir2_shift_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0052), data);
}
static __inline HI_U16 hi_ext_af_iir2_shift_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0052));
}

static __inline HI_VOID hi_ext_af_iir3_shift_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0054), data);
}
static __inline HI_U16 hi_ext_af_iir3_shift_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0054));
}

static __inline HI_VOID hi_ext_af_iir0_shift_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0056), data);
}
static __inline HI_U16 hi_ext_af_iir0_shift_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0056));
}

static __inline HI_VOID hi_ext_af_iir1_shift_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0058), data);
}
static __inline HI_U16 hi_ext_af_iir1_shift_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0058));
}

static __inline HI_VOID hi_ext_af_iir2_shift_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x005a), data);
}
static __inline HI_U16 hi_ext_af_iir2_shift_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x005a));
}

static __inline HI_VOID hi_ext_af_iir3_shift_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x005c), data);
}
static __inline HI_U16 hi_ext_af_iir3_shift_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x005c));
}

static __inline HI_VOID hi_ext_af_iir_thre0_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x005e), data);
}
static __inline HI_U16 hi_ext_af_iir_thre0_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x005e));
}

static __inline HI_VOID hi_ext_af_iir_thre0_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0060), data);
}
static __inline HI_U16 hi_ext_af_iir_thre0_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0060));
}

static __inline HI_VOID hi_ext_af_iir_thre1_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0062), data);
}
static __inline HI_U16 hi_ext_af_iir_thre1_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0062));
}

static __inline HI_VOID hi_ext_af_iir_thre1_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0064), data);
}
static __inline HI_U16 hi_ext_af_iir_thre1_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0064));
}

static __inline HI_VOID hi_ext_af_iir_gain0_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0066), data);
}
static __inline HI_U16 hi_ext_af_iir_gain0_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0066));
}

static __inline HI_VOID hi_ext_af_iir_gain0_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0068), data);
}
static __inline HI_U16 hi_ext_af_iir_gain0_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0068));
}

static __inline HI_VOID hi_ext_af_iir_gain1_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x006a), data);
}
static __inline HI_U16 hi_ext_af_iir_gain1_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x006a));
}

static __inline HI_VOID hi_ext_af_iir_gain1_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x006c), data);
}
static __inline HI_U16 hi_ext_af_iir_gain1_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x006c));
}

static __inline HI_VOID hi_ext_af_iir_slope0_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x006e), data);
}
static __inline HI_U16 hi_ext_af_iir_slope0_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x006e));
}

static __inline HI_VOID hi_ext_af_iir_slope0_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0070), data);
}
static __inline HI_U16 hi_ext_af_iir_slope0_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0070));
}

static __inline HI_VOID hi_ext_af_iir_slope1_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0072), data);
}
static __inline HI_U16 hi_ext_af_iir_slope1_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0072));
}

static __inline HI_VOID hi_ext_af_iir_slope1_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0074), data);
}
static __inline HI_U16 hi_ext_af_iir_slope1_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0074));
}

static __inline HI_VOID hi_ext_af_fir_thre0_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0076), data);
}
static __inline HI_U16 hi_ext_af_fir_thre0_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0076));
}

static __inline HI_VOID hi_ext_af_fir_thre0_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0078), data);
}
static __inline HI_U16 hi_ext_af_fir_thre0_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0078));
}

static __inline HI_VOID hi_ext_af_fir_thre1_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x007a), data);
}
static __inline HI_U16 hi_ext_af_fir_thre1_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x007a));
}

static __inline HI_VOID hi_ext_af_fir_thre1_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x007c), data);
}
static __inline HI_U16 hi_ext_af_fir_thre1_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x007c));
}

static __inline HI_VOID hi_ext_af_fir_gain0_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x007e), data);
}
static __inline HI_U16 hi_ext_af_fir_gain0_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x007e));
}

static __inline HI_VOID hi_ext_af_fir_gain0_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0080), data);
}
static __inline HI_U16 hi_ext_af_fir_gain0_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0080));
}

static __inline HI_VOID hi_ext_af_fir_gain1_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0082), data);
}
static __inline HI_U16 hi_ext_af_fir_gain1_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0082));
}

static __inline HI_VOID hi_ext_af_fir_gain1_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0084), data);
}
static __inline HI_U16 hi_ext_af_fir_gain1_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0084));
}

static __inline HI_VOID hi_ext_af_fir_slope0_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0086), data);
}
static __inline HI_U16 hi_ext_af_fir_slope0_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0086));
}

static __inline HI_VOID hi_ext_af_fir_slope0_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0088), data);
}
static __inline HI_U16 hi_ext_af_fir_slope0_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0088));
}

static __inline HI_VOID hi_ext_af_fir_slope1_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x008a), data);
}
static __inline HI_U16 hi_ext_af_fir_slope1_low_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x008a));
}

static __inline HI_VOID hi_ext_af_fir_slope1_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x008c), data);
}
static __inline HI_U16 hi_ext_af_fir_slope1_high_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x008c));
}

static __inline HI_VOID hi_ext_af_acc_shift0_h_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x008e), data);
}
static __inline HI_U16 hi_ext_af_acc_shift0_h_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x008e));
}

static __inline HI_VOID hi_ext_af_acc_shift1_h_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0090), data);
}
static __inline HI_U16 hi_ext_af_acc_shift1_h_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0090));
}

static __inline HI_VOID hi_ext_af_acc_shift0_v_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0092), data);
}
static __inline HI_U16 hi_ext_af_acc_shift0_v_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0092));
}

static __inline HI_VOID hi_ext_af_acc_shift1_v_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0094), data);
}
static __inline HI_U16 hi_ext_af_acc_shift1_v_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0094));
}

static __inline HI_VOID hi_ext_af_acc_shift_y_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0096), data);
}
static __inline HI_U16 hi_ext_af_acc_shift_y_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0096));
}

static __inline HI_VOID hi_ext_af_crop_pos_y_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x0098), data);
}
static __inline HI_U16 hi_ext_af_crop_pos_y_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x0098));
}

static __inline HI_VOID hi_ext_af_crop_pos_x_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x009a), data);
}
static __inline HI_U16 hi_ext_af_crop_pos_x_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x009a));
}

static __inline HI_VOID hi_ext_af_crop_vsize_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x009c), data);
}
static __inline HI_U16 hi_ext_af_crop_vsize_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x009c));
}

static __inline HI_VOID hi_ext_af_crop_hsize_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x009e), data);
}
static __inline HI_U16 hi_ext_af_crop_hsize_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x009e));
}

static __inline HI_VOID hi_ext_af_iir_gain0_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00a0), data);
}
static __inline HI_U16 hi_ext_af_iir_gain0_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00a0));
}

static __inline HI_VOID hi_ext_af_iir_gain0_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00a2), data);
}
static __inline HI_U16 hi_ext_af_iir_gain0_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00a2));
}

static __inline HI_VOID hi_ext_af_iir_gain1_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00a4), data);
}
static __inline HI_U16 hi_ext_af_iir_gain1_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00a4));
}

static __inline HI_VOID hi_ext_af_iir_gain1_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00a6), data);
}
static __inline HI_U16 hi_ext_af_iir_gain1_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00a6));
}

static __inline HI_VOID hi_ext_af_iir_gain2_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00a8), data);
}
static __inline HI_U16 hi_ext_af_iir_gain2_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00a8));
}

static __inline HI_VOID hi_ext_af_iir_gain2_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00aa), data);
}
static __inline HI_U16 hi_ext_af_iir_gain2_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00aa));
}

static __inline HI_VOID hi_ext_af_iir_gain3_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00ac), data);
}
static __inline HI_U16 hi_ext_af_iir_gain3_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00ac));
}

static __inline HI_VOID hi_ext_af_iir_gain3_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00ae), data);
}
static __inline HI_U16 hi_ext_af_iir_gain3_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00ae));
}

static __inline HI_VOID hi_ext_af_iir_gain4_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00b0), data);
}
static __inline HI_U16 hi_ext_af_iir_gain4_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00b0));
}

static __inline HI_VOID hi_ext_af_iir_gain4_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00b2), data);
}
static __inline HI_U16 hi_ext_af_iir_gain4_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00b2));
}

static __inline HI_VOID hi_ext_af_iir_gain5_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00b4), data);
}
static __inline HI_U16 hi_ext_af_iir_gain5_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00b4));
}

static __inline HI_VOID hi_ext_af_iir_gain5_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00b6), data);
}
static __inline HI_U16 hi_ext_af_iir_gain5_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00b6));
}

static __inline HI_VOID hi_ext_af_iir_gain6_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00b8), data);
}
static __inline HI_U16 hi_ext_af_iir_gain6_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00b8));
}

static __inline HI_VOID hi_ext_af_iir_gain6_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00ba), data);
}
static __inline HI_U16 hi_ext_af_iir_gain6_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00ba));
}

static __inline HI_VOID hi_ext_af_fir_h_gain0_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00bc), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain0_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00bc));
}

static __inline HI_VOID hi_ext_af_fir_h_gain0_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00be), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain0_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00be));
}

static __inline HI_VOID hi_ext_af_fir_h_gain1_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00c0), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain1_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00c0));
}

static __inline HI_VOID hi_ext_af_fir_h_gain1_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00c2), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain1_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00c2));
}

static __inline HI_VOID hi_ext_af_fir_h_gain2_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00c4), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain2_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00c4));
}

static __inline HI_VOID hi_ext_af_fir_h_gain2_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00c6), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain2_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00c6));
}

static __inline HI_VOID hi_ext_af_fir_h_gain3_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00c8), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain3_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00c8));
}

static __inline HI_VOID hi_ext_af_fir_h_gain3_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00ca), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain3_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00ca));
}

static __inline HI_VOID hi_ext_af_fir_h_gain4_group0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00cc), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain4_group0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00cc));
}

static __inline HI_VOID hi_ext_af_fir_h_gain4_group1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00ce), data);
}
static __inline HI_U16 hi_ext_af_fir_h_gain4_group1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00ce));
}

static __inline HI_VOID hi_ext_af_shift_count_y_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AF_BASE(ViPipe) + 0x00d0), data);
}
static __inline HI_U16 hi_ext_af_shift_count_y_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_AF_BASE(ViPipe) + 0x00d0));
}

//8bit
static __inline HI_VOID hi_ext_af_iir0_shift_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x00d2, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir0_shift_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x00d2) & 0xff);
}

static __inline HI_VOID hi_ext_af_iir1_shift_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_AF_BASE(ViPipe) + 0x00d3, (data & 0xff));
}
static __inline HI_U8 hi_ext_af_iir1_shift_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AF_BASE(ViPipe) + 0x00d3) & 0xff);
}



// ------------------------------------------------------------------------------ //
// Group: Sync
// ------------------------------------------------------------------------------ //
/*.........*/

// ------------------------------------------------------------------------------ //
// Group: Sensor Access
// ------------------------------------------------------------------------------ //
/*.........*/


// ------------------------------------------------------------------------------ //
// Group: Flash interface
// ------------------------------------------------------------------------------ //
/*.........*/

// ------------------------------------------------------------------------------ //
// Group: System 0x11000~?
// ------------------------------------------------------------------------------ //



//============================================================//
//DRC: 0x11000~0x110FF
//============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_enable_
// ------------------------------------------------------------------------------ //
// DRC Module Enable
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_drc_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x0, data);
}
static __inline HI_U8 hi_ext_system_drc_enable_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x0);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_manual_mode
// ------------------------------------------------------------------------------ //
// Manual Mode Enable of Drc Module
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_manual_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x1), data);
}
static __inline HI_U8 hi_ext_system_drc_manual_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x1));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_monochrome_mode
// ------------------------------------------------------------------------------ //
// Monochrome Mode Enable of Drc Module
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_monochrome_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x2), data);
}
static __inline HI_U8 hi_ext_system_drc_monochrome_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x2));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_asymmetry
// ------------------------------------------------------------------------------ //
// Asymmetry parameter of DRC Asymmetry Curve
// ------------------------------------------------------------------------------ //

// args: data (8-bit)

static __inline HI_VOID hi_ext_system_drc_asymmetry_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x5, data);
}
static __inline HI_U8 hi_ext_system_drc_asymmetry_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x5));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_secondpole
// ------------------------------------------------------------------------------ //
// Secondpole parameter of DRC Asymmetry Curve
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_secondpole_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x6), data);
}
static __inline HI_U8 hi_ext_system_drc_secondpole_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x6));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_compress
// ------------------------------------------------------------------------------ //
// Compress parameter of DRC Asymmetry Curve
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_compress_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x7), data);
}
static __inline HI_U8 hi_ext_system_drc_compress_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x7));
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_stretch
// ------------------------------------------------------------------------------ //
// Stretch parameter of DRC Asymmetry Curve
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_stretch_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x8), data);
}
static __inline HI_U8 hi_ext_system_drc_stretch_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x8));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_colorcc_lut_up_en
// ------------------------------------------------------------------------------ //
// colorcc_lut_up_en
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_colorcc_lut_up_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x9), data);
}
static __inline HI_U8 hi_ext_system_drc_colorcc_lut_up_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x9));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_bin_numz
// ------------------------------------------------------------------------------ //
// bin_num_z
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_bin_num_z_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xa), data);
}
static __inline HI_U8 hi_ext_system_drc_bin_num_z_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xa));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_coring
// ------------------------------------------------------------------------------ //
// drc_mixing_coring
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_coring_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xb), data);
}
static __inline HI_U8 hi_ext_system_drc_mixing_coring_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xb));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_dark_min
// ------------------------------------------------------------------------------ //
// mixing_dark_min
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_dark_min_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xc), data);
}
static __inline HI_U8 hi_ext_system_drc_mixing_dark_min_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xc));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_dark_max
// ------------------------------------------------------------------------------ //
// mixing_dark_max
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_dark_max_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xd), data);
}
static __inline HI_U8 hi_ext_system_drc_mixing_dark_max_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xd));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_dark_slo
// ------------------------------------------------------------------------------ //
// mixing_dark_slo
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_dark_slo_write(VI_PIPE ViPipe, HI_S8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xe), data);
}
static __inline HI_S8 hi_ext_system_drc_mixing_dark_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xe));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_dark_thr
// ------------------------------------------------------------------------------ //
// mixing_dark_thr
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_dark_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf), data);
}
static __inline HI_U8 hi_ext_system_drc_mixing_dark_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_bright_min
// ------------------------------------------------------------------------------ //
// mixing_bright_min
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_bright_min_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x10), data);
}
static __inline HI_U8 hi_ext_system_drc_mixing_bright_min_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x10));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_bright_max
// ------------------------------------------------------------------------------ //
// mixing_bright_max
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_bright_max_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x11), data);
}
static __inline HI_U8 hi_ext_system_drc_mixing_bright_max_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x11));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_bright_slo
// ------------------------------------------------------------------------------ //
// mixing_bright_slo
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_bright_slo_write(VI_PIPE ViPipe, HI_S8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x12), data);
}
static __inline HI_S8 hi_ext_system_drc_mixing_bright_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x12));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_mixing_bright_thr
// ------------------------------------------------------------------------------ //
// mixing_bright_thr
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_mixing_bright_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x13), data);
}
static __inline HI_U8 hi_ext_system_drc_mixing_bright_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x13));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_gain_clip_knee
// ------------------------------------------------------------------------------ //
// mixing_gain_clip_knee
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_gain_clip_knee_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x14), data);
}
static __inline HI_U8 hi_ext_system_drc_gain_clip_knee_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x14));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_gain_clip_step
// ------------------------------------------------------------------------------ //
// mixing_gain_clip_step
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_gain_clip_step_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x15), data);
}
static __inline HI_U8 hi_ext_system_drc_gain_clip_step_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x15));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_purple_high_slo
// ------------------------------------------------------------------------------ //
// purple_high_slo
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_purple_high_slo_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x16), data);
}
static __inline HI_U8 hi_ext_system_drc_purple_high_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x16));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_purple_high_thr
// ------------------------------------------------------------------------------ //
// purple_high_thr
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_purple_high_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x17), data);
}
static __inline HI_U8 hi_ext_system_drc_purple_high_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x17));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_purple_low_slo
// ------------------------------------------------------------------------------ //
// purple_low_slo
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_purple_low_slo_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x18), data);
}
static __inline HI_U8 hi_ext_system_drc_purple_low_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x18));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_purple_low_thr
// ------------------------------------------------------------------------------ //
// purple_low_thr
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_purple_low_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x19), data);
}
static __inline HI_U8 hi_ext_system_drc_purple_low_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x19));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_grad_shift
// ------------------------------------------------------------------------------ //
// grad_shift
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_grad_shift_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x1a), data);
}
static __inline HI_U8 hi_ext_system_drc_grad_shift_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x1a));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_grad_slope
// ------------------------------------------------------------------------------ //
// grad_slope
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_grad_slope_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x1b), data);
}
static __inline HI_U8 hi_ext_system_drc_grad_slope_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x1b));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_grad_max
// ------------------------------------------------------------------------------ //
// grad_max
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_grad_max_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x1c), data);
}
static __inline HI_U8 hi_ext_system_drc_grad_max_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x1c));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_grad_thr
// ------------------------------------------------------------------------------ //
// grad_thr
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_grad_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x1d), data);
}
static __inline HI_U8 hi_ext_system_drc_grad_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x1d));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_spa_coarse
// ------------------------------------------------------------------------------ //
// spa_coarse
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_var_spa_coarse_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x1e), data);
}
static __inline HI_U8 hi_ext_system_drc_var_spa_coarse_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x1e));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_spa_median
// ------------------------------------------------------------------------------ //
// spa_median
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_var_spa_medium_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x1f), data);
}
static __inline HI_U8 hi_ext_system_drc_var_spa_medium_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x1f));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_spa_fine
// ------------------------------------------------------------------------------ //
// spa_fine
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_var_spa_fine_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x20), data);
}
static __inline HI_U8 hi_ext_system_drc_var_spa_fine_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x20));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_rng_coarse
// ------------------------------------------------------------------------------ //
// rng_coarse
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_var_rng_coarse_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x21), data);
}
static __inline HI_U8 hi_ext_system_drc_var_rng_coarse_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x21));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_rng_medium
// ------------------------------------------------------------------------------ //
// rng_median
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_var_rng_medium_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x22), data);
}
static __inline HI_U8 hi_ext_system_drc_var_rng_medium_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x22));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_rng_fine
// ------------------------------------------------------------------------------ //
// rng_fine
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_var_rng_fine_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x23), data);
}
static __inline HI_U8 hi_ext_system_drc_var_rng_fine_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x23));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_bin_mix_coarse_lut
// ------------------------------------------------------------------------------ //
// bin_mix_coarse_lut
// ------------------------------------------------------------------------------ //
// args: data (8-bit)

static __inline HI_VOID hi_ext_system_drc_bin_mix_coarse_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x24  +  u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_drc_bin_mix_coarse_lut_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return (IORD_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x24  +  u8Index * sizeof(HI_U8))));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_bin_mix_medium_lut
// ------------------------------------------------------------------------------ //
// bin_mix_medium_lut
// ------------------------------------------------------------------------------ //

static __inline HI_VOID hi_ext_system_drc_bin_mix_medium_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x2c  +  u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_drc_bin_mix_medium_lut_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return (IORD_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x2c  +  u8Index * sizeof(HI_U8))));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_coring
// ------------------------------------------------------------------------------ //
// drc_detail_coring
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_coring_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x34), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_coring_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x34));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_dark_min
// ------------------------------------------------------------------------------ //
// detail_dark_min
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_dark_min_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x35), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_dark_min_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x35));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_dark_max
// ------------------------------------------------------------------------------ //
// detail_dark_max
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_dark_max_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x36), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_dark_max_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x36));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_dark_slo
// ------------------------------------------------------------------------------ //
// detail_dark_slo
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_dark_slo_write(VI_PIPE ViPipe, HI_S8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x37), data);
}
static __inline HI_S8 hi_ext_system_drc_detail_dark_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x37));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_dark_thr
// ------------------------------------------------------------------------------ //
//detail_dark_thr
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_dark_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x38), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_dark_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x38));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_bright_min
// ------------------------------------------------------------------------------ //
// detail_bright_min
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_bright_min_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x39), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_bright_min_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x39));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_bright_max
// ------------------------------------------------------------------------------ //
// detail_bright_max
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_bright_max_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x3a), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_bright_max_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x3a));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_bright_slo
// ------------------------------------------------------------------------------ //
// detail_bright_slo
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_bright_slo_write(VI_PIPE ViPipe, HI_S8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x3b), data);
}
static __inline HI_S8 hi_ext_system_drc_detail_bright_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x3b));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_bright_thr
// ------------------------------------------------------------------------------ //
// detail_bright_thr
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_bright_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x3c), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_bright_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x3c));
}

static __inline HI_VOID hi_ext_system_drc_coef_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x3d), data);
}
static __inline HI_U8 hi_ext_system_drc_coef_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x3d));
}

static __inline HI_VOID hi_ext_system_drc_lut_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x3e), data);
}
static __inline HI_U8 hi_ext_system_drc_lut_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x3e));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_manual_strength
// ------------------------------------------------------------------------------ //
// Manual setting for DRC strength (for manual DRC)
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_manual_strength_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x40, data);
}
static __inline HI_U16 hi_ext_system_drc_manual_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x40);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_auto_strength
// ------------------------------------------------------------------------------ //
// Auto setting for DRC strength (for auto DRC)
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_auto_strength_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x42, data);
}
static __inline HI_U16 hi_ext_system_drc_auto_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x42);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_auto_strength_max
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_auto_strength_max_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x44), data);
}

static __inline HI_U16 hi_ext_system_drc_auto_strength_max_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x44));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_auto_strength_min
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_auto_strength_min_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x46), data);
}

static __inline HI_U16 hi_ext_system_drc_auto_strength_min_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x46));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_strength_target
// ------------------------------------------------------------------------------ //
// Strength target of Drc Moudle
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_strength_target_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x48), data);
}
static __inline HI_U16 hi_ext_system_drc_strength_target_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x48));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_fs_ada_max
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_fs_ada_max_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x4a), data);
}
static __inline HI_U8 hi_ext_system_drc_fs_ada_max_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x4a));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_diff_thr_low
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_diff_thr_low_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x4b), data);
}
static __inline HI_U8 hi_ext_system_drc_diff_thr_low_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x4b));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_diff_thr_high
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_diff_thr_high_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x4c), data);
}
static __inline HI_U8 hi_ext_system_drc_diff_thr_high_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x4c));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_scale_fine
// ------------------------------------------------------------------------------ //
// DRC filter scale fine control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_scale_fine_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x50), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_scale_fine_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x50));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_scale_coarse
// ------------------------------------------------------------------------------ //
// DRC filter scale coarse control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_scale_coarse_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x51), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_scale_coarse_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x51));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_suppress_bright_min
// ------------------------------------------------------------------------------ //
// DRC detail suppression control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_suppress_bright_min_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x52), data);
}
static __inline HI_U8 hi_ext_system_drc_suppress_bright_min_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x52));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_suppress_bright_thr
// ------------------------------------------------------------------------------ //
// DRC detail suppression control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_suppress_bright_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x53), data);
}
static __inline HI_U8 hi_ext_system_drc_suppress_bright_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x53));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_suppress_bright_slo
// ------------------------------------------------------------------------------ //
// DRC detail suppression control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_suppress_bright_slo_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x54), data);
}
static __inline HI_U8 hi_ext_system_drc_suppress_bright_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x54));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_suppress_dark_min
// ------------------------------------------------------------------------------ //
// DRC detail suppression control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_suppress_dark_min_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x55), data);
}
static __inline HI_U8 hi_ext_system_drc_suppress_dark_min_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x55));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_suppress_dark_thr
// ------------------------------------------------------------------------------ //
// DRC detail suppression control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_suppress_dark_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x56), data);
}
static __inline HI_U8 hi_ext_system_drc_suppress_dark_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x56));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_suppress_dark_slo
// ------------------------------------------------------------------------------ //
// DRC detail suppression control
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_suppress_dark_slo_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x57), data);
}
static __inline HI_U8 hi_ext_system_drc_suppress_dark_slo_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x57));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_bright_gain_lmt
// ------------------------------------------------------------------------------ //
// Bright gain limit
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_bright_gain_lmt_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x7e), data);
}
static __inline HI_U16 hi_ext_system_drc_bright_gain_lmt_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x7e));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_dark_gain_lmt_c
// ------------------------------------------------------------------------------ //
// Bright gain limit
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_dark_gain_lmt_c_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x80), data);
}
static __inline HI_U16 hi_ext_system_drc_dark_gain_lmt_c_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x80));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_dark_gain_lmt_c
// ------------------------------------------------------------------------------ //
// Bright gain limit
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_dark_gain_lmt_y_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x82), data);
}
static __inline HI_U16 hi_ext_system_drc_dark_gain_lmt_y_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0x82));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_colorcc_lut_read
// ------------------------------------------------------------------------------ //
// colorcc lut read len = 33  ~0x11061
// ------------------------------------------------------------------------------ //
// args: data (16-bit)

static __inline HI_VOID hi_ext_system_drc_colorcc_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x84  +  u8Index * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_drc_colorcc_lut_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x84  +  u8Index * sizeof(HI_U16))));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmx0
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmx0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xce), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmx0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xce));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmx1
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmx1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xd0), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmx1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xd0));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmx2
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmx2_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xd2), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmx2_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xd2));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmx3
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmx3_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xd4), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmx3_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xd4));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmx4
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmx4_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xd6), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmx4_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xd6));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmx5
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmx5_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xd8), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmx5_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xd8));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmy0
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmy0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xda), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmy0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xda));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmy1
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmy1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xdc), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmy1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xdc));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmy2
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmy2_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xde), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmy2_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xde));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmy3
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmy3_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xe0), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmy3_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xe0));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmy4
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmy4_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xe2), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmy4_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xe2));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_ltmy5
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_ltmy5_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xe4), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_ltmy5_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xe4));
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_mode
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xe6), data);
}
static __inline HI_U8 hi_ext_system_drc_cubic_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xe6));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_curve_sel
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_curve_sel_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xe7), data);
}
static __inline HI_U8 hi_ext_system_drc_curve_sel_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xe7));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_slp0
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_slp0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xe8), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_slp0_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xe8));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_slp1
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_slp1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xea), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_slp1_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xea));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_slp2
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_slp2_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xec), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_slp2_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xec));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_slp3
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_slp3_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xee), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_slp3_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xee));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_cubic_slp4
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_drc_cubic_slp4_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0xf0), data);
}
static __inline HI_U16 hi_ext_system_drc_cubic_slp4_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DRC_BASE(ViPipe) + 0xf0));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_darkstep
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_darkstep_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf2), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_darkstep_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf2));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_brightstep
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_brightstep_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf3), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_brightstep_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf3));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_shp_log
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_shp_log_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf4), data);
}
static __inline HI_U8 hi_ext_system_drc_shp_log_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf4));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_shp_exp
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_shp_exp_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf5), data);
}
static __inline HI_U8 hi_ext_system_drc_shp_exp_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf5));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_spa_fine
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_spa_fine_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf6), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_spa_fine_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf6));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_spa_medium
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_spa_medium_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf7), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_spa_medium_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf7));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_spa_coarse
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_spa_coarse_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf8), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_spa_coarse_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf8));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_rng_fine
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_rng_fine_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xf9), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_rng_fine_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xf9));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_rng_medium
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_rng_medium_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xfa), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_rng_medium_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xfa));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_rng_coarse
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_rng_coarse_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xfb), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_rng_coarse_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xfb));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_flt_rng_ada_max
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_flt_rng_ada_max_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xfc), data);
}
static __inline HI_U8 hi_ext_system_drc_flt_rng_ada_max_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xfc));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_dis_offset_coef
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_dis_offset_coef_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xfd), data);
}
static __inline HI_U8 hi_ext_system_drc_dis_offset_coef_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xfd));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_dis_thr_coef_low
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_dis_thr_coef_low_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xfe), data);
}
static __inline HI_U8 hi_ext_system_drc_dis_thr_coef_low_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xfe));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_dis_thr_coef_high
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_dis_thr_coef_high_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0xff), data);
}
static __inline HI_U8 hi_ext_system_drc_dis_thr_coef_high_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0xff));
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_sub_factor
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_sub_factor_write(VI_PIPE ViPipe, HI_S8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x100), data);
}
static __inline HI_S8 hi_ext_system_drc_detail_sub_factor_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x100));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_wgt_box_tri_sel
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_wgt_box_tri_sel_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x101), data);
}
static __inline HI_U8 hi_ext_system_drc_wgt_box_tri_sel_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x101));
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_color_corr_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_color_corr_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x102), data);
}
static __inline HI_U8 hi_ext_system_drc_color_corr_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x102));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_detail_boost_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_detail_boost_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x103), data);
}
static __inline HI_U8 hi_ext_system_drc_detail_boost_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x103));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_pdw_sum_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_drc_pdw_sum_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DRC_BASE(ViPipe) + 0x104), data);
}
static __inline HI_U8 hi_ext_system_drc_pdw_sum_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DRC_BASE(ViPipe) + 0x104));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_drc_tm_lut_write len = 200
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
// 0x107 ~ 0x296
static __inline HI_VOID hi_ext_system_drc_tm_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x106 + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_drc_tm_lut_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return IORD_16DIRECT((VREG_DRC_BASE(ViPipe) + 0x106 + u8Index * sizeof(HI_U16)));
}

//==============================================================//
//Dehaze: 0x11300~0x114FF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_manu_mode
// ------------------------------------------------------------------------------ //
// Enables manual dehaze: 0=auto 1=manual
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_MANU_MODE_DEFAULT  (0)
#define HI_EXT_SYSTEM_DEHAZE_MANU_MODE_DATASIZE (1)
// args: data (8-bit)
static __inline void hi_ext_system_dehaze_manu_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe), data);
}
static __inline HI_U32 hi_ext_system_dehaze_manu_mode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_hblk
// ------------------------------------------------------------------------------ //
// manual dehaze hblk number
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_MANUAL_DEHAZE_HBLK_DEFAULT (32)
#define HI_EXT_SYSTEM_MANUAL_DEHAZE_HBLK_DATASIZE (8)

// args: data (8-bit)
static __inline void hi_ext_system_manual_dehaze_hblk_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x1, data);
}
static __inline HI_U8 hi_ext_system_manual_dehaze_hblk_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_vblk
// ------------------------------------------------------------------------------ //
// manual dehaze vblk number
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_MANUAL_DEHAZE_VBLK_DEFAULT (32)
#define HI_EXT_SYSTEM_MANUAL_DEHAZE_VBLK_DATASIZE (8)
// args: data (8-bit)
static __inline void hi_ext_system_manual_dehaze_vblk_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x2, data);
}

static __inline HI_U8 hi_ext_system_manual_dehaze_vblk_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x2);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_ctp
// ------------------------------------------------------------------------------ //
// manual dehaze curve turn point
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_CTP_DEFAULT (0x80)
#define HI_EXT_SYSTEM_DEHAZE_CTP_DATASIZE (8)

// args: data (8-bit)
static __inline void hi_ext_system_dehaze_ctp_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x3, data);
}
static __inline HI_U8 hi_ext_system_dehaze_ctp_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x3);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_mft
// ------------------------------------------------------------------------------ //
// manual dehaze minumum filter threshold
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_DEHAZE_MFT_DEFAULT (0x200)
#define HI_EXT_SYSTEM_MANUAL_DEHAZE_MFT_DATASIZE (16)

// args: data (10-bit)
static __inline void hi_ext_system_dehaze_mft_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x4, data);
}
static __inline HI_U16 hi_ext_system_dehaze_mft_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x4) & 0x3ff);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_mfs
// ------------------------------------------------------------------------------ //
// manual dehaze minumum filter size
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_MFS_DEFAULT (0x7)
#define HI_EXT_SYSTEM_DEHAZE_MFS_DATASIZE (8)
// args: data (8-bit)
static __inline void hi_ext_system_dehaze_mfs_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x6, data);
}
static __inline HI_U8 hi_ext_system_dehaze_mfs_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x6);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_ct
// ------------------------------------------------------------------------------ //
// manual dehaze change threshold
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_CT_DEFAULT (255)
#define HI_EXT_SYSTEM_DEHAZE_CT_DATASIZE (8)
// args: data (8-bit)
static __inline void hi_ext_system_dehaze_ct_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x7, data);
}
static __inline HI_U8 hi_ext_system_dehaze_ct_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x7);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_tfic
// ------------------------------------------------------------------------------ //
// manual dehaze temper filter increase ceofficient
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_TFIC_DEFAULT (0x8)
#define HI_EXT_SYSTEM_DEHAZE_TFIC_DATASIZE (16)
// args: data (16-bit)
static __inline void hi_ext_system_dehaze_tfic_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x8, data);
}
static __inline HI_U16 hi_ext_system_dehaze_tfic_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x8);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_tfdc
// ------------------------------------------------------------------------------ //
// manual dehaze temper filter decrease ceofficient
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_TFDC_DEFAULT (64)
#define HI_EXT_SYSTEM_DEHAZE_TFDC_DATASIZE (16)
// args: data (16-bit)
static __inline void hi_ext_system_dehaze_tfdc_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xa, data);
}
static __inline HI_U16 hi_ext_system_dehaze_tfdc_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xa);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_debug_enable
// ------------------------------------------------------------------------------ //
// dehaze debug enable
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_DEHAZE_DEBUGFILE_ENABLE_DEFAULT (0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUGFILE_ENABLE_DATASIZE (8)

// args: data (8-bit)
static __inline void hi_ext_system_dehaze_debugfile_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xc, data);
}
static __inline HI_U8 hi_ext_system_dehaze_debugfile_enable_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xc);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_dehaze_strength
// ------------------------------------------------------------------------------ //
// dehaze strength
// ------------------------------------------------------------------------------ //
#define ISP_EXT_SYSTEM_MANUAL_DEHAZE_STRENGTH_DEFAULT  (0xF0)
#define ISP_EXT_SYSTEM_MANUAL_DEHAZE_STRENGTH_DATASIZE (8)

// args: data (8-bit)
static __inline void hi_ext_system_manual_dehaze_strength_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xd, data);
}
static __inline HI_U8 hi_ext_system_manual_dehaze_strength_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xd);
}

// ------------------------------------------------------------------------------ //
// Register: isp_ext_system_manual_dehaze_autostrength
// ------------------------------------------------------------------------------ //
// dehaze strength
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_MANUAL_DEHAZE_AUTOSTRENGTH_DEFAULT  (0x80)
#define HI_EXT_SYSTEM_MANUAL_DEHAZE_AUTOSTRENGTH_DATASIZE (8)
// args: data (8-bit)
static __inline void hi_ext_system_manual_dehaze_autostrength_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xe, data);
}
static __inline HI_U8 hi_ext_system_manual_dehaze_autostrength_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0xe);
}

#define HI_EXT_SYSTEM_DEHAZE_ENABLE_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_DEHAZE_ENABLE_DATASIZE (8)

// args: data (8-bit)
static __inline void hi_ext_system_dehaze_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x10, data);
}
static __inline HI_U8 hi_ext_system_dehaze_enable_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x10);
}

// args: data (1-bit)

#define HI_EXT_SYSTEM_DEHAZE_DEBUG_ENABLE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_ENABLE_DATASIZE (1)

static __inline HI_VOID hi_ext_system_dehaze_debug_enable_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x14, data & 0x1);
}
static __inline HI_U16 hi_ext_system_dehaze_debug_enable_read(VI_PIPE ViPipe)
{
    return (HI_U16) (IORD_16DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x14) & 0x1);
    //return (HI_U16) (IORD_16DIRECT(HI_EXT_BASE_ADDR(IspDev)+0x2860));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_debug_addr
// ------------------------------------------------------------------------------ //
// address of dehaze debug information
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_HIGH_ADDR_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_HIGH_ADDR_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_dehaze_debug_high_addr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x18, data);
}

static __inline HI_U32 hi_ext_system_dehaze_debug_high_addr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x18);
}

#define HI_EXT_SYSTEM_DEHAZE_DEBUG_LOW_ADDR_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_LOW_ADDR_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_dehaze_debug_low_addr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x1c, data);
}

static __inline HI_U32 hi_ext_system_dehaze_debug_low_addr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x1c);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_debug_size
// ------------------------------------------------------------------------------ //
// size of dehaze debug struct
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_SIZE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_SIZE_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_dehaze_debug_size_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x20, data);
}

static __inline HI_U32 hi_ext_system_dehaze_debug_size_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x20);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_debug_depth
// ------------------------------------------------------------------------------ //
// depth of dehaze debug struct
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_DEPTH_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_DEPTH_DATADEPTH (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_dehaze_debug_depth_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x24, data);
}

static __inline HI_U32 hi_ext_system_dehaze_debug_depth_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x24);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_debug_quit
// ------------------------------------------------------------------------------ //
// depth of dehaze debug struct
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_QUIT_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_QUIT_DATADEPTH (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_dehaze_debug_quit_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x28, data);
}

static __inline HI_U8 hi_ext_system_dehaze_debug_quit_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x28);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dehaze_debug_complete
// ------------------------------------------------------------------------------ //
// depth of dehaze debug struct
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_COMPLETE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DEHAZE_DEBUG_COMPLETE_DATADEPTH (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_dehaze_debug_complete_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x29, data);
}

static __inline HI_U8 hi_ext_system_dehaze_debug_complete_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x29);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_defog_lut_write len = 256
// ------------------------------------------------------------------------------ //
//0x183D0~0x184D0
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_dehaze_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x30 + (u8Index * sizeof(HI_U8)), data);
}

static __inline HI_U8 hi_ext_system_dehaze_lut_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x30 + (u8Index * sizeof(HI_U8)));
}

#define HI_EXT_SYSTEM_USER_DEHAZE_LUT_ENABLE_DEFAULT  (0)
static __inline HI_VOID hi_ext_system_user_dehaze_lut_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x140, data);
}
static __inline HI_U8 hi_ext_system_user_dehaze_lut_enable_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x140);
}

#define HI_EXT_SYSTEM_USER_DEHAZE_LUT_UPDATE_DEFAULT  (0)
static __inline HI_VOID hi_ext_system_user_dehaze_lut_update_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x142, data);
}
static __inline HI_U8 hi_ext_system_user_dehaze_lut_update_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEHAZE_BASE(ViPipe) + 0x142);
}


//==============================================================//
//Dehaze: 0x11500~0x115FF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_fpn_strength
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_FPN_STRENGTH_DEFAULT  (0)
#define HI_EXT_SYSTEM_FPN_STRENGTH_DATASIZE (16)
// args: data (16-bit)

static __inline void hi_ext_system_manual_fpn_strength_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_FPN_BASE(ViPipe), data);
}
static __inline HI_U16 hi_ext_system_manual_fpn_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_FPN_BASE(ViPipe));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_fpn_opmode
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_FPN_OPMODE_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_FPN_OPMODE_DATASIZE (8)
// args: data (8-bit)

static __inline void hi_ext_system_manual_fpn_opmode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FPN_BASE(ViPipe) + 0x2, data);
}

static __inline HI_U8 hi_ext_system_manual_fpn_opmode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FPN_BASE(ViPipe) + 0x2);
}


// ------------------------------------------------------------------------------ //
// Register: isp_ext_system_manual_fpn_update
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_FPN_MANU_UPDATE_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_FPN_MANU_UPDATE_DATASIZE (8)
// args: data (8-bit)

static __inline void hi_ext_system_manual_fpn_update_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FPN_BASE(ViPipe) + 0x3, data);
}

static __inline HI_U8 hi_ext_system_manual_fpn_update_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FPN_BASE(ViPipe) + 0x3);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_fpn_CorrCfg
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_FPN_MANU_ISO_DEFAULT  (6375)
#define HI_EXT_SYSTEM_FPN_MANU_ISO_DATASIZE (32)
// args: data (32-bit)

/* ??????ISO???? */
static __inline void hi_ext_system_manual_fpn_iso_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_FPN_BASE(ViPipe) + 0x4, data);
}
/* ??????ISO??? */
static __inline HI_U32 hi_ext_system_manual_fpn_iso_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_FPN_BASE(ViPipe) + 0x4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sensor_iso
// ------------------------------------------------------------------------------ //
// Sensor ISO
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_FPN_SENSOR_ISO_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_FPN_SENSOR_ISO_DATASIZE (32)

// args: data (32-bit)
static __inline HI_VOID hi_ext_system_fpn_sensor_iso_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_FPN_BASE(ViPipe) + 0x8, data);
}

static __inline HI_U32 hi_ext_system_fpn_sensor_iso_read(VI_PIPE ViPipe)
{
    return  IORD_32DIRECT(VREG_FPN_BASE(ViPipe) + 0x8);
}


// ------------------------------------------------------------------------------ //
// Register: isp_ext_system_manual_fpn_CorrCfg
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_FPN_MANU_CORRCFG_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_FPN_MANU_CORRCFG_DATASIZE (8)
// args: data (8-bit)

static __inline void hi_ext_system_manual_fpn_CorrCfg_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FPN_BASE(ViPipe) + 0xc, data);
}

static __inline HI_U8 isp_ext_system_manual_fpn_CorrCfg_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FPN_BASE(ViPipe) + 0xc);
}


//=============================================================//
//BLACK LEVEL: 0x11600~0x116FF
//=============================================================//

// ------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_black_level_00
// ------------------------------------------------------------------------------ //
// ISP black level 00
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_BLACK_LEVEL_00_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_BLACK_LEVEL_00_DATASIZE (16)
// args: data (16-bit)

static __inline HI_VOID hi_ext_system_black_level_00_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BLC_BASE(ViPipe), data);
}

static __inline HI_U16 hi_ext_system_black_level_00_read(VI_PIPE ViPipe)
{
    return  IORD_16DIRECT(VREG_BLC_BASE(ViPipe));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_black_level_01
// ------------------------------------------------------------------------------ //
// ISP black level 01
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_BLACK_LEVEL_01_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_BLACK_LEVEL_01_DATASIZE (16)
// args: data (16-bit)

static __inline HI_VOID hi_ext_system_black_level_01_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BLC_BASE(ViPipe) + 0x2, data);
}

static __inline HI_U16 hi_ext_system_black_level_01_read(VI_PIPE ViPipe)
{
    return  IORD_16DIRECT(VREG_BLC_BASE(ViPipe) + 0x2);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_black_level_10
// ------------------------------------------------------------------------------ //
// ISP black level 10
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_BLACK_LEVEL_10_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_BLACK_LEVEL_10_DATASIZE (16)
// args: data (16-bit)

static __inline HI_VOID hi_ext_system_black_level_10_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BLC_BASE(ViPipe) + 0x4, data);
}

static __inline HI_U16 hi_ext_system_black_level_10_read(VI_PIPE ViPipe)
{
    return  IORD_16DIRECT(VREG_BLC_BASE(ViPipe) + 0x4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_black_level_11
// ------------------------------------------------------------------------------ //
// ISP black level 11
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_BLACK_LEVEL_11_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_BLACK_LEVEL_11_DATASIZE (16)
// args: data (16-bit)

static __inline HI_VOID hi_ext_system_black_level_11_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BLC_BASE(ViPipe) + 0x6, data);
}

static __inline HI_U16 hi_ext_system_black_level_11_read(VI_PIPE ViPipe)
{
    return  IORD_16DIRECT(VREG_BLC_BASE(ViPipe) + 0x6);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_black_level_change
// ------------------------------------------------------------------------------ //
// ISP black level change
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_BLACK_LEVEL_CHANGE_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_BLACK_LEVEL_CHANGE_DATASIZE (1)
// args: data (1-bit)

static __inline HI_VOID hi_ext_system_black_level_change_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BLC_BASE(ViPipe) + 0x8, data);
}

static __inline HI_U8 hi_ext_system_black_level_change_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_BLC_BASE(ViPipe) + 0x8);
}

//==============================================================//
//AE: 0x22000~0x22FFF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_sel
// ------------------------------------------------------------------------------ //
// AE Sel
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_BE_SEL_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_BE_SEL_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_be_sel_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe)), data);
}
static __inline HI_U8 hi_ext_system_ae_be_sel_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_hist_offset_x
// ------------------------------------------------------------------------------ //
// AE hist offset X
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_HIST_OFFSET_X_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_HIST_OFFSET_X_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_hist_offset_x_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x1), data);
}
static __inline HI_U8 hi_ext_system_ae_hist_offset_x_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_hist_offset_y
// ------------------------------------------------------------------------------ //
// AE hist offset Y
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_HIST_OFFSET_Y_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_HIST_OFFSET_Y_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_hist_offset_y_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x2), data);
}
static __inline HI_U8 hi_ext_system_ae_hist_offset_y_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x2);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_hist_skip_x
// ------------------------------------------------------------------------------ //
// AE hist skip X
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_HIST_SKIP_X_DEFAULT (0x1)
#define HI_EXT_SYSTEM_AE_HIST_SKIP_X_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_hist_skip_x_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x3), data);
}
static __inline HI_U8 hi_ext_system_ae_hist_skip_x_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x3);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_hist_skip_y
// ------------------------------------------------------------------------------ //
// AE hist skip Y
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_HIST_SKIP_Y_DEFAULT (0x1)
#define HI_EXT_SYSTEM_AE_HIST_SKIP_Y_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_hist_skip_y_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x4), data);
}
static __inline HI_U8 hi_ext_system_ae_hist_skip_y_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_fourplanemode
// ------------------------------------------------------------------------------ //
// AE Fourplanemode
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_FOURPLANEMODE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_FOURPLANEMODE_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_fourplanemode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x5), data);
}
static __inline HI_U8 hi_ext_system_ae_fourplanemode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x5);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_histmode
// ------------------------------------------------------------------------------ //
// AE Histmode
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_HISTMODE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_HISTMODE_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_histmode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x6), data);
}
static __inline HI_U8 hi_ext_system_ae_histmode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x6);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_avermode
// ------------------------------------------------------------------------------ //
// AE Avermode
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_AVERMODE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_AVERMODE_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_avermode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x7), data);
}
static __inline HI_U8 hi_ext_system_ae_avermode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x7);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_maxgainmode
// ------------------------------------------------------------------------------ //
// AE Maxgainmode
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_MAXGAINMODE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_MAXGAINMODE_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_maxgainmode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x8), data);
}
static __inline HI_U8 hi_ext_system_ae_maxgainmode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x8);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_fe_en
// ------------------------------------------------------------------------------ //
// AE FE Enable
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_FE_EN_DEFAULT (0x1)
#define HI_EXT_SYSTEM_AE_FE_EN_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_fe_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0xc), data);
}
static __inline HI_U8 hi_ext_system_ae_fe_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0xc);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_be_en
// ------------------------------------------------------------------------------ //
// AE BE Enable
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_BE_EN_DEFAULT (0x1)
#define HI_EXT_SYSTEM_AE_BE_EN_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_be_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0xd), data);
}
static __inline HI_U8 hi_ext_system_ae_be_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0xd);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_mg_en
// ------------------------------------------------------------------------------ //
// MG Enable
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_MG_EN_DEFAULT (0x1)
#define HI_EXT_SYSTEM_MG_EN_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_mg_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0xe), data);
}
static __inline HI_U8 hi_ext_system_mg_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0xe);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ae_weight_table
// ------------------------------------------------------------------------------ //
// AE weight table
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_AE_WEIGHT_TABLE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AE_WEIGHT_TABLE_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ae_weight_table_write(VI_PIPE ViPipe, HI_U16 index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AE_BASE(ViPipe) + 0x100 + index), data);
}
static __inline HI_U8 hi_ext_system_ae_weight_table_read(VI_PIPE ViPipe, HI_U16 index)
{
    return IORD_8DIRECT(VREG_AE_BASE(ViPipe) + 0x100 + index);
}

//==============================================================//
//DPC: 0x11700~0x117FF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_static_cor_enable
// ------------------------------------------------------------------------------ //
// defect pixel static correction enable
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_STATIC_COR_ENABLE_DEFAULT (0x01)
#define HI_EXT_SYSTEM_DPC_STATIC_COR_ENABLE_DATASIZE (1)

// 0x12600 ~ dpc_static_cor_enable
static __inline HI_VOID hi_ext_system_dpc_static_cor_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe), data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_static_cor_enable_read(VI_PIPE ViPipe)
{
    return  (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_static_calib_enable
// ------------------------------------------------------------------------------ //
// defect pixel static correction enable
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_STATIC_CALIB_ENABLE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_STATIC_CALIB_ENABLE_DATASIZE (1)

// 0x12601 ~ dpc_static_calib_enable
static __inline HI_VOID hi_ext_system_dpc_static_calib_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  1, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_static_calib_enable_read(VI_PIPE ViPipe)
{
    return  (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  1) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_defect_type
// ------------------------------------------------------------------------------ //
// ISP_STATIC_DP_BRIGHT:0x0,ISP_STATIC_DP_DARK:0x1
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_DPC_STATIC_DEFECT_TYPE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_STATIC_DEFECT_TYPE_DATASIZE (1)

// 0x12602 ~ enStaticDPType
static __inline HI_VOID hi_ext_system_dpc_static_defect_type_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  2, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_static_defect_type_read(VI_PIPE ViPipe)
{
    return  (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  2) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_start_thresh
// ------------------------------------------------------------------------------ //
// define the start thresh of defect pixel calibration
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_START_THRESH_DEFAULT (0x3)
#define HI_EXT_SYSTEM_DPC_START_THRESH_DATASIZE (8)

// 0x12603 ~ u8StartThresh
static __inline HI_VOID hi_ext_system_dpc_start_thresh_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_DPC_BASE(ViPipe)  +  3), data);
}
static __inline HI_U8 hi_ext_system_dpc_start_thresh_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  3);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_finish_thresh
// ------------------------------------------------------------------------------ //
//  the finish thresh of defect pixel calibration
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_FINISH_THRESH_DATASIZE (8)

// 0x12604 ~ u8FinishThresh
static __inline HI_VOID hi_ext_system_dpc_finish_thresh_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  4, data);
}
static __inline HI_U8 hi_ext_system_dpc_finish_thresh_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_trigger_status
// ------------------------------------------------------------------------------ //
// the static bad pixel trigger status
// 0:Initial status
// 1:Finished
// 2:time out
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_DPC_TRIGGER_STATUS_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_TRIGGER_STATUS_DATASIZE (2)

// 0x12605 ~ enStatus
static __inline HI_VOID hi_ext_system_dpc_trigger_status_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  5, data);
}
static __inline HI_U8 hi_ext_system_dpc_trigger_status_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  5);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_static_dp_show
// ------------------------------------------------------------------------------ //
// highlight static defect pixel
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_STATIC_DP_SHOW_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_STATIC_DP_SHOW_DATASIZE (1)

// 0x12606 ~ bShow
static __inline HI_VOID hi_ext_system_dpc_static_dp_show_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  6, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_static_dp_show_read(VI_PIPE ViPipe)
{
    return  (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  6) & 0x1);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_dynamic_cor_enable
// ------------------------------------------------------------------------------ //
// defect pixel dynamic correction enable
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_DYNAMIC_COR_ENABLE_DEFAULT (0x01)
#define HI_EXT_SYSTEM_DPC_DYNAMIC_COR_ENABLE_DATASIZE (1)

// 0x12607 ~ dynamic_cor_enable
static __inline HI_VOID hi_ext_system_dpc_dynamic_cor_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  7, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_dynamic_cor_enable_read(VI_PIPE ViPipe)
{
    return  (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  7) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_count_max
// ------------------------------------------------------------------------------ //
// bad pixel calibration  the maxmum bad pixel count
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_COUNT_MAX_DEFAULT (0x400)
#define HI_EXT_SYSTEM_DPC_COUNT_MAX_DATASIZE (16)

// 0x12608 ~ 0x12609 u16CountMax
static __inline HI_VOID hi_ext_system_dpc_count_max_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  8, data);
}
static __inline HI_U16 hi_ext_system_dpc_count_max_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  8);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_count_min
// ------------------------------------------------------------------------------ //
// bad pixel calibration  the minmum bad pixel count
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_DPC_COUNT_MIN_DEFAULT (0x1)
#define HI_EXT_SYSTEM_DPC_COUNT_MIN_DATASIZE (16)

// 0x1260a ~0x1260b u16CountMin
static __inline HI_VOID hi_ext_system_dpc_count_min_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0xa, data);
}
static __inline HI_U16 hi_ext_system_dpc_count_min_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0xa);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_trigger_time
// ------------------------------------------------------------------------------ //
// the bad pixel trigger frame cnt of time out
// ------------------------------------------------------------------------------ //

#define HI_EXT_SYSTEM_DPC_TRIGGER_TIME_DEFAULT (0x640)
#define HI_EXT_SYSTEM_DPC_TRIGGER_TIME_DATASIZE (16)

// 0x1260c ~ 0x1260d enStatus
static __inline HI_VOID hi_ext_system_dpc_trigger_time_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0xc, data);
}
static __inline HI_U16 hi_ext_system_dpc_trigger_time_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0xc) ;
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_dynamic_manual_enable
// ------------------------------------------------------------------------------ //
// 0:auto;
//1:manual
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_DYNAMIC_MANUAL_ENABLE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_DYNAMIC_MANUAL_ENABLE_DATASIZE (1)

// 0x1260e ~ dynamic_manual_enable
static __inline HI_VOID hi_ext_system_dpc_dynamic_manual_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0xe, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_dynamic_manual_enable_read(VI_PIPE ViPipe)
{
    return  (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0xe) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_dynamic_strength_table
// ------------------------------------------------------------------------------ //
// 0x11710 ~ 0x1172f dpc_dynamic_strength_table
#define HI_EXT_SYSTEM_DPC_DYNAMIC_STRENGTH_TABLE_DATASIZE (16)

static __inline HI_VOID hi_ext_system_dpc_dynamic_strength_table_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x10  + u8Index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_dpc_dynamic_strength_table_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x10  +  u8Index * sizeof(HI_U16));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_dynamic_blend_ratio_table
// ------------------------------------------------------------------------------ //
// 0x11730 ~ 0x1174f dpc_blend_ratio_table
#define HI_EXT_SYSTEM_DPC_DYNAMIC_BLEND_RATIO_TABLE_DATASIZE (16)

static __inline HI_VOID hi_ext_system_dpc_dynamic_blend_ratio_table_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x30  + u8Index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_dpc_dynamic_blend_ratio_table_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x30   +  u8Index * sizeof(HI_U16));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_dynamic_strength
// ------------------------------------------------------------------------------ //
// 0x12650 ~ 0x12651 dpc_dynamic_strength

#define HI_EXT_SYSTEM_DPC_DYNAMIC_STRENGTH_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_DYNAMIC_STRENGTH_DATASIZE (16)

static __inline HI_VOID hi_ext_system_dpc_dynamic_strength_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x50, data);
}

static __inline HI_U16 hi_ext_system_dpc_dynamic_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x50);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_dynamic_blend_ratio_table
// ------------------------------------------------------------------------------ //
// 0x12652 ~ 0x12653 dpc_blend_ratio

#define HI_EXT_SYSTEM_DPC_DYNAMIC_BLEND_RATIO_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_DYNAMIC_BLEND_RATIO_DATASIZE (9)
static __inline HI_VOID hi_ext_system_dpc_dynamic_blend_ratio_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x52, data);
}

static __inline HI_U16 hi_ext_system_dpc_dynamic_blend_ratio_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x52);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_manual_mode
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_DPC_MANU_MODE_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DPC_MANU_MODE_DATASIZE (1)

static __inline HI_VOID hi_ext_system_dpc_manual_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x54, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_manual_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x54) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_alpha0_rb_write
// ------------------------------------------------------------------------------ //
// 0x12655 ~hi_ext_system_dpc_alpha0_rb_write
#define HI_EXT_SYSTEM_DPC_DYNAMIC_ALPHA0_RB_DEFAULT  (0x0)
#define HI_EXT_SYSTEM_DPC_DYNAMIC_ALPHA0_RB_DATASIZE (8)

static __inline HI_VOID hi_ext_system_dpc_alpha0_rb_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x55, data);
}
static __inline HI_U8 hi_ext_system_dpc_alpha0_rb_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x55));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_alpha0_rb_write
// ------------------------------------------------------------------------------ //
// 0x12655 ~hi_ext_system_dpc_alpha0_rb_write
#define HI_EXT_SYSTEM_DPC_DYNAMIC_ALPHA0_G_DEFAULT (0x0)
static __inline HI_VOID hi_ext_system_dpc_alpha0_g_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x56, data);
}
static __inline HI_U8 hi_ext_system_dpc_alpha0_g_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x56));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_suppress_twinkle_enable_write
// ------------------------------------------------------------------------------ //
// 0x12657 ~hi_ext_system_dpc_suppress_twinkle_enable
#define HI_EXT_SYSTEM_DPC_SUPPRESS_TWINKLE_ENABLE_DEFAULT (0x0)
static __inline HI_VOID hi_ext_system_dpc_suppress_twinkle_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x57, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_suppress_twinkle_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x57) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_suppress_twinkle_thr_write
// ------------------------------------------------------------------------------ //
// 0x12658 ~hi_ext_system_dpc_suppress_twinkle_thr
#define HI_EXT_SYSTEM_DPC_SUPPRESS_TWINKLE_THR_DEFAULT (0x6)
static __inline HI_VOID hi_ext_system_dpc_suppress_twinkle_thr_write(VI_PIPE ViPipe, HI_S8 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x58, data);
}
static __inline HI_S8 hi_ext_system_dpc_suppress_twinkle_thr_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x58) & 0xFF);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_suppress_twinkle_slope_write
// ------------------------------------------------------------------------------ //
// 0x12659 ~ hi_ext_system_dpc_suppress_twinkle_slope
#define HI_EXT_SYSTEM_DPC_SUPPRESS_TWINKLE_SLOPE_DEFAULT (0x15)
static __inline HI_VOID hi_ext_system_dpc_suppress_twinkle_slope_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x59, data & 0xFF);
}
static __inline HI_U8 hi_ext_system_dpc_suppress_twinkle_slope_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x59) & 0xFF);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_bpt_calib_number
// ------------------------------------------------------------------------------ //
// 0x1175a ~0x1175b hi_ext_system_dpc_bpt_calib_number
#define HI_EXT_SYSTEM_DPC_BPT_CALIB_NUMBER_DEFAULT (0x0)
static __inline HI_VOID hi_ext_system_dpc_bpt_calib_number_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5a, data);
}
static __inline HI_U16 hi_ext_system_dpc_bpt_calib_number_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5a));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_bpt_cor_number
// ------------------------------------------------------------------------------ //
// 0x1175c ~0x1175d hi_ext_system_dpc_bpt_cor_number
#define HI_EXT_SYSTEM_DPC_BPT_COR_NUMBER_DEFAULT (0x0)
static __inline HI_VOID hi_ext_system_dpc_bpt_cor_number_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5c, data);
}
static __inline HI_U16 hi_ext_system_dpc_bpt_cor_number_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5c));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_static_attr_updata
// ------------------------------------------------------------------------------ //
// 0x1175e  hi_ext_system_dpc_static_attr_updata
#define HI_EXT_SYSTEM_DPC_STATIC_ATTR_UPDATE_DEFAULT (0x0)
static __inline HI_VOID hi_ext_system_dpc_static_attr_update_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5e, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_static_attr_update_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5e) & 0x1);
}

static __inline HI_VOID hi_ext_system_dpc_dynamic_attr_update_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5f, data & 0x1);
}
static __inline HI_U8 hi_ext_system_dpc_dynamic_attr_update_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DPC_BASE(ViPipe)  +  0x5f) & 0x1);
}

/**DPC Table*/
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_calib_bpt
// ------------------------------------------------------------------------------ //
// 0x11760 ~ 0x1975F hi_ext_system_dpc_calib_bpt
#define HI_EXT_SYSTEM_DPC_CALIB_BPT_DATASIZE (8192)

static __inline HI_VOID hi_ext_system_dpc_calib_bpt_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_DPC_BASE(ViPipe)  +  0x60  + u16Index * sizeof(HI_U32), data);
}

static __inline HI_U32 hi_ext_system_dpc_calib_bpt_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_DPC_BASE(ViPipe)  +  0x60  +  u16Index * sizeof(HI_U32));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_dpc_cor_bpt
// ------------------------------------------------------------------------------ //
// 0x19760 ~ 0x2175F hi_ext_system_dpc_cor_bpt
#define HI_EXT_SYSTEM_DPC_COR_BPT_DATASIZE (8192)
static __inline HI_VOID hi_ext_system_dpc_cor_bpt_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_DPC_BASE(ViPipe)  +  0x8060  + u16Index * sizeof(HI_U32), data);
}

static __inline HI_U32 hi_ext_system_dpc_cor_bpt_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_DPC_BASE(ViPipe)  +  0x8060  +  u16Index * sizeof(HI_U32));
}


//==============================================================//
//GE: 0x11800~0x118FF
//==============================================================//
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ge_npoffset
// ------------------------------------------------------------------------------ //
// ge npoffset table 0x11800 - 0x1181f
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_GE_STRENGTH_DATASIZE (16)
// args: data (16-bit)

static __inline HI_VOID hi_ext_system_ge_npoffset_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_GE_BASE(ViPipe)  + u8Index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_ge_npoffset_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_GE_BASE(ViPipe)  +  u8Index * sizeof(HI_U16));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ge_threshold_
// ------------------------------------------------------------------------------ //
// ge threshold_ table 0x11820 - 0x1183F
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_GE_THRESHOLD_DEFAULT (0)
#define HI_EXT_SYSTEM_GE_THRESHOLD_DATASIZE (16)
// args: data (16-bit)

static __inline HI_VOID hi_ext_system_ge_threshold_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x20  + (u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_ge_threshold_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x20  +  (u8Index * sizeof(HI_U16)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ge_strength_
// ------------------------------------------------------------------------------ //
// ge strength_ table 0x11840 - 0x1185f
// ------------------------------------------------------------------------------ //

static __inline HI_VOID hi_ext_system_ge_strength_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x40  + u8Index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_ge_strength_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x40   +  u8Index * sizeof(HI_U16));
}


// 0x12760 ~ 0x12761 ge_slope
static __inline HI_VOID hi_ext_system_ge_slope_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x60, data);
}

static __inline HI_U16 hi_ext_system_ge_slope_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x60);
}

// 0x12762 ~ 0x12763 ge_sensitivity
static __inline HI_VOID hi_ext_system_ge_sensitivity_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x62, data);
}

static __inline HI_U16 hi_ext_system_ge_sensitivity_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x62);
}

// 0x12764 ~ 0x12765 ge_sensithreshold
static __inline HI_VOID hi_ext_system_ge_sensithreshold_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x64, data);
}

static __inline HI_U16 hi_ext_system_ge_sensithreshold_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GE_BASE(ViPipe)  +  0x64);
}

// 0x12766 ~ 0x12766 ge_enable

static __inline HI_VOID hi_ext_system_ge_enable_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GE_BASE(ViPipe)  +  0x66, data & 0x1);
}

static __inline HI_U8 hi_ext_system_ge_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GE_BASE(ViPipe)  +  0x66) & 0x1);
}

static __inline HI_VOID hi_ext_system_ge_coef_update_en_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GE_BASE(ViPipe)  +  0x67, data & 0x1);
}

static __inline HI_U8 hi_ext_system_ge_coef_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GE_BASE(ViPipe)  +  0x67) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_manual_mode_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_MODE_DEFAULT (0)
static __inline HI_VOID hi_ext_system_demosaic_manual_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x10, data & 0x1);
}
static __inline HI_U8 hi_ext_system_demosaic_manual_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x10) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_enable_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_ENABLE_DEFAULT (0x1)
#define HI_EXT_SYSTEM_DEMOSAIC_ENABLE_DATASIZE (1)
static __inline HI_VOID hi_ext_system_demosaic_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x11, data & 0x1);
}
static __inline HI_U8 hi_ext_system_demosaic_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x11) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_attr_update_en_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_demosaic_attr_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x12, data & 0x1);
}
static __inline HI_U8 hi_ext_system_demosaic_attr_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x12) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_manual_detail_smooth_range_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_DETAIL_SMOOTH_RANGE_LINEAR_DEFAULT (2)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_DETAIL_SMOOTH_RANGE_WDR_DEFAULT (2)
static __inline HI_VOID hi_ext_system_demosaic_manual_detail_smooth_range_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x13, data);
}
static __inline HI_U8 hi_ext_system_demosaic_manual_detail_smooth_range_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x13);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_manual_nondirection_detail_enhance_strength_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_NONDIRECTION_DETAIL_ENHANCE_STRENGTH_LINEAR_DEFAULT (32)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_NONDIRECTION_DETAIL_ENHANCE_STRENGTH_WDR_DEFAULT (16)
static __inline HI_VOID hi_ext_system_demosaic_manual_nondirection_detail_enhance_strength_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x14, data);
}
static __inline HI_U8 hi_ext_system_demosaic_manual_nondirection_detail_enhance_strength_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x14);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_manual_detail_smooth_range_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_NONDIRECTION_STRENTH_LINEAR_DEFAULT (64)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_NONDIRECTION_STRENTH_WDR_DEFAULT (64)
static __inline HI_VOID hi_ext_system_demosaic_manual_nondirection_strength_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x15, data);
}
static __inline HI_U8 hi_ext_system_demosaic_manual_nondirection_strength_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x15);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_manual_detail_smooth_strength_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_DETAIL_SMOOTH_STRENGTH_LINEAR_DEFAULT (256)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_DETAIL_SMOOTH_STRENGTH_WDR_DEFAULT (256)
static __inline HI_VOID hi_ext_system_demosaic_manual_detail_smooth_strength_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DM_BASE(ViPipe) + 0x16, data);
}
static __inline HI_U16 hi_ext_system_demosaic_manual_detail_smooth_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DM_BASE(ViPipe) + 0x16);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_manual_detail_smooth_threshold_low_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_DETAIL_SMOOTH_THRESHOLD_LOW_LINEAR_DEFAULT (0)
#define HI_EXT_SYSTEM_DEMOSAIC_MANUAL_DETAIL_SMOOTH_THRESHOLD_LOW_WDR_DEFAULT (0)
static __inline HI_VOID hi_ext_system_demosaic_manual_detail_smooth_threshold_low_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DM_BASE(ViPipe) + 0x18, data);
}
static __inline HI_U16 hi_ext_system_demosaic_manual_detail_smooth_threshold_low_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DM_BASE(ViPipe) + 0x18);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_auto_detail_smooth_range_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_demosaic_auto_detail_smooth_range_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x20 + (u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_demosaic_auto_detail_smooth_range_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x20 + (u8Index * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_auto_nondirection_detail_enhance_strength_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_demosaic_auto_nondirection_detail_enhance_strength_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x30 + (u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_demosaic_auto_nondirection_detail_enhance_strength_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x30 + (u8Index * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_auto_nondirection_strength_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_demosaic_auto_nondirection_strength_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x40 + (u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_demosaic_auto_nondirection_strength_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x40 + (u8Index * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_auto_detail_smooth_strength_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_DEMOSAIC_AUTO_DETAIL_SMOOTH_STRENGTH_DEFAULT (256)
static __inline HI_VOID hi_ext_system_demosaic_auto_detail_smooth_strength_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DM_BASE(ViPipe) + 0x50 + (u8Index * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_demosaic_auto_detail_smooth_strength_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_DM_BASE(ViPipe) + 0x50 + (u8Index * sizeof(HI_U16)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_demosaic_auto_detail_smooth_threshold_low_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_demosaic_auto_detail_smooth_threshold_low_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DM_BASE(ViPipe) + 0x70 + (u8Index * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_demosaic_auto_detail_smooth_threshold_low_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_DM_BASE(ViPipe) + 0x70 + (u8Index * sizeof(HI_U16)));
}

//==============================================================//
// Register: hi_ext_system_antifalsecolor_enable_write
// ------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_ANTIFALSECOLOR_ENABLE_DEFAULT (0x1)
static __inline HI_VOID hi_ext_system_antifalsecolor_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x680, (data & 0x1));
}
static __inline HI_U8 hi_ext_system_antifalsecolor_enable_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x680);
}

// ------------------------------------------------------------ //
// Register: hi_ext_system_fcr_manual_mode_write
// ------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_ANTIFALSECOLOR_MANUAL_MODE_DEFAULT (0)
static __inline HI_VOID hi_ext_system_antifalsecolor_manual_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x681, data);
}
static __inline HI_U8 hi_ext_system_antifalsecolor_manual_mode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x681);
}

// ------------------------------------------------------------ //
// Register: hi_ext_system_antifalsecolor_auto_threshold_write
// ------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_antifalsecolor_auto_threshold_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x683 + (u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_antifalsecolor_auto_threshold_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x683 + (u8Index * sizeof(HI_U8)));
}

// ------------------------------------------------------------ //
// Register: hi_ext_system_antifalsecolor_auto_strenght_write
// ------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_antifalsecolor_auto_strenght_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x693 + (u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_antifalsecolor_auto_strenght_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x693 + (u8Index * sizeof(HI_U8)));
}

// ------------------------------------------------------------ //
// Register: hi_ext_system_antifalsecolor_manual_threshold_write
// ------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_ANTIFALSECOLOR_MANUAL_THRESHOLD_DEFAULT (8)
static __inline HI_VOID hi_ext_system_antifalsecolor_manual_threshold_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x6e4, data);
}
static __inline HI_U8 hi_ext_system_antifalsecolor_manual_threshold_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x6e4);
}

// ------------------------------------------------------------ //
// Register: hi_ext_system_antifalsecolor_manual_strenght_write
// ------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_ANTIFALSECOLOR_MANUAL_STRENGTH_DEFAULT (8)
static __inline HI_VOID hi_ext_system_antifalsecolor_manual_strenght_write(VI_PIPE ViPipe , HI_U8 data)
{
    IOWR_8DIRECT(VREG_DM_BASE(ViPipe) + 0x6e5, data);
}
static __inline HI_U8 hi_ext_system_antifalsecolor_manual_strenght_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DM_BASE(ViPipe) + 0x6e5);
}

//==============================================================//
//BAYER NR: VREG_BNR_BASE(ViPipe) ~ VREG_BNR_BASE(ViPipe)  +
//==============================================================//
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_enable_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_ENABLE_DEFAULT  (1)
#define HI_EXT_SYSTEM_BAYERNR_ENABLE_DATASIZE (8)
static __inline HI_VOID hi_ext_system_bayernr_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe), (data & 0x1));
}
static __inline HI_U8 hi_ext_system_bayernr_enable_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_BNR_BASE(ViPipe))) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_manual_mode_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_MANU_MODE_DEFAULT  (0)
#define HI_EXT_SYSTEM_BAYERNR_MANU_MODE_DATASIZE (8)
static __inline HI_VOID hi_ext_system_bayernr_manual_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x1, data);
}
static __inline HI_U8 hi_ext_system_bayernr_manual_mode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_low_power_enable_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_LOW_POWER_ENABLE_DEFAULT  (0)
#define HI_EXT_SYSTEM_BAYERNR_LOW_POWER_ENABLE_DATASIZE (8)
static __inline HI_VOID hi_ext_system_bayernr_low_power_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x2, (data & 0x1));
}
static __inline HI_U8 hi_ext_system_bayernr_low_power_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x2) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_lsc_enable_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_LSC_ENABLE_DEFAULT  (0)
#define HI_EXT_SYSTEM_BAYERNR_LSC_ENABLE_DATASIZE (8)
static __inline HI_VOID hi_ext_system_bayernr_lsc_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x4, data & 0x1);
}
static __inline HI_U8 hi_ext_system_bayernr_lsc_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x4) & 0x1);
}

static __inline HI_VOID hi_ext_system_bayernr_coef_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x5, data & 0x1);
}
static __inline HI_U8 hi_ext_system_bayernr_coef_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x5) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_mono_sensor_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_MONO_SENSOR_ENABLE_DEFAULT  (0)
#define HI_EXT_SYSTEM_BAYERNR_MONO_SENSOR_ENABLE_DATASIZE (8)
static __inline HI_VOID hi_ext_system_bayernr_mono_sensor_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x8, data);
}
static __inline HI_U8 hi_ext_system_bayernr_mono_sensor_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x8);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_lsc_nr_ratio_write
// ------------------------------------------------------------------------------ //
//args: data (16-bit)
#define HI_EXT_SYSTEM_BAYERNR_LSC_NR_RATIO_DEFAULT   (255)
#define HI_EXT_SYSTEM_BAYERNR_LSC_NR_RATIO_DATASIZE  (8)
static __inline HI_VOID hi_ext_system_bayernr_lsc_nr_ratio_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x9, data);
}
static __inline HI_U8 hi_ext_system_bayernr_lsc_nr_ratio_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x9);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_coarse_strength_r
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_R_DEFAULT  (102)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_R_DATASIZE (16)
static __inline HI_VOID hi_ext_system_bayernr_auto_coarse_strength_r_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x20 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_auto_coarse_strength_r_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x20 + (i * sizeof(HI_U16)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_coarse_strength_gr
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_GR_DEFAULT  (100)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_GR_DATASIZE (16)
static __inline HI_VOID hi_ext_system_bayernr_auto_coarse_strength_gr_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x40 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_auto_coarse_strength_gr_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x40 + (i * sizeof(HI_U16)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_coarse_strength_gb
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_GB_DEFAULT  (100)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_GB_DATASIZE (16)
static __inline HI_VOID hi_ext_system_bayernr_auto_coarse_strength_gb_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x60 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_auto_coarse_strength_gb_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x60 + (i * sizeof(HI_U16)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_coarse_strength_b
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_B_DEFAULT  (102)
#define HI_EXT_SYSTEM_BAYERNR_AUTO_COARSE_STRENGTH_B_DATASIZE (16)
static __inline HI_VOID hi_ext_system_bayernr_auto_coarse_strength_b_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x80 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_auto_coarse_strength_b_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x80 + (i * sizeof(HI_U16)));
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_chroma_strength_r_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_auto_chroma_strength_r_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xa0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_auto_chroma_strength_r_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xa0 + (i * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_chroma_strength_gr_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_auto_chroma_strength_gr_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xb0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_auto_chroma_strength_gr_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xb0 + (i * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_chroma_strength_gb_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_auto_chroma_strength_gb_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xc0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_auto_chroma_strength_gb_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xc0 + (i * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_chroma_strength_b_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_auto_chroma_strength_b_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xd0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_auto_chroma_strength_b_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xd0 + (i * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_fine_strength_write
// ------------------------------------------------------------------------------ //
//c ratio table
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_BAYERNR_AUTO_FINE_STRENGTH_DATASIZE (8)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_bayernr_auto_fine_strength_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xe0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_auto_fine_strength_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0xe0 + (i * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_auto_coring_weight
// ------------------------------------------------------------------------------ //
//bayernr jnlm coring low
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_BAYERNR_JNLM_CORING_WEIGHT_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_bayernr_auto_coring_weight_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x100 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_auto_coring_weight_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x100 + (i * sizeof(HI_U16)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_manual_chroma_strength_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_MANU_CHROMA_STRENGTH_DEFAULT (0)
#define HI_EXT_SYSTEM_BAYERNR_AMED_LEVEL_DATASIZE (8)

static __inline HI_VOID hi_ext_system_bayernr_manual_chroma_strength_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x120 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_manual_chroma_strength_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x120 + (i * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_manual_fine_strength_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_BAYERNR_MANU_FINE_STRENGTH_DEFAULT  (112)
#define HI_EXT_SYSTEM_BAYERNR_MANU_FINE_STRENGTH_DATASIZE (16)
static __inline HI_VOID hi_ext_system_bayernr_manual_fine_strength_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x130, data);
}
static __inline HI_U16 hi_ext_system_bayernr_manual_fine_strength_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x130);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_manual_coring_weight_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define  HI_EXT_SYSTEM_BAYERNR_MANU_CORING_WEIGHT_DEFAULT (50)
static __inline HI_VOID hi_ext_system_bayernr_manual_coring_weight_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x140, data);
}
static __inline HI_U16 hi_ext_system_bayernr_manual_coring_weight_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x140);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_manual_coarse_strength_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define  HI_EXT_SYSTEM_BAYERNR_MANU_COARSE_STRENGTH_DEFAULT (102)
#define  HI_EXT_SYSTEM_BAYERNR_MANU_COARSE_STRENGTH_DATASIZE (16)
static __inline HI_VOID hi_ext_system_bayernr_manual_coarse_strength_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x160 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_manual_coarse_strength_read(VI_PIPE ViPipe, HI_U8 i)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x160  + (i * sizeof(HI_U16)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_wdr_blc_init
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_WDR_BLCINIT_DEFAULT  (64)
#define HI_EXT_SYSTEM_BAYERNR_WDR_BLCINIT_DATASIZE (8)
static __inline HI_VOID hi_ext_system_bayernr_wdr_blc_init_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x1e0, data);
}
static __inline HI_U8 hi_ext_system_bayernr_wdr_blc_init_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x1e0);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_wdr_frame_strength_write
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
#define HI_EXT_SYSTEM_BAYERNR_WDR_FRAME_STRENGTH_DATASIZE (8)
static __inline HI_VOID hi_ext_system_bayernr_wdr_frame_strength_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x1f0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_bayernr_wdr_frame_strength_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_BNR_BASE(ViPipe) + 0x1f0 + (i * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_bayernr_coring_low_ratio_write
// ------------------------------------------------------------------------------ //
// args: data (16-bit)
#define HI_EXT_SYSTEM_BAYERNR_CORING_RATIO_LUT_DEFAULT  (800)
#define HI_EXT_SYSTEM_BAYERNR_CORING_RATIO_LUT_DATASIZE (16)
static __inline HI_VOID hi_ext_system_bayernr_coring_ratio_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x200 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_bayernr_coring_ratio_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_16DIRECT(VREG_BNR_BASE(ViPipe) + 0x200 + (i * sizeof(HI_U16)));
}

//==============================================================//
//Frame stitch WDR: 0x11D00~0x11EFF
//==============================================================/
/*******************WDR---U8 --EXT_REGISTER****************************************/
// ------------------------------------------------------------------------------ //
// Register: hi_ext_wdr_manual_mode_enable
// ------------------------------------------------------------------------------ //
// 0: auto; 1: manual;
// ------------------------------------------------------------------------------ //

//-------------------------------------------------------------------------------//
//******************************HI_BOOL****************************************//
//-------------------------------------------------------------------------------//

static __inline HI_VOID hi_ext_system_wdr_manual_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe), data);
}
static __inline HI_U8 hi_ext_system_wdr_manual_mode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe));
}

static __inline HI_VOID hi_ext_system_wdr_coef_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1, data);
}
static __inline HI_U8 hi_ext_system_wdr_coef_update_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe)  +  0x1);
}

//WdrEn
#define HI_EXT_SYSTEM_WDR_EN_DEFAULT (0)
static __inline HI_VOID hi_ext_system_wdr_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x2, data);
}
static __inline HI_U8 hi_ext_system_wdr_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe)  +  0x2);
}

//FusionMode
#define HI_EXT_SYSTEM_FUSION_MODE_DEFAULT (0)
static __inline HI_VOID hi_ext_system_fusion_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x3, data);
}
static __inline HI_U8 hi_ext_system_fusion_mode_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe)  +  0x3);
}

//bMdtEn
#define HI_EXT_SYSTEM_MDT_EN_DEFAULT (1)
static __inline HI_VOID hi_ext_system_mdt_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x4, data);
}
static __inline HI_U8 hi_ext_system_mdt_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe)  +  0x4);
}

//bErosionEn
#define HI_EXT_SYSTEM_EROSION_EN_DEFAULT (0)
static __inline HI_VOID hi_ext_system_erosion_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x5, data);
}
static __inline HI_U8 hi_ext_system_erosion_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe)  +  0x5);
}

//shortexpo_chk
static __inline HI_VOID hi_ext_system_wdr_shortexpo_chk_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x6, data);
}
static __inline HI_U8 hi_ext_system_wdr_shortexpo_chk_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe)  +  0x6);
}


//-------------------------------------------------------------------------------//
//******************************HI_U8****************************************//
//-------------------------------------------------------------------------------//

//u8NosGWgtMod
#define HI_EXT_SYSTEM_WDR_NOISE_G_WEIGHT_MODE_DEFAULT (0x1)
static __inline HI_VOID hi_ext_system_wdr_noise_g_weight_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x10, data);
}
static __inline HI_U8 hi_ext_system_wdr_noise_g_weight_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x10));
}

//u8NosCWgtMod
#define HI_EXT_SYSTEM_WDR_NOISE_C_WEIGHT_MODE_DEFAULT (0x3)
static __inline HI_VOID hi_ext_system_wdr_noise_c_weight_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x11, data);
}
static __inline HI_U8 hi_ext_system_wdr_noise_c_weight_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x11));
}

//u8MdtLBld
#define HI_EXT_SYSTEM_WDR_MDT_LONG_BLEND_DEFAULT (0x0)
static __inline HI_VOID hi_ext_system_wdr_mdt_long_blend_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x12, data);
}
static __inline HI_U8 hi_ext_system_wdr_mdt_long_blend_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x12));
}

//u8NoiseModelCoef
#define HI_EXT_SYSTEM_WDR_NOISE_MODEL_COEF_DEFAULT (0x50)
static __inline HI_VOID hi_ext_system_wdr_noise_model_coef_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x13, data);
}
static __inline HI_U8 hi_ext_system_wdr_noise_model_coef_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x13));
}

//u8NoiseRatioRg
#define HI_EXT_SYSTEM_WDR_NOISE_RATIO_RG_DEFAULT (0x5A)
static __inline HI_VOID hi_ext_system_wdr_noise_ratio_rg_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x14, data);
}
static __inline HI_U8 hi_ext_system_wdr_noise_ratio_rg_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x14));
}

//u8NoiseRatioBg
#define HI_EXT_SYSTEM_WDR_NOISE_RATIO_BG_DEFAULT (0x5A)
static __inline HI_VOID hi_ext_system_wdr_noise_ratio_bg_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x15, data);
}
static __inline HI_U8 hi_ext_system_wdr_noise_ratio_bg_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x15));
}

//u8Gsigma_gain1
#define HI_EXT_SYSTEM_WDR_G_SIGMA_GAIN1_DEFAULT (0x10)
static __inline HI_VOID hi_ext_system_wdr_g_sigma_gain1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x16, data);
}
static __inline HI_U8 hi_ext_system_wdr_g_sigma_gain1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x16));
}


//u8Gsigma_gain2
#define HI_EXT_SYSTEM_WDR_G_SIGMA_GAIN2_DEFAULT (0x30)
static __inline HI_VOID hi_ext_system_wdr_g_sigma_gain2_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x17, data);
}
static __inline HI_U8 hi_ext_system_wdr_g_sigma_gain2_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x17));
}

//u8Gsigma_gain3
#define HI_EXT_SYSTEM_WDR_G_SIGMA_GAIN3_DEFAULT (0x50)
static __inline HI_VOID hi_ext_system_wdr_g_sigma_gain3_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x18, data);
}
static __inline HI_U8 hi_ext_system_wdr_g_sigma_gain3_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x18));
}

//u8Csigma_gain2
#define HI_EXT_SYSTEM_WDR_C_SIGMA_GAIN1_DEFAULT (0x8)
static __inline HI_VOID hi_ext_system_wdr_c_sigma_gain1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x19, data);
}
static __inline HI_U8 hi_ext_system_wdr_c_sigma_gain1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x19));
}


//u8Csigma_gain2
#define HI_EXT_SYSTEM_WDR_C_SIGMA_GAIN2_DEFAULT (0x10)
static __inline HI_VOID hi_ext_system_wdr_c_sigma_gain2_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1a, data);
}
static __inline HI_U8 hi_ext_system_wdr_c_sigma_gain2_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1a));
}

//u8Csigma_gain3
#define HI_EXT_SYSTEM_WDR_C_SIGMA_GAIN3_DEFAULT (0x20)
static __inline HI_VOID hi_ext_system_wdr_c_sigma_gain3_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1b, data);
}
static __inline HI_U8 hi_ext_system_wdr_c_sigma_gain3_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1b));
}

//u8BnrFullMdtThr
#define HI_EXT_SYSTEM_WDR_BNR_FULL_MDT_THR_DEFAULT (0x96)
static __inline HI_VOID hi_ext_system_wdr_bnr_full_mdt_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1d, data);
}
static __inline HI_U8 hi_ext_system_wdr_bnr_full_mdt_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1d));
}

//u8MdtFullThr
#define HI_EXT_SYSTEM_WDR_MDT_FULL_THR_DEFAULT (0xFA)
static __inline HI_VOID hi_ext_system_wdr_mdt_full_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1e, data);
}
static __inline HI_U8 hi_ext_system_wdr_mdt_full_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1e));
}

//u8MdtStillThr
#define HI_EXT_SYSTEM_WDR_MDT_STILL_THR_DEFAULT (0x14)
static __inline HI_VOID hi_ext_system_wdr_mdt_still_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1f, data);
}
static __inline HI_U8 hi_ext_system_wdr_mdt_still_thr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x1f));
}


//u8FullMotSigWgt;

#define HI_EXT_SYSTEM_WDR_FULL_MOT_SIGMA_WEIGHT_DEFAULT (31)
static __inline HI_VOID hi_ext_system_wdr_full_mot_sigma_weight_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x20, data);
}
static __inline HI_U8 hi_ext_system_wdr_full_mot_sigma_weight_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x20));
}

//bnrmode
#define HI_EXT_SYSTEM_BNR_MODE_WRITE_DEFAULT (1)
static __inline HI_VOID hi_ext_system_bnr_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x21, data);
}
static __inline HI_U8 hi_ext_system_bnr_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x21));
}

static __inline HI_VOID hi_ext_system_wdr_manual_mdthr_low_gain_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x22, data);
}
static __inline HI_U8 hi_ext_system_wdr_manual_mdthr_low_gain_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x22));
}

static __inline HI_VOID hi_ext_system_wdr_manual_mdthr_hig_gain_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x23, data);
}
static __inline HI_U8 hi_ext_system_wdr_manual_mdthr_hig_gain_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x23));
}

#define HI_EXT_SYSTEM_WDR_MDREF_FLICKER_DEFAULT (0x1)

static __inline HI_VOID hi_ext_system_wdr_mdref_flicker_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x24, data);
}
static __inline HI_U8 hi_ext_system_wdr_mdref_flicker_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0x24));
}

//-------------------------------------------------------------------------------//
//******************************HI_U16****************************************//
//-------------------------------------------------------------------------------//

//long thr
#define HI_EXT_SYSTEM_WDR_LONGTHR_WRITE_DEFAULT (0xBC0)
static __inline HI_VOID hi_ext_system_wdr_longthr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_WDR_BASE(ViPipe) + 0x40, data);
}
static __inline HI_U16 hi_ext_system_wdr_longthr_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_WDR_BASE(ViPipe) + 0x40));
}

//short thr
#define HI_EXT_SYSTEM_WDR_SHORTTHR_WRITE_DEFAULT (0xFC0)
static __inline HI_VOID hi_ext_system_wdr_shortthr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_WDR_BASE(ViPipe) + 0x42, data);
}
static __inline HI_U16 hi_ext_system_wdr_shortthr_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_WDR_BASE(ViPipe) + 0x42));
}

static __inline HI_VOID hi_ext_system_fusion_thr_write(VI_PIPE ViPipe, HI_U8 i, HI_U16 data)
{
    IOWR_16DIRECT(VREG_WDR_BASE(ViPipe) + 0x44 + (i * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_fusion_thr_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_16DIRECT(VREG_WDR_BASE(ViPipe) + 0x44 + (i * sizeof(HI_U16)));
}

//-------------------------------------------------------------------------------//
//******************************LUT****************************************//
//-------------------------------------------------------------------------------//

//wdr floorset
static __inline HI_VOID hi_ext_system_wdr_floorset_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xb0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_wdr_floorset_read(VI_PIPE ViPipe,  HI_U8 i)
{
    return IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xb0 + (i * sizeof(HI_U8)));
}

static __inline HI_VOID hi_ext_system_wdr_auto_mdthr_low_gain_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xc0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_wdr_auto_mdthr_low_gain_read(VI_PIPE ViPipe, HI_U8 i)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xc0 + (i * sizeof(HI_U8))));
}

static __inline HI_VOID hi_ext_system_wdr_auto_mdthr_hig_gain_write(VI_PIPE ViPipe, HI_U8 i, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xd0 + (i * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_wdr_auto_mdthr_hig_gain_read(VI_PIPE ViPipe, HI_U8 i)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xd0 + (i * sizeof(HI_U8))));
}

//u8TextureThdWgt
#define HI_EXT_SYSTEM_WDR_TEXTURE_THD_WGT (0x18)

static __inline HI_VOID hi_ext_system_wdr_texture_thd_wgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xe0, data);
}

static __inline HI_U8 hi_ext_system_wdr_texture_thd_wgt_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xe0));
}

//bSFNR
#define HI_EXT_SYSTEM_WDR_WDR_SFNR_EN_WGT (0x1)

static __inline HI_VOID hi_ext_system_wdr_sfnr_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xe1, data);
}

static __inline HI_U8 hi_ext_system_wdr_sfnr_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xe1));
}

//isp_wdr_forcelong_en

#define HI_EXT_SYSTEM_WDR_FORCELONG_EN (0x1)

static __inline HI_VOID hi_ext_system_wdr_forcelong_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xe2, data);
}

static __inline HI_U8 hi_ext_system_wdr_forcelong_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xe2));
}

//isp_wdr_forcelong_low_thd

#define HI_EXT_SYSTEM_WDR_FORCELONG_LOW_THD (0x1F4)

static __inline HI_VOID hi_ext_system_wdr_forcelong_low_thd_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_WDR_BASE(ViPipe) + 0xe4, data);
}

static __inline HI_U16 hi_ext_system_wdr_forcelong_low_thd_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_WDR_BASE(ViPipe) + 0xe4));
}

//isp_wdr_forcelong_high_thd

#define HI_EXT_SYSTEM_WDR_FORCELONG_HIGH_THD (0x2BC)

static __inline HI_VOID hi_ext_system_wdr_forcelong_high_thd_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_WDR_BASE(ViPipe) + 0xe6, data);
}

static __inline HI_U16 hi_ext_system_wdr_forcelong_high_thd_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_WDR_BASE(ViPipe) + 0xe6));
}

//isp_wdr_shortcheck_thd

#define HI_EXT_SYSTEM_WDR_SHORTCHECK_THD (0xc)

static __inline HI_VOID hi_ext_system_wdr_shortcheck_thd_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_WDR_BASE(ViPipe) + 0xe8, data);
}

static __inline HI_U16 hi_ext_system_wdr_shortcheck_thd_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_WDR_BASE(ViPipe) + 0xe8));
}


//isp_wdr_forcelong_en

#define HI_EXT_SYSTEM_WDR_MOT2SIG_GWGT_WGT (0x18)

static __inline HI_VOID hi_ext_system_wdr_mot2sig_gwgt_high_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xea, data);
}

static __inline HI_U8 hi_ext_system_wdr_mot2sig_gwgt_high_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xea));
}

#define HI_EXT_SYSTEM_WDR_MOT2SIG_CWGT_WGT (0x18)

static __inline HI_VOID hi_ext_system_wdr_mot2sig_cwgt_high_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xec, data);
}

static __inline HI_U8 hi_ext_system_wdr_mot2sig_cwgt_high_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xec));
}


#define HI_EXT_SYSTEM_WDR_SHORTSIGMAL1_GWGT_WGT (16)

static __inline HI_VOID hi_ext_system_wdr_shortsigmal1_gwgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf0, data);
}

static __inline HI_U8 hi_ext_system_wdr_shortsigmal1_gwgt_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf0));
}

#define HI_EXT_SYSTEM_WDR_SHORTSIGMAL2_GWGT_WGT (48)

static __inline HI_VOID hi_ext_system_wdr_shortsigmal2_gwgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf2, data);
}

static __inline HI_U8 hi_ext_system_wdr_shortsigmal2_gwgt_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf2));
}

#define HI_EXT_SYSTEM_WDR_SHORTSIGMAL1_CWGT_WGT (16)

static __inline HI_VOID hi_ext_system_wdr_shortsigmal1_cwgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf4, data);
}

static __inline HI_U8 hi_ext_system_wdr_shortsigmal1_cwgt_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf4));
}

#define HI_EXT_SYSTEM_WDR_SHORTSIGMAL2_CWGT_WGT (48)

static __inline HI_VOID hi_ext_system_wdr_shortsigmal2_cwgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf6, data);
}

static __inline HI_U8 hi_ext_system_wdr_shortsigmal2_cwgt_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf6));
}

#define HI_EXT_SYSTEM_WDR_FUSIONSIGMA_CWGT0_WGT (16)

static __inline HI_VOID hi_ext_system_wdr_fusionsigma_cwgt0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf8, data);
}

static __inline HI_U8 hi_ext_system_wdr_fusionsigma_cwgt0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf8));
}

#define HI_EXT_SYSTEM_WDR_FUSIONSIGMA_CWGT1_WGT (8)

static __inline HI_VOID hi_ext_system_wdr_fusionsigma_cwgt1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf9, data);
}

static __inline HI_U8 hi_ext_system_wdr_fusionsigma_cwgt1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xf9));
}

#define HI_EXT_SYSTEM_WDR_FUSIONSIGMA_GWGT0_WGT (16)

static __inline HI_VOID hi_ext_system_wdr_fusionsigma_gwgt0_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfa, data);
}

static __inline HI_U8 hi_ext_system_wdr_fusionsigma_gwgt0_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfa));
}


#define HI_EXT_SYSTEM_WDR_FUSIONSIGMA_GWGT1_WGT (8)

static __inline HI_VOID hi_ext_system_wdr_fusionsigma_gwgt1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfb, data);
}

static __inline HI_U8 hi_ext_system_wdr_fusionsigma_gwgt1_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfb));
}


#define HI_EXT_SYSTEM_WDR_FUSION_BNR_STR_WGT (16)
static __inline HI_VOID hi_ext_system_wdr_fusionbnrstr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfc, data);
}
static __inline HI_U8 hi_ext_system_wdr_fusionbnrstr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfc));
}

#define HI_EXT_SYSTEM_WDR_MOTION_BNR_STR_WGT (24)

static __inline HI_VOID hi_ext_system_wdr_motionbnrstr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfd, data);
}

static __inline HI_U8 hi_ext_system_wdr_motionbnrstr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfd));
}

#define HI_EXT_SYSTEM_WDR_SHORTFRAME_NR_STR_WGT (48)

static __inline HI_VOID hi_ext_system_wdr_shortframe_nrstr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfe, data);
}
static __inline HI_U8 hi_ext_system_wdr_shortframe_nrstr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_WDR_BASE(ViPipe) + 0xfe));
}


/*******************WDR---U32 ARRAY--EXT_REGISTER**********************************/
//==============================================================//
//FLICKER: 0x11F00~0x11F00
//==============================================================//
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_min_band_num
// ------------------------------------------------------------------------------ //
//flicker_min_band_num
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_min_band_num_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0X0, data);
}
static __inline HI_U8 hi_ext_system_flicker_min_band_num_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0X0);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_min_valid_band_pcnt
// ------------------------------------------------------------------------------ //
//flicker_min_valid_band_pcnt
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_min_valid_band_pcnt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x1, data);
}
static __inline HI_U8 hi_ext_system_flicker_min_valid_band_pcnt_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_wave_diff1
// ------------------------------------------------------------------------------ //
//flicker_wave_diff1
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_wave_diff1_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x2, data);
}
static __inline HI_U8 hi_ext_system_flicker_wave_diff1_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x2);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_wave_diff2
// ------------------------------------------------------------------------------ //
//flicker_wave_diff2
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_wave_diff2_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x3, data);
}
static __inline HI_U8 hi_ext_system_flicker_wave_diff2_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x3);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_period
// ------------------------------------------------------------------------------ //
//flicker_period
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_period_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x4, data);
}
static __inline HI_U8 hi_ext_system_flicker_period_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_gr_cnt
// ------------------------------------------------------------------------------ //
//flicker_gr_cnt
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_gr_cnt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x5, data);
}
static __inline HI_U8 hi_ext_system_flicker_gr_cnt_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x5);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_gb_cnt
// ------------------------------------------------------------------------------ //
//flicker_gb_cnt
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_gb_cnt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x6, data);
}
static __inline HI_U8 hi_ext_system_flicker_gb_cnt_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x6);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_flicker_result
// ------------------------------------------------------------------------------ //
//flicker_result
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_flicker_result_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x7, data);
}
static __inline HI_U8 hi_ext_system_flicker_result_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x7);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_freq_result
// ------------------------------------------------------------------------------ //
//freq_result
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_freq_result_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x8, data);
}
static __inline HI_U8 hi_ext_system_freq_result_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x8);
}

static __inline HI_VOID hi_ext_system_flicker_over_cnt_thr_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_FLICK_BASE(ViPipe)  +  0xc, data);
}
static __inline HI_U32 hi_ext_system_flicker_over_cnt_thr_read(VI_PIPE ViPipe)
{
    return IORD_32DIRECT(VREG_FLICK_BASE(ViPipe)  +  0xc);
}

static __inline HI_VOID hi_ext_system_flicker_over_thr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x10, data);
}
static __inline HI_U16 hi_ext_system_flicker_over_thr_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_FLICK_BASE(ViPipe)  +  0x10);
}


//==============================================================//
//lSC: 0x12000~0x13FFF
//==============================================================//
static __inline HI_VOID hi_ext_system_isp_mesh_shading_enable_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LSC_BASE(ViPipe) , data & 0x1);
}

static __inline HI_U8 hi_ext_system_isp_mesh_shading_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_LSC_BASE(ViPipe)) & 0x1);
}

// args: data (8-bit)

#define HI_EXT_SYSTEM_ISP_MESH_SHADING_MANU_MODE_DEFAULT (0)
#define HI_EXT_SYSTEM_ISP_MESH_SHADING_MANU_MODE_DATASIZE (8)

static __inline HI_VOID hi_ext_system_isp_mesh_shading_lut_attr_updata_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LSC_BASE(ViPipe)  +  1, data);
}
static __inline HI_U8 hi_ext_system_isp_mesh_shading_lut_attr_updata_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LSC_BASE(ViPipe)  +  1);
}

#define HI_EXT_SYSTEM_ISP_MESH_SHADING_UPDATA_DEFAULT (0)
#define HI_EXT_SYSTEM_ISP_MESH_SHADING_UPDATA_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_isp_mesh_shading_attr_updata_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LSC_BASE(ViPipe)  +  2, data);
}
static __inline HI_U8 hi_ext_system_isp_mesh_shading_attr_updata_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LSC_BASE(ViPipe)  +  2);
}

static __inline HI_VOID hi_ext_system_isp_mesh_shading_mesh_scale_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LSC_BASE(ViPipe)  +  3 , data);
}

static __inline HI_U8 hi_ext_system_isp_mesh_shading_mesh_scale_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_LSC_BASE(ViPipe)  +  3));
}


static __inline HI_VOID hi_ext_system_isp_mesh_shading_mesh_strength_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe)  +  4 , data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_mesh_strength_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_LSC_BASE(ViPipe)  +  4));
}

static __inline HI_VOID hi_ext_system_isp_fe_lsc_enable_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe)  +  6 , data & 0x1);
}

static __inline HI_U8 hi_ext_system_isp_fe_lsc_enable_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_LSC_BASE(ViPipe)  +  6) & 0x1);
}

/*length = 32;bytes = 16 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_xgrid_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe)  +  8  + (u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_xgrid_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe)  +  8  +  (u8Index * sizeof(HI_U16)));
}

/*length = 16;bytes = 16 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_ygrid_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe)  +  0x28  + (u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_ygrid_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe)  +  0x28  +  (u8Index * sizeof(HI_U16)));
}

/*bytes = 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_blendratio_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe)  +  0x48, data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_blendratio_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe)  +  0x48);
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_r_gain0_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x50 + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_r_gain0_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x50 + (u16Index * sizeof(HI_U16)));
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_gr_gain0_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x8D2 + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_gr_gain0_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x8D2 + (u16Index * sizeof(HI_U16)));
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_gb_gain0_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x1154 + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_gb_gain0_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x1154 + (u16Index * sizeof(HI_U16)));
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_b_gain0_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x19D6 + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_b_gain0_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x19D6 + (u16Index * sizeof(HI_U16)));
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_r_gain1_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x2258 + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_r_gain1_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x2258 + (u16Index * sizeof(HI_U16)));
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_gr_gain1_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x2ADA + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_gr_gain1_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x2ADA + (u16Index * sizeof(HI_U16)));
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_gb_gain1_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x335C + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_gb_gain1_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x335C + (u16Index * sizeof(HI_U16)));
}

/*length = 1089;bytes = 1089 * 2*/
static __inline HI_VOID hi_ext_system_isp_mesh_shading_b_gain1_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x3BDE + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_mesh_shading_b_gain1_read(VI_PIPE ViPipe, HI_U16 u16Index)
{
    return IORD_16DIRECT(VREG_LSC_BASE(ViPipe) + 0x3BDE + (u16Index * sizeof(HI_U16)));
}

static __inline HI_VOID hi_ext_system_isp_mesh_shading_fe_lut_attr_updata_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LSC_BASE(ViPipe)  +  0x4460, data);
}
static __inline HI_U8 hi_ext_system_isp_mesh_shading_fe_lut_attr_updata_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LSC_BASE(ViPipe)  +  0x4460);
}

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_isp_mesh_shading_fe_attr_updata_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LSC_BASE(ViPipe)  +  0x4461, data);
}
static __inline HI_U8 hi_ext_system_isp_mesh_shading_fe_attr_updata_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LSC_BASE(ViPipe)  +  0x4461);
}


//==============================================================//
//RLSC: 0x1000
//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_enable_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0x0 , data & 0x1);
}

static __inline HI_U8 hi_ext_system_isp_radial_shading_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0x0));
}

//==============================================================//
//static __inline HI_VOID hi_ext_system_isp_radial_shading_crop_enable_write(VI_PIPE ViPipe,  HI_U8 data){
//    IOWR_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1, data);
//}
//
//static __inline HI_U8 hi_ext_system_isp_radial_shading_crop_enable_read(VI_PIPE ViPipe){
//    return (IORD_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1));
//}
//
////==============================================================//
//static __inline HI_VOID hi_ext_system_isp_radial_shading_radius_write(VI_PIPE ViPipe,  HI_U16 data){
//    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x2, data);
//}
//
//static __inline HI_U16 hi_ext_system_isp_radial_shading_radius_read(VI_PIPE ViPipe){
//    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x2));
//}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_scale_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0x6, data);
}

static __inline HI_U8 hi_ext_system_isp_radial_shading_scale_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0x6));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_strength_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x8, data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_strength_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x8));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_coefupdate_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0xa , data);
}

static __inline HI_U8 hi_ext_system_isp_radial_shading_coefupdate_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0xa));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_lutupdate_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0xb , data);
}

static __inline HI_U8 hi_ext_system_isp_radial_shading_lutupdate_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0xb));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_lightmode_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0xc , data);
}

static __inline HI_U8 hi_ext_system_isp_radial_shading_lightmode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_RLSC_BASE(ViPipe) + 0xc));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_blendratio_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0xe , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_blendratio_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0xe));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_lightinfo_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_RLSC_BASE(ViPipe) + 0x10 + u8Index * sizeof(HI_U8)), data);
}

static __inline HI_U8 hi_ext_system_isp_radial_shading_lightinfo_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_8DIRECT((VREG_RLSC_BASE(ViPipe) + 0x10 + u8Index * sizeof(HI_U8))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_centerrx_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x12 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centerrx_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x12));
}

static __inline HI_VOID hi_ext_system_isp_radial_shading_centerry_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x14 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centerry_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x14));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_centergrx_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x16 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centergrx_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x16));
}


static __inline HI_VOID hi_ext_system_isp_radial_shading_centergry_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x18 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centergry_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x18));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_centergbx_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1a , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centergbx_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1a));
}


static __inline HI_VOID hi_ext_system_isp_radial_shading_centergby_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1c , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centergby_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1c));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_centerbx_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1e , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centerbx_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x1e));
}


static __inline HI_VOID hi_ext_system_isp_radial_shading_centerby_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x20 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_centerby_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x20));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_offcenterr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x22 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_offcenterr_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x22));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_offcentergr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x24 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_offcentergr_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x24));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_offcentergb_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x26 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_offcentergb_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x26));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_offcenterb_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x28 , data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_offcenterb_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RLSC_BASE(ViPipe) + 0x28));
}


//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_r_gain0_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x02a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_r_gain0_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x02a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_r_gain1_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x13a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_r_gain1_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x13a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_r_gain2_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x24a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_r_gain2_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x24a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_gr_gain0_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x35a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_gr_gain0_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x35a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_gr_gain1_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x46a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_gr_gain1_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x46a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_gr_gain2_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x57a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_gr_gain2_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x57a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_gb_gain0_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x68a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_gb_gain0_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x68a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_gb_gain1_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x79a + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_gb_gain1_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x79a + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_gb_gain2_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x8aa + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_gb_gain2_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x8aa + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_b_gain0_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x9ba + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_b_gain0_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0x9ba + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_b_gain1_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0xaca + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_b_gain1_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0xaca + u8Index * sizeof(HI_U16))));
}

//==============================================================//
static __inline HI_VOID hi_ext_system_isp_radial_shading_b_gain2_write(VI_PIPE ViPipe,  HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0xbda + u8Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_isp_radial_shading_b_gain2_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return (IORD_16DIRECT((VREG_RLSC_BASE(ViPipe) + 0xbda + u8Index * sizeof(HI_U16))));
}

//==============================================================//
//MCDS: 0x13000~0x130FF
//==============================================================//
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_mcds_midfbldr
// ------------------------------------------------------------------------------ //
//middle fliter blend ratio table
// ------------------------------------------------------------------------------ //
//***********************************************************************//
#define     HI_EXT_SYSTEM_MANUAL_MCDS_MIDFSTR_DEFAULT       (0)
static __inline HI_VOID hi_ext_system_manual_mcds_MidFstr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_MCDS_BASE(ViPipe), data);
}
static __inline HI_U8 hi_ext_system_manual_mcds_MidFstr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_MCDS_BASE(ViPipe)));
}

//***********************************************************************//
#define     HI_EXT_SYSTEM_MANUAL_MCDS_UVCORINGSTR_DEFAULT       (0)
static __inline HI_VOID hi_ext_system_manual_mcds_uvCoringStr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_MCDS_BASE(ViPipe) + 4, data);
}
static __inline HI_U16 hi_ext_system_manual_mcds_uvCoringStr_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_MCDS_BASE(ViPipe) + 4));
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_mcds_MidFstr_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_MCDS_BASE(ViPipe)  +  0x8  +  u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_mcds_MidFstr_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_MCDS_BASE(ViPipe)  +  0x8  +  u8Index * sizeof(HI_U8)))));
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_mcds_uvCoringStr_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_MCDS_BASE(ViPipe)  +  0x30  +  u8Index * sizeof(HI_U16)), data);
}
static __inline HI_U16 hi_ext_system_mcds_uvCoringStr_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_16DIRECT((VREG_MCDS_BASE(ViPipe)  +  0x30  +  u8Index * sizeof(HI_U16)))));
}

#define HI_EXT_SYSTEM_MCDS_MANU_MODE_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_mcds_manu_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_MCDS_BASE(ViPipe)  +  0x50, data);
}
static __inline HI_U8 hi_ext_system_mcds_manu_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_MCDS_BASE(ViPipe)  +  0x50));
}

//==============================================================//
//YUV SHARPEN: 0x14000~0x15FFF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_sharpening_core
// ------------------------------------------------------------------------------ //
// sharpening core
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_SHARPEN_MANU_MODE_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_isp_sharpen_manu_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x000, data & 0x01);
}
static __inline HI_U8 hi_ext_system_isp_sharpen_manu_mode_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x000) & 0x01);
}

#define     HI_EXT_SYSTEM_MANUAL_SHARPEN_EN_DEFAULT     (1)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_isp_sharpen_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x002, data & 0x01);
}
static __inline HI_U8 hi_ext_system_manual_isp_sharpen_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x002) & 0x01);
}

#define     HI_EXT_SYSTEM_SHARPEN_MPI_UPDATE_EN_DEFAULT     (0)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_sharpen_mpi_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x003, data & 0x01);
}
static __inline HI_U8 hi_ext_system_sharpen_mpi_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x003) & 0x01);
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_TEXTURESTR_DEFAULT     (300)

//******************************32 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_TextureStr_write(VI_PIPE ViPipe, HI_U8 index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x004  +  (index * sizeof(HI_U16)), data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_manual_Isp_sharpen_TextureStr_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return (IORD_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x004  +  (index * sizeof(HI_U16))) & 0xFFF);
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_EDGESTR_DEFAULT        (400)

//******************************32 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_EdgeStr_write(VI_PIPE ViPipe, HI_U8 index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x054  +  (index * sizeof(HI_U16)), data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_manual_Isp_sharpen_EdgeStr_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return (IORD_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x054  +  (index * sizeof(HI_U16))) & 0xFFF);
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_TEXTUREFREQ_DEFAULT        (128)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_TextureFreq_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0A4, data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_manual_Isp_sharpen_TextureFreq_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0A4) & 0xFFF);
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_EDGEFREQ_DEFAULT       (96)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_EdgeFreq_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0A8, data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_manual_Isp_sharpen_EdgeFreq_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0A8) & 0xFFF);
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_OVERSHOOT_DEFAULT      (100)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_OverShoot_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0AA, data & 0x7f);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_OverShoot_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0AA) & 0x7f);
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_UNDERSHOOT_DEFAULT     (127)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_UnderShoot_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0AC, data & 0x7f);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_UnderShoot_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0AC) & 0x7f);
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_SHOOTSUPSTR_DEFAULT        (60)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_shootSupStr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0AE, data);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_shootSupStr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0AE));
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_DETAILCTRL_DEFAULT     (128)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_detailctrl_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0B2, data);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_detailctrl_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0B2));
}

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_EDGEFILTSTR_DEFAULT        (53)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_EdgeFiltStr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0B4, data & 0x3f);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_EdgeFiltStr_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0B4)) & 0x3f);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_manual_sharpen_LumaWgt
// ------------------------------------------------------------------------------ //
// sharpening manual LumaWgt table length:32*1 BYTE
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
//******************************32 multi addrs*********************************//
#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_LUMAWGT_DEFAULT        (127)
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_LumaWgt_write(VI_PIPE ViPipe, HI_U8 index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0C0  +  (index * sizeof(HI_U8)), data & 0x7F);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_LumaWgt_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x0C0  +  (index * sizeof(HI_U8))) & 0x7F);
}

// RGain: data (8-bit)
#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_RGAIN_DEFAULT      (HI_ISP_SHARPEN_RGAIN)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_RGain_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x100, data & HI_ISP_SHARPEN_RGAIN_BIT);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_RGain_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x100)&HI_ISP_SHARPEN_RGAIN_BIT);
}

// BGain: data (8-bit)

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_BGAIN_DEFAULT      (HI_ISP_SHARPEN_BGAIN)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_BGain_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x102, data & HI_ISP_SHARPEN_BGAIN_BIT);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_BGain_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x102)&HI_ISP_SHARPEN_BGAIN_BIT);
}

// SkinGain: data (8-bit)

#define     HI_EXT_SYSTEM_MANUAL_ISP_SHARPEN_SKINGAIN_DEFAULT       (31)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_Isp_sharpen_SkinGain_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x104, data & 0x1f);
}
static __inline HI_U8 hi_ext_system_manual_Isp_sharpen_SkinGain_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x104) & 0x1f);
}


//------Auto 16-------------------//
// ------------------------------------------------------------------------------ //

//******************************auoto 32 x 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_TextureStr_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0x200  +  u16Index * sizeof(HI_U16)), data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_Isp_sharpen_TextureStr_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return ((IORD_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0x200  +  u16Index * sizeof(HI_U16)))) & 0xFFF);
}

//******************************auoto 32 x 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_EdgeStr_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0x700  +  u16Index * sizeof(HI_U16)), data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_Isp_sharpen_EdgeStr_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return ((IORD_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0x700  +  u16Index * sizeof(HI_U16)))) & 0xFFF);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_TextureFreq_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC00  +  u8Index * sizeof(HI_U16)), data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_Isp_sharpen_TextureFreq_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC00  +  u8Index * sizeof(HI_U16)))) & 0xFFF);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_EdgeFreq_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC30  +  u8Index * sizeof(HI_U16)), data & 0xFFF);
}
static __inline HI_U16 hi_ext_system_Isp_sharpen_EdgeFreq_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_16DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC30  +  u8Index * sizeof(HI_U16)))) & 0xFFF);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_OverShoot_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC70  +  u8Index * sizeof(HI_U8)), data & 0x7f);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_OverShoot_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC70  +  u8Index * sizeof(HI_U8)))) & 0x7f);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_UnderShoot_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC90  +  u8Index * sizeof(HI_U8)), data & 0x7f);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_UnderShoot_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xC90  +  u8Index * sizeof(HI_U8)))) & 0x7f);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_shootSupStr_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xCB0  +  u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_shootSupStr_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xCB0  +  u8Index * sizeof(HI_U8)))));
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_detailctrl_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD00  +  u8Index * sizeof(HI_U8)), data);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_detailctrl_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD00  +  u8Index * sizeof(HI_U8)))));
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_RGain_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD20  +  u8Index * sizeof(HI_U8)), data & HI_ISP_SHARPEN_RGAIN_BIT);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_RGain_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD20  +  u8Index * sizeof(HI_U8))))&HI_ISP_SHARPEN_RGAIN_BIT);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_BGain_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD40  +  u8Index * sizeof(HI_U8)), data & HI_ISP_SHARPEN_BGAIN_BIT);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_BGain_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD40  +  u8Index * sizeof(HI_U8))))&HI_ISP_SHARPEN_BGAIN_BIT);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_SkinGain_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD60  +  u8Index * sizeof(HI_U8)), data & 0x1f);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_SkinGain_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD60  +  u8Index * sizeof(HI_U8)))) & 0x1f);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_EdgeFiltStr_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD80  +  u8Index * sizeof(HI_U8)), data & 0x3f);
}
static __inline HI_U8 hi_ext_system_Isp_sharpen_EdgeFiltStr_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0xD80  +  u8Index * sizeof(HI_U8)))) & 0x3f);
}


//******************************auoto 32 x 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_Isp_sharpen_LumaWgt_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0x1000  +  u16Index * sizeof(HI_U8)), data & 0x7F);
}
static __inline HI_U16 hi_ext_system_Isp_sharpen_LumaWgt_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return ((IORD_8DIRECT((VREG_SHARPEN_BASE(ViPipe)  +  0x1000  +  u16Index * sizeof(HI_U8)))) & 0x7F);
}

//EdgeMark
#define     HI_EXT_SYSTEM_MANUAL_EDGEMARK_EN_DEFAULT        (0)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_isp_edgemark_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1400, data & 0x01);
}
static __inline HI_U8 hi_ext_system_manual_isp_edgemark_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1400) & 0x01);
}

#define     HI_EXT_SYSTEM_MANUAL_EDGEMARK_COLOR_DEFAULT     (0xFF0000)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_isp_edgemark_color_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_32DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1404, data & 0xFFFFFF);
}
static __inline HI_U32 hi_ext_system_manual_isp_edgemark_color_read(VI_PIPE ViPipe)
{
    return (IORD_32DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1404) & 0xFFFFFF);
}

#define     HI_EXT_SYSTEM_MANUAL_EDGEMARK_THD_DEFAULT       (160)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_isp_edgemark_threshold_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x140C, data);
}
static __inline HI_U8 hi_ext_system_manual_isp_edgemark_threshold_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x140C));
}

#define     HI_EXT_SYSTEM_EDGEMARK_MPI_UPDATE_EN_DEFAULT        (0)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_edgemark_mpi_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1410, data & 0x01);
}
static __inline HI_U8 hi_ext_system_edgemark_mpi_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  + 0x1410) & 0x01);
}




//High Light Constraint
#define     HI_EXT_SYSTEM_MANUAL_HLC_EN_DEFAULT     (0)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_isp_hlc_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1500, data & 0x01);
}
static __inline HI_U8 hi_ext_system_manual_isp_hlc_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1500) & 0x01);
}

#define     HI_EXT_SYSTEM_MANUAL_HLC_LUMATHR_DEFAULT        (248)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_isp_hlc_lumathr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1501, data );
}
static __inline HI_U8 hi_ext_system_manual_isp_hlc_lumathr_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1501) );
}

#define     HI_EXT_SYSTEM_MANUAL_HLC_LUMATARGET_DEFAULT     (10)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_manual_isp_hlc_lumatarget_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1502, data);
}
static __inline HI_U8 hi_ext_system_manual_isp_hlc_lumatarget_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1502));
}

#define     HI_EXT_SYSTEM_HLC_MPI_UPDATE_EN_DEFAULT     (0)
//***********************************************************************//
static __inline HI_VOID hi_ext_system_hlc_mpi_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  +  0x1503, data & 0x01);
}
static __inline HI_U8 hi_ext_system_hlc_mpi_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_SHARPEN_BASE(ViPipe)  + 0x1503) & 0x01);
}



//==============================================================//
//CAC: 0x16000~0x160FF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_enable
// ------------------------------------------------------------------------------ //
// 0x16000 ~ 0x16000 localCAC_enable
static __inline HI_VOID hi_ext_system_localCAC_enable_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  , data & 0x1);
}

static __inline HI_U16 hi_ext_system_localCAC_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)) & 0x1);
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_manual_mode_enable
// ------------------------------------------------------------------------------ //
// 0x16001 ~ 0x16001 localCAC_manual_mode_enable

static __inline HI_VOID hi_ext_system_localCAC_manual_mode_enable_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  1 , data & 0x1);
}

static __inline HI_U8 hi_ext_system_localCAC_manual_mode_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  1) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_purple_det_range
// ------------------------------------------------------------------------------ //
// 0x16002 ~ 0x16003 localCAC_purple_det_range
static __inline HI_VOID hi_ext_system_localCAC_purple_det_range_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_LCAC_BASE(ViPipe)  +  2 , data);
}

static __inline HI_U16 hi_ext_system_localCAC_purple_det_range_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_LCAC_BASE(ViPipe)  +  2);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_purple_var_thr
// ------------------------------------------------------------------------------ //
// 0x16004 ~ 0x16005 localCAC_purple_var_thr
static __inline HI_VOID hi_ext_system_localCAC_purple_var_thr_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_LCAC_BASE(ViPipe)  +  4 , data);
}

static __inline HI_U16 hi_ext_system_localCAC_purple_var_thr_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_LCAC_BASE(ViPipe)  +  4);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_manual_cb_str
// ------------------------------------------------------------------------------ //
// 0x16006 ~ 0x16006 localCAC_manual_cb
static __inline HI_VOID hi_ext_system_localCAC_manual_cb_str_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  6 , data);
}

static __inline HI_U8 hi_ext_system_localCAC_manual_cb_str_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  6);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_manual_cr_str
// ------------------------------------------------------------------------------ //
// 0x16007 ~ 0x16007 localCAC_manual_cr
static __inline HI_VOID hi_ext_system_localCAC_manual_cr_str_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  7 , data);
}

static __inline HI_U8 hi_ext_system_localCAC_manual_cr_str_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  7);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_Cb_Str_table
// ------------------------------------------------------------------------------ //
// 0x16008 ~ 0x16017 localCAC_Cb_Str_table
static __inline HI_VOID hi_ext_system_localCAC_auto_cb_str_table_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  8  + (u8Index * sizeof(HI_U8)), data);
}

static __inline HI_U8 hi_ext_system_localCAC_auto_cb_str_table_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  8  +  (u8Index * sizeof(HI_U8)));
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_Cr_Str_table
// ------------------------------------------------------------------------------ //
// 0x16018 ~ 0x16027 localCAC_Cr_Str_table
static __inline HI_VOID hi_ext_system_localCAC_auto_cr_str_table_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x18  + (u8Index * sizeof(HI_U8)), data);
}

static __inline HI_U8 hi_ext_system_localCAC_auto_cr_str_table_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x18  +  (u8Index * sizeof(HI_U8)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_LocalCAC_coef_update_en
// ------------------------------------------------------------------------------ //
// 0x16031 ~ 0x16031 LocalCAC_coef_update_en
static __inline HI_VOID hi_ext_system_LocalCAC_coef_update_en_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x28 , data & 0x1);
}

static __inline HI_U8 hi_ext_system_LocalCAC_coef_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x28) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_luma_high_cnt_thr
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_luma_high_cnt_thr_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x29 , data);
}

static __inline HI_U8 hi_ext_system_localCAC_luma_high_cnt_thr_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x29);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_cb_cnt_high_thr
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_cb_cnt_high_thr_write(VI_PIPE ViPipe,    HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x2a , data);
}

static __inline HI_U8 hi_ext_system_localCAC_cb_cnt_high_thr_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x2a);
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_cb_cnt_low_thr
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_cb_cnt_low_thr_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x2b , data);
}

static __inline HI_U8 hi_ext_system_localCAC_cb_cnt_low_thr_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x2b);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_luma_thr
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_luma_thr_write(VI_PIPE ViPipe,   HI_U16 data)
{
    IOWR_16DIRECT(VREG_LCAC_BASE(ViPipe)  + 0x2c , data);
}

static __inline HI_U16 hi_ext_system_localCAC_luma_thr_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_LCAC_BASE(ViPipe) +  0x2c);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_cb_thr
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_cb_thr_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LCAC_BASE(ViPipe)  + 0x2e , data);
}

static __inline HI_U16 hi_ext_system_localCAC_cb_thr_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_LCAC_BASE(ViPipe) +  0x2e);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_bld_avg_cur
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_bld_avg_cur_write(VI_PIPE ViPipe,    HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x30 , data);
}

static __inline HI_U8 hi_ext_system_localCAC_bld_avg_cur_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x30);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_defcolor_cr
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_defcolor_cr_write(VI_PIPE ViPipe,    HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x31 , data);
}

static __inline HI_U8 hi_ext_system_localCAC_defcolor_cr_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x31);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_localCAC_defcolor_cb
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_localCAC_defcolor_cb_write(VI_PIPE ViPipe,    HI_U8 data)
{
    IOWR_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x32 , data);
}

static __inline HI_U8 hi_ext_system_localCAC_defcolor_cb_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_LCAC_BASE(ViPipe)  +  0x32);
}



// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_enable
// ------------------------------------------------------------------------------ //
// 0x16030 ~ 0x16030 GlobalCAC_enable
static __inline HI_VOID hi_ext_system_GlobalCAC_enable_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GCAC_BASE(ViPipe) , data & 0x1);
}

static __inline HI_U8 hi_ext_system_GlobalCAC_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GCAC_BASE(ViPipe)) & 0x1);
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_coef_update_en
// ------------------------------------------------------------------------------ //
// 0x16031 ~ 0x16031 GlobalCAC_coef_update_en
static __inline HI_VOID hi_ext_system_GlobalCAC_coef_update_en_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  1 , data & 0x1);
}

static __inline HI_U8 hi_ext_system_GlobalCAC_coef_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  1) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_coor_center_ver
// ------------------------------------------------------------------------------ //
// 0x16032 ~ 0x16033 GlobalCAC_coor_center_ver
static __inline HI_VOID hi_ext_system_GlobalCAC_coor_center_ver_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  2 , data);
}

static __inline HI_U16 hi_ext_system_GlobalCAC_coor_center_ver_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  2);
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_coor_center_hor
// ------------------------------------------------------------------------------ //
// 0x16034 ~ 0x16035 GlobalCAC_coor_center_hor
static __inline HI_VOID hi_ext_system_GlobalCAC_coor_center_hor_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  4, data);
}

static __inline HI_U16 hi_ext_system_GlobalCAC_coor_center_hor_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  4);
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_param_red_A
// ------------------------------------------------------------------------------ //
// 0x16036 ~ 0x16037 GlobalCAC_param_red_A
static __inline HI_VOID hi_ext_system_GlobalCAC_param_red_A_write(VI_PIPE ViPipe,  HI_S16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  6, data);
}

static __inline HI_S16 hi_ext_system_GlobalCAC_param_red_A_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  6);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_param_red_B
// ------------------------------------------------------------------------------ //
// 0x16038 ~ 0x16039 GlobalCAC_param_red_B
static __inline HI_VOID hi_ext_system_GlobalCAC_param_red_B_write(VI_PIPE ViPipe,  HI_S16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  8 , data);
}

static __inline HI_S16 hi_ext_system_GlobalCAC_param_red_B_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  8);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_param_red_C
// ------------------------------------------------------------------------------ //
// 0x1603a ~ 0x1603b GlobalCAC_param_red_C
static __inline HI_VOID hi_ext_system_GlobalCAC_param_red_C_write(VI_PIPE ViPipe,  HI_S16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0xa, data);
}

static __inline HI_S16 hi_ext_system_GlobalCAC_param_red_C_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0xa);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_param_blue_A
// ------------------------------------------------------------------------------ //
// 0x1603c ~ 0x1603d GlobalCAC_param_blue_A
static __inline HI_VOID hi_ext_system_GlobalCAC_param_blue_A_write(VI_PIPE ViPipe,  HI_S16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0xc , data);
}

static __inline HI_S16 hi_ext_system_GlobalCAC_param_blue_A_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0xc);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_param_blue_B
// ------------------------------------------------------------------------------ //
// 0x1603e ~ 0x1603f GlobalCAC_param_blue_B
static __inline HI_VOID hi_ext_system_GlobalCAC_param_blue_B_write(VI_PIPE ViPipe,  HI_S16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0xe , data);
}

static __inline HI_S16 hi_ext_system_GlobalCAC_param_blue_B_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0xe);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_param_blue_C
// ------------------------------------------------------------------------------ //
// 0x16040 ~ 0x16041 GlobalCAC_param_blue_C
static __inline HI_VOID hi_ext_system_GlobalCAC_param_blue_C_write(VI_PIPE ViPipe,  HI_S16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x10, data);
}

static __inline HI_S16 hi_ext_system_GlobalCAC_param_blue_C_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x10);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_y_ns_norm
// ------------------------------------------------------------------------------ //
// 0x16042 ~ 0x16042 GlobalCAC_y_ns_norm

static __inline HI_VOID hi_ext_system_GlobalCAC_y_ns_norm_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x12 , data);
}

static __inline HI_U8 hi_ext_system_GlobalCAC_y_ns_norm_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x12));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_y_nf_norm
// ------------------------------------------------------------------------------ //
// 0x16043 ~ 0x16043 GlobalCAC_y_nf_norm

static __inline HI_VOID hi_ext_system_GlobalCAC_y_nf_norm_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x13 , data);
}

static __inline HI_U8 hi_ext_system_GlobalCAC_y_nf_norm_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x13));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_x_ns_norm
// ------------------------------------------------------------------------------ //
// 0x16044 ~ 0x16044 GlobalCAC_x_ns_norm

static __inline HI_VOID hi_ext_system_GlobalCAC_x_ns_norm_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x14 , data);
}

static __inline HI_U8 hi_ext_system_GlobalCAC_x_ns_norm_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x14));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_x_nf_norm
// ------------------------------------------------------------------------------ //
// 0x16045 ~ 0x16045 GlobalCAC_x_nf_norm

static __inline HI_VOID hi_ext_system_GlobalCAC_x_nf_norm_write(VI_PIPE ViPipe,  HI_U8 data)
{
    IOWR_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x15 , data);
}

static __inline HI_U8 hi_ext_system_GlobalCAC_x_nf_norm_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x15));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_GlobalCAC_cor_thr
// ------------------------------------------------------------------------------ //
// 0x16046 ~ 0x16047 GlobalCAC_cor_thr
static __inline HI_VOID hi_ext_system_GlobalCAC_cor_thr_write(VI_PIPE ViPipe,  HI_U16 data)
{
    IOWR_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x16 , data);
}

static __inline HI_U16 hi_ext_system_GlobalCAC_cor_thr_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_GCAC_BASE(ViPipe)  +  0x16);
}


//==============================================================//
//CA: 0x16100~0x162FF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ca_y_ratio_lut_write
// ------------------------------------------------------------------------------ //
// LEN =256 DATASIZE HI_U32
//16100 ~ 0x164FF
static __inline HI_VOID hi_ext_system_ca_y_ratio_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CA_BASE(ViPipe)  + (u8Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_ca_y_ratio_lut_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_32DIRECT(VREG_CA_BASE(ViPipe)  +  (u8Index * sizeof(HI_U32)));
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ca_y_ratio_lut_write
// ------------------------------------------------------------------------------ //
// LEN =16 DATASIZE HI_U16  16*8*2
//0x16500 ~ 0x1653F
static __inline HI_VOID hi_ext_system_ca_iso_ratio_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CA_BASE(ViPipe)  +  0x400  + (u8Index * sizeof(HI_U32)), data);
}

static __inline HI_U16 hi_ext_system_ca_iso_ratio_lut_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_32DIRECT(VREG_CA_BASE(ViPipe)  +  0x400  +  (u8Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ca_saturation_ratio_write
// ------------------------------------------------------------------------------ //
//0x16540 ~ 0x16541
#define HI_ISP_EXT_CA_SATURATION_RATIO_DEFAULT (1000)
static __inline HI_VOID hi_ext_system_ca_saturation_ratio_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_CA_BASE(ViPipe)  +  0x440, data);
}

static __inline HI_U16 hi_ext_system_ca_saturation_ratio_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_CA_BASE(ViPipe)  +  0x440);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ca_saturation_ratio_write
// ------------------------------------------------------------------------------ //
//0x16542 ~ 0x16543
#define HI_ISP_EXT_CA_LUMA_THD_HIGH_DEFAULT (400)
static __inline HI_VOID hi_ext_system_ca_luma_thd_high_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_CA_BASE(ViPipe)  +  0x442, data);
}

static __inline HI_U16 hi_ext_system_ca_luma_thd_high_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_CA_BASE(ViPipe)  +  0x442);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ca_en_write
// ------------------------------------------------------------------------------ //
//0x16544 ~ 0x16544
static __inline HI_VOID hi_ext_system_ca_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_CA_BASE(ViPipe)  +  0x444, data & 0x1);
}

static __inline HI_U8 hi_ext_system_ca_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CA_BASE(ViPipe)  +  0x444) & 0x1);
}
// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ca_cp_en_write
// ------------------------------------------------------------------------------ //
//0x16545 ~ 0x16545
static __inline HI_VOID hi_ext_system_ca_cp_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_CA_BASE(ViPipe)  +  0x445, data & 0x1);
}

static __inline HI_U8 hi_ext_system_ca_cp_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CA_BASE(ViPipe)  +  0x445) & 0x1);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_ca_cp_en_write
// ------------------------------------------------------------------------------ //
//0x16546 ~ 0x16546
static __inline HI_VOID hi_ext_system_ca_coef_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_CA_BASE(ViPipe)  +  0x446, data & 0x1);
}

static __inline HI_U8 hi_ext_system_ca_coef_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CA_BASE(ViPipe)  +  0x446) & 0x1);
}

static __inline HI_VOID hi_ext_system_ca_cp_lut_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U32 data)
{
    IOWR_32DIRECT((VREG_CA_BASE(ViPipe) + 0x450) + (u8Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_ca_cp_lut_read(VI_PIPE ViPipe, HI_U8 u8Index)
{
    return IORD_32DIRECT((VREG_CA_BASE(ViPipe) + 0x450) + (u8Index * sizeof(HI_U32)));
}

/***********************************************************************************/
// Module: Csc(Original CSC)
/***********************************************************************************/

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_coef len = 9
// ------------------------------------------------------------------------------ //
// 0x19100 ~ 0x19120
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_csc_coef_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_CSC_BASE(ViPipe) + 0x0) + u8Index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_csc_coef_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT((VREG_CSC_BASE(ViPipe) + 0x0)  +  u8Index * sizeof(HI_U16));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_dcin len = 3
// ------------------------------------------------------------------------------ //
// 0x19120 ~ 0x19130
// args: data (10-bit)
static __inline HI_VOID hi_ext_system_csc_dcin_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_CSC_BASE(ViPipe) + 0x20) + u8Index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_csc_dcin_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT((VREG_CSC_BASE(ViPipe) + 0x20)  +  u8Index * sizeof(HI_U16));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_dcout len = 3
// ------------------------------------------------------------------------------ //
// 0x19130 ~ 0x19140
// args: data (10-bit)
static __inline HI_VOID hi_ext_system_csc_dcout_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_CSC_BASE(ViPipe) + 0x30) + u8Index * sizeof(HI_U16), data);
}

static __inline HI_U16 hi_ext_system_csc_dcout_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return IORD_16DIRECT((VREG_CSC_BASE(ViPipe) + 0x30)  +  u8Index * sizeof(HI_U16));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_dcout len = 3
// ------------------------------------------------------------------------------ //
// 0x19130 ~ 0x19140
// args: data (10-bit)
static __inline HI_VOID hi_ext_system_csc_gamuttype_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x40, data);
}

static __inline HI_U8 hi_ext_system_csc_gamuttype_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x40);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (1-bit)
static __inline HI_VOID hi_ext_system_csc_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x50), (data & 0x1));
}

static __inline HI_U8 hi_ext_system_csc_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x50) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_csc_contrast_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x51), data);
}

static __inline HI_U8 hi_ext_system_csc_contrast_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x51));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_csc_hue_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x52), data);
}

static __inline HI_U8 hi_ext_system_csc_hue_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x52));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_csc_sat_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x53), data);
}

static __inline HI_U8 hi_ext_system_csc_sat_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x53));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_csc_luma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x54), data);
}

static __inline HI_U8 hi_ext_system_csc_luma_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x54));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_csc_limitrange_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x55), data);
}

static __inline HI_U8 hi_ext_system_csc_limitrange_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x55));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_csc_ext_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x56), data);
}

static __inline HI_U8 hi_ext_system_csc_ext_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x56));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_csc_enable
// ------------------------------------------------------------------------------ //
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_csc_ctmode_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_CSC_BASE(ViPipe) + 0x57), data);
}

static __inline HI_U8 hi_ext_system_csc_ctmode_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CSC_BASE(ViPipe) + 0x57));
}
//==============================================================//
//LDCI: 0x2E00~0x3FFF
//==============================================================//

/***********************************************************************************/
/***********************************************************************************/
/*************************ldci---U8--EXT_REGISTER************************************/
/***********************************************************************************/
/***********************************************************************************/

#define HI_EXT_SYSTEM_LDCI_MANU_MODE_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_mode_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe), data & 0x1);
}
static __inline HI_U8 hi_ext_system_ldci_manu_mode_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe))) & 0x1);
}

#define HI_EXT_SYSTEM_LDCI_MANU_STATWNDX_DEFAULT (32)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_statWndX_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1, data & 0x3f);
}
static __inline HI_U8 hi_ext_system_ldci_manu_statWndX_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1)) & 0x3f);
}

#define HI_EXT_SYSTEM_LDCI_MANU_STATWNDY_DEFAULT (32)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_statWndY_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x2, data & 0x3f);
}
static __inline HI_U8 hi_ext_system_ldci_manu_statWndY_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x2)) & 0x3f);
}

#define HI_EXT_SYSTEM_LDCI_MANU_BENDYNRNGCMP_DEFAULT (1)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_bEnDynRngcmp_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x3, data & 0x1);
}
static __inline HI_U8 hi_ext_system_ldci_manu_bEnDynRngcmp_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x3)) & 0x1);
}

#define HI_EXT_SYSTEM_LDCI_MANU_DYNRNGCMPCOEF_DEFAULT (64)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_dynRngCmpCoef_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x4, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_dynRngCmpCoef_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x4)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_HEPOSWGT_DEFAULT (64)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_hePosWgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x5, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_hePosWgt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x5)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_HEPOSSIGMA_DEFAULT (80)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_hePosSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x6, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_hePosSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x6)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_HEPOSMEAN_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_hePosMean_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x7, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_hePosMean_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x7)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_HENEGWGT_DEFAULT (50)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_heNegWgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x8, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_heNegWgt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x8)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_HENEGSIGMA_DEFAULT (80)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_heNegSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x9, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_heNegSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x9)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_HENEGMEAN_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_heNegMean_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xa, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_heNegMean_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xa)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_USMPOSWGT_DEFAULT (32)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_usmPosWgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xb, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_usmPosWgt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xb)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_USMPOSSIGMA_DEFAULT (16)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_usmPosSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xc, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_usmPosSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xc)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_USMPOSMEAN_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_usmPosMean_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xd, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_usmPosMean_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xd)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_USMNEGWGT_DEFAULT (32)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_usmNegWgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xe, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_usmNegWgt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xe)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_USMNEGSIGMA_DEFAULT (16)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_usmNegSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xf, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_usmNegSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0xf)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_USMNEGMEAN_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_usmNegMean_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x10, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_usmNegMean_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x10)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_BENPURPLEFRGLMT_DEFAULT (1)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_bEnPurpleFrgLmt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x11, data & 0x1);
}
static __inline HI_U8 hi_ext_system_ldci_manu_bEnPurpleFrgLmt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x11)) & 0x1);
}

#define HI_EXT_SYSTEM_LDCI_MANU_COLORGAINCOEFU_DEFAULT (128)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_colorGainCoefU_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x12, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_colorGainCoefU_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x12)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_COLORGAINCOEFV_DEFAULT (128)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_colorGainCoefV_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x13, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_colorGainCoefV_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x13)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_LPFSFT_DEFAULT (8)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_lpfSft_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x14, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_lpfSft_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x14)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_DEWGT_DEFAULT (32)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_deWgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x15, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_deWgt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x15)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_DESIGMA_DEFAULT (16)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_deSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x16, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_deSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x16)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_DEMEAN_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_deMean_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x17, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_deMean_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x17)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_CHRPOSDAMPWGT_DEFAULT (32)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_chrPosDampWgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x18, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_chrPosDampWgt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x18)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_CHRPOSDAMPSIGMA_DEFAULT (16)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_chrPosDampSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x19, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_chrPosDampSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x19)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_CHRPOSDAMPMEAN_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_chrPosDampMean_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1a, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_chrPosDampMean_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1a)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_CHRNEGDAMPWGT_DEFAULT (32)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_chrNegDampWgt_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1b, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_chrNegDampWgt_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1b)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_CHRNEGDAMPSIGMA_DEFAULT (16)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_chrNegDampSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1c, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_chrNegDampSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1c)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_MANU_CHRNEGDAMPMEAN_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_chrNegDampMean_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1d, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_chrNegDampMean_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1d)) & 0xff);
}

#define HI_EXT_SYSTEM_LDCI_ENABLE_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1e, data & 0x1);
}
static __inline HI_U8 hi_ext_system_ldci_enable_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1e)) & 0x1);
}

#define HI_EXT_SYSTEM_LDCI_GAUSSLPFSIGMA_DEFAULT (36)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_gaussLPFSigma_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1f, data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_gaussLPFSigma_read(VI_PIPE ViPipe)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x1f)) & 0xff);
}

/***********************************************************************************/
/***********************************************************************************/
/*************************ldci---U16--EXT_REGISTER***********************************/
/***********************************************************************************/
/***********************************************************************************/
#define HI_EXT_SYSTEM_LDCI_MANU_BLCCTRL_DEFAULT (5)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_blcCtrl_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LDCI_BASE(ViPipe) + 0x30, data & 0x1ff);
}
static __inline HI_U16 hi_ext_system_ldci_manu_blcCtrl_read(VI_PIPE ViPipe)
{
    return ((IORD_16DIRECT(VREG_LDCI_BASE(ViPipe) + 0x30)) & 0x1ff);
}


/***********************************************************************************/
/***********************************************************************************/
/*************************ldci---ARRAY--EXT_REGISTER*********************************/
/***********************************************************************************/
/***********************************************************************************/
//******************************2 multi addrs*********************************//
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_pfOri_write(VI_PIPE ViPipe, HI_U8 index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x5c  +  (index * sizeof(HI_U8)), data & 0Xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_pfOri_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x5c  +  (index * sizeof(HI_U8)))) & 0xff);
}

//******************************2 multi addrs*********************************//
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_pfThd_write(VI_PIPE ViPipe, HI_U8 index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x60  +  (index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_manu_pfThd_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x60  +  (index * sizeof(HI_U8)))) & 0xff);
}

//******************************2 multi addrs*********************************//
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_pfRly_write(VI_PIPE ViPipe, HI_U8 index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x64  +  (index * sizeof(HI_U8)), data & 0X1f);
}
static __inline HI_U8 hi_ext_system_ldci_manu_pfRly_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x64  +  (index * sizeof(HI_U8)))) & 0x1f);
}

//******************************4 multi addrs*********************************//
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_ldci_manu_pfSft_write(VI_PIPE ViPipe, HI_U8 index, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x68  +  (index * sizeof(HI_U8)), data & 0x7);
}
static __inline HI_U8 hi_ext_system_ldci_manu_pfSft_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return ((IORD_8DIRECT(VREG_LDCI_BASE(ViPipe) + 0x68  +  (index * sizeof(HI_U8)))) & 0x7);
}

//******************************9 multi addrs*********************************//
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_ldci_lpfCoef_write(VI_PIPE ViPipe, HI_U8 index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_LDCI_BASE(ViPipe) + 0x6c  +  (index * sizeof(HI_U16)), data & 0x1ff);
}
static __inline HI_U16 hi_ext_system_ldci_lpfCoef_read(VI_PIPE ViPipe,  HI_U8 index)
{
    return ((IORD_16DIRECT(VREG_LDCI_BASE(ViPipe) + 0x6c  +  (index * sizeof(HI_U16)))) & 0x1ff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_statWndX_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x80 + u8Index * sizeof(HI_U8)), data & 0x3f);
}
static __inline HI_U8 hi_ext_system_ldci_statWndX_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x80 + u8Index * sizeof(HI_U8)))) & 0x3f);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_statWndY_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x90 + u8Index * sizeof(HI_U8)), data & 0x3f);
}
static __inline HI_U8 hi_ext_system_ldci_statWndY_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x90 + u8Index * sizeof(HI_U8)))) & 0x3f);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_bEnDynRngcmp_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xa0 + u8Index * sizeof(HI_U8)), data & 0x01);
}
static __inline HI_U8 hi_ext_system_ldci_bEnDynRngcmp_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xa0 + u8Index * sizeof(HI_U8)))) & 0x01);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_dynRngCmpCoef_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xb0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_dynRngCmpCoef_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xb0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_hePosWgt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xc0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_hePosWgt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xc0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_hePosSigma_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xd0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_hePosSigma_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xd0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_hePosMean_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xe0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_hePosMean_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xe0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_heNegWgt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xf0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_heNegWgt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0xf0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_heNegSigma_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x100 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_heNegSigma_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x100 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_heNegMean_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x110 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_heNegMean_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x110 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_usmPosWgt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x120 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_usmPosWgt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x120 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_usmPosSigma_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x130 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_usmPosSigma_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x130 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_usmPosMean_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x140 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_usmPosMean_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x140 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_usmNegWgt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x150 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_usmNegWgt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x150 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_usmNegSigma_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x160 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_usmNegSigma_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x160 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_usmNegMean_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x170 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_usmNegMean_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x170 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_blcCtrl_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U16 data)
{
    IOWR_16DIRECT((VREG_LDCI_BASE(ViPipe) + 0x180 + u8Index * sizeof(HI_U16)), data & 0x1ff);
}
static __inline HI_U16 hi_ext_system_ldci_blcCtrl_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_16DIRECT((VREG_LDCI_BASE(ViPipe) + 0x180 + u8Index * sizeof(HI_U16)))) & 0x1ff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_bEnPurpleFrgLmt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1a0 + u8Index * sizeof(HI_U8)), data & 0x01);
}
static __inline HI_U8 hi_ext_system_ldci_bEnPurpleFrgLmt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1a0 + u8Index * sizeof(HI_U8)))) & 0x01);
}

//******************************auoto 2 x 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_pfOri_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1b0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_pfOri_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1b0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 2 x 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_pfThd_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1d0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_pfThd_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1d0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 2 x 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_pfRly_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1f0 + u8Index * sizeof(HI_U8)), data & 0x1f);
}
static __inline HI_U8 hi_ext_system_ldci_pfRly_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x1f0 + u8Index * sizeof(HI_U8)))) & 0x1f);
}

//******************************auoto 4 x 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_pfSft_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x210 + u8Index * sizeof(HI_U8)), data & 0x7);
}
static __inline HI_U8 hi_ext_system_ldci_pfSft_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x210 + u8Index * sizeof(HI_U8)))) & 0x7);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_colorGainCoefU_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x250 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_colorGainCoefU_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x250 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_colorGainCoefV_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x260 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_colorGainCoefV_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x260 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_deWgt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x270 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_deWgt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x270 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_deSigma_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x280 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_deSigma_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x280 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_deMean_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x290 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_deMean_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x290 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_chrPosDampWgt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2a0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_chrPosDampWgt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2a0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_chrPosDampSigma_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2b0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_chrPosDampSigma_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2b0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_chrPosDampMean_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2c0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_chrPosDampMean_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2c0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_chrNegDampWgt_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2d0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_chrNegDampWgt_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2d0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_chrNegDampSigma_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2e0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_chrNegDampSigma_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2e0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//******************************auoto 16 multi addrs*********************************//
static __inline HI_VOID hi_ext_system_ldci_chrNegDampMean_write(VI_PIPE ViPipe, HI_U8 u8Index, HI_U8 data)
{
    IOWR_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2f0 + u8Index * sizeof(HI_U8)), data & 0xff);
}
static __inline HI_U8 hi_ext_system_ldci_chrNegDampMean_read(VI_PIPE ViPipe,  HI_U8 u8Index)
{
    return ((IORD_8DIRECT((VREG_LDCI_BASE(ViPipe) + 0x2f0 + u8Index * sizeof(HI_U8)))) & 0xff);
}

//==============================================================//
//FeLogLUT
//==============================================================//

#define HI_EXT_SYSTEM_FELOGLUT_ENABLE_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_feloglut_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_FELOGLUT_BASE(ViPipe), data & 0x1);
}
static __inline HI_U8 hi_ext_system_feloglut_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_FELOGLUT_BASE(ViPipe)) & 0x1);
}

//==============================================================//
//LogLUT
//==============================================================//

#define HI_EXT_SYSTEM_LOGLUT_ENABLE_DEFAULT (0)
// args: data (8-bit)
static __inline HI_VOID hi_ext_system_loglut_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_LOGLUT_BASE(ViPipe), data & 0x1);
}
static __inline HI_U8 hi_ext_system_loglut_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_LOGLUT_BASE(ViPipe)) & 0x1);
}


// ------------------------------------------------------------------------------ //
// Register: DNG info
// ------------------------------------------------------------------------------ //
//0x2a10 ~ 0x2a1c
// args: data (32-bit)

#define HI_EXT_SYSTEM_DNG_STATIC_INFO_VALID_DEFAULT (0x0)
#define HI_EXT_SYSTEM_DNG_STATIC_INFO_VALID_DATASIZE (8)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_dng_static_info_valid_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DNGINFO_BASE(ViPipe), data);
}

static __inline HI_U8 hi_ext_system_dng_static_info_valid_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DNGINFO_BASE(ViPipe));
}


#define HI_EXT_SYSTEM_DNG_HIGH_WB_GAIN_R_DEFAULT (0x400)
#define HI_EXT_SYSTEM_DNG_HIGH_WB_GAIN_R_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_dng_high_wb_gain_r_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x4, data);
}

static __inline HI_U16 hi_ext_system_dng_high_wb_gain_r_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x4);
}


#define HI_EXT_SYSTEM_DNG_HIGH_WB_GAIN_G_DEFAULT (0x400)
#define HI_EXT_SYSTEM_DNG_HIGH_WB_GAIN_G_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_dng_high_wb_gain_g_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x8, data);
}

static __inline HI_U16 hi_ext_system_dng_high_wb_gain_g_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x8);
}


#define HI_EXT_SYSTEM_DNG_HIGH_WB_GAIN_B_DEFAULT (0x400)
#define HI_EXT_SYSTEM_DNG_HIGH_WB_GAIN_B_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_dng_high_wb_gain_b_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0xc, data);
}

static __inline HI_U16 hi_ext_system_dng_high_wb_gain_b_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0xc);
}

#define HI_EXT_SYSTEM_DNG_LOW_WB_GAIN_R_DEFAULT (0x400)
#define HI_EXT_SYSTEM_DNG_LOW_WB_GAIN_R_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_dng_low_wb_gain_r_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x10, data);
}

static __inline HI_U16 hi_ext_system_dng_low_wb_gain_r_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x10);
}

#define HI_EXT_SYSTEM_DNG_LOW_WB_GAIN_G_DEFAULT (0x400)
#define HI_EXT_SYSTEM_DNG_LOW_WB_GAIN_G_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_dng_low_wb_gain_g_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x14, data);
}

static __inline HI_U16 hi_ext_system_dng_low_wb_gain_g_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x14);
}

#define HI_EXT_SYSTEM_DNG_LOW_WB_GAIN_B_DEFAULT (0x400)
#define HI_EXT_SYSTEM_DNG_LOW_WB_GAIN_B_DATASIZE (16)
// args: data (16-bit)
static __inline HI_VOID hi_ext_system_dng_low_wb_gain_b_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x18, data);
}

static __inline HI_U16 hi_ext_system_dng_low_wb_gain_b_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_DNGINFO_BASE(ViPipe) + 0x18);
}


//==============================================================//
//Radial Crop: 0x1060 ~ 0x106F
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_rc_en_write
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_rc_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_RC_BASE(ViPipe)  +  0x0, data & 0x1);
}

static __inline HI_U8 hi_ext_system_rc_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_RC_BASE(ViPipe)  +  0x0) & 0x1);
}

static __inline HI_VOID hi_ext_system_rc_coef_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_RC_BASE(ViPipe)  +  0x1, data & 0x1);
}

static __inline HI_U8 hi_ext_system_rc_coef_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_RC_BASE(ViPipe)  +  0x1) & 0x1);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_rc_center_hor_coor_write
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_rc_center_hor_coor_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RC_BASE(ViPipe)  +  0x2, data);
}

static __inline HI_U16 hi_ext_system_rc_center_hor_coor_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RC_BASE(ViPipe)  +  0x2));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_rc_center_ver_coor_write
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_rc_center_ver_coor_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RC_BASE(ViPipe)  +  0x4, data);
}

static __inline HI_U16 hi_ext_system_rc_center_ver_coor_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RC_BASE(ViPipe)  +  0x4));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_rc_radius_write
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_rc_radius_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT(VREG_RC_BASE(ViPipe)  +  0x6, data);
}

static __inline HI_U16 hi_ext_system_rc_radius_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_RC_BASE(ViPipe)  +  0x6));
}

//==============================================================//
//Radial Crop: 0x10000 ~ 0x1FFFF
//==============================================================//

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_gamma_lut_write
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_gamma_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_GAMMA_BASE(ViPipe), data);
}

static __inline HI_U8 hi_ext_system_gamma_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_GAMMA_BASE(ViPipe));
}

static __inline HI_VOID hi_ext_system_gamma_lut_update_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_GAMMA_BASE(ViPipe) + 0x1, data);
}

static __inline HI_U8 hi_ext_system_gamma_lut_update_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_GAMMA_BASE(ViPipe) + 0x1);
}


static __inline HI_VOID hi_ext_system_gamma_lut_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_GAMMA_BASE(ViPipe) + 0x4 + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_gamma_lut_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return (IORD_16DIRECT(VREG_GAMMA_BASE(ViPipe) + 0x4 + (u16Index * sizeof(HI_U16))));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_degamma_lut_write
// ------------------------------------------------------------------------------ //

static __inline HI_VOID hi_ext_system_degamma_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEGAMMA_BASE(ViPipe), data);
}

static __inline HI_U8 hi_ext_system_degamma_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEGAMMA_BASE(ViPipe));
}

static __inline HI_VOID hi_ext_system_degamma_coef_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_DEGAMMA_BASE(ViPipe)  +  0x1, data);
}

static __inline HI_U8 hi_ext_system_degamma_coef_update_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_DEGAMMA_BASE(ViPipe)  +  0x1);
}


static __inline HI_VOID hi_ext_system_degamma_lut_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U16 data)
{
    IOWR_16DIRECT(VREG_DEGAMMA_BASE(ViPipe) + 0x4 + (u16Index * sizeof(HI_U16)), data);
}

static __inline HI_U16 hi_ext_system_degamma_lut_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return (IORD_16DIRECT(VREG_DEGAMMA_BASE(ViPipe) + 0x4 + (u16Index * sizeof(HI_U16))));
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_pregamma_lut_write
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_pregamma_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_PREGAMMA_BASE(ViPipe), data);
}

static __inline HI_U8 hi_ext_system_pregamma_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_PREGAMMA_BASE(ViPipe));
}

static __inline HI_VOID hi_ext_system_pregamma_lut_update_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_PREGAMMA_BASE(ViPipe) + 0x1, data);
}

static __inline HI_U8 hi_ext_system_pregamma_lut_update_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_PREGAMMA_BASE(ViPipe) + 0x1);
}


static __inline HI_VOID hi_ext_system_pregamma_lut_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_PREGAMMA_BASE(ViPipe) + 0x4 + (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_pregamma_lut_read(VI_PIPE ViPipe,  HI_U32 u16Index)
{
    return (IORD_32DIRECT(VREG_PREGAMMA_BASE(ViPipe) + 0x4 + (u16Index * sizeof(HI_U32))));
}

/*********************************************************************************/
/*********************************************************************************/
/**********************************CLUT*******************************************/
/*********************************************************************************/
/*********************************************************************************/

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_en_write
// ------------------------------------------------------------------------------ //
//0x25500 ~
static __inline HI_VOID hi_ext_system_clut_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x0, data & 0x1);
}

static __inline HI_U8 hi_ext_system_clut_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x0) & 0x1);
}

static __inline HI_VOID hi_ext_system_clut_lut_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x1, data & 0x1);
}
static __inline HI_U8 hi_ext_system_clut_lut_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x1) & 0x1);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_gainR_write
// ------------------------------------------------------------------------------ //
//0x
static __inline HI_VOID hi_ext_system_clut_gainR_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_CLUT_BASE(ViPipe) + 0x2), data);
}

static __inline HI_U16 hi_ext_system_clut_gainR_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_CLUT_BASE(ViPipe) + 0x2));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_gainG_write
// ------------------------------------------------------------------------------ //
//0x
static __inline HI_VOID hi_ext_system_clut_gainG_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_CLUT_BASE(ViPipe) + 0x4), data);
}

static __inline HI_U16 hi_ext_system_clut_gainG_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_CLUT_BASE(ViPipe) + 0x4));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_gainB_write
// ------------------------------------------------------------------------------ //
//0x
static __inline HI_VOID hi_ext_system_clut_gainB_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_CLUT_BASE(ViPipe) + 0x6), data);
}

static __inline HI_U16 hi_ext_system_clut_gainB_read(VI_PIPE ViPipe)
{
    return (IORD_16DIRECT(VREG_CLUT_BASE(ViPipe) + 0x6));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut0_write
// ------------------------------------------------------------------------------ //
// LEN = 3088 DATASIZE HI_U32
//0x25508 ~ 0x28548
static __inline HI_VOID hi_ext_system_clut_lut0_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x8  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut0_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x8  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut1_write
// ------------------------------------------------------------------------------ //
// LEN = 2872 DATASIZE HI_U32
//0x28548 ~
static __inline HI_VOID hi_ext_system_clut_lut1_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x3048  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut1_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x3048  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut2_write
// ------------------------------------------------------------------------------ //
// LEN = 2872 DATASIZE HI_U32
//0x
static __inline HI_VOID hi_ext_system_clut_lut2_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x5D28  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut2_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x5D28  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut3_write
// ------------------------------------------------------------------------------ //
// LEN = 2664 DATASIZE HI_U32
//0x
static __inline HI_VOID hi_ext_system_clut_lut3_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x86C8  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut3_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x86C8  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut4_write
// ------------------------------------------------------------------------------ //
// LEN = 2872 DATASIZE HI_U32
//0x
static __inline HI_VOID hi_ext_system_clut_lut4_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0xB3A8  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut4_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0xB3A8  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut5_write
// ------------------------------------------------------------------------------ //
// LEN = 2664 DATASIZE HI_U32
//0x
static __inline HI_VOID hi_ext_system_clut_lut5_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0xDD48  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut5_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0xDD48  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut6_write
// ------------------------------------------------------------------------------ //
// LEN = 2664 DATASIZE HI_U32
//0x
static __inline HI_VOID hi_ext_system_clut_lut6_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x106E8  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut6_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x106E8  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_lut7_write
// ------------------------------------------------------------------------------ //
// LEN = 2476 DATASIZE HI_U32
//0x
static __inline HI_VOID hi_ext_system_clut_lut7_write(VI_PIPE ViPipe, HI_U16 u16Index, HI_U32 data)
{
    IOWR_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x13088  +  (u16Index * sizeof(HI_U32)), data);
}

static __inline HI_U32 hi_ext_system_clut_lut7_read(VI_PIPE ViPipe,  HI_U16 u16Index)
{
    return IORD_32DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x13088  +  (u16Index * sizeof(HI_U32)));
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_clut_b_lut_write
// ------------------------------------------------------------------------------ //
static __inline HI_VOID hi_ext_system_clut_ctrl_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x15738, data & 0x1);
}
static __inline HI_U8 hi_ext_system_clut_ctrl_update_en_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_CLUT_BASE(ViPipe)  +  0x15738) & 0x1);
}

// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_zone_row_awb
// ------------------------------------------------------------------------------ //
// config information of awb statistics
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_AWB_SWITCH_DEFAULT (0)
#define HI_EXT_SYSTEM_AWB_SWITCH_DATASIZE (8)
#define HI_EXT_SYSTEM_AWB_SWITCH_AFTER_DG (0)
#define HI_EXT_SYSTEM_AWB_SWITCH_AFTER_EXPANDER (1)
#define HI_EXT_SYSTEM_AWB_SWITCH_AFTER_DRC (2)


// args: data (2-bit)
static __inline HI_VOID hi_ext_system_awb_switch_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x2), data);
}
static __inline HI_U8 hi_ext_system_awb_switch_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x2);
}

#define HI_EXT_SYSTEM_AWB_HNUM_DEFAULT (0x20)
#define HI_EXT_SYSTEM_AWB_HNUM_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_hnum_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x4), data);
}

static __inline HI_U16 hi_ext_system_awb_hnum_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x4);
}

#define HI_EXT_SYSTEM_AWB_VNUM_DEFAULT (0x20)
#define HI_EXT_SYSTEM_AWB_VNUM_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_vnum_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x6), data);
}

static __inline HI_U16 hi_ext_system_awb_vnum_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x6);
}

#define HI_EXT_SYSTEM_AWB_ZONE_BIN_DEFAULT (0x1)
#define HI_EXT_SYSTEM_AWB_ZONE_BIN_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_zone_bin_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x8), data);
}

static __inline HI_U16 hi_ext_system_awb_zone_bin_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x8);
}

#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH0_DEFAULT (0x2000)
#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH0_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_hist_bin_thresh0_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0xa), data);
}

static __inline HI_U16 hi_ext_system_awb_hist_bin_thresh0_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0xa);
}

#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH1_DEFAULT (0x4000)
#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH1_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_hist_bin_thresh1_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0xc), data);
}

static __inline HI_U16 hi_ext_system_awb_hist_bin_thresh1_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0xc);
}

#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH2_DEFAULT (0x8000)
#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH2_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_hist_bin_thresh2_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0xe), data);
}

static __inline HI_U16 hi_ext_system_awb_hist_bin_thresh2_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0xe);
}

#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH3_DEFAULT (0xffff)
#define HI_EXT_SYSTEM_AWB_HIST_BIN_THRESH3_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_hist_bin_thresh3_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x10), data);
}

static __inline HI_U16 hi_ext_system_awb_hist_bin_thresh3_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x10);
}

#define HI_EXT_SYSTEM_AWB_WHITE_LEVEL_DEFAULT (0xffff)
#define HI_EXT_SYSTEM_AWB_WHITE_LEVEL_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_white_level_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x12), data);
}

static __inline HI_U16 hi_ext_system_awb_white_level_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x12);
}

#define HI_EXT_SYSTEM_AWB_BLACK_LEVEL_DEFAULT (0x0)
#define HI_EXT_SYSTEM_AWB_BLACK_LEVEL_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_black_level_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x14), data);
}

static __inline HI_U16 hi_ext_system_awb_black_level_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x14);
}

#define HI_EXT_SYSTEM_AWB_CR_REF_MAX_DEFAULT (0x180)
#define HI_EXT_SYSTEM_AWB_CR_REF_MAX_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_cr_ref_max_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x16), data);
}

static __inline HI_U16 hi_ext_system_awb_cr_ref_max_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x16);
}

#define HI_EXT_SYSTEM_AWB_CR_REF_MIN_DEFAULT (0x40)
#define HI_EXT_SYSTEM_AWB_CR_REF_MIN_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_cr_ref_min_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x18), data);
}

static __inline HI_U16 hi_ext_system_awb_cr_ref_min_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x18);
}

#define HI_EXT_SYSTEM_AWB_CB_REF_MAX_DEFAULT (0x180)
#define HI_EXT_SYSTEM_AWB_CB_REF_MAX_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_cb_ref_max_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x1a), data);
}

static __inline HI_U16 hi_ext_system_awb_cb_ref_max_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x1a);
}

#define HI_EXT_SYSTEM_AWB_CB_REF_MIN_DEFAULT (0x40)
#define HI_EXT_SYSTEM_AWB_CB_REF_MIN_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_cb_ref_min_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x1c), data);
}

static __inline HI_U16 hi_ext_system_awb_cb_ref_min_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x1c);
}

#define HI_EXT_SYSTEM_AWB_GAIN_ENABLE_DEFAULT (0x1)
#define HI_EXT_SYSTEM_AWB_GAIN_ENABLE_DATASIZE (16)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_gain_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AWB_BASE(ViPipe) + 0x1e), (data & 0x1));
}

static __inline HI_U8 hi_ext_system_awb_gain_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AWB_BASE(ViPipe) + 0x1e) & 0x1);
}

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_cc_enable_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AWB_BASE(ViPipe) + 0x20), (data & 0x1));
}

static __inline HI_U8 hi_ext_system_cc_enable_read(VI_PIPE ViPipe)
{
    return (IORD_8DIRECT(VREG_AWB_BASE(ViPipe) + 0x20) & 0x1);
}


// ------------------------------------------------------------------------------ //
// Register: hi_ext_system_cc_colortone_rgain
// ------------------------------------------------------------------------------ //
// cc colortone
// ------------------------------------------------------------------------------ //
#define HI_EXT_SYSTEM_CCM_COLORTONE_RGAIN_DATASIZE (16)
#define HI_EXT_SYSTEM_CCM_COLORTONE_RGAIN_DEFAULT (256)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_cc_colortone_rgain_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x22), data);
}

static __inline HI_U16 hi_ext_system_cc_colortone_rgain_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x22);
}

#define HI_EXT_SYSTEM_CCM_COLORTONE_GGAIN_DATASIZE (16)
#define HI_EXT_SYSTEM_CCM_COLORTONE_GGAIN_DEFAULT (256)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_cc_colortone_ggain_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x24), data);
}

static __inline HI_U16 hi_ext_system_cc_colortone_ggain_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x24);
}

#define HI_EXT_SYSTEM_CCM_COLORTONE_BGAIN_DATASIZE (16)
#define HI_EXT_SYSTEM_CCM_COLORTONE_BGAIN_DEFAULT (256)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_cc_colortone_bgain_write(VI_PIPE ViPipe, HI_U16 data)
{
    IOWR_16DIRECT((VREG_AWB_BASE(ViPipe) + 0x26), data);
}

static __inline HI_U16 hi_ext_system_cc_colortone_bgain_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(VREG_AWB_BASE(ViPipe) + 0x26);
}

#define HI_EXT_SYSTEM_WB_STATISTICS_MPI_UPDATE_EN_DATASIZE (8)
#define HI_EXT_SYSTEM_WB_STATISTICS_MPI_UPDATE_EN_DEFAULT (0)

// args: data (8-bit)
static __inline HI_VOID hi_ext_system_wb_statistics_mpi_update_en_write(VI_PIPE ViPipe, HI_U8 data)
{
    IOWR_8DIRECT((VREG_AWB_BASE(ViPipe) + 0x28), data);
}

static __inline HI_U8 hi_ext_system_wb_statistics_mpi_update_en_read(VI_PIPE ViPipe)
{
    return IORD_8DIRECT(VREG_AWB_BASE(ViPipe) + 0x28);
}

#if 0
#define HI_EXT_SYSTEM_AWB_WIDTH_DEFAULT (0x077F)
#define HI_EXT_SYSTEM_AWB_WIDTH_DATASIZE (32)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_width_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_16DIRECT((AWB_LIB_VREG_BASE(ViPipe) + 0x1e), data);
}

static __inline HI_U32 hi_ext_system_awb_width_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(AWB_LIB_VREG_BASE(ViPipe) + 0x1e);
}

#define HI_EXT_SYSTEM_AWB_HEIGHT_DEFAULT (0x0437)
#define HI_EXT_SYSTEM_AWB_HEIGHT_DATASIZE (32)

// args: data (16-bit)
static __inline HI_VOID hi_ext_system_awb_height_write(VI_PIPE ViPipe, HI_U32 data)
{
    IOWR_16DIRECT((AWB_LIB_VREG_BASE(ViPipe) + 0x20), data);
}

static __inline HI_U32 hi_ext_system_awb_height_read(VI_PIPE ViPipe)
{
    return IORD_16DIRECT(AWB_LIB_VREG_BASE(ViPipe) + 0x20);
}
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* End of #ifdef __cplusplus */

#endif /* __ISP_EXT_CONFIG_H__ */

