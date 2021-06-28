/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __KD_SENSORLIST_H__
#define __KD_SENSORLIST_H__

#include "kd_camera_typedef.h"
#include "imgsensor_sensor.h"

struct IMGSENSOR_INIT_FUNC_LIST {
	MUINT32   id;
	MUINT8    name[32];
	MUINT32 (*init)(struct SENSOR_FUNCTION_STRUCT **pfFunc);
};

/*IMX*/
UINT32 IMX519_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX499_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX486_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX398_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX268_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX386_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX386_MIPI_MONO_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX362_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX338_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX318_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX377_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX230_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX220_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX219_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX214_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX214_MIPI_MONO_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX179_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX178_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX132_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX135_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX105_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX073_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX258_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX258_MIPI_MONO_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*OV*/
UINT32 OV16880MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV16825MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV13870_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV13855_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV13850_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV12A10_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MONETD_OV12A10_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV12830_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV9760MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV9740_MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV9726_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV9726MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV8865_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV8858_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV8856_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV8830SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV8825_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV7675_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5693_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5670_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5670_MIPI_RAW_SensorInit_2(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5650SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5650MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5648MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5647MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5647SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5645_MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5642_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5642_MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5642_MIPI_RGB_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5642_MIPI_JPG_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5642_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV5642_YUV_SWI2C_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV4688_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV3640SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV3640_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV2722MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV2680MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV2659_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV2655_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV2650SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV23850_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 OV20880_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
//Yang.Zhang@ODM_WT.CAMERA.Driver.2020/06/15,Add for camera bring up
UINT32 OV12A10_SHENGTAI_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
#ifdef ODM_WT_EDIT
//XingYu.Liu@ODM_WT.CAMERA.Driver.2019/10/9,Add for camera bring up
UINT32 OV02A1B_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
#endif /* ODM_WT_EDIT */
#ifdef ODM_WT_EDIT
//Duilin.Qin@ODM_WT.CAMERA.Driver.2019/11/20,Add for camera bring up
UINT32 OV16A1Q_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5KGM1SP_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC2385_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
#endif /* ODM_WT_EDIT */
/*S5K*/
//Yang.Zhang@ODM_WT.CAMERA.Driver.2020/05/30,Add for camera bring up
UINT32 PASCALA_SHENGTAI_MACRO_OV02B10_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 PASCALA_SHENGTAI_WIDE_OV8856_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 PASCALA_SUNNY_WIDE_OV8856_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5KGM1SP_TRULT_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5KGM1SP_TRULT2_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/* wang.Gao@Cam.Drv, 20200602,sensor porting for pascalA S5K4H7*/
UINT32 PASCALA_HLT_FRONT_S5K4H7_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 PASCALI_HLT_FRONT_S5K4H7_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/* wenhui.chen@Cam.Drv, 20200615,sensor porting for pascalC OV02B1B*/
UINT32 PASCALC_SHENGTAI_MONO_OV02B1B_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);

UINT32 S5K3P8SP_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K2T7SP_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K2L7_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K3L8_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K3M3_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K2P7_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K2P8_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K3P3SX_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K2X8_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K3M2_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K4E6_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K3H2YX_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K3H7Y_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K4H5YC_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K4H5YX_2LANE_MIPI_RAW_SensorInit(
	struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K5E2YA_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K5CAGX_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K4E1GA_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K4ECGX_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K4ECGX_MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K4ECGX_MIPI_JPG_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K8AAYX_MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K8AAYX_PVI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K5E8YX_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 S5K5E8YXREAR2_MIPI_RAW_SensorInit
	(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*HI*/
UINT32 HI841_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI707_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI704_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI556_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI551_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI545_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI544_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI542_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI542_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI253_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI191MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*MT*/
UINT32 MT9P012SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9P015SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9P017SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9P017MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9T113_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9V113_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9T113MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9V114_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9D115MIPISensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MT9V115_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*GC*/
UINT32 GC2365_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC2366_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC2355_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC2235_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC2035_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC0330_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC0329_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC0313MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC0310_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 IMX215_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
#ifdef ODM_WT_EDIT
//XingYu.Liu@ODM_WT.CAMERA.Driver.2019/10/9,Add for camera bring up
UINT32 GC2375H_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/* Zhen.Quan@Camera.Driver, 2019/11/4, add for [otp bringup] */
UINT32 MONET_LH_MACRO_GC2375H_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MONETX_HLT_MACRO_GC2375H_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MONETX_HLT_DEPTH_OV02A1B_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MONETD_CXT_DEPTH_GC2375H_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MONETD_LH_DEPTH_GC2375H_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC5035MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 HI556MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MONETD_GC5035MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 MONETD_GC5035BMIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
#endif /* ODM_WT_EDIT */
/*SP*/
UINT32 SP0A19_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*A*/
UINT32 A5141_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 A5142_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*HM*/
UINT32 HM3451SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*AR*/
UINT32 AR0833_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*SIV*/
UINT32 SIV120B_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 SIV121D_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*PAS (PixArt Image)*/
UINT32 PAS6180_SERIAL_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*Panasoic*/
UINT32 MN34152_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*Toshiba*/
UINT32 T4K28_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 T4KA7_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/*Others*/
UINT32 ISX012_MIPI_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 T8EV5_YUV_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
/* wenhui.chen@Cam.Drv, 20201012, sensor porting for pascali ov13b10 gc02m1b*/
UINT32 OV13B10_QTECH_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);
UINT32 GC02M1B_MIPI_RAW_SensorInit(struct SENSOR_FUNCTION_STRUCT **pfFunc);

extern struct IMGSENSOR_INIT_FUNC_LIST kdSensorList[];

#endif

