//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Spe_Hardware.h"


static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::get_IsInitialized___STATIC__BOOLEAN,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_GetTime___STATIC__VOID__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_SetTime___STATIC__VOID__I4__I4__I4__I4__I4__I4,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_Initialize___STATIC__BOOLEAN__SpeHardwareNativeRTCRTCCLKSource__U4,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_Uninitialize___STATIC__VOID,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_SetDayLightSaving___STATIC__VOID__SpeHardwareNativeRTCRTCDayLightSaving__SpeHardwareNativeRTCRTCStoreOperation,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_SetCoarseCalibration___STATIC__VOID__SpeHardwareNativeRTCRTCCalibSign__U4,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_SetCoarseCalibrationState___STATIC__VOID__BOOLEAN,
    Library_Spe_Hardware_Spe_Hardware_NativeRTC::Native_SetSmoothCalibration___STATIC__VOID__SpeHardwareNativeRTCRTCSmoothCalibPeriod__SpeHardwareNativeRTCRTCSmoothCalibPlusPulses__U4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_Spe_Hardware_Spe_Hardware_NativeADC::NativeADCInitialize___VOID__I4,
    Library_Spe_Hardware_Spe_Hardware_NativeADC::NativeADCRead___VOID__I4__I4__I4__I4__SZARRAY_U2,
    Library_Spe_Hardware_Spe_Hardware_NativeADC::NativeADCRead___I4__I4__I4,
    Library_Spe_Hardware_Spe_Hardware_NativeADC::NativeADCReadMinMax___VOID__I4__I4__I4__I4__SZARRAY_U2__BYREF_U2__BYREF_U2,
    Library_Spe_Hardware_Spe_Hardware_NativeADC::NativeADCReadSquareSum___I4__I4__I4__I4__I4__SZARRAY_U4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_Spe_Hardware_Spe_Hardware_NativeSerialPort::NativeSerialComm_Open___VOID__U1__I4,
    Library_Spe_Hardware_Spe_Hardware_NativeSerialPort::NativeSerialComm_Close___VOID__U1,
    Library_Spe_Hardware_Spe_Hardware_NativeSerialPort::NativeSerialComm_Write___VOID__U1__SZARRAY_U1__I4__I4,
    Library_Spe_Hardware_Spe_Hardware_NativeSerialPort::NativeSerialComm_Read___I4__U1__SZARRAY_U1__I4__I4,
    Library_Spe_Hardware_Spe_Hardware_NativeSerialPort::NativeSerialComm_WriteAndRead___I4__U1__SZARRAY_U1__I4__I4__SZARRAY_U1__I4__I4,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Spe_Hardware =
{
    "Spe.Hardware", 
    0x0DC822A0,
    method_lookup
};

