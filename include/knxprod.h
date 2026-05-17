#pragma once


#define paramDelay(time) (uint32_t)( \
            (time & 0xC000) == 0xC000 ? (time & 0x3FFF) * 100 : \
            (time & 0xC000) == 0x0000 ? (time & 0x3FFF) * 1000 : \
            (time & 0xC000) == 0x4000 ? (time & 0x3FFF) * 60000 : \
            (time & 0xC000) == 0x8000 ? ((time & 0x3FFF) > 1000 ? 3600000 : \
                                         (time & 0x3FFF) * 3600000 ) : 0 )
                                             
#define ETS_ModuleId_NONE 0
#define ETS_ModuleId_BASE 1
#define ETS_ModuleId_NET 2
#define ETS_ModuleId_UCT 3
#define ETS_ModuleId_HUE 4
#define ETS_ModuleId_LMG 5
#define ETS_ModuleId_LOG 6
#define ETS_ModuleId_FCB 7
#define MAIN_FirmwareName "Hue Gateway (Beta)"
#define MAIN_OpenKnxId 0xAF
#define MAIN_ApplicationNumber 42
#define MAIN_ApplicationVersion 5
#define MAIN_ApplicationEncoding iso-8859-15
#define MAIN_ParameterSize 35685
#define MAIN_MaxKoNumber 916
#define MAIN_OrderNumber "OpenKNX-SR-HUE"
#define BASE_ModuleVersion 24
#define NET_ModuleVersion 6
#define UCT_ModuleVersion 5
#define HUE_ModuleVersion 5
#define LMG_ModuleVersion 1
#define LOG_ModuleVersion 67
#define FCB_ModuleVersion 10
// Parameter with single occurrence


#define BASE_StartupDelayBase                     0      // 2 Bits, Bit 7-6
#define     BASE_StartupDelayBaseMask 0xC0
#define     BASE_StartupDelayBaseShift 6
#define BASE_StartupDelayTime                     0      // 14 Bits, Bit 13-0
#define     BASE_StartupDelayTimeMask 0x3FFF
#define     BASE_StartupDelayTimeShift 0
#define BASE_HeartbeatDelayBase                   2      // 2 Bits, Bit 7-6
#define     BASE_HeartbeatDelayBaseMask 0xC0
#define     BASE_HeartbeatDelayBaseShift 6
#define BASE_HeartbeatDelayTime                   2      // 14 Bits, Bit 13-0
#define     BASE_HeartbeatDelayTimeMask 0x3FFF
#define     BASE_HeartbeatDelayTimeShift 0
#define BASE_Timezone                             4      // 5 Bits, Bit 7-3
#define     BASE_TimezoneMask 0xF8
#define     BASE_TimezoneShift 3
#define BASE_CombinedTimeDate                     4      // 1 Bit, Bit 2
#define     BASE_CombinedTimeDateMask 0x04
#define     BASE_CombinedTimeDateShift 2
#define BASE_SummertimeAll                        4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeAllMask 0x03
#define     BASE_SummertimeAllShift 0
#define BASE_SummertimeDE                         4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeDEMask 0x03
#define     BASE_SummertimeDEShift 0
#define BASE_SummertimeWorld                      4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeWorldMask 0x03
#define     BASE_SummertimeWorldShift 0
#define BASE_SummertimeKO                         4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeKOMask 0x03
#define     BASE_SummertimeKOShift 0
#define BASE_TimezoneCustom                       5      // char*, 63 Byte
#define     BASE_TimezoneCustomLength 63
#define BASE_Latitude                            69      // float (4 Byte)
#define BASE_Longitude                           73      // float (4 Byte)
#define BASE_Diagnose                            78      // 1 Bit, Bit 7
#define     BASE_DiagnoseMask 0x80
#define     BASE_DiagnoseShift 7
#define BASE_Watchdog                            78      // 1 Bit, Bit 6
#define     BASE_WatchdogMask 0x40
#define     BASE_WatchdogShift 6
#define BASE_ReadTimeDate                        78      // 1 Bit, Bit 5
#define     BASE_ReadTimeDateMask 0x20
#define     BASE_ReadTimeDateShift 5
#define BASE_HeartbeatExtended                   78      // 1 Bit, Bit 4
#define     BASE_HeartbeatExtendedMask 0x10
#define     BASE_HeartbeatExtendedShift 4
#define BASE_InternalTime                        78      // 1 Bit, Bit 3
#define     BASE_InternalTimeMask 0x08
#define     BASE_InternalTimeShift 3
#define BASE_ManualSave                          78      // 3 Bits, Bit 2-0
#define     BASE_ManualSaveMask 0x07
#define     BASE_ManualSaveShift 0
#define BASE_PeriodicSave                        79      // 8 Bits, Bit 7-0
#define BASE_Info1LedFunc                        80      // 16 Bits, Bit 15-0
#define BASE_Info2LedFunc                        82      // 16 Bits, Bit 15-0
#define BASE_Info3LedFunc                        84      // 16 Bits, Bit 15-0
#define BASE_DefaultLedFunc                      86      // 1 Bit, Bit 7
#define     BASE_DefaultLedFuncMask 0x80
#define     BASE_DefaultLedFuncShift 7
#define BASE_Dummy                               109      // uint8_t
#define BASE_ModuleEnabled_NET                   110      // 1 Bit, Bit 6
#define     BASE_ModuleEnabled_NETMask 0x40
#define     BASE_ModuleEnabled_NETShift 6
#define BASE_ModuleEnabled_UCT                   110      // 1 Bit, Bit 5
#define     BASE_ModuleEnabled_UCTMask 0x20
#define     BASE_ModuleEnabled_UCTShift 5
#define BASE_ModuleEnabled_HUE                   110      // 1 Bit, Bit 4
#define     BASE_ModuleEnabled_HUEMask 0x10
#define     BASE_ModuleEnabled_HUEShift 4
#define BASE_ModuleEnabled_LMG                   110      // 1 Bit, Bit 3
#define     BASE_ModuleEnabled_LMGMask 0x08
#define     BASE_ModuleEnabled_LMGShift 3
#define BASE_ModuleEnabled_LOG                   110      // 1 Bit, Bit 2
#define     BASE_ModuleEnabled_LOGMask 0x04
#define     BASE_ModuleEnabled_LOGShift 2
#define BASE_ModuleEnabled_FCB                   110      // 1 Bit, Bit 1
#define     BASE_ModuleEnabled_FCBMask 0x02
#define     BASE_ModuleEnabled_FCBShift 1

// Zeitbasis
#define ParamBASE_StartupDelayBase                    ((knx.paramByte(BASE_StartupDelayBase) & BASE_StartupDelayBaseMask) >> BASE_StartupDelayBaseShift)
// Zeit
#define ParamBASE_StartupDelayTime                    (knx.paramWord(BASE_StartupDelayTime) & BASE_StartupDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamBASE_StartupDelayTimeMS                  (paramDelay(knx.paramWord(BASE_StartupDelayTime)))
// Zeitbasis
#define ParamBASE_HeartbeatDelayBase                  ((knx.paramByte(BASE_HeartbeatDelayBase) & BASE_HeartbeatDelayBaseMask) >> BASE_HeartbeatDelayBaseShift)
// Zeit
#define ParamBASE_HeartbeatDelayTime                  (knx.paramWord(BASE_HeartbeatDelayTime) & BASE_HeartbeatDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamBASE_HeartbeatDelayTimeMS                (paramDelay(knx.paramWord(BASE_HeartbeatDelayTime)))
// Zeitzone
#define ParamBASE_Timezone                            ((knx.paramByte(BASE_Timezone) & BASE_TimezoneMask) >> BASE_TimezoneShift)
// Empfangen über
#define ParamBASE_CombinedTimeDate                    ((bool)(knx.paramByte(BASE_CombinedTimeDate) & BASE_CombinedTimeDateMask))
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeAll                       (knx.paramByte(BASE_SummertimeAll) & BASE_SummertimeAllMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeDE                        (knx.paramByte(BASE_SummertimeDE) & BASE_SummertimeDEMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeWorld                     (knx.paramByte(BASE_SummertimeWorld) & BASE_SummertimeWorldMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeKO                        (knx.paramByte(BASE_SummertimeKO) & BASE_SummertimeKOMask)
// POSIX TZ-String
#define ParamBASE_TimezoneCustom                      (knx.paramData(BASE_TimezoneCustom))
#define ParamBASE_TimezoneCustomStr                   (knx.paramString(BASE_TimezoneCustom, BASE_TimezoneCustomLength))
// Breitengrad
#define ParamBASE_Latitude                            (knx.paramFloat(BASE_Latitude, Float_Enc_IEEE754Single))
// Längengrad
#define ParamBASE_Longitude                           (knx.paramFloat(BASE_Longitude, Float_Enc_IEEE754Single))
// Diagnoseobjekt anzeigen
#define ParamBASE_Diagnose                            ((bool)(knx.paramByte(BASE_Diagnose) & BASE_DiagnoseMask))
// Watchdog aktivieren
#define ParamBASE_Watchdog                            ((bool)(knx.paramByte(BASE_Watchdog) & BASE_WatchdogMask))
// Bei Neustart vom Bus lesen
#define ParamBASE_ReadTimeDate                        ((bool)(knx.paramByte(BASE_ReadTimeDate) & BASE_ReadTimeDateMask))
// Erweitertes "In Betrieb"
#define ParamBASE_HeartbeatExtended                   ((bool)(knx.paramByte(BASE_HeartbeatExtended) & BASE_HeartbeatExtendedMask))
// InternalTime
#define ParamBASE_InternalTime                        ((bool)(knx.paramByte(BASE_InternalTime) & BASE_InternalTimeMask))
// Manuelles speichern
#define ParamBASE_ManualSave                          (knx.paramByte(BASE_ManualSave) & BASE_ManualSaveMask)
// Zyklisches speichern
#define ParamBASE_PeriodicSave                        (knx.paramByte(BASE_PeriodicSave))
// Info1
#define ParamBASE_Info1LedFunc                        (knx.paramWord(BASE_Info1LedFunc))
// Info2
#define ParamBASE_Info2LedFunc                        (knx.paramWord(BASE_Info2LedFunc))
// Info3
#define ParamBASE_Info3LedFunc                        (knx.paramWord(BASE_Info3LedFunc))
// 
#define ParamBASE_DefaultLedFunc                      ((bool)(knx.paramByte(BASE_DefaultLedFunc) & BASE_DefaultLedFuncMask))
// 
#define ParamBASE_Dummy                               (knx.paramByte(BASE_Dummy))
// NET
#define ParamBASE_ModuleEnabled_NET                   ((bool)(knx.paramByte(BASE_ModuleEnabled_NET) & BASE_ModuleEnabled_NETMask))
// UCT
#define ParamBASE_ModuleEnabled_UCT                   ((bool)(knx.paramByte(BASE_ModuleEnabled_UCT) & BASE_ModuleEnabled_UCTMask))
// HUE
#define ParamBASE_ModuleEnabled_HUE                   ((bool)(knx.paramByte(BASE_ModuleEnabled_HUE) & BASE_ModuleEnabled_HUEMask))
// LMG
#define ParamBASE_ModuleEnabled_LMG                   ((bool)(knx.paramByte(BASE_ModuleEnabled_LMG) & BASE_ModuleEnabled_LMGMask))
// LOG
#define ParamBASE_ModuleEnabled_LOG                   ((bool)(knx.paramByte(BASE_ModuleEnabled_LOG) & BASE_ModuleEnabled_LOGMask))
// FCB
#define ParamBASE_ModuleEnabled_FCB                   ((bool)(knx.paramByte(BASE_ModuleEnabled_FCB) & BASE_ModuleEnabled_FCBMask))

#define BASE_KoHeartbeat 1
#define BASE_KoTime 2
#define BASE_KoDate 3
#define BASE_KoDateTime 4
#define BASE_KoIsSummertime 5
#define BASE_KoManualSave 6
#define BASE_KoDiagnose 7

// In Betrieb
#define KoBASE_Heartbeat                           (knx.getGroupObject(BASE_KoHeartbeat))
// Uhrzeit
#define KoBASE_Time                                (knx.getGroupObject(BASE_KoTime))
// Datum
#define KoBASE_Date                                (knx.getGroupObject(BASE_KoDate))
// Uhrzeit/Datum
#define KoBASE_DateTime                            (knx.getGroupObject(BASE_KoDateTime))
// Sommerzeit aktiv
#define KoBASE_IsSummertime                        (knx.getGroupObject(BASE_KoIsSummertime))
// Speichern
#define KoBASE_ManualSave                          (knx.getGroupObject(BASE_KoManualSave))
// Diagnose
#define KoBASE_Diagnose                            (knx.getGroupObject(BASE_KoDiagnose))

#define NET_HostAddress                         114      // IP address, 4 Byte
#define NET_SubnetMask                          118      // IP address, 4 Byte
#define NET_GatewayAddress                      122      // IP address, 4 Byte
#define NET_NameserverAddress                   126      // IP address, 4 Byte
#define NET_CustomHostname                      130      // 1 Bit, Bit 7
#define     NET_CustomHostnameMask 0x80
#define     NET_CustomHostnameShift 7
#define NET_StaticIP                            130      // 1 Bit, Bit 6
#define     NET_StaticIPMask 0x40
#define     NET_StaticIPShift 6
#define NET_mDNS                                131      // 1 Bit, Bit 7
#define     NET_mDNSMask 0x80
#define     NET_mDNSShift 7
#define NET_HTTP                                131      // 1 Bit, Bit 6
#define     NET_HTTPMask 0x40
#define     NET_HTTPShift 6
#define NET_NTP                                 131      // 1 Bit, Bit 5
#define     NET_NTPMask 0x20
#define     NET_NTPShift 5
#define NET_OTAUpdate                           131      // 2 Bits, Bit 4-3
#define     NET_OTAUpdateMask 0x18
#define     NET_OTAUpdateShift 3
#define NET_HostName                            132      // char*, 24 Byte
#define     NET_HostNameLength 24
#define NET_LanMode                             173      // 4 Bits, Bit 7-4
#define     NET_LanModeMask 0xF0
#define     NET_LanModeShift 4
#define NET_NTPServer                           174      // char*, 50 Byte
#define     NET_NTPServerLength 50

// IP-Adresse
#define ParamNET_HostAddress                         (knx.paramInt(NET_HostAddress))
// Subnetzsmaske
#define ParamNET_SubnetMask                          (knx.paramInt(NET_SubnetMask))
// Standardgateway
#define ParamNET_GatewayAddress                      (knx.paramInt(NET_GatewayAddress))
// Nameserver
#define ParamNET_NameserverAddress                   (knx.paramInt(NET_NameserverAddress))
// Hostname anpassen
#define ParamNET_CustomHostname                      ((bool)(knx.paramByte(NET_CustomHostname) & NET_CustomHostnameMask))
// DHCP
#define ParamNET_StaticIP                            ((bool)(knx.paramByte(NET_StaticIP) & NET_StaticIPMask))
// mDNS
#define ParamNET_mDNS                                ((bool)(knx.paramByte(NET_mDNS) & NET_mDNSMask))
// Weberver
#define ParamNET_HTTP                                ((bool)(knx.paramByte(NET_HTTP) & NET_HTTPMask))
// NTP-Client
#define ParamNET_NTP                                 ((bool)(knx.paramByte(NET_NTP) & NET_NTPMask))
// OTA-Update
#define ParamNET_OTAUpdate                           ((knx.paramByte(NET_OTAUpdate) & NET_OTAUpdateMask) >> NET_OTAUpdateShift)
// Hostname
#define ParamNET_HostName                            (knx.paramData(NET_HostName))
#define ParamNET_HostNameStr                         (knx.paramString(NET_HostName, NET_HostNameLength))
// LAN-Modus
#define ParamNET_LanMode                             ((knx.paramByte(NET_LanMode) & NET_LanModeMask) >> NET_LanModeShift)
// Zeitserver
#define ParamNET_NTPServer                           (knx.paramData(NET_NTPServer))
#define ParamNET_NTPServerStr                        (knx.paramString(NET_NTPServer, NET_NTPServerLength))



#define HUE_HUEBridgeMode                       225      // 8 Bits, Bit 7-0
#define HUE_HUEBridgeIP                         226      // IP address, 4 Byte
#define HUE_HUEResetAuth                        251      // 1 Bit, Bit 7
#define     HUE_HUEResetAuthMask 0x80
#define     HUE_HUEResetAuthShift 7
#define HUE_HUEShowConnectionStatus             251      // 1 Bit, Bit 6
#define     HUE_HUEShowConnectionStatusMask 0x40
#define     HUE_HUEShowConnectionStatusShift 6
#define HUE_HUEPairingWindow                    255      // uint8_t
#define HUE_HUESwitchOnTransitionSec            1261      // uint8_t
#define HUE_HUESwitchOffTransitionSec           1262      // uint8_t
#define HUE_HUEChannelCount                     254      // uint8_t
#define HUE_HUEHueScene1RID                     1618      // char*, 40 Byte
#define     HUE_HUEHueScene1RIDLength 40
#define HUE_HUEHueScene2RID                     1658      // char*, 40 Byte
#define     HUE_HUEHueScene2RIDLength 40
#define HUE_HUEHueScene3RID                     1698      // char*, 40 Byte
#define     HUE_HUEHueScene3RIDLength 40
#define HUE_HUEHueScene4RID                     1738      // char*, 40 Byte
#define     HUE_HUEHueScene4RIDLength 40
#define HUE_HUEHueScene5RID                     1778      // char*, 40 Byte
#define     HUE_HUEHueScene5RIDLength 40
#define HUE_HUEHueScene6RID                     1818      // char*, 40 Byte
#define     HUE_HUEHueScene6RIDLength 40
#define HUE_HUEHueScene7RID                     1858      // char*, 40 Byte
#define     HUE_HUEHueScene7RIDLength 40
#define HUE_HUEHueScene8RID                     1898      // char*, 40 Byte
#define     HUE_HUEHueScene8RIDLength 40
#define HUE_HUEScenesEnable                     1938      // 1 Bit, Bit 7
#define     HUE_HUEScenesEnableMask 0x80
#define     HUE_HUEScenesEnableShift 7
#define HUE_HUERelDimRepeatMs                   1939      // uint16_t

// Bridge Erkennung
#define ParamHUE_HUEBridgeMode                       (knx.paramByte(HUE_HUEBridgeMode))
// Bridge IP-Adresse
#define ParamHUE_HUEBridgeIP                         (knx.paramInt(HUE_HUEBridgeIP))
// Authentication zurücksetzen
#define ParamHUE_HUEResetAuth                        ((bool)(knx.paramByte(HUE_HUEResetAuth) & HUE_HUEResetAuthMask))
// Status Verbindung
#define ParamHUE_HUEShowConnectionStatus             ((bool)(knx.paramByte(HUE_HUEShowConnectionStatus) & HUE_HUEShowConnectionStatusMask))
// Pairing-Zeitfenster
#define ParamHUE_HUEPairingWindow                    (knx.paramByte(HUE_HUEPairingWindow))
// Einschaltgeschwindigkeit
#define ParamHUE_HUESwitchOnTransitionSec            (knx.paramByte(HUE_HUESwitchOnTransitionSec))
// Ausschaltgeschwindigkeit
#define ParamHUE_HUESwitchOffTransitionSec           (knx.paramByte(HUE_HUESwitchOffTransitionSec))
// Anzahl aktiver Kanäle
#define ParamHUE_HUEChannelCount                     (knx.paramByte(HUE_HUEChannelCount))
// Hue Szene 1 RID
#define ParamHUE_HUEHueScene1RID                     (knx.paramData(HUE_HUEHueScene1RID))
#define ParamHUE_HUEHueScene1RIDStr                  (knx.paramString(HUE_HUEHueScene1RID, HUE_HUEHueScene1RIDLength))
// Hue Szene 2 RID
#define ParamHUE_HUEHueScene2RID                     (knx.paramData(HUE_HUEHueScene2RID))
#define ParamHUE_HUEHueScene2RIDStr                  (knx.paramString(HUE_HUEHueScene2RID, HUE_HUEHueScene2RIDLength))
// Hue Szene 3 RID
#define ParamHUE_HUEHueScene3RID                     (knx.paramData(HUE_HUEHueScene3RID))
#define ParamHUE_HUEHueScene3RIDStr                  (knx.paramString(HUE_HUEHueScene3RID, HUE_HUEHueScene3RIDLength))
// Hue Szene 4 RID
#define ParamHUE_HUEHueScene4RID                     (knx.paramData(HUE_HUEHueScene4RID))
#define ParamHUE_HUEHueScene4RIDStr                  (knx.paramString(HUE_HUEHueScene4RID, HUE_HUEHueScene4RIDLength))
// Hue Szene 5 RID
#define ParamHUE_HUEHueScene5RID                     (knx.paramData(HUE_HUEHueScene5RID))
#define ParamHUE_HUEHueScene5RIDStr                  (knx.paramString(HUE_HUEHueScene5RID, HUE_HUEHueScene5RIDLength))
// Hue Szene 6 RID
#define ParamHUE_HUEHueScene6RID                     (knx.paramData(HUE_HUEHueScene6RID))
#define ParamHUE_HUEHueScene6RIDStr                  (knx.paramString(HUE_HUEHueScene6RID, HUE_HUEHueScene6RIDLength))
// Hue Szene 7 RID
#define ParamHUE_HUEHueScene7RID                     (knx.paramData(HUE_HUEHueScene7RID))
#define ParamHUE_HUEHueScene7RIDStr                  (knx.paramString(HUE_HUEHueScene7RID, HUE_HUEHueScene7RIDLength))
// Hue Szene 8 RID
#define ParamHUE_HUEHueScene8RID                     (knx.paramData(HUE_HUEHueScene8RID))
#define ParamHUE_HUEHueScene8RIDStr                  (knx.paramString(HUE_HUEHueScene8RID, HUE_HUEHueScene8RIDLength))
// Hue Szenen aktivieren
#define ParamHUE_HUEScenesEnable                     ((bool)(knx.paramByte(HUE_HUEScenesEnable) & HUE_HUEScenesEnableMask))
// Dimmgeschwindigkeit
#define ParamHUE_HUERelDimRepeatMs                   (knx.paramWord(HUE_HUERelDimRepeatMs))

#define HUE_KoHUEConnectionStatus 531
#define HUE_KoHUEPairingTrigger 532

// Hue-Bridge: Verbindungsstatus
#define KoHUE_HUEConnectionStatus                 (knx.getGroupObject(HUE_KoHUEConnectionStatus))
// Pairing-Trigger
#define KoHUE_HUEPairingTrigger                   (knx.getGroupObject(HUE_KoHUEPairingTrigger))

#define HUE_ChannelCount 32

// Parameter per channel
#define HUE_ParamBlockOffset 1941
#define HUE_ParamBlockSize 184
#define HUE_ParamCalcIndex(index) (index + HUE_ParamBlockOffset + _channelIndex * HUE_ParamBlockSize)

#define HUE_CHLightUUID                          5      // char*, 40 Byte
#define     HUE_CHLightUUIDLength 40
#define HUE_CHTargetRID                         45      // char*, 40 Byte
#define     HUE_CHTargetRIDLength 40
#define HUE_CHHCLMaster                          4      // 8 Bits, Bit 7-0
#define HUE_CHHCLLockFallback                   86      // 8 Bits, Bit 7-0
#define HUE_CHLightType                          0      // 2 Bits, Bit 7-6
#define     HUE_CHLightTypeMask 0xC0
#define     HUE_CHLightTypeShift 6
#define HUE_CHDeviceType                         0      // 3 Bits, Bit 5-3
#define     HUE_CHDeviceTypeMask 0x38
#define     HUE_CHDeviceTypeShift 3
#define HUE_CHButtonCount                        0      // 3 Bits, Bit 2-0
#define     HUE_CHButtonCountMask 0x07
#define     HUE_CHButtonCountShift 0
#define HUE_CHDisabled                           1      // 1 Bit, Bit 7
#define     HUE_CHDisabledMask 0x80
#define     HUE_CHDisabledShift 7
#define HUE_CHSyncDir                            1      // 2 Bits, Bit 6-5
#define     HUE_CHSyncDirMask 0x60
#define     HUE_CHSyncDirShift 5
#define HUE_CHTargetType                         1      // 2 Bits, Bit 4-3
#define     HUE_CHTargetTypeMask 0x18
#define     HUE_CHTargetTypeShift 3
#define HUE_CHPollInterval                       2      // uint8_t
#define HUE_CHMinBrightness                      3      // uint8_t
#define HUE_CHOptReachable                      87      // 1 Bit, Bit 7
#define     HUE_CHOptReachableMask 0x80
#define     HUE_CHOptReachableShift 7
#define HUE_CHOptTemperature                    87      // 1 Bit, Bit 6
#define     HUE_CHOptTemperatureMask 0x40
#define     HUE_CHOptTemperatureShift 6
#define HUE_CHOptLux                            87      // 1 Bit, Bit 5
#define     HUE_CHOptLuxMask 0x20
#define     HUE_CHOptLuxShift 5
#define HUE_CHOptBattery                        87      // 1 Bit, Bit 4
#define     HUE_CHOptBatteryMask 0x10
#define     HUE_CHOptBatteryShift 4
#define HUE_CHOptTamper                         87      // 1 Bit, Bit 3
#define     HUE_CHOptTamperMask 0x08
#define     HUE_CHOptTamperShift 3
#define HUE_CHSceneEnabled                      88      // 1 Bit, Bit 7
#define     HUE_CHSceneEnabledMask 0x80
#define     HUE_CHSceneEnabledShift 7
#define HUE_CHSceneStoreActive                  88      // 1 Bit, Bit 6
#define     HUE_CHSceneStoreActiveMask 0x40
#define     HUE_CHSceneStoreActiveShift 6
#define HUE_CHScene1Number                      89      // 8 Bits, Bit 7-0
#define HUE_CHScene1ActionOnOff                 90      // 8 Bits, Bit 7-0
#define HUE_CHScene1ActionDim                   90      // 8 Bits, Bit 7-0
#define HUE_CHScene1ActionCT                    90      // 8 Bits, Bit 7-0
#define HUE_CHScene1ActionColor                 90      // 8 Bits, Bit 7-0
#define HUE_CHScene1ActionPlug                  90      // 8 Bits, Bit 7-0
#define HUE_CHScene1HueSceneRef                 91      // 8 Bits, Bit 7-0
#define HUE_CHScene1Brightness                  92      // uint8_t
#define HUE_CHScene1ColorTemp                   93      // uint16_t
#define HUE_CHScene1Red                         95      // uint8_t
#define HUE_CHScene1Green                       96      // uint8_t
#define HUE_CHScene1Blue                        97      // uint8_t
#define HUE_CHScene2Number                      98      // 8 Bits, Bit 7-0
#define HUE_CHScene2ActionOnOff                 99      // 8 Bits, Bit 7-0
#define HUE_CHScene2ActionDim                   99      // 8 Bits, Bit 7-0
#define HUE_CHScene2ActionCT                    99      // 8 Bits, Bit 7-0
#define HUE_CHScene2ActionColor                 99      // 8 Bits, Bit 7-0
#define HUE_CHScene2ActionPlug                  99      // 8 Bits, Bit 7-0
#define HUE_CHScene2HueSceneRef                 100      // 8 Bits, Bit 7-0
#define HUE_CHScene2Brightness                  101      // uint8_t
#define HUE_CHScene2ColorTemp                   102      // uint16_t
#define HUE_CHScene2Red                         104      // uint8_t
#define HUE_CHScene2Green                       105      // uint8_t
#define HUE_CHScene2Blue                        106      // uint8_t
#define HUE_CHScene3Number                      107      // 8 Bits, Bit 7-0
#define HUE_CHScene3ActionOnOff                 108      // 8 Bits, Bit 7-0
#define HUE_CHScene3ActionDim                   108      // 8 Bits, Bit 7-0
#define HUE_CHScene3ActionCT                    108      // 8 Bits, Bit 7-0
#define HUE_CHScene3ActionColor                 108      // 8 Bits, Bit 7-0
#define HUE_CHScene3ActionPlug                  108      // 8 Bits, Bit 7-0
#define HUE_CHScene3HueSceneRef                 109      // 8 Bits, Bit 7-0
#define HUE_CHScene3Brightness                  110      // uint8_t
#define HUE_CHScene3ColorTemp                   111      // uint16_t
#define HUE_CHScene3Red                         113      // uint8_t
#define HUE_CHScene3Green                       114      // uint8_t
#define HUE_CHScene3Blue                        115      // uint8_t
#define HUE_CHScene4Number                      116      // 8 Bits, Bit 7-0
#define HUE_CHScene4ActionOnOff                 117      // 8 Bits, Bit 7-0
#define HUE_CHScene4ActionDim                   117      // 8 Bits, Bit 7-0
#define HUE_CHScene4ActionCT                    117      // 8 Bits, Bit 7-0
#define HUE_CHScene4ActionColor                 117      // 8 Bits, Bit 7-0
#define HUE_CHScene4ActionPlug                  117      // 8 Bits, Bit 7-0
#define HUE_CHScene4HueSceneRef                 118      // 8 Bits, Bit 7-0
#define HUE_CHScene4Brightness                  119      // uint8_t
#define HUE_CHScene4ColorTemp                   120      // uint16_t
#define HUE_CHScene4Red                         122      // uint8_t
#define HUE_CHScene4Green                       123      // uint8_t
#define HUE_CHScene4Blue                        124      // uint8_t
#define HUE_CHScene5Number                      125      // 8 Bits, Bit 7-0
#define HUE_CHScene5ActionOnOff                 126      // 8 Bits, Bit 7-0
#define HUE_CHScene5ActionDim                   126      // 8 Bits, Bit 7-0
#define HUE_CHScene5ActionCT                    126      // 8 Bits, Bit 7-0
#define HUE_CHScene5ActionColor                 126      // 8 Bits, Bit 7-0
#define HUE_CHScene5ActionPlug                  126      // 8 Bits, Bit 7-0
#define HUE_CHScene5HueSceneRef                 127      // 8 Bits, Bit 7-0
#define HUE_CHScene5Brightness                  128      // uint8_t
#define HUE_CHScene5ColorTemp                   129      // uint16_t
#define HUE_CHScene5Red                         131      // uint8_t
#define HUE_CHScene5Green                       132      // uint8_t
#define HUE_CHScene5Blue                        133      // uint8_t
#define HUE_CHScene6Number                      134      // 8 Bits, Bit 7-0
#define HUE_CHScene6ActionOnOff                 135      // 8 Bits, Bit 7-0
#define HUE_CHScene6ActionDim                   135      // 8 Bits, Bit 7-0
#define HUE_CHScene6ActionCT                    135      // 8 Bits, Bit 7-0
#define HUE_CHScene6ActionColor                 135      // 8 Bits, Bit 7-0
#define HUE_CHScene6ActionPlug                  135      // 8 Bits, Bit 7-0
#define HUE_CHScene6HueSceneRef                 136      // 8 Bits, Bit 7-0
#define HUE_CHScene6Brightness                  137      // uint8_t
#define HUE_CHScene6ColorTemp                   138      // uint16_t
#define HUE_CHScene6Red                         140      // uint8_t
#define HUE_CHScene6Green                       141      // uint8_t
#define HUE_CHScene6Blue                        142      // uint8_t
#define HUE_CHScene7Number                      143      // 8 Bits, Bit 7-0
#define HUE_CHScene7ActionOnOff                 144      // 8 Bits, Bit 7-0
#define HUE_CHScene7ActionDim                   144      // 8 Bits, Bit 7-0
#define HUE_CHScene7ActionCT                    144      // 8 Bits, Bit 7-0
#define HUE_CHScene7ActionColor                 144      // 8 Bits, Bit 7-0
#define HUE_CHScene7ActionPlug                  144      // 8 Bits, Bit 7-0
#define HUE_CHScene7HueSceneRef                 145      // 8 Bits, Bit 7-0
#define HUE_CHScene7Brightness                  146      // uint8_t
#define HUE_CHScene7ColorTemp                   147      // uint16_t
#define HUE_CHScene7Red                         149      // uint8_t
#define HUE_CHScene7Green                       150      // uint8_t
#define HUE_CHScene7Blue                        151      // uint8_t
#define HUE_CHScene8Number                      152      // 8 Bits, Bit 7-0
#define HUE_CHScene8ActionOnOff                 153      // 8 Bits, Bit 7-0
#define HUE_CHScene8ActionDim                   153      // 8 Bits, Bit 7-0
#define HUE_CHScene8ActionCT                    153      // 8 Bits, Bit 7-0
#define HUE_CHScene8ActionColor                 153      // 8 Bits, Bit 7-0
#define HUE_CHScene8ActionPlug                  153      // 8 Bits, Bit 7-0
#define HUE_CHScene8HueSceneRef                 154      // 8 Bits, Bit 7-0
#define HUE_CHScene8Brightness                  155      // uint8_t
#define HUE_CHScene8ColorTemp                   156      // uint16_t
#define HUE_CHScene8Red                         158      // uint8_t
#define HUE_CHScene8Green                       159      // uint8_t
#define HUE_CHScene8Blue                        160      // uint8_t
#define HUE_CHBtn1KurzTyp                       161      // 4 Bits, Bit 7-4
#define     HUE_CHBtn1KurzTypMask 0xF0
#define     HUE_CHBtn1KurzTypShift 4
#define HUE_CHBtn1LangTyp                       161      // 4 Bits, Bit 3-0
#define     HUE_CHBtn1LangTypMask 0x0F
#define     HUE_CHBtn1LangTypShift 0
#define HUE_CHBtn1KurzSchaltwert                165      // 2 Bits, Bit 7-6
#define     HUE_CHBtn1KurzSchaltwertMask 0xC0
#define     HUE_CHBtn1KurzSchaltwertShift 6
#define HUE_CHBtn1KurzRichtungDim               165      // 1 Bit, Bit 7
#define     HUE_CHBtn1KurzRichtungDimMask 0x80
#define     HUE_CHBtn1KurzRichtungDimShift 7
#define HUE_CHBtn1KurzDimStep                   165      // 3 Bits, Bit 6-4
#define     HUE_CHBtn1KurzDimStepMask 0x70
#define     HUE_CHBtn1KurzDimStepShift 4
#define HUE_CHBtn1KurzSceneNr                   165      // 6 Bits, Bit 7-2
#define     HUE_CHBtn1KurzSceneNrMask 0xFC
#define     HUE_CHBtn1KurzSceneNrShift 2
#define HUE_CHBtn1KurzRichtungJal               165      // 1 Bit, Bit 7
#define     HUE_CHBtn1KurzRichtungJalMask 0x80
#define     HUE_CHBtn1KurzRichtungJalShift 7
#define HUE_CHBtn1KurzProzent                   165      // uint8_t
#define HUE_CHBtn1KurzTemp                      165      // uint8_t
#define HUE_CHBtn1KurzByte                      165      // uint8_t
#define HUE_CHBtn1KurzWord                      165      // uint16_t
#define HUE_CHBtn1LangSchaltwert                167      // 1 Bit, Bit 7
#define     HUE_CHBtn1LangSchaltwertMask 0x80
#define     HUE_CHBtn1LangSchaltwertShift 7
#define HUE_CHBtn1LangRichtungDim               167      // 1 Bit, Bit 7
#define     HUE_CHBtn1LangRichtungDimMask 0x80
#define     HUE_CHBtn1LangRichtungDimShift 7
#define HUE_CHBtn1LangDimStep                   167      // 3 Bits, Bit 6-4
#define     HUE_CHBtn1LangDimStepMask 0x70
#define     HUE_CHBtn1LangDimStepShift 4
#define HUE_CHBtn1LangSceneNr                   167      // 6 Bits, Bit 7-2
#define     HUE_CHBtn1LangSceneNrMask 0xFC
#define     HUE_CHBtn1LangSceneNrShift 2
#define HUE_CHBtn1LangRichtungJal               167      // 1 Bit, Bit 7
#define     HUE_CHBtn1LangRichtungJalMask 0x80
#define     HUE_CHBtn1LangRichtungJalShift 7
#define HUE_CHBtn1LangProzent                   167      // uint8_t
#define HUE_CHBtn1LangTemp                      167      // uint8_t
#define HUE_CHBtn1LangByte                      167      // uint8_t
#define HUE_CHBtn1LangWord                      167      // uint16_t
#define HUE_CHBtn2KurzTyp                       162      // 4 Bits, Bit 7-4
#define     HUE_CHBtn2KurzTypMask 0xF0
#define     HUE_CHBtn2KurzTypShift 4
#define HUE_CHBtn2LangTyp                       162      // 4 Bits, Bit 3-0
#define     HUE_CHBtn2LangTypMask 0x0F
#define     HUE_CHBtn2LangTypShift 0
#define HUE_CHBtn2KurzSchaltwert                169      // 2 Bits, Bit 7-6
#define     HUE_CHBtn2KurzSchaltwertMask 0xC0
#define     HUE_CHBtn2KurzSchaltwertShift 6
#define HUE_CHBtn2KurzRichtungDim               169      // 1 Bit, Bit 7
#define     HUE_CHBtn2KurzRichtungDimMask 0x80
#define     HUE_CHBtn2KurzRichtungDimShift 7
#define HUE_CHBtn2KurzDimStep                   169      // 3 Bits, Bit 6-4
#define     HUE_CHBtn2KurzDimStepMask 0x70
#define     HUE_CHBtn2KurzDimStepShift 4
#define HUE_CHBtn2KurzSceneNr                   169      // 6 Bits, Bit 7-2
#define     HUE_CHBtn2KurzSceneNrMask 0xFC
#define     HUE_CHBtn2KurzSceneNrShift 2
#define HUE_CHBtn2KurzRichtungJal               169      // 1 Bit, Bit 7
#define     HUE_CHBtn2KurzRichtungJalMask 0x80
#define     HUE_CHBtn2KurzRichtungJalShift 7
#define HUE_CHBtn2KurzProzent                   169      // uint8_t
#define HUE_CHBtn2KurzTemp                      169      // uint8_t
#define HUE_CHBtn2KurzByte                      169      // uint8_t
#define HUE_CHBtn2KurzWord                      169      // uint16_t
#define HUE_CHBtn2LangSchaltwert                171      // 1 Bit, Bit 7
#define     HUE_CHBtn2LangSchaltwertMask 0x80
#define     HUE_CHBtn2LangSchaltwertShift 7
#define HUE_CHBtn2LangRichtungDim               171      // 1 Bit, Bit 7
#define     HUE_CHBtn2LangRichtungDimMask 0x80
#define     HUE_CHBtn2LangRichtungDimShift 7
#define HUE_CHBtn2LangDimStep                   171      // 3 Bits, Bit 6-4
#define     HUE_CHBtn2LangDimStepMask 0x70
#define     HUE_CHBtn2LangDimStepShift 4
#define HUE_CHBtn2LangSceneNr                   171      // 6 Bits, Bit 7-2
#define     HUE_CHBtn2LangSceneNrMask 0xFC
#define     HUE_CHBtn2LangSceneNrShift 2
#define HUE_CHBtn2LangRichtungJal               171      // 1 Bit, Bit 7
#define     HUE_CHBtn2LangRichtungJalMask 0x80
#define     HUE_CHBtn2LangRichtungJalShift 7
#define HUE_CHBtn2LangProzent                   171      // uint8_t
#define HUE_CHBtn2LangTemp                      171      // uint8_t
#define HUE_CHBtn2LangByte                      171      // uint8_t
#define HUE_CHBtn2LangWord                      171      // uint16_t
#define HUE_CHBtn3KurzTyp                       163      // 4 Bits, Bit 7-4
#define     HUE_CHBtn3KurzTypMask 0xF0
#define     HUE_CHBtn3KurzTypShift 4
#define HUE_CHBtn3LangTyp                       163      // 4 Bits, Bit 3-0
#define     HUE_CHBtn3LangTypMask 0x0F
#define     HUE_CHBtn3LangTypShift 0
#define HUE_CHBtn3KurzSchaltwert                173      // 2 Bits, Bit 7-6
#define     HUE_CHBtn3KurzSchaltwertMask 0xC0
#define     HUE_CHBtn3KurzSchaltwertShift 6
#define HUE_CHBtn3KurzRichtungDim               173      // 1 Bit, Bit 7
#define     HUE_CHBtn3KurzRichtungDimMask 0x80
#define     HUE_CHBtn3KurzRichtungDimShift 7
#define HUE_CHBtn3KurzDimStep                   173      // 3 Bits, Bit 6-4
#define     HUE_CHBtn3KurzDimStepMask 0x70
#define     HUE_CHBtn3KurzDimStepShift 4
#define HUE_CHBtn3KurzSceneNr                   173      // 6 Bits, Bit 7-2
#define     HUE_CHBtn3KurzSceneNrMask 0xFC
#define     HUE_CHBtn3KurzSceneNrShift 2
#define HUE_CHBtn3KurzRichtungJal               173      // 1 Bit, Bit 7
#define     HUE_CHBtn3KurzRichtungJalMask 0x80
#define     HUE_CHBtn3KurzRichtungJalShift 7
#define HUE_CHBtn3KurzProzent                   173      // uint8_t
#define HUE_CHBtn3KurzTemp                      173      // uint8_t
#define HUE_CHBtn3KurzByte                      173      // uint8_t
#define HUE_CHBtn3KurzWord                      173      // uint16_t
#define HUE_CHBtn3LangSchaltwert                175      // 1 Bit, Bit 7
#define     HUE_CHBtn3LangSchaltwertMask 0x80
#define     HUE_CHBtn3LangSchaltwertShift 7
#define HUE_CHBtn3LangRichtungDim               175      // 1 Bit, Bit 7
#define     HUE_CHBtn3LangRichtungDimMask 0x80
#define     HUE_CHBtn3LangRichtungDimShift 7
#define HUE_CHBtn3LangDimStep                   175      // 3 Bits, Bit 6-4
#define     HUE_CHBtn3LangDimStepMask 0x70
#define     HUE_CHBtn3LangDimStepShift 4
#define HUE_CHBtn3LangSceneNr                   175      // 6 Bits, Bit 7-2
#define     HUE_CHBtn3LangSceneNrMask 0xFC
#define     HUE_CHBtn3LangSceneNrShift 2
#define HUE_CHBtn3LangRichtungJal               175      // 1 Bit, Bit 7
#define     HUE_CHBtn3LangRichtungJalMask 0x80
#define     HUE_CHBtn3LangRichtungJalShift 7
#define HUE_CHBtn3LangProzent                   175      // uint8_t
#define HUE_CHBtn3LangTemp                      175      // uint8_t
#define HUE_CHBtn3LangByte                      175      // uint8_t
#define HUE_CHBtn3LangWord                      175      // uint16_t
#define HUE_CHBtn4KurzTyp                       164      // 4 Bits, Bit 7-4
#define     HUE_CHBtn4KurzTypMask 0xF0
#define     HUE_CHBtn4KurzTypShift 4
#define HUE_CHBtn4LangTyp                       164      // 4 Bits, Bit 3-0
#define     HUE_CHBtn4LangTypMask 0x0F
#define     HUE_CHBtn4LangTypShift 0
#define HUE_CHBtn4KurzSchaltwert                177      // 2 Bits, Bit 7-6
#define     HUE_CHBtn4KurzSchaltwertMask 0xC0
#define     HUE_CHBtn4KurzSchaltwertShift 6
#define HUE_CHBtn4KurzRichtungDim               177      // 1 Bit, Bit 7
#define     HUE_CHBtn4KurzRichtungDimMask 0x80
#define     HUE_CHBtn4KurzRichtungDimShift 7
#define HUE_CHBtn4KurzDimStep                   177      // 3 Bits, Bit 6-4
#define     HUE_CHBtn4KurzDimStepMask 0x70
#define     HUE_CHBtn4KurzDimStepShift 4
#define HUE_CHBtn4KurzSceneNr                   177      // 6 Bits, Bit 7-2
#define     HUE_CHBtn4KurzSceneNrMask 0xFC
#define     HUE_CHBtn4KurzSceneNrShift 2
#define HUE_CHBtn4KurzRichtungJal               177      // 1 Bit, Bit 7
#define     HUE_CHBtn4KurzRichtungJalMask 0x80
#define     HUE_CHBtn4KurzRichtungJalShift 7
#define HUE_CHBtn4KurzProzent                   177      // uint8_t
#define HUE_CHBtn4KurzTemp                      177      // uint8_t
#define HUE_CHBtn4KurzByte                      177      // uint8_t
#define HUE_CHBtn4KurzWord                      177      // uint16_t
#define HUE_CHBtn4LangSchaltwert                179      // 1 Bit, Bit 7
#define     HUE_CHBtn4LangSchaltwertMask 0x80
#define     HUE_CHBtn4LangSchaltwertShift 7
#define HUE_CHBtn4LangRichtungDim               179      // 1 Bit, Bit 7
#define     HUE_CHBtn4LangRichtungDimMask 0x80
#define     HUE_CHBtn4LangRichtungDimShift 7
#define HUE_CHBtn4LangDimStep                   179      // 3 Bits, Bit 6-4
#define     HUE_CHBtn4LangDimStepMask 0x70
#define     HUE_CHBtn4LangDimStepShift 4
#define HUE_CHBtn4LangSceneNr                   179      // 6 Bits, Bit 7-2
#define     HUE_CHBtn4LangSceneNrMask 0xFC
#define     HUE_CHBtn4LangSceneNrShift 2
#define HUE_CHBtn4LangRichtungJal               179      // 1 Bit, Bit 7
#define     HUE_CHBtn4LangRichtungJalMask 0x80
#define     HUE_CHBtn4LangRichtungJalShift 7
#define HUE_CHBtn4LangProzent                   179      // uint8_t
#define HUE_CHBtn4LangTemp                      179      // uint8_t
#define HUE_CHBtn4LangByte                      179      // uint8_t
#define HUE_CHBtn4LangWord                      179      // uint16_t
#define HUE_CHHasRotary                         181      // 1 Bit, Bit 7
#define     HUE_CHHasRotaryMask 0x80
#define     HUE_CHHasRotaryShift 7
#define HUE_CHRotaryFunction                    181      // 3 Bits, Bit 6-4
#define     HUE_CHRotaryFunctionMask 0x70
#define     HUE_CHRotaryFunctionShift 4
#define HUE_CHRotaryStepPercent                 182      // 3 Bits, Bit 7-5
#define     HUE_CHRotaryStepPercentMask 0xE0
#define     HUE_CHRotaryStepPercentShift 5
#define HUE_CHNativeHueAction                   183      // 1 Bit, Bit 7
#define     HUE_CHNativeHueActionMask 0x80
#define     HUE_CHNativeHueActionShift 7

// Hue Lampen-ID (UUID)
#define ParamHUE_CHLightUUID                         (knx.paramData(HUE_ParamCalcIndex(HUE_CHLightUUID)))
#define ParamHUE_CHLightUUIDStr                      (knx.paramString(HUE_ParamCalcIndex(HUE_CHLightUUID), HUE_CHLightUUIDLength))
// Hue Ziel-ID
#define ParamHUE_CHTargetRID                         (knx.paramData(HUE_ParamCalcIndex(HUE_CHTargetRID)))
#define ParamHUE_CHTargetRIDStr                      (knx.paramString(HUE_ParamCalcIndex(HUE_CHTargetRID), HUE_CHTargetRIDLength))
// Zuordnung Lichtmanager
#define ParamHUE_CHHCLMaster                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHHCLMaster)))
// Rückfallzeit nach Lichtmanager-Sperre
#define ParamHUE_CHHCLLockFallback                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHHCLLockFallback)))
// Lampentyp
#define ParamHUE_CHLightType                         ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHLightType)) & HUE_CHLightTypeMask) >> HUE_CHLightTypeShift)
// Gerätetyp
#define ParamHUE_CHDeviceType                        ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHDeviceType)) & HUE_CHDeviceTypeMask) >> HUE_CHDeviceTypeShift)
// Anzahl Tasten
#define ParamHUE_CHButtonCount                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHButtonCount)) & HUE_CHButtonCountMask)
// Kanal deaktivieren (zu Testzwecken)
#define ParamHUE_CHDisabled                          ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHDisabled)) & HUE_CHDisabledMask))
// Synchronisationsrichtung
#define ParamHUE_CHSyncDir                           ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHSyncDir)) & HUE_CHSyncDirMask) >> HUE_CHSyncDirShift)
// Zieltyp
#define ParamHUE_CHTargetType                        ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHTargetType)) & HUE_CHTargetTypeMask) >> HUE_CHTargetTypeShift)
// Polling-Intervall
#define ParamHUE_CHPollInterval                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHPollInterval)))
// Minimale Helligkeit
#define ParamHUE_CHMinBrightness                     (knx.paramByte(HUE_ParamCalcIndex(HUE_CHMinBrightness)))
// Gerät erreichbar verwenden
#define ParamHUE_CHOptReachable                      ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHOptReachable)) & HUE_CHOptReachableMask))
// Temperatur verwenden
#define ParamHUE_CHOptTemperature                    ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHOptTemperature)) & HUE_CHOptTemperatureMask))
// Helligkeit verwenden
#define ParamHUE_CHOptLux                            ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHOptLux)) & HUE_CHOptLuxMask))
// Batterie verwenden
#define ParamHUE_CHOptBattery                        ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHOptBattery)) & HUE_CHOptBatteryMask))
// Sabotage verwenden
#define ParamHUE_CHOptTamper                         ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHOptTamper)) & HUE_CHOptTamperMask))
// Szenensteuerung aktivieren
#define ParamHUE_CHSceneEnabled                      ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHSceneEnabled)) & HUE_CHSceneEnabledMask))
// Szene speichern
#define ParamHUE_CHSceneStoreActive                  ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHSceneStoreActive)) & HUE_CHSceneStoreActiveMask))
// Szenennummer
#define ParamHUE_CHScene1Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1Number)))
// Aktion
#define ParamHUE_CHScene1ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1ActionOnOff)))
// Aktion
#define ParamHUE_CHScene1ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1ActionDim)))
// Aktion
#define ParamHUE_CHScene1ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1ActionCT)))
// Aktion
#define ParamHUE_CHScene1ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1ActionColor)))
// Aktion
#define ParamHUE_CHScene1ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene1HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene1Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene1ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene1ColorTemp)))
// Rot
#define ParamHUE_CHScene1Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1Red)))
// Grün
#define ParamHUE_CHScene1Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1Green)))
// Blau
#define ParamHUE_CHScene1Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene1Blue)))
// Szenennummer
#define ParamHUE_CHScene2Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2Number)))
// Aktion
#define ParamHUE_CHScene2ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2ActionOnOff)))
// Aktion
#define ParamHUE_CHScene2ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2ActionDim)))
// Aktion
#define ParamHUE_CHScene2ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2ActionCT)))
// Aktion
#define ParamHUE_CHScene2ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2ActionColor)))
// Aktion
#define ParamHUE_CHScene2ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene2HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene2Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene2ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene2ColorTemp)))
// Rot
#define ParamHUE_CHScene2Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2Red)))
// Grün
#define ParamHUE_CHScene2Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2Green)))
// Blau
#define ParamHUE_CHScene2Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene2Blue)))
// Szenennummer
#define ParamHUE_CHScene3Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3Number)))
// Aktion
#define ParamHUE_CHScene3ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3ActionOnOff)))
// Aktion
#define ParamHUE_CHScene3ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3ActionDim)))
// Aktion
#define ParamHUE_CHScene3ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3ActionCT)))
// Aktion
#define ParamHUE_CHScene3ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3ActionColor)))
// Aktion
#define ParamHUE_CHScene3ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene3HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene3Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene3ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene3ColorTemp)))
// Rot
#define ParamHUE_CHScene3Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3Red)))
// Grün
#define ParamHUE_CHScene3Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3Green)))
// Blau
#define ParamHUE_CHScene3Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene3Blue)))
// Szenennummer
#define ParamHUE_CHScene4Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4Number)))
// Aktion
#define ParamHUE_CHScene4ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4ActionOnOff)))
// Aktion
#define ParamHUE_CHScene4ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4ActionDim)))
// Aktion
#define ParamHUE_CHScene4ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4ActionCT)))
// Aktion
#define ParamHUE_CHScene4ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4ActionColor)))
// Aktion
#define ParamHUE_CHScene4ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene4HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene4Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene4ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene4ColorTemp)))
// Rot
#define ParamHUE_CHScene4Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4Red)))
// Grün
#define ParamHUE_CHScene4Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4Green)))
// Blau
#define ParamHUE_CHScene4Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene4Blue)))
// Szenennummer
#define ParamHUE_CHScene5Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5Number)))
// Aktion
#define ParamHUE_CHScene5ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5ActionOnOff)))
// Aktion
#define ParamHUE_CHScene5ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5ActionDim)))
// Aktion
#define ParamHUE_CHScene5ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5ActionCT)))
// Aktion
#define ParamHUE_CHScene5ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5ActionColor)))
// Aktion
#define ParamHUE_CHScene5ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene5HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene5Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene5ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene5ColorTemp)))
// Rot
#define ParamHUE_CHScene5Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5Red)))
// Grün
#define ParamHUE_CHScene5Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5Green)))
// Blau
#define ParamHUE_CHScene5Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene5Blue)))
// Szenennummer
#define ParamHUE_CHScene6Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6Number)))
// Aktion
#define ParamHUE_CHScene6ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6ActionOnOff)))
// Aktion
#define ParamHUE_CHScene6ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6ActionDim)))
// Aktion
#define ParamHUE_CHScene6ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6ActionCT)))
// Aktion
#define ParamHUE_CHScene6ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6ActionColor)))
// Aktion
#define ParamHUE_CHScene6ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene6HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene6Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene6ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene6ColorTemp)))
// Rot
#define ParamHUE_CHScene6Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6Red)))
// Grün
#define ParamHUE_CHScene6Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6Green)))
// Blau
#define ParamHUE_CHScene6Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene6Blue)))
// Szenennummer
#define ParamHUE_CHScene7Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7Number)))
// Aktion
#define ParamHUE_CHScene7ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7ActionOnOff)))
// Aktion
#define ParamHUE_CHScene7ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7ActionDim)))
// Aktion
#define ParamHUE_CHScene7ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7ActionCT)))
// Aktion
#define ParamHUE_CHScene7ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7ActionColor)))
// Aktion
#define ParamHUE_CHScene7ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene7HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene7Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene7ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene7ColorTemp)))
// Rot
#define ParamHUE_CHScene7Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7Red)))
// Grün
#define ParamHUE_CHScene7Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7Green)))
// Blau
#define ParamHUE_CHScene7Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene7Blue)))
// Szenennummer
#define ParamHUE_CHScene8Number                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8Number)))
// Aktion
#define ParamHUE_CHScene8ActionOnOff                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8ActionOnOff)))
// Aktion
#define ParamHUE_CHScene8ActionDim                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8ActionDim)))
// Aktion
#define ParamHUE_CHScene8ActionCT                    (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8ActionCT)))
// Aktion
#define ParamHUE_CHScene8ActionColor                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8ActionColor)))
// Aktion
#define ParamHUE_CHScene8ActionPlug                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8ActionPlug)))
// Hue-Szene
#define ParamHUE_CHScene8HueSceneRef                 (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8HueSceneRef)))
// Helligkeit
#define ParamHUE_CHScene8Brightness                  (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8Brightness)))
// Farbtemperatur
#define ParamHUE_CHScene8ColorTemp                   (knx.paramWord(HUE_ParamCalcIndex(HUE_CHScene8ColorTemp)))
// Rot
#define ParamHUE_CHScene8Red                         (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8Red)))
// Grün
#define ParamHUE_CHScene8Green                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8Green)))
// Blau
#define ParamHUE_CHScene8Blue                        (knx.paramByte(HUE_ParamCalcIndex(HUE_CHScene8Blue)))
// Taste 1 Kurzdruck
#define ParamHUE_CHBtn1KurzTyp                       ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzTyp)) & HUE_CHBtn1KurzTypMask) >> HUE_CHBtn1KurzTypShift)
// Taste 1 Langdruck
#define ParamHUE_CHBtn1LangTyp                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangTyp)) & HUE_CHBtn1LangTypMask)
// Schaltwert
#define ParamHUE_CHBtn1KurzSchaltwert                ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzSchaltwert)) & HUE_CHBtn1KurzSchaltwertMask) >> HUE_CHBtn1KurzSchaltwertShift)
// Richtung
#define ParamHUE_CHBtn1KurzRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzRichtungDim)) & HUE_CHBtn1KurzRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn1KurzDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzDimStep)) & HUE_CHBtn1KurzDimStepMask) >> HUE_CHBtn1KurzDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn1KurzSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzSceneNr)) & HUE_CHBtn1KurzSceneNrMask) >> HUE_CHBtn1KurzSceneNrShift)
// Richtung
#define ParamHUE_CHBtn1KurzRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzRichtungJal)) & HUE_CHBtn1KurzRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn1KurzProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzProzent)))
// Temperatur
#define ParamHUE_CHBtn1KurzTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzTemp)))
// Wert
#define ParamHUE_CHBtn1KurzByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1KurzByte)))
// Wert
#define ParamHUE_CHBtn1KurzWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn1KurzWord)))
// Schaltwert
#define ParamHUE_CHBtn1LangSchaltwert                ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangSchaltwert)) & HUE_CHBtn1LangSchaltwertMask))
// Richtung
#define ParamHUE_CHBtn1LangRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangRichtungDim)) & HUE_CHBtn1LangRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn1LangDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangDimStep)) & HUE_CHBtn1LangDimStepMask) >> HUE_CHBtn1LangDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn1LangSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangSceneNr)) & HUE_CHBtn1LangSceneNrMask) >> HUE_CHBtn1LangSceneNrShift)
// Richtung
#define ParamHUE_CHBtn1LangRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangRichtungJal)) & HUE_CHBtn1LangRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn1LangProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangProzent)))
// Temperatur
#define ParamHUE_CHBtn1LangTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangTemp)))
// Wert
#define ParamHUE_CHBtn1LangByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn1LangByte)))
// Wert
#define ParamHUE_CHBtn1LangWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn1LangWord)))
// Taste 2 Kurzdruck
#define ParamHUE_CHBtn2KurzTyp                       ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzTyp)) & HUE_CHBtn2KurzTypMask) >> HUE_CHBtn2KurzTypShift)
// Taste 2 Langdruck
#define ParamHUE_CHBtn2LangTyp                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangTyp)) & HUE_CHBtn2LangTypMask)
// Schaltwert
#define ParamHUE_CHBtn2KurzSchaltwert                ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzSchaltwert)) & HUE_CHBtn2KurzSchaltwertMask) >> HUE_CHBtn2KurzSchaltwertShift)
// Richtung
#define ParamHUE_CHBtn2KurzRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzRichtungDim)) & HUE_CHBtn2KurzRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn2KurzDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzDimStep)) & HUE_CHBtn2KurzDimStepMask) >> HUE_CHBtn2KurzDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn2KurzSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzSceneNr)) & HUE_CHBtn2KurzSceneNrMask) >> HUE_CHBtn2KurzSceneNrShift)
// Richtung
#define ParamHUE_CHBtn2KurzRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzRichtungJal)) & HUE_CHBtn2KurzRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn2KurzProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzProzent)))
// Temperatur
#define ParamHUE_CHBtn2KurzTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzTemp)))
// Wert
#define ParamHUE_CHBtn2KurzByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2KurzByte)))
// Wert
#define ParamHUE_CHBtn2KurzWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn2KurzWord)))
// Schaltwert
#define ParamHUE_CHBtn2LangSchaltwert                ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangSchaltwert)) & HUE_CHBtn2LangSchaltwertMask))
// Richtung
#define ParamHUE_CHBtn2LangRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangRichtungDim)) & HUE_CHBtn2LangRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn2LangDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangDimStep)) & HUE_CHBtn2LangDimStepMask) >> HUE_CHBtn2LangDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn2LangSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangSceneNr)) & HUE_CHBtn2LangSceneNrMask) >> HUE_CHBtn2LangSceneNrShift)
// Richtung
#define ParamHUE_CHBtn2LangRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangRichtungJal)) & HUE_CHBtn2LangRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn2LangProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangProzent)))
// Temperatur
#define ParamHUE_CHBtn2LangTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangTemp)))
// Wert
#define ParamHUE_CHBtn2LangByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn2LangByte)))
// Wert
#define ParamHUE_CHBtn2LangWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn2LangWord)))
// Taste 3 Kurzdruck
#define ParamHUE_CHBtn3KurzTyp                       ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzTyp)) & HUE_CHBtn3KurzTypMask) >> HUE_CHBtn3KurzTypShift)
// Taste 3 Langdruck
#define ParamHUE_CHBtn3LangTyp                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangTyp)) & HUE_CHBtn3LangTypMask)
// Schaltwert
#define ParamHUE_CHBtn3KurzSchaltwert                ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzSchaltwert)) & HUE_CHBtn3KurzSchaltwertMask) >> HUE_CHBtn3KurzSchaltwertShift)
// Richtung
#define ParamHUE_CHBtn3KurzRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzRichtungDim)) & HUE_CHBtn3KurzRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn3KurzDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzDimStep)) & HUE_CHBtn3KurzDimStepMask) >> HUE_CHBtn3KurzDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn3KurzSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzSceneNr)) & HUE_CHBtn3KurzSceneNrMask) >> HUE_CHBtn3KurzSceneNrShift)
// Richtung
#define ParamHUE_CHBtn3KurzRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzRichtungJal)) & HUE_CHBtn3KurzRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn3KurzProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzProzent)))
// Temperatur
#define ParamHUE_CHBtn3KurzTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzTemp)))
// Wert
#define ParamHUE_CHBtn3KurzByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3KurzByte)))
// Wert
#define ParamHUE_CHBtn3KurzWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn3KurzWord)))
// Schaltwert
#define ParamHUE_CHBtn3LangSchaltwert                ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangSchaltwert)) & HUE_CHBtn3LangSchaltwertMask))
// Richtung
#define ParamHUE_CHBtn3LangRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangRichtungDim)) & HUE_CHBtn3LangRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn3LangDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangDimStep)) & HUE_CHBtn3LangDimStepMask) >> HUE_CHBtn3LangDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn3LangSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangSceneNr)) & HUE_CHBtn3LangSceneNrMask) >> HUE_CHBtn3LangSceneNrShift)
// Richtung
#define ParamHUE_CHBtn3LangRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangRichtungJal)) & HUE_CHBtn3LangRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn3LangProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangProzent)))
// Temperatur
#define ParamHUE_CHBtn3LangTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangTemp)))
// Wert
#define ParamHUE_CHBtn3LangByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn3LangByte)))
// Wert
#define ParamHUE_CHBtn3LangWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn3LangWord)))
// Taste 4 Kurzdruck
#define ParamHUE_CHBtn4KurzTyp                       ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzTyp)) & HUE_CHBtn4KurzTypMask) >> HUE_CHBtn4KurzTypShift)
// Taste 4 Langdruck
#define ParamHUE_CHBtn4LangTyp                       (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangTyp)) & HUE_CHBtn4LangTypMask)
// Schaltwert
#define ParamHUE_CHBtn4KurzSchaltwert                ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzSchaltwert)) & HUE_CHBtn4KurzSchaltwertMask) >> HUE_CHBtn4KurzSchaltwertShift)
// Richtung
#define ParamHUE_CHBtn4KurzRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzRichtungDim)) & HUE_CHBtn4KurzRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn4KurzDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzDimStep)) & HUE_CHBtn4KurzDimStepMask) >> HUE_CHBtn4KurzDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn4KurzSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzSceneNr)) & HUE_CHBtn4KurzSceneNrMask) >> HUE_CHBtn4KurzSceneNrShift)
// Richtung
#define ParamHUE_CHBtn4KurzRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzRichtungJal)) & HUE_CHBtn4KurzRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn4KurzProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzProzent)))
// Temperatur
#define ParamHUE_CHBtn4KurzTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzTemp)))
// Wert
#define ParamHUE_CHBtn4KurzByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4KurzByte)))
// Wert
#define ParamHUE_CHBtn4KurzWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn4KurzWord)))
// Schaltwert
#define ParamHUE_CHBtn4LangSchaltwert                ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangSchaltwert)) & HUE_CHBtn4LangSchaltwertMask))
// Richtung
#define ParamHUE_CHBtn4LangRichtungDim               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangRichtungDim)) & HUE_CHBtn4LangRichtungDimMask))
// Schrittweite
#define ParamHUE_CHBtn4LangDimStep                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangDimStep)) & HUE_CHBtn4LangDimStepMask) >> HUE_CHBtn4LangDimStepShift)
// Szenennummer
#define ParamHUE_CHBtn4LangSceneNr                   ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangSceneNr)) & HUE_CHBtn4LangSceneNrMask) >> HUE_CHBtn4LangSceneNrShift)
// Richtung
#define ParamHUE_CHBtn4LangRichtungJal               ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangRichtungJal)) & HUE_CHBtn4LangRichtungJalMask))
// Prozentwert
#define ParamHUE_CHBtn4LangProzent                   (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangProzent)))
// Temperatur
#define ParamHUE_CHBtn4LangTemp                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangTemp)))
// Wert
#define ParamHUE_CHBtn4LangByte                      (knx.paramByte(HUE_ParamCalcIndex(HUE_CHBtn4LangByte)))
// Wert
#define ParamHUE_CHBtn4LangWord                      (knx.paramWord(HUE_ParamCalcIndex(HUE_CHBtn4LangWord)))
// Drehregler vorhanden (Beta)
#define ParamHUE_CHHasRotary                         ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHHasRotary)) & HUE_CHHasRotaryMask))
// Drehregler Funktion
#define ParamHUE_CHRotaryFunction                    ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHRotaryFunction)) & HUE_CHRotaryFunctionMask) >> HUE_CHRotaryFunctionShift)
// Schrittweite
#define ParamHUE_CHRotaryStepPercent                 ((knx.paramByte(HUE_ParamCalcIndex(HUE_CHRotaryStepPercent)) & HUE_CHRotaryStepPercentMask) >> HUE_CHRotaryStepPercentShift)
// Native Hue Aktion
#define ParamHUE_CHNativeHueAction                   ((bool)(knx.paramByte(HUE_ParamCalcIndex(HUE_CHNativeHueAction)) & HUE_CHNativeHueActionMask))

// deprecated
#define HUE_KoOffset 533

// Communication objects per channel (multiple occurrence)
#define HUE_KoBlockOffset 533
#define HUE_KoBlockSize 12

#define HUE_KoCalcNumber(index) (index + HUE_KoBlockOffset + _channelIndex * HUE_KoBlockSize)
#define HUE_KoCalcIndex(number) ((number >= HUE_KoCalcNumber(0) && number < HUE_KoCalcNumber(HUE_KoBlockSize)) ? (number - HUE_KoBlockOffset) % HUE_KoBlockSize : -1)
#define HUE_KoCalcChannel(number) ((number >= HUE_KoBlockOffset && number < HUE_KoBlockOffset + HUE_ChannelCount * HUE_KoBlockSize) ? (number - HUE_KoBlockOffset) / HUE_KoBlockSize : -1)

#define HUE_KoCHSwitch 0
#define HUE_KoCHBrightness 1
#define HUE_KoCHDimming 2
#define HUE_KoCHStatusSwitch 3
#define HUE_KoCHStatusBrightness 4
#define HUE_KoCHColorTemp 5
#define HUE_KoCHStatusColorTemp 6
#define HUE_KoCHColorRGB 7
#define HUE_KoCHStatusColorRGB 8
#define HUE_KoCHHCLLock 9
#define HUE_KoCHHCLLockStatus 10
#define HUE_KoCHScene 11

// Schalten
#define KoHUE_CHSwitch                            (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHSwitch)))
// Helligkeit
#define KoHUE_CHBrightness                        (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHBrightness)))
// Dimmen
#define KoHUE_CHDimming                           (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHDimming)))
// Status Schalten
#define KoHUE_CHStatusSwitch                      (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHStatusSwitch)))
// Status Helligkeit
#define KoHUE_CHStatusBrightness                  (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHStatusBrightness)))
// Farbtemperatur
#define KoHUE_CHColorTemp                         (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHColorTemp)))
// Status Farbtemperatur
#define KoHUE_CHStatusColorTemp                   (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHStatusColorTemp)))
// Farbe RGB
#define KoHUE_CHColorRGB                          (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHColorRGB)))
// Status RGB
#define KoHUE_CHStatusColorRGB                    (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHStatusColorRGB)))
// Sperre Lichtmanager
#define KoHUE_CHHCLLock                           (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHHCLLock)))
// Status Sperre Lichtmanager
#define KoHUE_CHHCLLockStatus                     (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHHCLLockStatus)))
// Szene
#define KoHUE_CHScene                             (knx.getGroupObject(HUE_KoCalcNumber(HUE_KoCHScene)))

#define LMG_LMGHCLEnable                        7860      // 8 Bits, Bit 7-0
#define LMG_LMGHCLMasterCount                   7861      // uint8_t
#define LMG_LMGHCLUpdateInterval                7862      // uint16_t
#define LMG_LMGHCLFadeDuration                  7864      // uint8_t
#define LMG_LMGHCLLockFallback                  8870      // 8 Bits, Bit 7-0
#define LMG_LMGHCLFallbackPolicy                8867      // 8 Bits, Bit 7-0
#define LMG_LMGHCLFallbackDurationSec           8868      // uint16_t
#define LMG_LMGHCLFallbackReleaseTime           8872      // char*, 5 Byte
#define     LMG_LMGHCLFallbackReleaseTimeLength 5
#define LMG_LMGHCLM1FallbackPolicy              9158      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM2FallbackPolicy              9159      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM3FallbackPolicy              9160      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM4FallbackPolicy              9161      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM5FallbackPolicy              9162      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM6FallbackPolicy              9163      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM7FallbackPolicy              9164      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM8FallbackPolicy              9165      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM1FallbackDurationSec         9166      // uint16_t
#define LMG_LMGHCLM2FallbackDurationSec         9168      // uint16_t
#define LMG_LMGHCLM3FallbackDurationSec         9170      // uint16_t
#define LMG_LMGHCLM4FallbackDurationSec         9172      // uint16_t
#define LMG_LMGHCLM5FallbackDurationSec         9174      // uint16_t
#define LMG_LMGHCLM6FallbackDurationSec         9176      // uint16_t
#define LMG_LMGHCLM7FallbackDurationSec         9178      // uint16_t
#define LMG_LMGHCLM8FallbackDurationSec         9180      // uint16_t
#define LMG_LMGHCLM1FallbackReleaseTime         9182      // char*, 5 Byte
#define     LMG_LMGHCLM1FallbackReleaseTimeLength 5
#define LMG_LMGHCLM2FallbackReleaseTime         9187      // char*, 5 Byte
#define     LMG_LMGHCLM2FallbackReleaseTimeLength 5
#define LMG_LMGHCLM3FallbackReleaseTime         9192      // char*, 5 Byte
#define     LMG_LMGHCLM3FallbackReleaseTimeLength 5
#define LMG_LMGHCLM4FallbackReleaseTime         9197      // char*, 5 Byte
#define     LMG_LMGHCLM4FallbackReleaseTimeLength 5
#define LMG_LMGHCLM5FallbackReleaseTime         9202      // char*, 5 Byte
#define     LMG_LMGHCLM5FallbackReleaseTimeLength 5
#define LMG_LMGHCLM6FallbackReleaseTime         9207      // char*, 5 Byte
#define     LMG_LMGHCLM6FallbackReleaseTimeLength 5
#define LMG_LMGHCLM7FallbackReleaseTime         9212      // char*, 5 Byte
#define     LMG_LMGHCLM7FallbackReleaseTimeLength 5
#define LMG_LMGHCLM8FallbackReleaseTime         9217      // char*, 5 Byte
#define     LMG_LMGHCLM8FallbackReleaseTimeLength 5
#define LMG_LMGHCLM1StatusKoEnable              10258      // 2 Bits, Bit 7-6
#define     LMG_LMGHCLM1StatusKoEnableMask 0xC0
#define     LMG_LMGHCLM1StatusKoEnableShift 6
#define LMG_LMGHCLM2StatusKoEnable              10258      // 2 Bits, Bit 5-4
#define     LMG_LMGHCLM2StatusKoEnableMask 0x30
#define     LMG_LMGHCLM2StatusKoEnableShift 4
#define LMG_LMGHCLM3StatusKoEnable              10258      // 2 Bits, Bit 3-2
#define     LMG_LMGHCLM3StatusKoEnableMask 0x0C
#define     LMG_LMGHCLM3StatusKoEnableShift 2
#define LMG_LMGHCLM4StatusKoEnable              10258      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM4StatusKoEnableMask 0x03
#define     LMG_LMGHCLM4StatusKoEnableShift 0
#define LMG_LMGHCLM1LockFallback                8857      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM2LockFallback                8858      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM3LockFallback                8859      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM4LockFallback                8860      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM5StatusKoEnable              10259      // 2 Bits, Bit 7-6
#define     LMG_LMGHCLM5StatusKoEnableMask 0xC0
#define     LMG_LMGHCLM5StatusKoEnableShift 6
#define LMG_LMGHCLM6StatusKoEnable              10259      // 2 Bits, Bit 5-4
#define     LMG_LMGHCLM6StatusKoEnableMask 0x30
#define     LMG_LMGHCLM6StatusKoEnableShift 4
#define LMG_LMGHCLM7StatusKoEnable              10259      // 2 Bits, Bit 3-2
#define     LMG_LMGHCLM7StatusKoEnableMask 0x0C
#define     LMG_LMGHCLM7StatusKoEnableShift 2
#define LMG_LMGHCLM8StatusKoEnable              10259      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM8StatusKoEnableMask 0x03
#define     LMG_LMGHCLM8StatusKoEnableShift 0
#define LMG_LMGHCLM5LockFallback                8861      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM6LockFallback                8862      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM7LockFallback                8863      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM8LockFallback                8864      // 8 Bits, Bit 7-0
#define LMG_HCLM1SP0Time                        7865      // char*, 5 Byte
#define     LMG_HCLM1SP0TimeLength 5
#define LMG_HCLM1SP0Kelvin                      7870      // uint16_t
#define LMG_HCLM1SP0Brightness                  7872      // uint8_t
#define LMG_HCLM1SP1Time                        7873      // char*, 5 Byte
#define     LMG_HCLM1SP1TimeLength 5
#define LMG_HCLM1SP1Kelvin                      7878      // uint16_t
#define LMG_HCLM1SP1Brightness                  7880      // uint8_t
#define LMG_HCLM1SP2Time                        7881      // char*, 5 Byte
#define     LMG_HCLM1SP2TimeLength 5
#define LMG_HCLM1SP2Kelvin                      7886      // uint16_t
#define LMG_HCLM1SP2Brightness                  7888      // uint8_t
#define LMG_HCLM1SP3Time                        7889      // char*, 5 Byte
#define     LMG_HCLM1SP3TimeLength 5
#define LMG_HCLM1SP3Kelvin                      7894      // uint16_t
#define LMG_HCLM1SP3Brightness                  7896      // uint8_t
#define LMG_HCLM1SP4Time                        7897      // char*, 5 Byte
#define     LMG_HCLM1SP4TimeLength 5
#define LMG_HCLM1SP4Kelvin                      7902      // uint16_t
#define LMG_HCLM1SP4Brightness                  7904      // uint8_t
#define LMG_HCLM1SP5Time                        7905      // char*, 5 Byte
#define     LMG_HCLM1SP5TimeLength 5
#define LMG_HCLM1SP5Kelvin                      7910      // uint16_t
#define LMG_HCLM1SP5Brightness                  7912      // uint8_t
#define LMG_HCLM1SP6Time                        7913      // char*, 5 Byte
#define     LMG_HCLM1SP6TimeLength 5
#define LMG_HCLM1SP6Kelvin                      7918      // uint16_t
#define LMG_HCLM1SP6Brightness                  7920      // uint8_t
#define LMG_HCLM1SP7Time                        7921      // char*, 5 Byte
#define     LMG_HCLM1SP7TimeLength 5
#define LMG_HCLM1SP7Kelvin                      7926      // uint16_t
#define LMG_HCLM1SP7Brightness                  7928      // uint8_t
#define LMG_HCLM1SP8Time                        7929      // char*, 5 Byte
#define     LMG_HCLM1SP8TimeLength 5
#define LMG_HCLM1SP8Kelvin                      7934      // uint16_t
#define LMG_HCLM1SP8Brightness                  7936      // uint8_t
#define LMG_HCLM1SP9Time                        7937      // char*, 5 Byte
#define     LMG_HCLM1SP9TimeLength 5
#define LMG_HCLM1SP9Kelvin                      7942      // uint16_t
#define LMG_HCLM1SP9Brightness                  7944      // uint8_t
#define LMG_HCLM2SP0Time                        7945      // char*, 5 Byte
#define     LMG_HCLM2SP0TimeLength 5
#define LMG_HCLM2SP0Kelvin                      7950      // uint16_t
#define LMG_HCLM2SP0Brightness                  7952      // uint8_t
#define LMG_HCLM2SP1Time                        7953      // char*, 5 Byte
#define     LMG_HCLM2SP1TimeLength 5
#define LMG_HCLM2SP1Kelvin                      7958      // uint16_t
#define LMG_HCLM2SP1Brightness                  7960      // uint8_t
#define LMG_HCLM2SP2Time                        7961      // char*, 5 Byte
#define     LMG_HCLM2SP2TimeLength 5
#define LMG_HCLM2SP2Kelvin                      7966      // uint16_t
#define LMG_HCLM2SP2Brightness                  7968      // uint8_t
#define LMG_HCLM2SP3Time                        7969      // char*, 5 Byte
#define     LMG_HCLM2SP3TimeLength 5
#define LMG_HCLM2SP3Kelvin                      7974      // uint16_t
#define LMG_HCLM2SP3Brightness                  7976      // uint8_t
#define LMG_HCLM2SP4Time                        7977      // char*, 5 Byte
#define     LMG_HCLM2SP4TimeLength 5
#define LMG_HCLM2SP4Kelvin                      7982      // uint16_t
#define LMG_HCLM2SP4Brightness                  7984      // uint8_t
#define LMG_HCLM2SP5Time                        7985      // char*, 5 Byte
#define     LMG_HCLM2SP5TimeLength 5
#define LMG_HCLM2SP5Kelvin                      7990      // uint16_t
#define LMG_HCLM2SP5Brightness                  7992      // uint8_t
#define LMG_HCLM2SP6Time                        7993      // char*, 5 Byte
#define     LMG_HCLM2SP6TimeLength 5
#define LMG_HCLM2SP6Kelvin                      7998      // uint16_t
#define LMG_HCLM2SP6Brightness                  8000      // uint8_t
#define LMG_HCLM2SP7Time                        8001      // char*, 5 Byte
#define     LMG_HCLM2SP7TimeLength 5
#define LMG_HCLM2SP7Kelvin                      8006      // uint16_t
#define LMG_HCLM2SP7Brightness                  8008      // uint8_t
#define LMG_HCLM2SP8Time                        8009      // char*, 5 Byte
#define     LMG_HCLM2SP8TimeLength 5
#define LMG_HCLM2SP8Kelvin                      8014      // uint16_t
#define LMG_HCLM2SP8Brightness                  8016      // uint8_t
#define LMG_HCLM2SP9Time                        8017      // char*, 5 Byte
#define     LMG_HCLM2SP9TimeLength 5
#define LMG_HCLM2SP9Kelvin                      8022      // uint16_t
#define LMG_HCLM2SP9Brightness                  8024      // uint8_t
#define LMG_HCLM3SP0Time                        8025      // char*, 5 Byte
#define     LMG_HCLM3SP0TimeLength 5
#define LMG_HCLM3SP0Kelvin                      8030      // uint16_t
#define LMG_HCLM3SP0Brightness                  8032      // uint8_t
#define LMG_HCLM3SP1Time                        8033      // char*, 5 Byte
#define     LMG_HCLM3SP1TimeLength 5
#define LMG_HCLM3SP1Kelvin                      8038      // uint16_t
#define LMG_HCLM3SP1Brightness                  8040      // uint8_t
#define LMG_HCLM3SP2Time                        8041      // char*, 5 Byte
#define     LMG_HCLM3SP2TimeLength 5
#define LMG_HCLM3SP2Kelvin                      8046      // uint16_t
#define LMG_HCLM3SP2Brightness                  8048      // uint8_t
#define LMG_HCLM3SP3Time                        8049      // char*, 5 Byte
#define     LMG_HCLM3SP3TimeLength 5
#define LMG_HCLM3SP3Kelvin                      8054      // uint16_t
#define LMG_HCLM3SP3Brightness                  8056      // uint8_t
#define LMG_HCLM3SP4Time                        8057      // char*, 5 Byte
#define     LMG_HCLM3SP4TimeLength 5
#define LMG_HCLM3SP4Kelvin                      8062      // uint16_t
#define LMG_HCLM3SP4Brightness                  8064      // uint8_t
#define LMG_HCLM3SP5Time                        8065      // char*, 5 Byte
#define     LMG_HCLM3SP5TimeLength 5
#define LMG_HCLM3SP5Kelvin                      8070      // uint16_t
#define LMG_HCLM3SP5Brightness                  8072      // uint8_t
#define LMG_HCLM3SP6Time                        8073      // char*, 5 Byte
#define     LMG_HCLM3SP6TimeLength 5
#define LMG_HCLM3SP6Kelvin                      8078      // uint16_t
#define LMG_HCLM3SP6Brightness                  8080      // uint8_t
#define LMG_HCLM3SP7Time                        8081      // char*, 5 Byte
#define     LMG_HCLM3SP7TimeLength 5
#define LMG_HCLM3SP7Kelvin                      8086      // uint16_t
#define LMG_HCLM3SP7Brightness                  8088      // uint8_t
#define LMG_HCLM3SP8Time                        8089      // char*, 5 Byte
#define     LMG_HCLM3SP8TimeLength 5
#define LMG_HCLM3SP8Kelvin                      8094      // uint16_t
#define LMG_HCLM3SP8Brightness                  8096      // uint8_t
#define LMG_HCLM3SP9Time                        8097      // char*, 5 Byte
#define     LMG_HCLM3SP9TimeLength 5
#define LMG_HCLM3SP9Kelvin                      8102      // uint16_t
#define LMG_HCLM3SP9Brightness                  8104      // uint8_t
#define LMG_HCLM4SP0Time                        8105      // char*, 5 Byte
#define     LMG_HCLM4SP0TimeLength 5
#define LMG_HCLM4SP0Kelvin                      8110      // uint16_t
#define LMG_HCLM4SP0Brightness                  8112      // uint8_t
#define LMG_HCLM4SP1Time                        8113      // char*, 5 Byte
#define     LMG_HCLM4SP1TimeLength 5
#define LMG_HCLM4SP1Kelvin                      8118      // uint16_t
#define LMG_HCLM4SP1Brightness                  8120      // uint8_t
#define LMG_HCLM4SP2Time                        8121      // char*, 5 Byte
#define     LMG_HCLM4SP2TimeLength 5
#define LMG_HCLM4SP2Kelvin                      8126      // uint16_t
#define LMG_HCLM4SP2Brightness                  8128      // uint8_t
#define LMG_HCLM4SP3Time                        8129      // char*, 5 Byte
#define     LMG_HCLM4SP3TimeLength 5
#define LMG_HCLM4SP3Kelvin                      8134      // uint16_t
#define LMG_HCLM4SP3Brightness                  8136      // uint8_t
#define LMG_HCLM4SP4Time                        8137      // char*, 5 Byte
#define     LMG_HCLM4SP4TimeLength 5
#define LMG_HCLM4SP4Kelvin                      8142      // uint16_t
#define LMG_HCLM4SP4Brightness                  8144      // uint8_t
#define LMG_HCLM4SP5Time                        8145      // char*, 5 Byte
#define     LMG_HCLM4SP5TimeLength 5
#define LMG_HCLM4SP5Kelvin                      8150      // uint16_t
#define LMG_HCLM4SP5Brightness                  8152      // uint8_t
#define LMG_HCLM4SP6Time                        8153      // char*, 5 Byte
#define     LMG_HCLM4SP6TimeLength 5
#define LMG_HCLM4SP6Kelvin                      8158      // uint16_t
#define LMG_HCLM4SP6Brightness                  8160      // uint8_t
#define LMG_HCLM4SP7Time                        8161      // char*, 5 Byte
#define     LMG_HCLM4SP7TimeLength 5
#define LMG_HCLM4SP7Kelvin                      8166      // uint16_t
#define LMG_HCLM4SP7Brightness                  8168      // uint8_t
#define LMG_HCLM4SP8Time                        8169      // char*, 5 Byte
#define     LMG_HCLM4SP8TimeLength 5
#define LMG_HCLM4SP8Kelvin                      8174      // uint16_t
#define LMG_HCLM4SP8Brightness                  8176      // uint8_t
#define LMG_HCLM4SP9Time                        8177      // char*, 5 Byte
#define     LMG_HCLM4SP9TimeLength 5
#define LMG_HCLM4SP9Kelvin                      8182      // uint16_t
#define LMG_HCLM4SP9Brightness                  8184      // uint8_t
#define LMG_HCLM5SP0Time                        8360      // char*, 5 Byte
#define     LMG_HCLM5SP0TimeLength 5
#define LMG_HCLM5SP0Kelvin                      8365      // uint16_t
#define LMG_HCLM5SP0Brightness                  8367      // uint8_t
#define LMG_HCLM5SP1Time                        8368      // char*, 5 Byte
#define     LMG_HCLM5SP1TimeLength 5
#define LMG_HCLM5SP1Kelvin                      8373      // uint16_t
#define LMG_HCLM5SP1Brightness                  8375      // uint8_t
#define LMG_HCLM5SP2Time                        8376      // char*, 5 Byte
#define     LMG_HCLM5SP2TimeLength 5
#define LMG_HCLM5SP2Kelvin                      8381      // uint16_t
#define LMG_HCLM5SP2Brightness                  8383      // uint8_t
#define LMG_HCLM5SP3Time                        8384      // char*, 5 Byte
#define     LMG_HCLM5SP3TimeLength 5
#define LMG_HCLM5SP3Kelvin                      8389      // uint16_t
#define LMG_HCLM5SP3Brightness                  8391      // uint8_t
#define LMG_HCLM5SP4Time                        8392      // char*, 5 Byte
#define     LMG_HCLM5SP4TimeLength 5
#define LMG_HCLM5SP4Kelvin                      8397      // uint16_t
#define LMG_HCLM5SP4Brightness                  8399      // uint8_t
#define LMG_HCLM5SP5Time                        8400      // char*, 5 Byte
#define     LMG_HCLM5SP5TimeLength 5
#define LMG_HCLM5SP5Kelvin                      8405      // uint16_t
#define LMG_HCLM5SP5Brightness                  8407      // uint8_t
#define LMG_HCLM5SP6Time                        8408      // char*, 5 Byte
#define     LMG_HCLM5SP6TimeLength 5
#define LMG_HCLM5SP6Kelvin                      8413      // uint16_t
#define LMG_HCLM5SP6Brightness                  8415      // uint8_t
#define LMG_HCLM5SP7Time                        8416      // char*, 5 Byte
#define     LMG_HCLM5SP7TimeLength 5
#define LMG_HCLM5SP7Kelvin                      8421      // uint16_t
#define LMG_HCLM5SP7Brightness                  8423      // uint8_t
#define LMG_HCLM5SP8Time                        8424      // char*, 5 Byte
#define     LMG_HCLM5SP8TimeLength 5
#define LMG_HCLM5SP8Kelvin                      8429      // uint16_t
#define LMG_HCLM5SP8Brightness                  8431      // uint8_t
#define LMG_HCLM5SP9Time                        8432      // char*, 5 Byte
#define     LMG_HCLM5SP9TimeLength 5
#define LMG_HCLM5SP9Kelvin                      8437      // uint16_t
#define LMG_HCLM5SP9Brightness                  8439      // uint8_t
#define LMG_HCLM6SP0Time                        8440      // char*, 5 Byte
#define     LMG_HCLM6SP0TimeLength 5
#define LMG_HCLM6SP0Kelvin                      8445      // uint16_t
#define LMG_HCLM6SP0Brightness                  8447      // uint8_t
#define LMG_HCLM6SP1Time                        8448      // char*, 5 Byte
#define     LMG_HCLM6SP1TimeLength 5
#define LMG_HCLM6SP1Kelvin                      8453      // uint16_t
#define LMG_HCLM6SP1Brightness                  8455      // uint8_t
#define LMG_HCLM6SP2Time                        8456      // char*, 5 Byte
#define     LMG_HCLM6SP2TimeLength 5
#define LMG_HCLM6SP2Kelvin                      8461      // uint16_t
#define LMG_HCLM6SP2Brightness                  8463      // uint8_t
#define LMG_HCLM6SP3Time                        8464      // char*, 5 Byte
#define     LMG_HCLM6SP3TimeLength 5
#define LMG_HCLM6SP3Kelvin                      8469      // uint16_t
#define LMG_HCLM6SP3Brightness                  8471      // uint8_t
#define LMG_HCLM6SP4Time                        8472      // char*, 5 Byte
#define     LMG_HCLM6SP4TimeLength 5
#define LMG_HCLM6SP4Kelvin                      8477      // uint16_t
#define LMG_HCLM6SP4Brightness                  8479      // uint8_t
#define LMG_HCLM6SP5Time                        8480      // char*, 5 Byte
#define     LMG_HCLM6SP5TimeLength 5
#define LMG_HCLM6SP5Kelvin                      8485      // uint16_t
#define LMG_HCLM6SP5Brightness                  8487      // uint8_t
#define LMG_HCLM6SP6Time                        8488      // char*, 5 Byte
#define     LMG_HCLM6SP6TimeLength 5
#define LMG_HCLM6SP6Kelvin                      8493      // uint16_t
#define LMG_HCLM6SP6Brightness                  8495      // uint8_t
#define LMG_HCLM6SP7Time                        8496      // char*, 5 Byte
#define     LMG_HCLM6SP7TimeLength 5
#define LMG_HCLM6SP7Kelvin                      8501      // uint16_t
#define LMG_HCLM6SP7Brightness                  8503      // uint8_t
#define LMG_HCLM6SP8Time                        8504      // char*, 5 Byte
#define     LMG_HCLM6SP8TimeLength 5
#define LMG_HCLM6SP8Kelvin                      8509      // uint16_t
#define LMG_HCLM6SP8Brightness                  8511      // uint8_t
#define LMG_HCLM6SP9Time                        8512      // char*, 5 Byte
#define     LMG_HCLM6SP9TimeLength 5
#define LMG_HCLM6SP9Kelvin                      8517      // uint16_t
#define LMG_HCLM6SP9Brightness                  8519      // uint8_t
#define LMG_HCLM7SP0Time                        8520      // char*, 5 Byte
#define     LMG_HCLM7SP0TimeLength 5
#define LMG_HCLM7SP0Kelvin                      8525      // uint16_t
#define LMG_HCLM7SP0Brightness                  8527      // uint8_t
#define LMG_HCLM7SP1Time                        8528      // char*, 5 Byte
#define     LMG_HCLM7SP1TimeLength 5
#define LMG_HCLM7SP1Kelvin                      8533      // uint16_t
#define LMG_HCLM7SP1Brightness                  8535      // uint8_t
#define LMG_HCLM7SP2Time                        8536      // char*, 5 Byte
#define     LMG_HCLM7SP2TimeLength 5
#define LMG_HCLM7SP2Kelvin                      8541      // uint16_t
#define LMG_HCLM7SP2Brightness                  8543      // uint8_t
#define LMG_HCLM7SP3Time                        8544      // char*, 5 Byte
#define     LMG_HCLM7SP3TimeLength 5
#define LMG_HCLM7SP3Kelvin                      8549      // uint16_t
#define LMG_HCLM7SP3Brightness                  8551      // uint8_t
#define LMG_HCLM7SP4Time                        8552      // char*, 5 Byte
#define     LMG_HCLM7SP4TimeLength 5
#define LMG_HCLM7SP4Kelvin                      8557      // uint16_t
#define LMG_HCLM7SP4Brightness                  8559      // uint8_t
#define LMG_HCLM7SP5Time                        8560      // char*, 5 Byte
#define     LMG_HCLM7SP5TimeLength 5
#define LMG_HCLM7SP5Kelvin                      8565      // uint16_t
#define LMG_HCLM7SP5Brightness                  8567      // uint8_t
#define LMG_HCLM7SP6Time                        8568      // char*, 5 Byte
#define     LMG_HCLM7SP6TimeLength 5
#define LMG_HCLM7SP6Kelvin                      8573      // uint16_t
#define LMG_HCLM7SP6Brightness                  8575      // uint8_t
#define LMG_HCLM7SP7Time                        8576      // char*, 5 Byte
#define     LMG_HCLM7SP7TimeLength 5
#define LMG_HCLM7SP7Kelvin                      8581      // uint16_t
#define LMG_HCLM7SP7Brightness                  8583      // uint8_t
#define LMG_HCLM7SP8Time                        8584      // char*, 5 Byte
#define     LMG_HCLM7SP8TimeLength 5
#define LMG_HCLM7SP8Kelvin                      8589      // uint16_t
#define LMG_HCLM7SP8Brightness                  8591      // uint8_t
#define LMG_HCLM7SP9Time                        8592      // char*, 5 Byte
#define     LMG_HCLM7SP9TimeLength 5
#define LMG_HCLM7SP9Kelvin                      8597      // uint16_t
#define LMG_HCLM7SP9Brightness                  8599      // uint8_t
#define LMG_HCLM8SP0Time                        8600      // char*, 5 Byte
#define     LMG_HCLM8SP0TimeLength 5
#define LMG_HCLM8SP0Kelvin                      8605      // uint16_t
#define LMG_HCLM8SP0Brightness                  8607      // uint8_t
#define LMG_HCLM8SP1Time                        8608      // char*, 5 Byte
#define     LMG_HCLM8SP1TimeLength 5
#define LMG_HCLM8SP1Kelvin                      8613      // uint16_t
#define LMG_HCLM8SP1Brightness                  8615      // uint8_t
#define LMG_HCLM8SP2Time                        8616      // char*, 5 Byte
#define     LMG_HCLM8SP2TimeLength 5
#define LMG_HCLM8SP2Kelvin                      8621      // uint16_t
#define LMG_HCLM8SP2Brightness                  8623      // uint8_t
#define LMG_HCLM8SP3Time                        8624      // char*, 5 Byte
#define     LMG_HCLM8SP3TimeLength 5
#define LMG_HCLM8SP3Kelvin                      8629      // uint16_t
#define LMG_HCLM8SP3Brightness                  8631      // uint8_t
#define LMG_HCLM8SP4Time                        8632      // char*, 5 Byte
#define     LMG_HCLM8SP4TimeLength 5
#define LMG_HCLM8SP4Kelvin                      8637      // uint16_t
#define LMG_HCLM8SP4Brightness                  8639      // uint8_t
#define LMG_HCLM8SP5Time                        8640      // char*, 5 Byte
#define     LMG_HCLM8SP5TimeLength 5
#define LMG_HCLM8SP5Kelvin                      8645      // uint16_t
#define LMG_HCLM8SP5Brightness                  8647      // uint8_t
#define LMG_HCLM8SP6Time                        8648      // char*, 5 Byte
#define     LMG_HCLM8SP6TimeLength 5
#define LMG_HCLM8SP6Kelvin                      8653      // uint16_t
#define LMG_HCLM8SP6Brightness                  8655      // uint8_t
#define LMG_HCLM8SP7Time                        8656      // char*, 5 Byte
#define     LMG_HCLM8SP7TimeLength 5
#define LMG_HCLM8SP7Kelvin                      8661      // uint16_t
#define LMG_HCLM8SP7Brightness                  8663      // uint8_t
#define LMG_HCLM8SP8Time                        8664      // char*, 5 Byte
#define     LMG_HCLM8SP8TimeLength 5
#define LMG_HCLM8SP8Kelvin                      8669      // uint16_t
#define LMG_HCLM8SP8Brightness                  8671      // uint8_t
#define LMG_HCLM8SP9Time                        8672      // char*, 5 Byte
#define     LMG_HCLM8SP9TimeLength 5
#define LMG_HCLM8SP9Kelvin                      8677      // uint16_t
#define LMG_HCLM8SP9Brightness                  8679      // uint8_t
#define LMG_HCLM1Name                           8185      // char*, 25 Byte
#define     LMG_HCLM1NameLength 25
#define LMG_HCLM2Name                           8210      // char*, 25 Byte
#define     LMG_HCLM2NameLength 25
#define LMG_HCLM3Name                           8235      // char*, 25 Byte
#define     LMG_HCLM3NameLength 25
#define LMG_HCLM4Name                           8260      // char*, 25 Byte
#define     LMG_HCLM4NameLength 25
#define LMG_HCLM5Name                           8680      // char*, 25 Byte
#define     LMG_HCLM5NameLength 25
#define LMG_HCLM6Name                           8705      // char*, 25 Byte
#define     LMG_HCLM6NameLength 25
#define LMG_HCLM7Name                           8730      // char*, 25 Byte
#define     LMG_HCLM7NameLength 25
#define LMG_HCLM8Name                           8755      // char*, 25 Byte
#define     LMG_HCLM8NameLength 25
#define LMG_HCLM1CurveType                      8285      // 8 Bits, Bit 7-0
#define LMG_HCLM1SlewRate                       8286      // uint16_t
#define LMG_HCLM1ManualKelvin                   8288      // uint16_t
#define LMG_HCLM1Sunrise                        8290      // char*, 5 Byte
#define     LMG_HCLM1SunriseLength 5
#define LMG_HCLM1Sunset                         8295      // char*, 5 Byte
#define     LMG_HCLM1SunsetLength 5
#define LMG_HCLM1SunriseOffset                  8300      // int16_t
#define LMG_HCLM1SunsetOffset                   8302      // int16_t
#define LMG_HCLM1AstroMinKelvin                 8877      // uint16_t
#define LMG_HCLM1AstroMaxKelvin                 8879      // uint16_t
#define LMG_HCLM1AstroMinBrightness             8881      // uint8_t
#define LMG_HCLM1AstroMaxBrightness             8882      // uint8_t
#define LMG_HCLM2CurveType                      8304      // 8 Bits, Bit 7-0
#define LMG_HCLM2SlewRate                       8305      // uint16_t
#define LMG_HCLM2ManualKelvin                   8307      // uint16_t
#define LMG_HCLM2Sunrise                        8309      // char*, 5 Byte
#define     LMG_HCLM2SunriseLength 5
#define LMG_HCLM2Sunset                         8314      // char*, 5 Byte
#define     LMG_HCLM2SunsetLength 5
#define LMG_HCLM2SunriseOffset                  8319      // int16_t
#define LMG_HCLM2SunsetOffset                   8321      // int16_t
#define LMG_HCLM2AstroMinKelvin                 8883      // uint16_t
#define LMG_HCLM2AstroMaxKelvin                 8885      // uint16_t
#define LMG_HCLM2AstroMinBrightness             8887      // uint8_t
#define LMG_HCLM2AstroMaxBrightness             8888      // uint8_t
#define LMG_HCLM3CurveType                      8323      // 8 Bits, Bit 7-0
#define LMG_HCLM3SlewRate                       8324      // uint16_t
#define LMG_HCLM3ManualKelvin                   8326      // uint16_t
#define LMG_HCLM3Sunrise                        8328      // char*, 5 Byte
#define     LMG_HCLM3SunriseLength 5
#define LMG_HCLM3Sunset                         8333      // char*, 5 Byte
#define     LMG_HCLM3SunsetLength 5
#define LMG_HCLM3SunriseOffset                  8338      // int16_t
#define LMG_HCLM3SunsetOffset                   8340      // int16_t
#define LMG_HCLM3AstroMinKelvin                 8889      // uint16_t
#define LMG_HCLM3AstroMaxKelvin                 8891      // uint16_t
#define LMG_HCLM3AstroMinBrightness             8893      // uint8_t
#define LMG_HCLM3AstroMaxBrightness             8894      // uint8_t
#define LMG_HCLM4CurveType                      8342      // 8 Bits, Bit 7-0
#define LMG_HCLM4SlewRate                       8343      // uint16_t
#define LMG_HCLM4ManualKelvin                   8345      // uint16_t
#define LMG_HCLM4Sunrise                        8347      // char*, 5 Byte
#define     LMG_HCLM4SunriseLength 5
#define LMG_HCLM4Sunset                         8352      // char*, 5 Byte
#define     LMG_HCLM4SunsetLength 5
#define LMG_HCLM4SunriseOffset                  8357      // int16_t
#define LMG_HCLM4SunsetOffset                   8359      // int16_t
#define LMG_HCLM4AstroMinKelvin                 8895      // uint16_t
#define LMG_HCLM4AstroMaxKelvin                 8897      // uint16_t
#define LMG_HCLM4AstroMinBrightness             8899      // uint8_t
#define LMG_HCLM4AstroMaxBrightness             8900      // uint8_t
#define LMG_HCLM5CurveType                      8780      // 8 Bits, Bit 7-0
#define LMG_HCLM5SlewRate                       8781      // uint16_t
#define LMG_HCLM5ManualKelvin                   8783      // uint16_t
#define LMG_HCLM5Sunrise                        8785      // char*, 5 Byte
#define     LMG_HCLM5SunriseLength 5
#define LMG_HCLM5Sunset                         8790      // char*, 5 Byte
#define     LMG_HCLM5SunsetLength 5
#define LMG_HCLM5SunriseOffset                  8795      // int16_t
#define LMG_HCLM5SunsetOffset                   8797      // int16_t
#define LMG_HCLM5AstroMinKelvin                 8901      // uint16_t
#define LMG_HCLM5AstroMaxKelvin                 8903      // uint16_t
#define LMG_HCLM5AstroMinBrightness             8905      // uint8_t
#define LMG_HCLM5AstroMaxBrightness             8906      // uint8_t
#define LMG_HCLM6CurveType                      8799      // 8 Bits, Bit 7-0
#define LMG_HCLM6SlewRate                       8800      // uint16_t
#define LMG_HCLM6ManualKelvin                   8802      // uint16_t
#define LMG_HCLM6Sunrise                        8804      // char*, 5 Byte
#define     LMG_HCLM6SunriseLength 5
#define LMG_HCLM6Sunset                         8809      // char*, 5 Byte
#define     LMG_HCLM6SunsetLength 5
#define LMG_HCLM6SunriseOffset                  8814      // int16_t
#define LMG_HCLM6SunsetOffset                   8816      // int16_t
#define LMG_HCLM6AstroMinKelvin                 8907      // uint16_t
#define LMG_HCLM6AstroMaxKelvin                 8909      // uint16_t
#define LMG_HCLM6AstroMinBrightness             8911      // uint8_t
#define LMG_HCLM6AstroMaxBrightness             8912      // uint8_t
#define LMG_HCLM7CurveType                      8818      // 8 Bits, Bit 7-0
#define LMG_HCLM7SlewRate                       8819      // uint16_t
#define LMG_HCLM7ManualKelvin                   8821      // uint16_t
#define LMG_HCLM7Sunrise                        8823      // char*, 5 Byte
#define     LMG_HCLM7SunriseLength 5
#define LMG_HCLM7Sunset                         8828      // char*, 5 Byte
#define     LMG_HCLM7SunsetLength 5
#define LMG_HCLM7SunriseOffset                  8833      // int16_t
#define LMG_HCLM7SunsetOffset                   8835      // int16_t
#define LMG_HCLM7AstroMinKelvin                 8913      // uint16_t
#define LMG_HCLM7AstroMaxKelvin                 8915      // uint16_t
#define LMG_HCLM7AstroMinBrightness             8917      // uint8_t
#define LMG_HCLM7AstroMaxBrightness             8918      // uint8_t
#define LMG_HCLM8CurveType                      8837      // 8 Bits, Bit 7-0
#define LMG_HCLM8SlewRate                       8838      // uint16_t
#define LMG_HCLM8ManualKelvin                   8840      // uint16_t
#define LMG_HCLM8Sunrise                        8842      // char*, 5 Byte
#define     LMG_HCLM8SunriseLength 5
#define LMG_HCLM8Sunset                         8847      // char*, 5 Byte
#define     LMG_HCLM8SunsetLength 5
#define LMG_HCLM8SunriseOffset                  8852      // int16_t
#define LMG_HCLM8SunsetOffset                   8854      // int16_t
#define LMG_HCLM8AstroMinKelvin                 8919      // uint16_t
#define LMG_HCLM8AstroMaxKelvin                 8921      // uint16_t
#define LMG_HCLM8AstroMinBrightness             8923      // uint8_t
#define LMG_HCLM8AstroMaxBrightness             8924      // uint8_t
#define LMG_HCLM1SetpointCount                  8925      // 8 Bits, Bit 7-0
#define LMG_HCLM2SetpointCount                  8926      // 8 Bits, Bit 7-0
#define LMG_HCLM3SetpointCount                  8927      // 8 Bits, Bit 7-0
#define LMG_HCLM4SetpointCount                  8928      // 8 Bits, Bit 7-0
#define LMG_HCLM5SetpointCount                  8929      // 8 Bits, Bit 7-0
#define LMG_HCLM6SetpointCount                  8930      // 8 Bits, Bit 7-0
#define LMG_HCLM7SetpointCount                  8931      // 8 Bits, Bit 7-0
#define LMG_HCLM8SetpointCount                  8932      // 8 Bits, Bit 7-0
#define LMG_HCLM1SeasonMode                     9545      // 8 Bits, Bit 7-0
#define LMG_HCLM1DSTOffsetDays                  9546      // int8_t
#define LMG_HCLM1SummerStartMonth               9547      // uint8_t
#define LMG_HCLM1SummerStartDay                 9548      // uint8_t
#define LMG_HCLM1SummerEndMonth                 9549      // uint8_t
#define LMG_HCLM1SummerEndDay                   9550      // uint8_t
#define LMG_HCLM1SP0SummerKelvin                9553      // uint16_t
#define LMG_HCLM1SP1SummerKelvin                9555      // uint16_t
#define LMG_HCLM1SP2SummerKelvin                9557      // uint16_t
#define LMG_HCLM1SP3SummerKelvin                9559      // uint16_t
#define LMG_HCLM1SP4SummerKelvin                9561      // uint16_t
#define LMG_HCLM1SP5SummerKelvin                9563      // uint16_t
#define LMG_HCLM1SP6SummerKelvin                9565      // uint16_t
#define LMG_HCLM1SP7SummerKelvin                9567      // uint16_t
#define LMG_HCLM1SP8SummerKelvin                9569      // uint16_t
#define LMG_HCLM1SP9SummerKelvin                9571      // uint16_t
#define LMG_HCLM1SP0SummerBrightness            9573      // uint8_t
#define LMG_HCLM1SP1SummerBrightness            9574      // uint8_t
#define LMG_HCLM1SP2SummerBrightness            9575      // uint8_t
#define LMG_HCLM1SP3SummerBrightness            9576      // uint8_t
#define LMG_HCLM1SP4SummerBrightness            9577      // uint8_t
#define LMG_HCLM1SP5SummerBrightness            9578      // uint8_t
#define LMG_HCLM1SP6SummerBrightness            9579      // uint8_t
#define LMG_HCLM1SP7SummerBrightness            9580      // uint8_t
#define LMG_HCLM1SP8SummerBrightness            9581      // uint8_t
#define LMG_HCLM1SP9SummerBrightness            9582      // uint8_t
#define LMG_HCLM2SeasonMode                     9583      // 8 Bits, Bit 7-0
#define LMG_HCLM2DSTOffsetDays                  9584      // int8_t
#define LMG_HCLM2SummerStartMonth               9585      // uint8_t
#define LMG_HCLM2SummerStartDay                 9586      // uint8_t
#define LMG_HCLM2SummerEndMonth                 9587      // uint8_t
#define LMG_HCLM2SummerEndDay                   9588      // uint8_t
#define LMG_HCLM2SP0SummerKelvin                9591      // uint16_t
#define LMG_HCLM2SP1SummerKelvin                9593      // uint16_t
#define LMG_HCLM2SP2SummerKelvin                9595      // uint16_t
#define LMG_HCLM2SP3SummerKelvin                9597      // uint16_t
#define LMG_HCLM2SP4SummerKelvin                9599      // uint16_t
#define LMG_HCLM2SP5SummerKelvin                9601      // uint16_t
#define LMG_HCLM2SP6SummerKelvin                9603      // uint16_t
#define LMG_HCLM2SP7SummerKelvin                9605      // uint16_t
#define LMG_HCLM2SP8SummerKelvin                9607      // uint16_t
#define LMG_HCLM2SP9SummerKelvin                9609      // uint16_t
#define LMG_HCLM2SP0SummerBrightness            9611      // uint8_t
#define LMG_HCLM2SP1SummerBrightness            9612      // uint8_t
#define LMG_HCLM2SP2SummerBrightness            9613      // uint8_t
#define LMG_HCLM2SP3SummerBrightness            9614      // uint8_t
#define LMG_HCLM2SP4SummerBrightness            9615      // uint8_t
#define LMG_HCLM2SP5SummerBrightness            9616      // uint8_t
#define LMG_HCLM2SP6SummerBrightness            9617      // uint8_t
#define LMG_HCLM2SP7SummerBrightness            9618      // uint8_t
#define LMG_HCLM2SP8SummerBrightness            9619      // uint8_t
#define LMG_HCLM2SP9SummerBrightness            9620      // uint8_t
#define LMG_HCLM3SeasonMode                     9621      // 8 Bits, Bit 7-0
#define LMG_HCLM3DSTOffsetDays                  9622      // int8_t
#define LMG_HCLM3SummerStartMonth               9623      // uint8_t
#define LMG_HCLM3SummerStartDay                 9624      // uint8_t
#define LMG_HCLM3SummerEndMonth                 9625      // uint8_t
#define LMG_HCLM3SummerEndDay                   9626      // uint8_t
#define LMG_HCLM3SP0SummerKelvin                9629      // uint16_t
#define LMG_HCLM3SP1SummerKelvin                9631      // uint16_t
#define LMG_HCLM3SP2SummerKelvin                9633      // uint16_t
#define LMG_HCLM3SP3SummerKelvin                9635      // uint16_t
#define LMG_HCLM3SP4SummerKelvin                9637      // uint16_t
#define LMG_HCLM3SP5SummerKelvin                9639      // uint16_t
#define LMG_HCLM3SP6SummerKelvin                9641      // uint16_t
#define LMG_HCLM3SP7SummerKelvin                9643      // uint16_t
#define LMG_HCLM3SP8SummerKelvin                9645      // uint16_t
#define LMG_HCLM3SP9SummerKelvin                9647      // uint16_t
#define LMG_HCLM3SP0SummerBrightness            9649      // uint8_t
#define LMG_HCLM3SP1SummerBrightness            9650      // uint8_t
#define LMG_HCLM3SP2SummerBrightness            9651      // uint8_t
#define LMG_HCLM3SP3SummerBrightness            9652      // uint8_t
#define LMG_HCLM3SP4SummerBrightness            9653      // uint8_t
#define LMG_HCLM3SP5SummerBrightness            9654      // uint8_t
#define LMG_HCLM3SP6SummerBrightness            9655      // uint8_t
#define LMG_HCLM3SP7SummerBrightness            9656      // uint8_t
#define LMG_HCLM3SP8SummerBrightness            9657      // uint8_t
#define LMG_HCLM3SP9SummerBrightness            9658      // uint8_t
#define LMG_HCLM4SeasonMode                     9659      // 8 Bits, Bit 7-0
#define LMG_HCLM4DSTOffsetDays                  9660      // int8_t
#define LMG_HCLM4SummerStartMonth               9661      // uint8_t
#define LMG_HCLM4SummerStartDay                 9662      // uint8_t
#define LMG_HCLM4SummerEndMonth                 9663      // uint8_t
#define LMG_HCLM4SummerEndDay                   9664      // uint8_t
#define LMG_HCLM4SP0SummerKelvin                9667      // uint16_t
#define LMG_HCLM4SP1SummerKelvin                9669      // uint16_t
#define LMG_HCLM4SP2SummerKelvin                9671      // uint16_t
#define LMG_HCLM4SP3SummerKelvin                9673      // uint16_t
#define LMG_HCLM4SP4SummerKelvin                9675      // uint16_t
#define LMG_HCLM4SP5SummerKelvin                9677      // uint16_t
#define LMG_HCLM4SP6SummerKelvin                9679      // uint16_t
#define LMG_HCLM4SP7SummerKelvin                9681      // uint16_t
#define LMG_HCLM4SP8SummerKelvin                9683      // uint16_t
#define LMG_HCLM4SP9SummerKelvin                9685      // uint16_t
#define LMG_HCLM4SP0SummerBrightness            9687      // uint8_t
#define LMG_HCLM4SP1SummerBrightness            9688      // uint8_t
#define LMG_HCLM4SP2SummerBrightness            9689      // uint8_t
#define LMG_HCLM4SP3SummerBrightness            9690      // uint8_t
#define LMG_HCLM4SP4SummerBrightness            9691      // uint8_t
#define LMG_HCLM4SP5SummerBrightness            9692      // uint8_t
#define LMG_HCLM4SP6SummerBrightness            9693      // uint8_t
#define LMG_HCLM4SP7SummerBrightness            9694      // uint8_t
#define LMG_HCLM4SP8SummerBrightness            9695      // uint8_t
#define LMG_HCLM4SP9SummerBrightness            9696      // uint8_t
#define LMG_HCLM5SeasonMode                     9697      // 8 Bits, Bit 7-0
#define LMG_HCLM5DSTOffsetDays                  9698      // int8_t
#define LMG_HCLM5SummerStartMonth               9699      // uint8_t
#define LMG_HCLM5SummerStartDay                 9700      // uint8_t
#define LMG_HCLM5SummerEndMonth                 9701      // uint8_t
#define LMG_HCLM5SummerEndDay                   9702      // uint8_t
#define LMG_HCLM5SP0SummerKelvin                9705      // uint16_t
#define LMG_HCLM5SP1SummerKelvin                9707      // uint16_t
#define LMG_HCLM5SP2SummerKelvin                9709      // uint16_t
#define LMG_HCLM5SP3SummerKelvin                9711      // uint16_t
#define LMG_HCLM5SP4SummerKelvin                9713      // uint16_t
#define LMG_HCLM5SP5SummerKelvin                9715      // uint16_t
#define LMG_HCLM5SP6SummerKelvin                9717      // uint16_t
#define LMG_HCLM5SP7SummerKelvin                9719      // uint16_t
#define LMG_HCLM5SP8SummerKelvin                9721      // uint16_t
#define LMG_HCLM5SP9SummerKelvin                9723      // uint16_t
#define LMG_HCLM5SP0SummerBrightness            9725      // uint8_t
#define LMG_HCLM5SP1SummerBrightness            9726      // uint8_t
#define LMG_HCLM5SP2SummerBrightness            9727      // uint8_t
#define LMG_HCLM5SP3SummerBrightness            9728      // uint8_t
#define LMG_HCLM5SP4SummerBrightness            9729      // uint8_t
#define LMG_HCLM5SP5SummerBrightness            9730      // uint8_t
#define LMG_HCLM5SP6SummerBrightness            9731      // uint8_t
#define LMG_HCLM5SP7SummerBrightness            9732      // uint8_t
#define LMG_HCLM5SP8SummerBrightness            9733      // uint8_t
#define LMG_HCLM5SP9SummerBrightness            9734      // uint8_t
#define LMG_HCLM6SeasonMode                     9735      // 8 Bits, Bit 7-0
#define LMG_HCLM6DSTOffsetDays                  9736      // int8_t
#define LMG_HCLM6SummerStartMonth               9737      // uint8_t
#define LMG_HCLM6SummerStartDay                 9738      // uint8_t
#define LMG_HCLM6SummerEndMonth                 9739      // uint8_t
#define LMG_HCLM6SummerEndDay                   9740      // uint8_t
#define LMG_HCLM6SP0SummerKelvin                9743      // uint16_t
#define LMG_HCLM6SP1SummerKelvin                9745      // uint16_t
#define LMG_HCLM6SP2SummerKelvin                9747      // uint16_t
#define LMG_HCLM6SP3SummerKelvin                9749      // uint16_t
#define LMG_HCLM6SP4SummerKelvin                9751      // uint16_t
#define LMG_HCLM6SP5SummerKelvin                9753      // uint16_t
#define LMG_HCLM6SP6SummerKelvin                9755      // uint16_t
#define LMG_HCLM6SP7SummerKelvin                9757      // uint16_t
#define LMG_HCLM6SP8SummerKelvin                9759      // uint16_t
#define LMG_HCLM6SP9SummerKelvin                9761      // uint16_t
#define LMG_HCLM6SP0SummerBrightness            9763      // uint8_t
#define LMG_HCLM6SP1SummerBrightness            9764      // uint8_t
#define LMG_HCLM6SP2SummerBrightness            9765      // uint8_t
#define LMG_HCLM6SP3SummerBrightness            9766      // uint8_t
#define LMG_HCLM6SP4SummerBrightness            9767      // uint8_t
#define LMG_HCLM6SP5SummerBrightness            9768      // uint8_t
#define LMG_HCLM6SP6SummerBrightness            9769      // uint8_t
#define LMG_HCLM6SP7SummerBrightness            9770      // uint8_t
#define LMG_HCLM6SP8SummerBrightness            9771      // uint8_t
#define LMG_HCLM6SP9SummerBrightness            9772      // uint8_t
#define LMG_HCLM7SeasonMode                     9773      // 8 Bits, Bit 7-0
#define LMG_HCLM7DSTOffsetDays                  9774      // int8_t
#define LMG_HCLM7SummerStartMonth               9775      // uint8_t
#define LMG_HCLM7SummerStartDay                 9776      // uint8_t
#define LMG_HCLM7SummerEndMonth                 9777      // uint8_t
#define LMG_HCLM7SummerEndDay                   9778      // uint8_t
#define LMG_HCLM7SP0SummerKelvin                9781      // uint16_t
#define LMG_HCLM7SP1SummerKelvin                9783      // uint16_t
#define LMG_HCLM7SP2SummerKelvin                9785      // uint16_t
#define LMG_HCLM7SP3SummerKelvin                9787      // uint16_t
#define LMG_HCLM7SP4SummerKelvin                9789      // uint16_t
#define LMG_HCLM7SP5SummerKelvin                9791      // uint16_t
#define LMG_HCLM7SP6SummerKelvin                9793      // uint16_t
#define LMG_HCLM7SP7SummerKelvin                9795      // uint16_t
#define LMG_HCLM7SP8SummerKelvin                9797      // uint16_t
#define LMG_HCLM7SP9SummerKelvin                9799      // uint16_t
#define LMG_HCLM7SP0SummerBrightness            9801      // uint8_t
#define LMG_HCLM7SP1SummerBrightness            9802      // uint8_t
#define LMG_HCLM7SP2SummerBrightness            9803      // uint8_t
#define LMG_HCLM7SP3SummerBrightness            9804      // uint8_t
#define LMG_HCLM7SP4SummerBrightness            9805      // uint8_t
#define LMG_HCLM7SP5SummerBrightness            9806      // uint8_t
#define LMG_HCLM7SP6SummerBrightness            9807      // uint8_t
#define LMG_HCLM7SP7SummerBrightness            9808      // uint8_t
#define LMG_HCLM7SP8SummerBrightness            9809      // uint8_t
#define LMG_HCLM7SP9SummerBrightness            9810      // uint8_t
#define LMG_HCLM8SeasonMode                     9811      // 8 Bits, Bit 7-0
#define LMG_HCLM8DSTOffsetDays                  9812      // int8_t
#define LMG_HCLM8SummerStartMonth               9813      // uint8_t
#define LMG_HCLM8SummerStartDay                 9814      // uint8_t
#define LMG_HCLM8SummerEndMonth                 9815      // uint8_t
#define LMG_HCLM8SummerEndDay                   9816      // uint8_t
#define LMG_HCLM8SP0SummerKelvin                9819      // uint16_t
#define LMG_HCLM8SP1SummerKelvin                9821      // uint16_t
#define LMG_HCLM8SP2SummerKelvin                9823      // uint16_t
#define LMG_HCLM8SP3SummerKelvin                9825      // uint16_t
#define LMG_HCLM8SP4SummerKelvin                9827      // uint16_t
#define LMG_HCLM8SP5SummerKelvin                9829      // uint16_t
#define LMG_HCLM8SP6SummerKelvin                9831      // uint16_t
#define LMG_HCLM8SP7SummerKelvin                9833      // uint16_t
#define LMG_HCLM8SP8SummerKelvin                9835      // uint16_t
#define LMG_HCLM8SP9SummerKelvin                9837      // uint16_t
#define LMG_HCLM8SP0SummerBrightness            9839      // uint8_t
#define LMG_HCLM8SP1SummerBrightness            9840      // uint8_t
#define LMG_HCLM8SP2SummerBrightness            9841      // uint8_t
#define LMG_HCLM8SP3SummerBrightness            9842      // uint8_t
#define LMG_HCLM8SP4SummerBrightness            9843      // uint8_t
#define LMG_HCLM8SP5SummerBrightness            9844      // uint8_t
#define LMG_HCLM8SP6SummerBrightness            9845      // uint8_t
#define LMG_HCLM8SP7SummerBrightness            9846      // uint8_t
#define LMG_HCLM8SP8SummerBrightness            9847      // uint8_t
#define LMG_HCLM8SP9SummerBrightness            9848      // uint8_t
#define LMG_HCLM1AdaptiveMode                   10074      // 8 Bits, Bit 7-0
#define LMG_HCLM1AdaptiveActiveMode             10075      // 8 Bits, Bit 7-0
#define LMG_HCLM1AdaptiveCeilToHCL              10076      // 8 Bits, Bit 7-0
#define LMG_HCLM1AdaptiveMaxLux                 10077      // uint16_t
#define LMG_HCLM1AdaptiveMinBrightness          10079      // uint8_t
#define LMG_HCLM1AdaptiveSensorTimeout          10080      // uint8_t
#define LMG_HCLM1AdaptiveMinChange              10081      // uint8_t
#define LMG_HCLM1AdaptiveStrength               10082      // uint8_t
#define LMG_HCLM1AdaptiveKp                     10083      // 8 Bits, Bit 7-0
#define LMG_HCLM1AdaptiveDeadband               10084      // uint16_t
#define LMG_HCLM1AdaptiveStartTime              10086      // char*, 5 Byte
#define     LMG_HCLM1AdaptiveStartTimeLength 5
#define LMG_HCLM1AdaptiveEndTime                10091      // char*, 5 Byte
#define     LMG_HCLM1AdaptiveEndTimeLength 5
#define LMG_HCLM1AdaptiveDayNightPolarity       10096      // 8 Bits, Bit 7-0
#define LMG_HCLM2AdaptiveMode                   10097      // 8 Bits, Bit 7-0
#define LMG_HCLM2AdaptiveActiveMode             10098      // 8 Bits, Bit 7-0
#define LMG_HCLM2AdaptiveCeilToHCL              10099      // 8 Bits, Bit 7-0
#define LMG_HCLM2AdaptiveMaxLux                 10100      // uint16_t
#define LMG_HCLM2AdaptiveMinBrightness          10102      // uint8_t
#define LMG_HCLM2AdaptiveSensorTimeout          10103      // uint8_t
#define LMG_HCLM2AdaptiveMinChange              10104      // uint8_t
#define LMG_HCLM2AdaptiveStrength               10105      // uint8_t
#define LMG_HCLM2AdaptiveKp                     10106      // 8 Bits, Bit 7-0
#define LMG_HCLM2AdaptiveDeadband               10107      // uint16_t
#define LMG_HCLM2AdaptiveStartTime              10109      // char*, 5 Byte
#define     LMG_HCLM2AdaptiveStartTimeLength 5
#define LMG_HCLM2AdaptiveEndTime                10114      // char*, 5 Byte
#define     LMG_HCLM2AdaptiveEndTimeLength 5
#define LMG_HCLM2AdaptiveDayNightPolarity       10119      // 8 Bits, Bit 7-0
#define LMG_HCLM3AdaptiveMode                   10120      // 8 Bits, Bit 7-0
#define LMG_HCLM3AdaptiveActiveMode             10121      // 8 Bits, Bit 7-0
#define LMG_HCLM3AdaptiveCeilToHCL              10122      // 8 Bits, Bit 7-0
#define LMG_HCLM3AdaptiveMaxLux                 10123      // uint16_t
#define LMG_HCLM3AdaptiveMinBrightness          10125      // uint8_t
#define LMG_HCLM3AdaptiveSensorTimeout          10126      // uint8_t
#define LMG_HCLM3AdaptiveMinChange              10127      // uint8_t
#define LMG_HCLM3AdaptiveStrength               10128      // uint8_t
#define LMG_HCLM3AdaptiveKp                     10129      // 8 Bits, Bit 7-0
#define LMG_HCLM3AdaptiveDeadband               10130      // uint16_t
#define LMG_HCLM3AdaptiveStartTime              10132      // char*, 5 Byte
#define     LMG_HCLM3AdaptiveStartTimeLength 5
#define LMG_HCLM3AdaptiveEndTime                10137      // char*, 5 Byte
#define     LMG_HCLM3AdaptiveEndTimeLength 5
#define LMG_HCLM3AdaptiveDayNightPolarity       10142      // 8 Bits, Bit 7-0
#define LMG_HCLM4AdaptiveMode                   10143      // 8 Bits, Bit 7-0
#define LMG_HCLM4AdaptiveActiveMode             10144      // 8 Bits, Bit 7-0
#define LMG_HCLM4AdaptiveCeilToHCL              10145      // 8 Bits, Bit 7-0
#define LMG_HCLM4AdaptiveMaxLux                 10146      // uint16_t
#define LMG_HCLM4AdaptiveMinBrightness          10148      // uint8_t
#define LMG_HCLM4AdaptiveSensorTimeout          10149      // uint8_t
#define LMG_HCLM4AdaptiveMinChange              10150      // uint8_t
#define LMG_HCLM4AdaptiveStrength               10151      // uint8_t
#define LMG_HCLM4AdaptiveKp                     10152      // 8 Bits, Bit 7-0
#define LMG_HCLM4AdaptiveDeadband               10153      // uint16_t
#define LMG_HCLM4AdaptiveStartTime              10155      // char*, 5 Byte
#define     LMG_HCLM4AdaptiveStartTimeLength 5
#define LMG_HCLM4AdaptiveEndTime                10160      // char*, 5 Byte
#define     LMG_HCLM4AdaptiveEndTimeLength 5
#define LMG_HCLM4AdaptiveDayNightPolarity       10165      // 8 Bits, Bit 7-0
#define LMG_HCLM5AdaptiveMode                   10166      // 8 Bits, Bit 7-0
#define LMG_HCLM5AdaptiveActiveMode             10167      // 8 Bits, Bit 7-0
#define LMG_HCLM5AdaptiveCeilToHCL              10168      // 8 Bits, Bit 7-0
#define LMG_HCLM5AdaptiveMaxLux                 10169      // uint16_t
#define LMG_HCLM5AdaptiveMinBrightness          10171      // uint8_t
#define LMG_HCLM5AdaptiveSensorTimeout          10172      // uint8_t
#define LMG_HCLM5AdaptiveMinChange              10173      // uint8_t
#define LMG_HCLM5AdaptiveStrength               10174      // uint8_t
#define LMG_HCLM5AdaptiveKp                     10175      // 8 Bits, Bit 7-0
#define LMG_HCLM5AdaptiveDeadband               10176      // uint16_t
#define LMG_HCLM5AdaptiveStartTime              10178      // char*, 5 Byte
#define     LMG_HCLM5AdaptiveStartTimeLength 5
#define LMG_HCLM5AdaptiveEndTime                10183      // char*, 5 Byte
#define     LMG_HCLM5AdaptiveEndTimeLength 5
#define LMG_HCLM5AdaptiveDayNightPolarity       10188      // 8 Bits, Bit 7-0
#define LMG_HCLM6AdaptiveMode                   10189      // 8 Bits, Bit 7-0
#define LMG_HCLM6AdaptiveActiveMode             10190      // 8 Bits, Bit 7-0
#define LMG_HCLM6AdaptiveCeilToHCL              10191      // 8 Bits, Bit 7-0
#define LMG_HCLM6AdaptiveMaxLux                 10192      // uint16_t
#define LMG_HCLM6AdaptiveMinBrightness          10194      // uint8_t
#define LMG_HCLM6AdaptiveSensorTimeout          10195      // uint8_t
#define LMG_HCLM6AdaptiveMinChange              10196      // uint8_t
#define LMG_HCLM6AdaptiveStrength               10197      // uint8_t
#define LMG_HCLM6AdaptiveKp                     10198      // 8 Bits, Bit 7-0
#define LMG_HCLM6AdaptiveDeadband               10199      // uint16_t
#define LMG_HCLM6AdaptiveStartTime              10201      // char*, 5 Byte
#define     LMG_HCLM6AdaptiveStartTimeLength 5
#define LMG_HCLM6AdaptiveEndTime                10206      // char*, 5 Byte
#define     LMG_HCLM6AdaptiveEndTimeLength 5
#define LMG_HCLM6AdaptiveDayNightPolarity       10211      // 8 Bits, Bit 7-0
#define LMG_HCLM7AdaptiveMode                   10212      // 8 Bits, Bit 7-0
#define LMG_HCLM7AdaptiveActiveMode             10213      // 8 Bits, Bit 7-0
#define LMG_HCLM7AdaptiveCeilToHCL              10214      // 8 Bits, Bit 7-0
#define LMG_HCLM7AdaptiveMaxLux                 10215      // uint16_t
#define LMG_HCLM7AdaptiveMinBrightness          10217      // uint8_t
#define LMG_HCLM7AdaptiveSensorTimeout          10218      // uint8_t
#define LMG_HCLM7AdaptiveMinChange              10219      // uint8_t
#define LMG_HCLM7AdaptiveStrength               10220      // uint8_t
#define LMG_HCLM7AdaptiveKp                     10221      // 8 Bits, Bit 7-0
#define LMG_HCLM7AdaptiveDeadband               10222      // uint16_t
#define LMG_HCLM7AdaptiveStartTime              10224      // char*, 5 Byte
#define     LMG_HCLM7AdaptiveStartTimeLength 5
#define LMG_HCLM7AdaptiveEndTime                10229      // char*, 5 Byte
#define     LMG_HCLM7AdaptiveEndTimeLength 5
#define LMG_HCLM7AdaptiveDayNightPolarity       10234      // 8 Bits, Bit 7-0
#define LMG_HCLM8AdaptiveMode                   10235      // 8 Bits, Bit 7-0
#define LMG_HCLM8AdaptiveActiveMode             10236      // 8 Bits, Bit 7-0
#define LMG_HCLM8AdaptiveCeilToHCL              10237      // 8 Bits, Bit 7-0
#define LMG_HCLM8AdaptiveMaxLux                 10238      // uint16_t
#define LMG_HCLM8AdaptiveMinBrightness          10240      // uint8_t
#define LMG_HCLM8AdaptiveSensorTimeout          10241      // uint8_t
#define LMG_HCLM8AdaptiveMinChange              10242      // uint8_t
#define LMG_HCLM8AdaptiveStrength               10243      // uint8_t
#define LMG_HCLM8AdaptiveKp                     10244      // 8 Bits, Bit 7-0
#define LMG_HCLM8AdaptiveDeadband               10245      // uint16_t
#define LMG_HCLM8AdaptiveStartTime              10247      // char*, 5 Byte
#define     LMG_HCLM8AdaptiveStartTimeLength 5
#define LMG_HCLM8AdaptiveEndTime                10252      // char*, 5 Byte
#define     LMG_HCLM8AdaptiveEndTimeLength 5
#define LMG_HCLM8AdaptiveDayNightPolarity       10257      // 8 Bits, Bit 7-0
#define LMG_HCLM1SP0Active                      9551      // 1 Bit, Bit 7
#define     LMG_HCLM1SP0ActiveMask 0x80
#define     LMG_HCLM1SP0ActiveShift 7
#define LMG_HCLM1SP1Active                      9551      // 1 Bit, Bit 6
#define     LMG_HCLM1SP1ActiveMask 0x40
#define     LMG_HCLM1SP1ActiveShift 6
#define LMG_HCLM1SP2Active                      9551      // 1 Bit, Bit 5
#define     LMG_HCLM1SP2ActiveMask 0x20
#define     LMG_HCLM1SP2ActiveShift 5
#define LMG_HCLM1SP3Active                      9551      // 1 Bit, Bit 4
#define     LMG_HCLM1SP3ActiveMask 0x10
#define     LMG_HCLM1SP3ActiveShift 4
#define LMG_HCLM1SP4Active                      9551      // 1 Bit, Bit 3
#define     LMG_HCLM1SP4ActiveMask 0x08
#define     LMG_HCLM1SP4ActiveShift 3
#define LMG_HCLM1SP5Active                      9551      // 1 Bit, Bit 2
#define     LMG_HCLM1SP5ActiveMask 0x04
#define     LMG_HCLM1SP5ActiveShift 2
#define LMG_HCLM1SP6Active                      9551      // 1 Bit, Bit 1
#define     LMG_HCLM1SP6ActiveMask 0x02
#define     LMG_HCLM1SP6ActiveShift 1
#define LMG_HCLM1SP7Active                      9551      // 1 Bit, Bit 0
#define     LMG_HCLM1SP7ActiveMask 0x01
#define     LMG_HCLM1SP7ActiveShift 0
#define LMG_HCLM1SP8Active                      9552      // 1 Bit, Bit 7
#define     LMG_HCLM1SP8ActiveMask 0x80
#define     LMG_HCLM1SP8ActiveShift 7
#define LMG_HCLM1SP9Active                      9552      // 1 Bit, Bit 6
#define     LMG_HCLM1SP9ActiveMask 0x40
#define     LMG_HCLM1SP9ActiveShift 6
#define LMG_HCLM2SP0Active                      9589      // 1 Bit, Bit 7
#define     LMG_HCLM2SP0ActiveMask 0x80
#define     LMG_HCLM2SP0ActiveShift 7
#define LMG_HCLM2SP1Active                      9589      // 1 Bit, Bit 6
#define     LMG_HCLM2SP1ActiveMask 0x40
#define     LMG_HCLM2SP1ActiveShift 6
#define LMG_HCLM2SP2Active                      9589      // 1 Bit, Bit 5
#define     LMG_HCLM2SP2ActiveMask 0x20
#define     LMG_HCLM2SP2ActiveShift 5
#define LMG_HCLM2SP3Active                      9589      // 1 Bit, Bit 4
#define     LMG_HCLM2SP3ActiveMask 0x10
#define     LMG_HCLM2SP3ActiveShift 4
#define LMG_HCLM2SP4Active                      9589      // 1 Bit, Bit 3
#define     LMG_HCLM2SP4ActiveMask 0x08
#define     LMG_HCLM2SP4ActiveShift 3
#define LMG_HCLM2SP5Active                      9589      // 1 Bit, Bit 2
#define     LMG_HCLM2SP5ActiveMask 0x04
#define     LMG_HCLM2SP5ActiveShift 2
#define LMG_HCLM2SP6Active                      9589      // 1 Bit, Bit 1
#define     LMG_HCLM2SP6ActiveMask 0x02
#define     LMG_HCLM2SP6ActiveShift 1
#define LMG_HCLM2SP7Active                      9589      // 1 Bit, Bit 0
#define     LMG_HCLM2SP7ActiveMask 0x01
#define     LMG_HCLM2SP7ActiveShift 0
#define LMG_HCLM2SP8Active                      9590      // 1 Bit, Bit 7
#define     LMG_HCLM2SP8ActiveMask 0x80
#define     LMG_HCLM2SP8ActiveShift 7
#define LMG_HCLM2SP9Active                      9590      // 1 Bit, Bit 6
#define     LMG_HCLM2SP9ActiveMask 0x40
#define     LMG_HCLM2SP9ActiveShift 6
#define LMG_HCLM3SP0Active                      9627      // 1 Bit, Bit 7
#define     LMG_HCLM3SP0ActiveMask 0x80
#define     LMG_HCLM3SP0ActiveShift 7
#define LMG_HCLM3SP1Active                      9627      // 1 Bit, Bit 6
#define     LMG_HCLM3SP1ActiveMask 0x40
#define     LMG_HCLM3SP1ActiveShift 6
#define LMG_HCLM3SP2Active                      9627      // 1 Bit, Bit 5
#define     LMG_HCLM3SP2ActiveMask 0x20
#define     LMG_HCLM3SP2ActiveShift 5
#define LMG_HCLM3SP3Active                      9627      // 1 Bit, Bit 4
#define     LMG_HCLM3SP3ActiveMask 0x10
#define     LMG_HCLM3SP3ActiveShift 4
#define LMG_HCLM3SP4Active                      9627      // 1 Bit, Bit 3
#define     LMG_HCLM3SP4ActiveMask 0x08
#define     LMG_HCLM3SP4ActiveShift 3
#define LMG_HCLM3SP5Active                      9627      // 1 Bit, Bit 2
#define     LMG_HCLM3SP5ActiveMask 0x04
#define     LMG_HCLM3SP5ActiveShift 2
#define LMG_HCLM3SP6Active                      9627      // 1 Bit, Bit 1
#define     LMG_HCLM3SP6ActiveMask 0x02
#define     LMG_HCLM3SP6ActiveShift 1
#define LMG_HCLM3SP7Active                      9627      // 1 Bit, Bit 0
#define     LMG_HCLM3SP7ActiveMask 0x01
#define     LMG_HCLM3SP7ActiveShift 0
#define LMG_HCLM3SP8Active                      9628      // 1 Bit, Bit 7
#define     LMG_HCLM3SP8ActiveMask 0x80
#define     LMG_HCLM3SP8ActiveShift 7
#define LMG_HCLM3SP9Active                      9628      // 1 Bit, Bit 6
#define     LMG_HCLM3SP9ActiveMask 0x40
#define     LMG_HCLM3SP9ActiveShift 6
#define LMG_HCLM4SP0Active                      9665      // 1 Bit, Bit 7
#define     LMG_HCLM4SP0ActiveMask 0x80
#define     LMG_HCLM4SP0ActiveShift 7
#define LMG_HCLM4SP1Active                      9665      // 1 Bit, Bit 6
#define     LMG_HCLM4SP1ActiveMask 0x40
#define     LMG_HCLM4SP1ActiveShift 6
#define LMG_HCLM4SP2Active                      9665      // 1 Bit, Bit 5
#define     LMG_HCLM4SP2ActiveMask 0x20
#define     LMG_HCLM4SP2ActiveShift 5
#define LMG_HCLM4SP3Active                      9665      // 1 Bit, Bit 4
#define     LMG_HCLM4SP3ActiveMask 0x10
#define     LMG_HCLM4SP3ActiveShift 4
#define LMG_HCLM4SP4Active                      9665      // 1 Bit, Bit 3
#define     LMG_HCLM4SP4ActiveMask 0x08
#define     LMG_HCLM4SP4ActiveShift 3
#define LMG_HCLM4SP5Active                      9665      // 1 Bit, Bit 2
#define     LMG_HCLM4SP5ActiveMask 0x04
#define     LMG_HCLM4SP5ActiveShift 2
#define LMG_HCLM4SP6Active                      9665      // 1 Bit, Bit 1
#define     LMG_HCLM4SP6ActiveMask 0x02
#define     LMG_HCLM4SP6ActiveShift 1
#define LMG_HCLM4SP7Active                      9665      // 1 Bit, Bit 0
#define     LMG_HCLM4SP7ActiveMask 0x01
#define     LMG_HCLM4SP7ActiveShift 0
#define LMG_HCLM4SP8Active                      9666      // 1 Bit, Bit 7
#define     LMG_HCLM4SP8ActiveMask 0x80
#define     LMG_HCLM4SP8ActiveShift 7
#define LMG_HCLM4SP9Active                      9666      // 1 Bit, Bit 6
#define     LMG_HCLM4SP9ActiveMask 0x40
#define     LMG_HCLM4SP9ActiveShift 6
#define LMG_HCLM5SP0Active                      9703      // 1 Bit, Bit 7
#define     LMG_HCLM5SP0ActiveMask 0x80
#define     LMG_HCLM5SP0ActiveShift 7
#define LMG_HCLM5SP1Active                      9703      // 1 Bit, Bit 6
#define     LMG_HCLM5SP1ActiveMask 0x40
#define     LMG_HCLM5SP1ActiveShift 6
#define LMG_HCLM5SP2Active                      9703      // 1 Bit, Bit 5
#define     LMG_HCLM5SP2ActiveMask 0x20
#define     LMG_HCLM5SP2ActiveShift 5
#define LMG_HCLM5SP3Active                      9703      // 1 Bit, Bit 4
#define     LMG_HCLM5SP3ActiveMask 0x10
#define     LMG_HCLM5SP3ActiveShift 4
#define LMG_HCLM5SP4Active                      9703      // 1 Bit, Bit 3
#define     LMG_HCLM5SP4ActiveMask 0x08
#define     LMG_HCLM5SP4ActiveShift 3
#define LMG_HCLM5SP5Active                      9703      // 1 Bit, Bit 2
#define     LMG_HCLM5SP5ActiveMask 0x04
#define     LMG_HCLM5SP5ActiveShift 2
#define LMG_HCLM5SP6Active                      9703      // 1 Bit, Bit 1
#define     LMG_HCLM5SP6ActiveMask 0x02
#define     LMG_HCLM5SP6ActiveShift 1
#define LMG_HCLM5SP7Active                      9703      // 1 Bit, Bit 0
#define     LMG_HCLM5SP7ActiveMask 0x01
#define     LMG_HCLM5SP7ActiveShift 0
#define LMG_HCLM5SP8Active                      9704      // 1 Bit, Bit 7
#define     LMG_HCLM5SP8ActiveMask 0x80
#define     LMG_HCLM5SP8ActiveShift 7
#define LMG_HCLM5SP9Active                      9704      // 1 Bit, Bit 6
#define     LMG_HCLM5SP9ActiveMask 0x40
#define     LMG_HCLM5SP9ActiveShift 6
#define LMG_HCLM6SP0Active                      9741      // 1 Bit, Bit 7
#define     LMG_HCLM6SP0ActiveMask 0x80
#define     LMG_HCLM6SP0ActiveShift 7
#define LMG_HCLM6SP1Active                      9741      // 1 Bit, Bit 6
#define     LMG_HCLM6SP1ActiveMask 0x40
#define     LMG_HCLM6SP1ActiveShift 6
#define LMG_HCLM6SP2Active                      9741      // 1 Bit, Bit 5
#define     LMG_HCLM6SP2ActiveMask 0x20
#define     LMG_HCLM6SP2ActiveShift 5
#define LMG_HCLM6SP3Active                      9741      // 1 Bit, Bit 4
#define     LMG_HCLM6SP3ActiveMask 0x10
#define     LMG_HCLM6SP3ActiveShift 4
#define LMG_HCLM6SP4Active                      9741      // 1 Bit, Bit 3
#define     LMG_HCLM6SP4ActiveMask 0x08
#define     LMG_HCLM6SP4ActiveShift 3
#define LMG_HCLM6SP5Active                      9741      // 1 Bit, Bit 2
#define     LMG_HCLM6SP5ActiveMask 0x04
#define     LMG_HCLM6SP5ActiveShift 2
#define LMG_HCLM6SP6Active                      9741      // 1 Bit, Bit 1
#define     LMG_HCLM6SP6ActiveMask 0x02
#define     LMG_HCLM6SP6ActiveShift 1
#define LMG_HCLM6SP7Active                      9741      // 1 Bit, Bit 0
#define     LMG_HCLM6SP7ActiveMask 0x01
#define     LMG_HCLM6SP7ActiveShift 0
#define LMG_HCLM6SP8Active                      9742      // 1 Bit, Bit 7
#define     LMG_HCLM6SP8ActiveMask 0x80
#define     LMG_HCLM6SP8ActiveShift 7
#define LMG_HCLM6SP9Active                      9742      // 1 Bit, Bit 6
#define     LMG_HCLM6SP9ActiveMask 0x40
#define     LMG_HCLM6SP9ActiveShift 6
#define LMG_HCLM7SP0Active                      9779      // 1 Bit, Bit 7
#define     LMG_HCLM7SP0ActiveMask 0x80
#define     LMG_HCLM7SP0ActiveShift 7
#define LMG_HCLM7SP1Active                      9779      // 1 Bit, Bit 6
#define     LMG_HCLM7SP1ActiveMask 0x40
#define     LMG_HCLM7SP1ActiveShift 6
#define LMG_HCLM7SP2Active                      9779      // 1 Bit, Bit 5
#define     LMG_HCLM7SP2ActiveMask 0x20
#define     LMG_HCLM7SP2ActiveShift 5
#define LMG_HCLM7SP3Active                      9779      // 1 Bit, Bit 4
#define     LMG_HCLM7SP3ActiveMask 0x10
#define     LMG_HCLM7SP3ActiveShift 4
#define LMG_HCLM7SP4Active                      9779      // 1 Bit, Bit 3
#define     LMG_HCLM7SP4ActiveMask 0x08
#define     LMG_HCLM7SP4ActiveShift 3
#define LMG_HCLM7SP5Active                      9779      // 1 Bit, Bit 2
#define     LMG_HCLM7SP5ActiveMask 0x04
#define     LMG_HCLM7SP5ActiveShift 2
#define LMG_HCLM7SP6Active                      9779      // 1 Bit, Bit 1
#define     LMG_HCLM7SP6ActiveMask 0x02
#define     LMG_HCLM7SP6ActiveShift 1
#define LMG_HCLM7SP7Active                      9779      // 1 Bit, Bit 0
#define     LMG_HCLM7SP7ActiveMask 0x01
#define     LMG_HCLM7SP7ActiveShift 0
#define LMG_HCLM7SP8Active                      9780      // 1 Bit, Bit 7
#define     LMG_HCLM7SP8ActiveMask 0x80
#define     LMG_HCLM7SP8ActiveShift 7
#define LMG_HCLM7SP9Active                      9780      // 1 Bit, Bit 6
#define     LMG_HCLM7SP9ActiveMask 0x40
#define     LMG_HCLM7SP9ActiveShift 6
#define LMG_HCLM8SP0Active                      9817      // 1 Bit, Bit 7
#define     LMG_HCLM8SP0ActiveMask 0x80
#define     LMG_HCLM8SP0ActiveShift 7
#define LMG_HCLM8SP1Active                      9817      // 1 Bit, Bit 6
#define     LMG_HCLM8SP1ActiveMask 0x40
#define     LMG_HCLM8SP1ActiveShift 6
#define LMG_HCLM8SP2Active                      9817      // 1 Bit, Bit 5
#define     LMG_HCLM8SP2ActiveMask 0x20
#define     LMG_HCLM8SP2ActiveShift 5
#define LMG_HCLM8SP3Active                      9817      // 1 Bit, Bit 4
#define     LMG_HCLM8SP3ActiveMask 0x10
#define     LMG_HCLM8SP3ActiveShift 4
#define LMG_HCLM8SP4Active                      9817      // 1 Bit, Bit 3
#define     LMG_HCLM8SP4ActiveMask 0x08
#define     LMG_HCLM8SP4ActiveShift 3
#define LMG_HCLM8SP5Active                      9817      // 1 Bit, Bit 2
#define     LMG_HCLM8SP5ActiveMask 0x04
#define     LMG_HCLM8SP5ActiveShift 2
#define LMG_HCLM8SP6Active                      9817      // 1 Bit, Bit 1
#define     LMG_HCLM8SP6ActiveMask 0x02
#define     LMG_HCLM8SP6ActiveShift 1
#define LMG_HCLM8SP7Active                      9817      // 1 Bit, Bit 0
#define     LMG_HCLM8SP7ActiveMask 0x01
#define     LMG_HCLM8SP7ActiveShift 0
#define LMG_HCLM8SP8Active                      9818      // 1 Bit, Bit 7
#define     LMG_HCLM8SP8ActiveMask 0x80
#define     LMG_HCLM8SP8ActiveShift 7
#define LMG_HCLM8SP9Active                      9818      // 1 Bit, Bit 6
#define     LMG_HCLM8SP9ActiveMask 0x40
#define     LMG_HCLM8SP9ActiveShift 6
#define LMG_LMGHCLM9FallbackPolicy              11259      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM9FallbackDurationSec         11274      // uint16_t
#define LMG_LMGHCLM9FallbackReleaseTime         11311      // char*, 5 Byte
#define     LMG_LMGHCLM9FallbackReleaseTimeLength 5
#define LMG_LMGHCLM9StatusKoEnable              12353      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM9StatusKoEnableMask 0x03
#define     LMG_LMGHCLM9StatusKoEnableShift 0
#define LMG_LMGHCLM9LockFallback                10958      // 8 Bits, Bit 7-0
#define LMG_HCLM9AdaptiveActiveMode             12330      // 8 Bits, Bit 7-0
#define LMG_HCLM9AdaptiveCeilToHCL              12331      // 8 Bits, Bit 7-0
#define LMG_HCLM9AdaptiveDayNightPolarity       12351      // 8 Bits, Bit 7-0
#define LMG_HCLM9AdaptiveDeadband               12339      // uint16_t
#define LMG_HCLM9AdaptiveEndTime                12346      // char*, 5 Byte
#define     LMG_HCLM9AdaptiveEndTimeLength 5
#define LMG_HCLM9AdaptiveKp                     12338      // 8 Bits, Bit 7-0
#define LMG_HCLM9AdaptiveMaxLux                 12332      // uint16_t
#define LMG_HCLM9AdaptiveMinBrightness          12334      // uint8_t
#define LMG_HCLM9AdaptiveMinChange              12336      // uint8_t
#define LMG_HCLM9AdaptiveMode                   12329      // 8 Bits, Bit 7-0
#define LMG_HCLM9AdaptiveSensorTimeout          12335      // uint8_t
#define LMG_HCLM9AdaptiveStartTime              12341      // char*, 5 Byte
#define     LMG_HCLM9AdaptiveStartTimeLength 5
#define LMG_HCLM9AdaptiveStrength               12337      // uint8_t
#define LMG_HCLM9AstroMaxBrightness             11018      // uint8_t
#define LMG_HCLM9AstroMaxKelvin                 11015      // uint16_t
#define LMG_HCLM9AstroMinBrightness             11017      // uint8_t
#define LMG_HCLM9AstroMinKelvin                 11013      // uint16_t
#define LMG_HCLM9CurveType                      10931      // 8 Bits, Bit 7-0
#define LMG_HCLM9DSTOffsetDays                  11906      // int8_t
#define LMG_HCLM9ManualKelvin                   10934      // uint16_t
#define LMG_HCLM9Name                           10849      // char*, 25 Byte
#define     LMG_HCLM9NameLength 25
#define LMG_HCLM9SeasonMode                     11905      // 8 Bits, Bit 7-0
#define LMG_HCLM9SetpointCount                  11026      // 8 Bits, Bit 7-0
#define LMG_HCLM9SlewRate                       10932      // uint16_t
#define LMG_HCLM9SP0Active                      11911      // 1 Bit, Bit 7
#define     LMG_HCLM9SP0ActiveMask 0x80
#define     LMG_HCLM9SP0ActiveShift 7
#define LMG_HCLM9SP0Brightness                  10701      // uint8_t
#define LMG_HCLM9SP0Kelvin                      10699      // uint16_t
#define LMG_HCLM9SP0SummerBrightness            11933      // uint8_t
#define LMG_HCLM9SP0SummerKelvin                11913      // uint16_t
#define LMG_HCLM9SP0Time                        10694      // char*, 5 Byte
#define     LMG_HCLM9SP0TimeLength 5
#define LMG_HCLM9SP1Active                      11911      // 1 Bit, Bit 6
#define     LMG_HCLM9SP1ActiveMask 0x40
#define     LMG_HCLM9SP1ActiveShift 6
#define LMG_HCLM9SP1Brightness                  10709      // uint8_t
#define LMG_HCLM9SP1Kelvin                      10707      // uint16_t
#define LMG_HCLM9SP1SummerBrightness            11934      // uint8_t
#define LMG_HCLM9SP1SummerKelvin                11915      // uint16_t
#define LMG_HCLM9SP1Time                        10702      // char*, 5 Byte
#define     LMG_HCLM9SP1TimeLength 5
#define LMG_HCLM9SP2Active                      11911      // 1 Bit, Bit 5
#define     LMG_HCLM9SP2ActiveMask 0x20
#define     LMG_HCLM9SP2ActiveShift 5
#define LMG_HCLM9SP2Brightness                  10717      // uint8_t
#define LMG_HCLM9SP2Kelvin                      10715      // uint16_t
#define LMG_HCLM9SP2SummerBrightness            11935      // uint8_t
#define LMG_HCLM9SP2SummerKelvin                11917      // uint16_t
#define LMG_HCLM9SP2Time                        10710      // char*, 5 Byte
#define     LMG_HCLM9SP2TimeLength 5
#define LMG_HCLM9SP3Active                      11911      // 1 Bit, Bit 4
#define     LMG_HCLM9SP3ActiveMask 0x10
#define     LMG_HCLM9SP3ActiveShift 4
#define LMG_HCLM9SP3Brightness                  10725      // uint8_t
#define LMG_HCLM9SP3Kelvin                      10723      // uint16_t
#define LMG_HCLM9SP3SummerBrightness            11936      // uint8_t
#define LMG_HCLM9SP3SummerKelvin                11919      // uint16_t
#define LMG_HCLM9SP3Time                        10718      // char*, 5 Byte
#define     LMG_HCLM9SP3TimeLength 5
#define LMG_HCLM9SP4Active                      11911      // 1 Bit, Bit 3
#define     LMG_HCLM9SP4ActiveMask 0x08
#define     LMG_HCLM9SP4ActiveShift 3
#define LMG_HCLM9SP4Brightness                  10733      // uint8_t
#define LMG_HCLM9SP4Kelvin                      10731      // uint16_t
#define LMG_HCLM9SP4SummerBrightness            11937      // uint8_t
#define LMG_HCLM9SP4SummerKelvin                11921      // uint16_t
#define LMG_HCLM9SP4Time                        10726      // char*, 5 Byte
#define     LMG_HCLM9SP4TimeLength 5
#define LMG_HCLM9SP5Active                      11911      // 1 Bit, Bit 2
#define     LMG_HCLM9SP5ActiveMask 0x04
#define     LMG_HCLM9SP5ActiveShift 2
#define LMG_HCLM9SP5Brightness                  10741      // uint8_t
#define LMG_HCLM9SP5Kelvin                      10739      // uint16_t
#define LMG_HCLM9SP5SummerBrightness            11938      // uint8_t
#define LMG_HCLM9SP5SummerKelvin                11923      // uint16_t
#define LMG_HCLM9SP5Time                        10734      // char*, 5 Byte
#define     LMG_HCLM9SP5TimeLength 5
#define LMG_HCLM9SP6Active                      11911      // 1 Bit, Bit 1
#define     LMG_HCLM9SP6ActiveMask 0x02
#define     LMG_HCLM9SP6ActiveShift 1
#define LMG_HCLM9SP6Brightness                  10749      // uint8_t
#define LMG_HCLM9SP6Kelvin                      10747      // uint16_t
#define LMG_HCLM9SP6SummerBrightness            11939      // uint8_t
#define LMG_HCLM9SP6SummerKelvin                11925      // uint16_t
#define LMG_HCLM9SP6Time                        10742      // char*, 5 Byte
#define     LMG_HCLM9SP6TimeLength 5
#define LMG_HCLM9SP7Active                      11911      // 1 Bit, Bit 0
#define     LMG_HCLM9SP7ActiveMask 0x01
#define     LMG_HCLM9SP7ActiveShift 0
#define LMG_HCLM9SP7Brightness                  10757      // uint8_t
#define LMG_HCLM9SP7Kelvin                      10755      // uint16_t
#define LMG_HCLM9SP7SummerBrightness            11940      // uint8_t
#define LMG_HCLM9SP7SummerKelvin                11927      // uint16_t
#define LMG_HCLM9SP7Time                        10750      // char*, 5 Byte
#define     LMG_HCLM9SP7TimeLength 5
#define LMG_HCLM9SP8Active                      11912      // 1 Bit, Bit 7
#define     LMG_HCLM9SP8ActiveMask 0x80
#define     LMG_HCLM9SP8ActiveShift 7
#define LMG_HCLM9SP8Brightness                  10765      // uint8_t
#define LMG_HCLM9SP8Kelvin                      10763      // uint16_t
#define LMG_HCLM9SP8SummerBrightness            11941      // uint8_t
#define LMG_HCLM9SP8SummerKelvin                11929      // uint16_t
#define LMG_HCLM9SP8Time                        10758      // char*, 5 Byte
#define     LMG_HCLM9SP8TimeLength 5
#define LMG_HCLM9SP9Active                      11912      // 1 Bit, Bit 6
#define     LMG_HCLM9SP9ActiveMask 0x40
#define     LMG_HCLM9SP9ActiveShift 6
#define LMG_HCLM9SP9Brightness                  10773      // uint8_t
#define LMG_HCLM9SP9Kelvin                      10771      // uint16_t
#define LMG_HCLM9SP9SummerBrightness            11942      // uint8_t
#define LMG_HCLM9SP9SummerKelvin                11931      // uint16_t
#define LMG_HCLM9SP9Time                        10766      // char*, 5 Byte
#define     LMG_HCLM9SP9TimeLength 5
#define LMG_HCLM9SummerEndDay                   11910      // uint8_t
#define LMG_HCLM9SummerEndMonth                 11909      // uint8_t
#define LMG_HCLM9SummerStartDay                 11908      // uint8_t
#define LMG_HCLM9SummerStartMonth               11907      // uint8_t
#define LMG_HCLM9Sunrise                        10936      // char*, 5 Byte
#define     LMG_HCLM9SunriseLength 5
#define LMG_HCLM9SunriseOffset                  10946      // int16_t
#define LMG_HCLM9Sunset                         10941      // char*, 5 Byte
#define     LMG_HCLM9SunsetLength 5
#define LMG_HCLM9SunsetOffset                   10948      // int16_t
#define LMG_LMGHCLM10FallbackPolicy             13353      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM10FallbackDurationSec        13368      // uint16_t
#define LMG_LMGHCLM10FallbackReleaseTime        13405      // char*, 5 Byte
#define     LMG_LMGHCLM10FallbackReleaseTimeLength 5
#define LMG_LMGHCLM10StatusKoEnable             14447      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM10StatusKoEnableMask 0x03
#define     LMG_LMGHCLM10StatusKoEnableShift 0
#define LMG_LMGHCLM10LockFallback               13052      // 8 Bits, Bit 7-0
#define LMG_HCLM10AdaptiveActiveMode            14424      // 8 Bits, Bit 7-0
#define LMG_HCLM10AdaptiveCeilToHCL             14425      // 8 Bits, Bit 7-0
#define LMG_HCLM10AdaptiveDayNightPolarity      14445      // 8 Bits, Bit 7-0
#define LMG_HCLM10AdaptiveDeadband              14433      // uint16_t
#define LMG_HCLM10AdaptiveEndTime               14440      // char*, 5 Byte
#define     LMG_HCLM10AdaptiveEndTimeLength 5
#define LMG_HCLM10AdaptiveKp                    14432      // 8 Bits, Bit 7-0
#define LMG_HCLM10AdaptiveMaxLux                14426      // uint16_t
#define LMG_HCLM10AdaptiveMinBrightness         14428      // uint8_t
#define LMG_HCLM10AdaptiveMinChange             14430      // uint8_t
#define LMG_HCLM10AdaptiveMode                  14423      // 8 Bits, Bit 7-0
#define LMG_HCLM10AdaptiveSensorTimeout         14429      // uint8_t
#define LMG_HCLM10AdaptiveStartTime             14435      // char*, 5 Byte
#define     LMG_HCLM10AdaptiveStartTimeLength 5
#define LMG_HCLM10AdaptiveStrength              14431      // uint8_t
#define LMG_HCLM10AstroMaxBrightness            13112      // uint8_t
#define LMG_HCLM10AstroMaxKelvin                13109      // uint16_t
#define LMG_HCLM10AstroMinBrightness            13111      // uint8_t
#define LMG_HCLM10AstroMinKelvin                13107      // uint16_t
#define LMG_HCLM10CurveType                     13025      // 8 Bits, Bit 7-0
#define LMG_HCLM10DSTOffsetDays                 14000      // int8_t
#define LMG_HCLM10ManualKelvin                  13028      // uint16_t
#define LMG_HCLM10Name                          12943      // char*, 25 Byte
#define     LMG_HCLM10NameLength 25
#define LMG_HCLM10SeasonMode                    13999      // 8 Bits, Bit 7-0
#define LMG_HCLM10SetpointCount                 13120      // 8 Bits, Bit 7-0
#define LMG_HCLM10SlewRate                      13026      // uint16_t
#define LMG_HCLM10SP0Active                     14005      // 1 Bit, Bit 7
#define     LMG_HCLM10SP0ActiveMask 0x80
#define     LMG_HCLM10SP0ActiveShift 7
#define LMG_HCLM10SP0Brightness                 12795      // uint8_t
#define LMG_HCLM10SP0Kelvin                     12793      // uint16_t
#define LMG_HCLM10SP0SummerBrightness           14027      // uint8_t
#define LMG_HCLM10SP0SummerKelvin               14007      // uint16_t
#define LMG_HCLM10SP0Time                       12788      // char*, 5 Byte
#define     LMG_HCLM10SP0TimeLength 5
#define LMG_HCLM10SP1Active                     14005      // 1 Bit, Bit 6
#define     LMG_HCLM10SP1ActiveMask 0x40
#define     LMG_HCLM10SP1ActiveShift 6
#define LMG_HCLM10SP1Brightness                 12803      // uint8_t
#define LMG_HCLM10SP1Kelvin                     12801      // uint16_t
#define LMG_HCLM10SP1SummerBrightness           14028      // uint8_t
#define LMG_HCLM10SP1SummerKelvin               14009      // uint16_t
#define LMG_HCLM10SP1Time                       12796      // char*, 5 Byte
#define     LMG_HCLM10SP1TimeLength 5
#define LMG_HCLM10SP2Active                     14005      // 1 Bit, Bit 5
#define     LMG_HCLM10SP2ActiveMask 0x20
#define     LMG_HCLM10SP2ActiveShift 5
#define LMG_HCLM10SP2Brightness                 12811      // uint8_t
#define LMG_HCLM10SP2Kelvin                     12809      // uint16_t
#define LMG_HCLM10SP2SummerBrightness           14029      // uint8_t
#define LMG_HCLM10SP2SummerKelvin               14011      // uint16_t
#define LMG_HCLM10SP2Time                       12804      // char*, 5 Byte
#define     LMG_HCLM10SP2TimeLength 5
#define LMG_HCLM10SP3Active                     14005      // 1 Bit, Bit 4
#define     LMG_HCLM10SP3ActiveMask 0x10
#define     LMG_HCLM10SP3ActiveShift 4
#define LMG_HCLM10SP3Brightness                 12819      // uint8_t
#define LMG_HCLM10SP3Kelvin                     12817      // uint16_t
#define LMG_HCLM10SP3SummerBrightness           14030      // uint8_t
#define LMG_HCLM10SP3SummerKelvin               14013      // uint16_t
#define LMG_HCLM10SP3Time                       12812      // char*, 5 Byte
#define     LMG_HCLM10SP3TimeLength 5
#define LMG_HCLM10SP4Active                     14005      // 1 Bit, Bit 3
#define     LMG_HCLM10SP4ActiveMask 0x08
#define     LMG_HCLM10SP4ActiveShift 3
#define LMG_HCLM10SP4Brightness                 12827      // uint8_t
#define LMG_HCLM10SP4Kelvin                     12825      // uint16_t
#define LMG_HCLM10SP4SummerBrightness           14031      // uint8_t
#define LMG_HCLM10SP4SummerKelvin               14015      // uint16_t
#define LMG_HCLM10SP4Time                       12820      // char*, 5 Byte
#define     LMG_HCLM10SP4TimeLength 5
#define LMG_HCLM10SP5Active                     14005      // 1 Bit, Bit 2
#define     LMG_HCLM10SP5ActiveMask 0x04
#define     LMG_HCLM10SP5ActiveShift 2
#define LMG_HCLM10SP5Brightness                 12835      // uint8_t
#define LMG_HCLM10SP5Kelvin                     12833      // uint16_t
#define LMG_HCLM10SP5SummerBrightness           14032      // uint8_t
#define LMG_HCLM10SP5SummerKelvin               14017      // uint16_t
#define LMG_HCLM10SP5Time                       12828      // char*, 5 Byte
#define     LMG_HCLM10SP5TimeLength 5
#define LMG_HCLM10SP6Active                     14005      // 1 Bit, Bit 1
#define     LMG_HCLM10SP6ActiveMask 0x02
#define     LMG_HCLM10SP6ActiveShift 1
#define LMG_HCLM10SP6Brightness                 12843      // uint8_t
#define LMG_HCLM10SP6Kelvin                     12841      // uint16_t
#define LMG_HCLM10SP6SummerBrightness           14033      // uint8_t
#define LMG_HCLM10SP6SummerKelvin               14019      // uint16_t
#define LMG_HCLM10SP6Time                       12836      // char*, 5 Byte
#define     LMG_HCLM10SP6TimeLength 5
#define LMG_HCLM10SP7Active                     14005      // 1 Bit, Bit 0
#define     LMG_HCLM10SP7ActiveMask 0x01
#define     LMG_HCLM10SP7ActiveShift 0
#define LMG_HCLM10SP7Brightness                 12851      // uint8_t
#define LMG_HCLM10SP7Kelvin                     12849      // uint16_t
#define LMG_HCLM10SP7SummerBrightness           14034      // uint8_t
#define LMG_HCLM10SP7SummerKelvin               14021      // uint16_t
#define LMG_HCLM10SP7Time                       12844      // char*, 5 Byte
#define     LMG_HCLM10SP7TimeLength 5
#define LMG_HCLM10SP8Active                     14006      // 1 Bit, Bit 7
#define     LMG_HCLM10SP8ActiveMask 0x80
#define     LMG_HCLM10SP8ActiveShift 7
#define LMG_HCLM10SP8Brightness                 12859      // uint8_t
#define LMG_HCLM10SP8Kelvin                     12857      // uint16_t
#define LMG_HCLM10SP8SummerBrightness           14035      // uint8_t
#define LMG_HCLM10SP8SummerKelvin               14023      // uint16_t
#define LMG_HCLM10SP8Time                       12852      // char*, 5 Byte
#define     LMG_HCLM10SP8TimeLength 5
#define LMG_HCLM10SP9Active                     14006      // 1 Bit, Bit 6
#define     LMG_HCLM10SP9ActiveMask 0x40
#define     LMG_HCLM10SP9ActiveShift 6
#define LMG_HCLM10SP9Brightness                 12867      // uint8_t
#define LMG_HCLM10SP9Kelvin                     12865      // uint16_t
#define LMG_HCLM10SP9SummerBrightness           14036      // uint8_t
#define LMG_HCLM10SP9SummerKelvin               14025      // uint16_t
#define LMG_HCLM10SP9Time                       12860      // char*, 5 Byte
#define     LMG_HCLM10SP9TimeLength 5
#define LMG_HCLM10SummerEndDay                  14004      // uint8_t
#define LMG_HCLM10SummerEndMonth                14003      // uint8_t
#define LMG_HCLM10SummerStartDay                14002      // uint8_t
#define LMG_HCLM10SummerStartMonth              14001      // uint8_t
#define LMG_HCLM10Sunrise                       13030      // char*, 5 Byte
#define     LMG_HCLM10SunriseLength 5
#define LMG_HCLM10SunriseOffset                 13040      // int16_t
#define LMG_HCLM10Sunset                        13035      // char*, 5 Byte
#define     LMG_HCLM10SunsetLength 5
#define LMG_HCLM10SunsetOffset                  13042      // int16_t
#define LMG_LMGHCLM11FallbackPolicy             15447      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM11FallbackDurationSec        15462      // uint16_t
#define LMG_LMGHCLM11FallbackReleaseTime        15499      // char*, 5 Byte
#define     LMG_LMGHCLM11FallbackReleaseTimeLength 5
#define LMG_LMGHCLM11StatusKoEnable             16541      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM11StatusKoEnableMask 0x03
#define     LMG_LMGHCLM11StatusKoEnableShift 0
#define LMG_LMGHCLM11LockFallback               15146      // 8 Bits, Bit 7-0
#define LMG_HCLM11AdaptiveActiveMode            16518      // 8 Bits, Bit 7-0
#define LMG_HCLM11AdaptiveCeilToHCL             16519      // 8 Bits, Bit 7-0
#define LMG_HCLM11AdaptiveDayNightPolarity      16539      // 8 Bits, Bit 7-0
#define LMG_HCLM11AdaptiveDeadband              16527      // uint16_t
#define LMG_HCLM11AdaptiveEndTime               16534      // char*, 5 Byte
#define     LMG_HCLM11AdaptiveEndTimeLength 5
#define LMG_HCLM11AdaptiveKp                    16526      // 8 Bits, Bit 7-0
#define LMG_HCLM11AdaptiveMaxLux                16520      // uint16_t
#define LMG_HCLM11AdaptiveMinBrightness         16522      // uint8_t
#define LMG_HCLM11AdaptiveMinChange             16524      // uint8_t
#define LMG_HCLM11AdaptiveMode                  16517      // 8 Bits, Bit 7-0
#define LMG_HCLM11AdaptiveSensorTimeout         16523      // uint8_t
#define LMG_HCLM11AdaptiveStartTime             16529      // char*, 5 Byte
#define     LMG_HCLM11AdaptiveStartTimeLength 5
#define LMG_HCLM11AdaptiveStrength              16525      // uint8_t
#define LMG_HCLM11AstroMaxBrightness            15206      // uint8_t
#define LMG_HCLM11AstroMaxKelvin                15203      // uint16_t
#define LMG_HCLM11AstroMinBrightness            15205      // uint8_t
#define LMG_HCLM11AstroMinKelvin                15201      // uint16_t
#define LMG_HCLM11CurveType                     15119      // 8 Bits, Bit 7-0
#define LMG_HCLM11DSTOffsetDays                 16094      // int8_t
#define LMG_HCLM11ManualKelvin                  15122      // uint16_t
#define LMG_HCLM11Name                          15037      // char*, 25 Byte
#define     LMG_HCLM11NameLength 25
#define LMG_HCLM11SeasonMode                    16093      // 8 Bits, Bit 7-0
#define LMG_HCLM11SetpointCount                 15214      // 8 Bits, Bit 7-0
#define LMG_HCLM11SlewRate                      15120      // uint16_t
#define LMG_HCLM11SP0Active                     16099      // 1 Bit, Bit 7
#define     LMG_HCLM11SP0ActiveMask 0x80
#define     LMG_HCLM11SP0ActiveShift 7
#define LMG_HCLM11SP0Brightness                 14889      // uint8_t
#define LMG_HCLM11SP0Kelvin                     14887      // uint16_t
#define LMG_HCLM11SP0SummerBrightness           16121      // uint8_t
#define LMG_HCLM11SP0SummerKelvin               16101      // uint16_t
#define LMG_HCLM11SP0Time                       14882      // char*, 5 Byte
#define     LMG_HCLM11SP0TimeLength 5
#define LMG_HCLM11SP1Active                     16099      // 1 Bit, Bit 6
#define     LMG_HCLM11SP1ActiveMask 0x40
#define     LMG_HCLM11SP1ActiveShift 6
#define LMG_HCLM11SP1Brightness                 14897      // uint8_t
#define LMG_HCLM11SP1Kelvin                     14895      // uint16_t
#define LMG_HCLM11SP1SummerBrightness           16122      // uint8_t
#define LMG_HCLM11SP1SummerKelvin               16103      // uint16_t
#define LMG_HCLM11SP1Time                       14890      // char*, 5 Byte
#define     LMG_HCLM11SP1TimeLength 5
#define LMG_HCLM11SP2Active                     16099      // 1 Bit, Bit 5
#define     LMG_HCLM11SP2ActiveMask 0x20
#define     LMG_HCLM11SP2ActiveShift 5
#define LMG_HCLM11SP2Brightness                 14905      // uint8_t
#define LMG_HCLM11SP2Kelvin                     14903      // uint16_t
#define LMG_HCLM11SP2SummerBrightness           16123      // uint8_t
#define LMG_HCLM11SP2SummerKelvin               16105      // uint16_t
#define LMG_HCLM11SP2Time                       14898      // char*, 5 Byte
#define     LMG_HCLM11SP2TimeLength 5
#define LMG_HCLM11SP3Active                     16099      // 1 Bit, Bit 4
#define     LMG_HCLM11SP3ActiveMask 0x10
#define     LMG_HCLM11SP3ActiveShift 4
#define LMG_HCLM11SP3Brightness                 14913      // uint8_t
#define LMG_HCLM11SP3Kelvin                     14911      // uint16_t
#define LMG_HCLM11SP3SummerBrightness           16124      // uint8_t
#define LMG_HCLM11SP3SummerKelvin               16107      // uint16_t
#define LMG_HCLM11SP3Time                       14906      // char*, 5 Byte
#define     LMG_HCLM11SP3TimeLength 5
#define LMG_HCLM11SP4Active                     16099      // 1 Bit, Bit 3
#define     LMG_HCLM11SP4ActiveMask 0x08
#define     LMG_HCLM11SP4ActiveShift 3
#define LMG_HCLM11SP4Brightness                 14921      // uint8_t
#define LMG_HCLM11SP4Kelvin                     14919      // uint16_t
#define LMG_HCLM11SP4SummerBrightness           16125      // uint8_t
#define LMG_HCLM11SP4SummerKelvin               16109      // uint16_t
#define LMG_HCLM11SP4Time                       14914      // char*, 5 Byte
#define     LMG_HCLM11SP4TimeLength 5
#define LMG_HCLM11SP5Active                     16099      // 1 Bit, Bit 2
#define     LMG_HCLM11SP5ActiveMask 0x04
#define     LMG_HCLM11SP5ActiveShift 2
#define LMG_HCLM11SP5Brightness                 14929      // uint8_t
#define LMG_HCLM11SP5Kelvin                     14927      // uint16_t
#define LMG_HCLM11SP5SummerBrightness           16126      // uint8_t
#define LMG_HCLM11SP5SummerKelvin               16111      // uint16_t
#define LMG_HCLM11SP5Time                       14922      // char*, 5 Byte
#define     LMG_HCLM11SP5TimeLength 5
#define LMG_HCLM11SP6Active                     16099      // 1 Bit, Bit 1
#define     LMG_HCLM11SP6ActiveMask 0x02
#define     LMG_HCLM11SP6ActiveShift 1
#define LMG_HCLM11SP6Brightness                 14937      // uint8_t
#define LMG_HCLM11SP6Kelvin                     14935      // uint16_t
#define LMG_HCLM11SP6SummerBrightness           16127      // uint8_t
#define LMG_HCLM11SP6SummerKelvin               16113      // uint16_t
#define LMG_HCLM11SP6Time                       14930      // char*, 5 Byte
#define     LMG_HCLM11SP6TimeLength 5
#define LMG_HCLM11SP7Active                     16099      // 1 Bit, Bit 0
#define     LMG_HCLM11SP7ActiveMask 0x01
#define     LMG_HCLM11SP7ActiveShift 0
#define LMG_HCLM11SP7Brightness                 14945      // uint8_t
#define LMG_HCLM11SP7Kelvin                     14943      // uint16_t
#define LMG_HCLM11SP7SummerBrightness           16128      // uint8_t
#define LMG_HCLM11SP7SummerKelvin               16115      // uint16_t
#define LMG_HCLM11SP7Time                       14938      // char*, 5 Byte
#define     LMG_HCLM11SP7TimeLength 5
#define LMG_HCLM11SP8Active                     16100      // 1 Bit, Bit 7
#define     LMG_HCLM11SP8ActiveMask 0x80
#define     LMG_HCLM11SP8ActiveShift 7
#define LMG_HCLM11SP8Brightness                 14953      // uint8_t
#define LMG_HCLM11SP8Kelvin                     14951      // uint16_t
#define LMG_HCLM11SP8SummerBrightness           16129      // uint8_t
#define LMG_HCLM11SP8SummerKelvin               16117      // uint16_t
#define LMG_HCLM11SP8Time                       14946      // char*, 5 Byte
#define     LMG_HCLM11SP8TimeLength 5
#define LMG_HCLM11SP9Active                     16100      // 1 Bit, Bit 6
#define     LMG_HCLM11SP9ActiveMask 0x40
#define     LMG_HCLM11SP9ActiveShift 6
#define LMG_HCLM11SP9Brightness                 14961      // uint8_t
#define LMG_HCLM11SP9Kelvin                     14959      // uint16_t
#define LMG_HCLM11SP9SummerBrightness           16130      // uint8_t
#define LMG_HCLM11SP9SummerKelvin               16119      // uint16_t
#define LMG_HCLM11SP9Time                       14954      // char*, 5 Byte
#define     LMG_HCLM11SP9TimeLength 5
#define LMG_HCLM11SummerEndDay                  16098      // uint8_t
#define LMG_HCLM11SummerEndMonth                16097      // uint8_t
#define LMG_HCLM11SummerStartDay                16096      // uint8_t
#define LMG_HCLM11SummerStartMonth              16095      // uint8_t
#define LMG_HCLM11Sunrise                       15124      // char*, 5 Byte
#define     LMG_HCLM11SunriseLength 5
#define LMG_HCLM11SunriseOffset                 15134      // int16_t
#define LMG_HCLM11Sunset                        15129      // char*, 5 Byte
#define     LMG_HCLM11SunsetLength 5
#define LMG_HCLM11SunsetOffset                  15136      // int16_t
#define LMG_LMGHCLM12FallbackPolicy             17541      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM12FallbackDurationSec        17556      // uint16_t
#define LMG_LMGHCLM12FallbackReleaseTime        17593      // char*, 5 Byte
#define     LMG_LMGHCLM12FallbackReleaseTimeLength 5
#define LMG_LMGHCLM12StatusKoEnable             18635      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM12StatusKoEnableMask 0x03
#define     LMG_LMGHCLM12StatusKoEnableShift 0
#define LMG_LMGHCLM12LockFallback               17240      // 8 Bits, Bit 7-0
#define LMG_HCLM12AdaptiveActiveMode            18612      // 8 Bits, Bit 7-0
#define LMG_HCLM12AdaptiveCeilToHCL             18613      // 8 Bits, Bit 7-0
#define LMG_HCLM12AdaptiveDayNightPolarity      18633      // 8 Bits, Bit 7-0
#define LMG_HCLM12AdaptiveDeadband              18621      // uint16_t
#define LMG_HCLM12AdaptiveEndTime               18628      // char*, 5 Byte
#define     LMG_HCLM12AdaptiveEndTimeLength 5
#define LMG_HCLM12AdaptiveKp                    18620      // 8 Bits, Bit 7-0
#define LMG_HCLM12AdaptiveMaxLux                18614      // uint16_t
#define LMG_HCLM12AdaptiveMinBrightness         18616      // uint8_t
#define LMG_HCLM12AdaptiveMinChange             18618      // uint8_t
#define LMG_HCLM12AdaptiveMode                  18611      // 8 Bits, Bit 7-0
#define LMG_HCLM12AdaptiveSensorTimeout         18617      // uint8_t
#define LMG_HCLM12AdaptiveStartTime             18623      // char*, 5 Byte
#define     LMG_HCLM12AdaptiveStartTimeLength 5
#define LMG_HCLM12AdaptiveStrength              18619      // uint8_t
#define LMG_HCLM12AstroMaxBrightness            17300      // uint8_t
#define LMG_HCLM12AstroMaxKelvin                17297      // uint16_t
#define LMG_HCLM12AstroMinBrightness            17299      // uint8_t
#define LMG_HCLM12AstroMinKelvin                17295      // uint16_t
#define LMG_HCLM12CurveType                     17213      // 8 Bits, Bit 7-0
#define LMG_HCLM12DSTOffsetDays                 18188      // int8_t
#define LMG_HCLM12ManualKelvin                  17216      // uint16_t
#define LMG_HCLM12Name                          17131      // char*, 25 Byte
#define     LMG_HCLM12NameLength 25
#define LMG_HCLM12SeasonMode                    18187      // 8 Bits, Bit 7-0
#define LMG_HCLM12SetpointCount                 17308      // 8 Bits, Bit 7-0
#define LMG_HCLM12SlewRate                      17214      // uint16_t
#define LMG_HCLM12SP0Active                     18193      // 1 Bit, Bit 7
#define     LMG_HCLM12SP0ActiveMask 0x80
#define     LMG_HCLM12SP0ActiveShift 7
#define LMG_HCLM12SP0Brightness                 16983      // uint8_t
#define LMG_HCLM12SP0Kelvin                     16981      // uint16_t
#define LMG_HCLM12SP0SummerBrightness           18215      // uint8_t
#define LMG_HCLM12SP0SummerKelvin               18195      // uint16_t
#define LMG_HCLM12SP0Time                       16976      // char*, 5 Byte
#define     LMG_HCLM12SP0TimeLength 5
#define LMG_HCLM12SP1Active                     18193      // 1 Bit, Bit 6
#define     LMG_HCLM12SP1ActiveMask 0x40
#define     LMG_HCLM12SP1ActiveShift 6
#define LMG_HCLM12SP1Brightness                 16991      // uint8_t
#define LMG_HCLM12SP1Kelvin                     16989      // uint16_t
#define LMG_HCLM12SP1SummerBrightness           18216      // uint8_t
#define LMG_HCLM12SP1SummerKelvin               18197      // uint16_t
#define LMG_HCLM12SP1Time                       16984      // char*, 5 Byte
#define     LMG_HCLM12SP1TimeLength 5
#define LMG_HCLM12SP2Active                     18193      // 1 Bit, Bit 5
#define     LMG_HCLM12SP2ActiveMask 0x20
#define     LMG_HCLM12SP2ActiveShift 5
#define LMG_HCLM12SP2Brightness                 16999      // uint8_t
#define LMG_HCLM12SP2Kelvin                     16997      // uint16_t
#define LMG_HCLM12SP2SummerBrightness           18217      // uint8_t
#define LMG_HCLM12SP2SummerKelvin               18199      // uint16_t
#define LMG_HCLM12SP2Time                       16992      // char*, 5 Byte
#define     LMG_HCLM12SP2TimeLength 5
#define LMG_HCLM12SP3Active                     18193      // 1 Bit, Bit 4
#define     LMG_HCLM12SP3ActiveMask 0x10
#define     LMG_HCLM12SP3ActiveShift 4
#define LMG_HCLM12SP3Brightness                 17007      // uint8_t
#define LMG_HCLM12SP3Kelvin                     17005      // uint16_t
#define LMG_HCLM12SP3SummerBrightness           18218      // uint8_t
#define LMG_HCLM12SP3SummerKelvin               18201      // uint16_t
#define LMG_HCLM12SP3Time                       17000      // char*, 5 Byte
#define     LMG_HCLM12SP3TimeLength 5
#define LMG_HCLM12SP4Active                     18193      // 1 Bit, Bit 3
#define     LMG_HCLM12SP4ActiveMask 0x08
#define     LMG_HCLM12SP4ActiveShift 3
#define LMG_HCLM12SP4Brightness                 17015      // uint8_t
#define LMG_HCLM12SP4Kelvin                     17013      // uint16_t
#define LMG_HCLM12SP4SummerBrightness           18219      // uint8_t
#define LMG_HCLM12SP4SummerKelvin               18203      // uint16_t
#define LMG_HCLM12SP4Time                       17008      // char*, 5 Byte
#define     LMG_HCLM12SP4TimeLength 5
#define LMG_HCLM12SP5Active                     18193      // 1 Bit, Bit 2
#define     LMG_HCLM12SP5ActiveMask 0x04
#define     LMG_HCLM12SP5ActiveShift 2
#define LMG_HCLM12SP5Brightness                 17023      // uint8_t
#define LMG_HCLM12SP5Kelvin                     17021      // uint16_t
#define LMG_HCLM12SP5SummerBrightness           18220      // uint8_t
#define LMG_HCLM12SP5SummerKelvin               18205      // uint16_t
#define LMG_HCLM12SP5Time                       17016      // char*, 5 Byte
#define     LMG_HCLM12SP5TimeLength 5
#define LMG_HCLM12SP6Active                     18193      // 1 Bit, Bit 1
#define     LMG_HCLM12SP6ActiveMask 0x02
#define     LMG_HCLM12SP6ActiveShift 1
#define LMG_HCLM12SP6Brightness                 17031      // uint8_t
#define LMG_HCLM12SP6Kelvin                     17029      // uint16_t
#define LMG_HCLM12SP6SummerBrightness           18221      // uint8_t
#define LMG_HCLM12SP6SummerKelvin               18207      // uint16_t
#define LMG_HCLM12SP6Time                       17024      // char*, 5 Byte
#define     LMG_HCLM12SP6TimeLength 5
#define LMG_HCLM12SP7Active                     18193      // 1 Bit, Bit 0
#define     LMG_HCLM12SP7ActiveMask 0x01
#define     LMG_HCLM12SP7ActiveShift 0
#define LMG_HCLM12SP7Brightness                 17039      // uint8_t
#define LMG_HCLM12SP7Kelvin                     17037      // uint16_t
#define LMG_HCLM12SP7SummerBrightness           18222      // uint8_t
#define LMG_HCLM12SP7SummerKelvin               18209      // uint16_t
#define LMG_HCLM12SP7Time                       17032      // char*, 5 Byte
#define     LMG_HCLM12SP7TimeLength 5
#define LMG_HCLM12SP8Active                     18194      // 1 Bit, Bit 7
#define     LMG_HCLM12SP8ActiveMask 0x80
#define     LMG_HCLM12SP8ActiveShift 7
#define LMG_HCLM12SP8Brightness                 17047      // uint8_t
#define LMG_HCLM12SP8Kelvin                     17045      // uint16_t
#define LMG_HCLM12SP8SummerBrightness           18223      // uint8_t
#define LMG_HCLM12SP8SummerKelvin               18211      // uint16_t
#define LMG_HCLM12SP8Time                       17040      // char*, 5 Byte
#define     LMG_HCLM12SP8TimeLength 5
#define LMG_HCLM12SP9Active                     18194      // 1 Bit, Bit 6
#define     LMG_HCLM12SP9ActiveMask 0x40
#define     LMG_HCLM12SP9ActiveShift 6
#define LMG_HCLM12SP9Brightness                 17055      // uint8_t
#define LMG_HCLM12SP9Kelvin                     17053      // uint16_t
#define LMG_HCLM12SP9SummerBrightness           18224      // uint8_t
#define LMG_HCLM12SP9SummerKelvin               18213      // uint16_t
#define LMG_HCLM12SP9Time                       17048      // char*, 5 Byte
#define     LMG_HCLM12SP9TimeLength 5
#define LMG_HCLM12SummerEndDay                  18192      // uint8_t
#define LMG_HCLM12SummerEndMonth                18191      // uint8_t
#define LMG_HCLM12SummerStartDay                18190      // uint8_t
#define LMG_HCLM12SummerStartMonth              18189      // uint8_t
#define LMG_HCLM12Sunrise                       17218      // char*, 5 Byte
#define     LMG_HCLM12SunriseLength 5
#define LMG_HCLM12SunriseOffset                 17228      // int16_t
#define LMG_HCLM12Sunset                        17223      // char*, 5 Byte
#define     LMG_HCLM12SunsetLength 5
#define LMG_HCLM12SunsetOffset                  17230      // int16_t
#define LMG_LMGHCLM13FallbackPolicy             19635      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM13FallbackDurationSec        19650      // uint16_t
#define LMG_LMGHCLM13FallbackReleaseTime        19687      // char*, 5 Byte
#define     LMG_LMGHCLM13FallbackReleaseTimeLength 5
#define LMG_LMGHCLM13StatusKoEnable             20729      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM13StatusKoEnableMask 0x03
#define     LMG_LMGHCLM13StatusKoEnableShift 0
#define LMG_LMGHCLM13LockFallback               19334      // 8 Bits, Bit 7-0
#define LMG_HCLM13AdaptiveActiveMode            20706      // 8 Bits, Bit 7-0
#define LMG_HCLM13AdaptiveCeilToHCL             20707      // 8 Bits, Bit 7-0
#define LMG_HCLM13AdaptiveDayNightPolarity      20727      // 8 Bits, Bit 7-0
#define LMG_HCLM13AdaptiveDeadband              20715      // uint16_t
#define LMG_HCLM13AdaptiveEndTime               20722      // char*, 5 Byte
#define     LMG_HCLM13AdaptiveEndTimeLength 5
#define LMG_HCLM13AdaptiveKp                    20714      // 8 Bits, Bit 7-0
#define LMG_HCLM13AdaptiveMaxLux                20708      // uint16_t
#define LMG_HCLM13AdaptiveMinBrightness         20710      // uint8_t
#define LMG_HCLM13AdaptiveMinChange             20712      // uint8_t
#define LMG_HCLM13AdaptiveMode                  20705      // 8 Bits, Bit 7-0
#define LMG_HCLM13AdaptiveSensorTimeout         20711      // uint8_t
#define LMG_HCLM13AdaptiveStartTime             20717      // char*, 5 Byte
#define     LMG_HCLM13AdaptiveStartTimeLength 5
#define LMG_HCLM13AdaptiveStrength              20713      // uint8_t
#define LMG_HCLM13AstroMaxBrightness            19394      // uint8_t
#define LMG_HCLM13AstroMaxKelvin                19391      // uint16_t
#define LMG_HCLM13AstroMinBrightness            19393      // uint8_t
#define LMG_HCLM13AstroMinKelvin                19389      // uint16_t
#define LMG_HCLM13CurveType                     19307      // 8 Bits, Bit 7-0
#define LMG_HCLM13DSTOffsetDays                 20282      // int8_t
#define LMG_HCLM13ManualKelvin                  19310      // uint16_t
#define LMG_HCLM13Name                          19225      // char*, 25 Byte
#define     LMG_HCLM13NameLength 25
#define LMG_HCLM13SeasonMode                    20281      // 8 Bits, Bit 7-0
#define LMG_HCLM13SetpointCount                 19402      // 8 Bits, Bit 7-0
#define LMG_HCLM13SlewRate                      19308      // uint16_t
#define LMG_HCLM13SP0Active                     20287      // 1 Bit, Bit 7
#define     LMG_HCLM13SP0ActiveMask 0x80
#define     LMG_HCLM13SP0ActiveShift 7
#define LMG_HCLM13SP0Brightness                 19077      // uint8_t
#define LMG_HCLM13SP0Kelvin                     19075      // uint16_t
#define LMG_HCLM13SP0SummerBrightness           20309      // uint8_t
#define LMG_HCLM13SP0SummerKelvin               20289      // uint16_t
#define LMG_HCLM13SP0Time                       19070      // char*, 5 Byte
#define     LMG_HCLM13SP0TimeLength 5
#define LMG_HCLM13SP1Active                     20287      // 1 Bit, Bit 6
#define     LMG_HCLM13SP1ActiveMask 0x40
#define     LMG_HCLM13SP1ActiveShift 6
#define LMG_HCLM13SP1Brightness                 19085      // uint8_t
#define LMG_HCLM13SP1Kelvin                     19083      // uint16_t
#define LMG_HCLM13SP1SummerBrightness           20310      // uint8_t
#define LMG_HCLM13SP1SummerKelvin               20291      // uint16_t
#define LMG_HCLM13SP1Time                       19078      // char*, 5 Byte
#define     LMG_HCLM13SP1TimeLength 5
#define LMG_HCLM13SP2Active                     20287      // 1 Bit, Bit 5
#define     LMG_HCLM13SP2ActiveMask 0x20
#define     LMG_HCLM13SP2ActiveShift 5
#define LMG_HCLM13SP2Brightness                 19093      // uint8_t
#define LMG_HCLM13SP2Kelvin                     19091      // uint16_t
#define LMG_HCLM13SP2SummerBrightness           20311      // uint8_t
#define LMG_HCLM13SP2SummerKelvin               20293      // uint16_t
#define LMG_HCLM13SP2Time                       19086      // char*, 5 Byte
#define     LMG_HCLM13SP2TimeLength 5
#define LMG_HCLM13SP3Active                     20287      // 1 Bit, Bit 4
#define     LMG_HCLM13SP3ActiveMask 0x10
#define     LMG_HCLM13SP3ActiveShift 4
#define LMG_HCLM13SP3Brightness                 19101      // uint8_t
#define LMG_HCLM13SP3Kelvin                     19099      // uint16_t
#define LMG_HCLM13SP3SummerBrightness           20312      // uint8_t
#define LMG_HCLM13SP3SummerKelvin               20295      // uint16_t
#define LMG_HCLM13SP3Time                       19094      // char*, 5 Byte
#define     LMG_HCLM13SP3TimeLength 5
#define LMG_HCLM13SP4Active                     20287      // 1 Bit, Bit 3
#define     LMG_HCLM13SP4ActiveMask 0x08
#define     LMG_HCLM13SP4ActiveShift 3
#define LMG_HCLM13SP4Brightness                 19109      // uint8_t
#define LMG_HCLM13SP4Kelvin                     19107      // uint16_t
#define LMG_HCLM13SP4SummerBrightness           20313      // uint8_t
#define LMG_HCLM13SP4SummerKelvin               20297      // uint16_t
#define LMG_HCLM13SP4Time                       19102      // char*, 5 Byte
#define     LMG_HCLM13SP4TimeLength 5
#define LMG_HCLM13SP5Active                     20287      // 1 Bit, Bit 2
#define     LMG_HCLM13SP5ActiveMask 0x04
#define     LMG_HCLM13SP5ActiveShift 2
#define LMG_HCLM13SP5Brightness                 19117      // uint8_t
#define LMG_HCLM13SP5Kelvin                     19115      // uint16_t
#define LMG_HCLM13SP5SummerBrightness           20314      // uint8_t
#define LMG_HCLM13SP5SummerKelvin               20299      // uint16_t
#define LMG_HCLM13SP5Time                       19110      // char*, 5 Byte
#define     LMG_HCLM13SP5TimeLength 5
#define LMG_HCLM13SP6Active                     20287      // 1 Bit, Bit 1
#define     LMG_HCLM13SP6ActiveMask 0x02
#define     LMG_HCLM13SP6ActiveShift 1
#define LMG_HCLM13SP6Brightness                 19125      // uint8_t
#define LMG_HCLM13SP6Kelvin                     19123      // uint16_t
#define LMG_HCLM13SP6SummerBrightness           20315      // uint8_t
#define LMG_HCLM13SP6SummerKelvin               20301      // uint16_t
#define LMG_HCLM13SP6Time                       19118      // char*, 5 Byte
#define     LMG_HCLM13SP6TimeLength 5
#define LMG_HCLM13SP7Active                     20287      // 1 Bit, Bit 0
#define     LMG_HCLM13SP7ActiveMask 0x01
#define     LMG_HCLM13SP7ActiveShift 0
#define LMG_HCLM13SP7Brightness                 19133      // uint8_t
#define LMG_HCLM13SP7Kelvin                     19131      // uint16_t
#define LMG_HCLM13SP7SummerBrightness           20316      // uint8_t
#define LMG_HCLM13SP7SummerKelvin               20303      // uint16_t
#define LMG_HCLM13SP7Time                       19126      // char*, 5 Byte
#define     LMG_HCLM13SP7TimeLength 5
#define LMG_HCLM13SP8Active                     20288      // 1 Bit, Bit 7
#define     LMG_HCLM13SP8ActiveMask 0x80
#define     LMG_HCLM13SP8ActiveShift 7
#define LMG_HCLM13SP8Brightness                 19141      // uint8_t
#define LMG_HCLM13SP8Kelvin                     19139      // uint16_t
#define LMG_HCLM13SP8SummerBrightness           20317      // uint8_t
#define LMG_HCLM13SP8SummerKelvin               20305      // uint16_t
#define LMG_HCLM13SP8Time                       19134      // char*, 5 Byte
#define     LMG_HCLM13SP8TimeLength 5
#define LMG_HCLM13SP9Active                     20288      // 1 Bit, Bit 6
#define     LMG_HCLM13SP9ActiveMask 0x40
#define     LMG_HCLM13SP9ActiveShift 6
#define LMG_HCLM13SP9Brightness                 19149      // uint8_t
#define LMG_HCLM13SP9Kelvin                     19147      // uint16_t
#define LMG_HCLM13SP9SummerBrightness           20318      // uint8_t
#define LMG_HCLM13SP9SummerKelvin               20307      // uint16_t
#define LMG_HCLM13SP9Time                       19142      // char*, 5 Byte
#define     LMG_HCLM13SP9TimeLength 5
#define LMG_HCLM13SummerEndDay                  20286      // uint8_t
#define LMG_HCLM13SummerEndMonth                20285      // uint8_t
#define LMG_HCLM13SummerStartDay                20284      // uint8_t
#define LMG_HCLM13SummerStartMonth              20283      // uint8_t
#define LMG_HCLM13Sunrise                       19312      // char*, 5 Byte
#define     LMG_HCLM13SunriseLength 5
#define LMG_HCLM13SunriseOffset                 19322      // int16_t
#define LMG_HCLM13Sunset                        19317      // char*, 5 Byte
#define     LMG_HCLM13SunsetLength 5
#define LMG_HCLM13SunsetOffset                  19324      // int16_t
#define LMG_LMGHCLM14FallbackPolicy             21729      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM14FallbackDurationSec        21744      // uint16_t
#define LMG_LMGHCLM14FallbackReleaseTime        21781      // char*, 5 Byte
#define     LMG_LMGHCLM14FallbackReleaseTimeLength 5
#define LMG_LMGHCLM14StatusKoEnable             22823      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM14StatusKoEnableMask 0x03
#define     LMG_LMGHCLM14StatusKoEnableShift 0
#define LMG_LMGHCLM14LockFallback               21428      // 8 Bits, Bit 7-0
#define LMG_HCLM14AdaptiveActiveMode            22800      // 8 Bits, Bit 7-0
#define LMG_HCLM14AdaptiveCeilToHCL             22801      // 8 Bits, Bit 7-0
#define LMG_HCLM14AdaptiveDayNightPolarity      22821      // 8 Bits, Bit 7-0
#define LMG_HCLM14AdaptiveDeadband              22809      // uint16_t
#define LMG_HCLM14AdaptiveEndTime               22816      // char*, 5 Byte
#define     LMG_HCLM14AdaptiveEndTimeLength 5
#define LMG_HCLM14AdaptiveKp                    22808      // 8 Bits, Bit 7-0
#define LMG_HCLM14AdaptiveMaxLux                22802      // uint16_t
#define LMG_HCLM14AdaptiveMinBrightness         22804      // uint8_t
#define LMG_HCLM14AdaptiveMinChange             22806      // uint8_t
#define LMG_HCLM14AdaptiveMode                  22799      // 8 Bits, Bit 7-0
#define LMG_HCLM14AdaptiveSensorTimeout         22805      // uint8_t
#define LMG_HCLM14AdaptiveStartTime             22811      // char*, 5 Byte
#define     LMG_HCLM14AdaptiveStartTimeLength 5
#define LMG_HCLM14AdaptiveStrength              22807      // uint8_t
#define LMG_HCLM14AstroMaxBrightness            21488      // uint8_t
#define LMG_HCLM14AstroMaxKelvin                21485      // uint16_t
#define LMG_HCLM14AstroMinBrightness            21487      // uint8_t
#define LMG_HCLM14AstroMinKelvin                21483      // uint16_t
#define LMG_HCLM14CurveType                     21401      // 8 Bits, Bit 7-0
#define LMG_HCLM14DSTOffsetDays                 22376      // int8_t
#define LMG_HCLM14ManualKelvin                  21404      // uint16_t
#define LMG_HCLM14Name                          21319      // char*, 25 Byte
#define     LMG_HCLM14NameLength 25
#define LMG_HCLM14SeasonMode                    22375      // 8 Bits, Bit 7-0
#define LMG_HCLM14SetpointCount                 21496      // 8 Bits, Bit 7-0
#define LMG_HCLM14SlewRate                      21402      // uint16_t
#define LMG_HCLM14SP0Active                     22381      // 1 Bit, Bit 7
#define     LMG_HCLM14SP0ActiveMask 0x80
#define     LMG_HCLM14SP0ActiveShift 7
#define LMG_HCLM14SP0Brightness                 21171      // uint8_t
#define LMG_HCLM14SP0Kelvin                     21169      // uint16_t
#define LMG_HCLM14SP0SummerBrightness           22403      // uint8_t
#define LMG_HCLM14SP0SummerKelvin               22383      // uint16_t
#define LMG_HCLM14SP0Time                       21164      // char*, 5 Byte
#define     LMG_HCLM14SP0TimeLength 5
#define LMG_HCLM14SP1Active                     22381      // 1 Bit, Bit 6
#define     LMG_HCLM14SP1ActiveMask 0x40
#define     LMG_HCLM14SP1ActiveShift 6
#define LMG_HCLM14SP1Brightness                 21179      // uint8_t
#define LMG_HCLM14SP1Kelvin                     21177      // uint16_t
#define LMG_HCLM14SP1SummerBrightness           22404      // uint8_t
#define LMG_HCLM14SP1SummerKelvin               22385      // uint16_t
#define LMG_HCLM14SP1Time                       21172      // char*, 5 Byte
#define     LMG_HCLM14SP1TimeLength 5
#define LMG_HCLM14SP2Active                     22381      // 1 Bit, Bit 5
#define     LMG_HCLM14SP2ActiveMask 0x20
#define     LMG_HCLM14SP2ActiveShift 5
#define LMG_HCLM14SP2Brightness                 21187      // uint8_t
#define LMG_HCLM14SP2Kelvin                     21185      // uint16_t
#define LMG_HCLM14SP2SummerBrightness           22405      // uint8_t
#define LMG_HCLM14SP2SummerKelvin               22387      // uint16_t
#define LMG_HCLM14SP2Time                       21180      // char*, 5 Byte
#define     LMG_HCLM14SP2TimeLength 5
#define LMG_HCLM14SP3Active                     22381      // 1 Bit, Bit 4
#define     LMG_HCLM14SP3ActiveMask 0x10
#define     LMG_HCLM14SP3ActiveShift 4
#define LMG_HCLM14SP3Brightness                 21195      // uint8_t
#define LMG_HCLM14SP3Kelvin                     21193      // uint16_t
#define LMG_HCLM14SP3SummerBrightness           22406      // uint8_t
#define LMG_HCLM14SP3SummerKelvin               22389      // uint16_t
#define LMG_HCLM14SP3Time                       21188      // char*, 5 Byte
#define     LMG_HCLM14SP3TimeLength 5
#define LMG_HCLM14SP4Active                     22381      // 1 Bit, Bit 3
#define     LMG_HCLM14SP4ActiveMask 0x08
#define     LMG_HCLM14SP4ActiveShift 3
#define LMG_HCLM14SP4Brightness                 21203      // uint8_t
#define LMG_HCLM14SP4Kelvin                     21201      // uint16_t
#define LMG_HCLM14SP4SummerBrightness           22407      // uint8_t
#define LMG_HCLM14SP4SummerKelvin               22391      // uint16_t
#define LMG_HCLM14SP4Time                       21196      // char*, 5 Byte
#define     LMG_HCLM14SP4TimeLength 5
#define LMG_HCLM14SP5Active                     22381      // 1 Bit, Bit 2
#define     LMG_HCLM14SP5ActiveMask 0x04
#define     LMG_HCLM14SP5ActiveShift 2
#define LMG_HCLM14SP5Brightness                 21211      // uint8_t
#define LMG_HCLM14SP5Kelvin                     21209      // uint16_t
#define LMG_HCLM14SP5SummerBrightness           22408      // uint8_t
#define LMG_HCLM14SP5SummerKelvin               22393      // uint16_t
#define LMG_HCLM14SP5Time                       21204      // char*, 5 Byte
#define     LMG_HCLM14SP5TimeLength 5
#define LMG_HCLM14SP6Active                     22381      // 1 Bit, Bit 1
#define     LMG_HCLM14SP6ActiveMask 0x02
#define     LMG_HCLM14SP6ActiveShift 1
#define LMG_HCLM14SP6Brightness                 21219      // uint8_t
#define LMG_HCLM14SP6Kelvin                     21217      // uint16_t
#define LMG_HCLM14SP6SummerBrightness           22409      // uint8_t
#define LMG_HCLM14SP6SummerKelvin               22395      // uint16_t
#define LMG_HCLM14SP6Time                       21212      // char*, 5 Byte
#define     LMG_HCLM14SP6TimeLength 5
#define LMG_HCLM14SP7Active                     22381      // 1 Bit, Bit 0
#define     LMG_HCLM14SP7ActiveMask 0x01
#define     LMG_HCLM14SP7ActiveShift 0
#define LMG_HCLM14SP7Brightness                 21227      // uint8_t
#define LMG_HCLM14SP7Kelvin                     21225      // uint16_t
#define LMG_HCLM14SP7SummerBrightness           22410      // uint8_t
#define LMG_HCLM14SP7SummerKelvin               22397      // uint16_t
#define LMG_HCLM14SP7Time                       21220      // char*, 5 Byte
#define     LMG_HCLM14SP7TimeLength 5
#define LMG_HCLM14SP8Active                     22382      // 1 Bit, Bit 7
#define     LMG_HCLM14SP8ActiveMask 0x80
#define     LMG_HCLM14SP8ActiveShift 7
#define LMG_HCLM14SP8Brightness                 21235      // uint8_t
#define LMG_HCLM14SP8Kelvin                     21233      // uint16_t
#define LMG_HCLM14SP8SummerBrightness           22411      // uint8_t
#define LMG_HCLM14SP8SummerKelvin               22399      // uint16_t
#define LMG_HCLM14SP8Time                       21228      // char*, 5 Byte
#define     LMG_HCLM14SP8TimeLength 5
#define LMG_HCLM14SP9Active                     22382      // 1 Bit, Bit 6
#define     LMG_HCLM14SP9ActiveMask 0x40
#define     LMG_HCLM14SP9ActiveShift 6
#define LMG_HCLM14SP9Brightness                 21243      // uint8_t
#define LMG_HCLM14SP9Kelvin                     21241      // uint16_t
#define LMG_HCLM14SP9SummerBrightness           22412      // uint8_t
#define LMG_HCLM14SP9SummerKelvin               22401      // uint16_t
#define LMG_HCLM14SP9Time                       21236      // char*, 5 Byte
#define     LMG_HCLM14SP9TimeLength 5
#define LMG_HCLM14SummerEndDay                  22380      // uint8_t
#define LMG_HCLM14SummerEndMonth                22379      // uint8_t
#define LMG_HCLM14SummerStartDay                22378      // uint8_t
#define LMG_HCLM14SummerStartMonth              22377      // uint8_t
#define LMG_HCLM14Sunrise                       21406      // char*, 5 Byte
#define     LMG_HCLM14SunriseLength 5
#define LMG_HCLM14SunriseOffset                 21416      // int16_t
#define LMG_HCLM14Sunset                        21411      // char*, 5 Byte
#define     LMG_HCLM14SunsetLength 5
#define LMG_HCLM14SunsetOffset                  21418      // int16_t
#define LMG_LMGHCLM15FallbackPolicy             23823      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM15FallbackDurationSec        23838      // uint16_t
#define LMG_LMGHCLM15FallbackReleaseTime        23875      // char*, 5 Byte
#define     LMG_LMGHCLM15FallbackReleaseTimeLength 5
#define LMG_LMGHCLM15StatusKoEnable             24917      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM15StatusKoEnableMask 0x03
#define     LMG_LMGHCLM15StatusKoEnableShift 0
#define LMG_LMGHCLM15LockFallback               23522      // 8 Bits, Bit 7-0
#define LMG_HCLM15AdaptiveActiveMode            24894      // 8 Bits, Bit 7-0
#define LMG_HCLM15AdaptiveCeilToHCL             24895      // 8 Bits, Bit 7-0
#define LMG_HCLM15AdaptiveDayNightPolarity      24915      // 8 Bits, Bit 7-0
#define LMG_HCLM15AdaptiveDeadband              24903      // uint16_t
#define LMG_HCLM15AdaptiveEndTime               24910      // char*, 5 Byte
#define     LMG_HCLM15AdaptiveEndTimeLength 5
#define LMG_HCLM15AdaptiveKp                    24902      // 8 Bits, Bit 7-0
#define LMG_HCLM15AdaptiveMaxLux                24896      // uint16_t
#define LMG_HCLM15AdaptiveMinBrightness         24898      // uint8_t
#define LMG_HCLM15AdaptiveMinChange             24900      // uint8_t
#define LMG_HCLM15AdaptiveMode                  24893      // 8 Bits, Bit 7-0
#define LMG_HCLM15AdaptiveSensorTimeout         24899      // uint8_t
#define LMG_HCLM15AdaptiveStartTime             24905      // char*, 5 Byte
#define     LMG_HCLM15AdaptiveStartTimeLength 5
#define LMG_HCLM15AdaptiveStrength              24901      // uint8_t
#define LMG_HCLM15AstroMaxBrightness            23582      // uint8_t
#define LMG_HCLM15AstroMaxKelvin                23579      // uint16_t
#define LMG_HCLM15AstroMinBrightness            23581      // uint8_t
#define LMG_HCLM15AstroMinKelvin                23577      // uint16_t
#define LMG_HCLM15CurveType                     23495      // 8 Bits, Bit 7-0
#define LMG_HCLM15DSTOffsetDays                 24470      // int8_t
#define LMG_HCLM15ManualKelvin                  23498      // uint16_t
#define LMG_HCLM15Name                          23413      // char*, 25 Byte
#define     LMG_HCLM15NameLength 25
#define LMG_HCLM15SeasonMode                    24469      // 8 Bits, Bit 7-0
#define LMG_HCLM15SetpointCount                 23590      // 8 Bits, Bit 7-0
#define LMG_HCLM15SlewRate                      23496      // uint16_t
#define LMG_HCLM15SP0Active                     24475      // 1 Bit, Bit 7
#define     LMG_HCLM15SP0ActiveMask 0x80
#define     LMG_HCLM15SP0ActiveShift 7
#define LMG_HCLM15SP0Brightness                 23265      // uint8_t
#define LMG_HCLM15SP0Kelvin                     23263      // uint16_t
#define LMG_HCLM15SP0SummerBrightness           24497      // uint8_t
#define LMG_HCLM15SP0SummerKelvin               24477      // uint16_t
#define LMG_HCLM15SP0Time                       23258      // char*, 5 Byte
#define     LMG_HCLM15SP0TimeLength 5
#define LMG_HCLM15SP1Active                     24475      // 1 Bit, Bit 6
#define     LMG_HCLM15SP1ActiveMask 0x40
#define     LMG_HCLM15SP1ActiveShift 6
#define LMG_HCLM15SP1Brightness                 23273      // uint8_t
#define LMG_HCLM15SP1Kelvin                     23271      // uint16_t
#define LMG_HCLM15SP1SummerBrightness           24498      // uint8_t
#define LMG_HCLM15SP1SummerKelvin               24479      // uint16_t
#define LMG_HCLM15SP1Time                       23266      // char*, 5 Byte
#define     LMG_HCLM15SP1TimeLength 5
#define LMG_HCLM15SP2Active                     24475      // 1 Bit, Bit 5
#define     LMG_HCLM15SP2ActiveMask 0x20
#define     LMG_HCLM15SP2ActiveShift 5
#define LMG_HCLM15SP2Brightness                 23281      // uint8_t
#define LMG_HCLM15SP2Kelvin                     23279      // uint16_t
#define LMG_HCLM15SP2SummerBrightness           24499      // uint8_t
#define LMG_HCLM15SP2SummerKelvin               24481      // uint16_t
#define LMG_HCLM15SP2Time                       23274      // char*, 5 Byte
#define     LMG_HCLM15SP2TimeLength 5
#define LMG_HCLM15SP3Active                     24475      // 1 Bit, Bit 4
#define     LMG_HCLM15SP3ActiveMask 0x10
#define     LMG_HCLM15SP3ActiveShift 4
#define LMG_HCLM15SP3Brightness                 23289      // uint8_t
#define LMG_HCLM15SP3Kelvin                     23287      // uint16_t
#define LMG_HCLM15SP3SummerBrightness           24500      // uint8_t
#define LMG_HCLM15SP3SummerKelvin               24483      // uint16_t
#define LMG_HCLM15SP3Time                       23282      // char*, 5 Byte
#define     LMG_HCLM15SP3TimeLength 5
#define LMG_HCLM15SP4Active                     24475      // 1 Bit, Bit 3
#define     LMG_HCLM15SP4ActiveMask 0x08
#define     LMG_HCLM15SP4ActiveShift 3
#define LMG_HCLM15SP4Brightness                 23297      // uint8_t
#define LMG_HCLM15SP4Kelvin                     23295      // uint16_t
#define LMG_HCLM15SP4SummerBrightness           24501      // uint8_t
#define LMG_HCLM15SP4SummerKelvin               24485      // uint16_t
#define LMG_HCLM15SP4Time                       23290      // char*, 5 Byte
#define     LMG_HCLM15SP4TimeLength 5
#define LMG_HCLM15SP5Active                     24475      // 1 Bit, Bit 2
#define     LMG_HCLM15SP5ActiveMask 0x04
#define     LMG_HCLM15SP5ActiveShift 2
#define LMG_HCLM15SP5Brightness                 23305      // uint8_t
#define LMG_HCLM15SP5Kelvin                     23303      // uint16_t
#define LMG_HCLM15SP5SummerBrightness           24502      // uint8_t
#define LMG_HCLM15SP5SummerKelvin               24487      // uint16_t
#define LMG_HCLM15SP5Time                       23298      // char*, 5 Byte
#define     LMG_HCLM15SP5TimeLength 5
#define LMG_HCLM15SP6Active                     24475      // 1 Bit, Bit 1
#define     LMG_HCLM15SP6ActiveMask 0x02
#define     LMG_HCLM15SP6ActiveShift 1
#define LMG_HCLM15SP6Brightness                 23313      // uint8_t
#define LMG_HCLM15SP6Kelvin                     23311      // uint16_t
#define LMG_HCLM15SP6SummerBrightness           24503      // uint8_t
#define LMG_HCLM15SP6SummerKelvin               24489      // uint16_t
#define LMG_HCLM15SP6Time                       23306      // char*, 5 Byte
#define     LMG_HCLM15SP6TimeLength 5
#define LMG_HCLM15SP7Active                     24475      // 1 Bit, Bit 0
#define     LMG_HCLM15SP7ActiveMask 0x01
#define     LMG_HCLM15SP7ActiveShift 0
#define LMG_HCLM15SP7Brightness                 23321      // uint8_t
#define LMG_HCLM15SP7Kelvin                     23319      // uint16_t
#define LMG_HCLM15SP7SummerBrightness           24504      // uint8_t
#define LMG_HCLM15SP7SummerKelvin               24491      // uint16_t
#define LMG_HCLM15SP7Time                       23314      // char*, 5 Byte
#define     LMG_HCLM15SP7TimeLength 5
#define LMG_HCLM15SP8Active                     24476      // 1 Bit, Bit 7
#define     LMG_HCLM15SP8ActiveMask 0x80
#define     LMG_HCLM15SP8ActiveShift 7
#define LMG_HCLM15SP8Brightness                 23329      // uint8_t
#define LMG_HCLM15SP8Kelvin                     23327      // uint16_t
#define LMG_HCLM15SP8SummerBrightness           24505      // uint8_t
#define LMG_HCLM15SP8SummerKelvin               24493      // uint16_t
#define LMG_HCLM15SP8Time                       23322      // char*, 5 Byte
#define     LMG_HCLM15SP8TimeLength 5
#define LMG_HCLM15SP9Active                     24476      // 1 Bit, Bit 6
#define     LMG_HCLM15SP9ActiveMask 0x40
#define     LMG_HCLM15SP9ActiveShift 6
#define LMG_HCLM15SP9Brightness                 23337      // uint8_t
#define LMG_HCLM15SP9Kelvin                     23335      // uint16_t
#define LMG_HCLM15SP9SummerBrightness           24506      // uint8_t
#define LMG_HCLM15SP9SummerKelvin               24495      // uint16_t
#define LMG_HCLM15SP9Time                       23330      // char*, 5 Byte
#define     LMG_HCLM15SP9TimeLength 5
#define LMG_HCLM15SummerEndDay                  24474      // uint8_t
#define LMG_HCLM15SummerEndMonth                24473      // uint8_t
#define LMG_HCLM15SummerStartDay                24472      // uint8_t
#define LMG_HCLM15SummerStartMonth              24471      // uint8_t
#define LMG_HCLM15Sunrise                       23500      // char*, 5 Byte
#define     LMG_HCLM15SunriseLength 5
#define LMG_HCLM15SunriseOffset                 23510      // int16_t
#define LMG_HCLM15Sunset                        23505      // char*, 5 Byte
#define     LMG_HCLM15SunsetLength 5
#define LMG_HCLM15SunsetOffset                  23512      // int16_t
#define LMG_LMGHCLM16FallbackPolicy             25917      // 8 Bits, Bit 7-0
#define LMG_LMGHCLM16FallbackDurationSec        25932      // uint16_t
#define LMG_LMGHCLM16FallbackReleaseTime        25969      // char*, 5 Byte
#define     LMG_LMGHCLM16FallbackReleaseTimeLength 5
#define LMG_LMGHCLM16StatusKoEnable             27011      // 2 Bits, Bit 1-0
#define     LMG_LMGHCLM16StatusKoEnableMask 0x03
#define     LMG_LMGHCLM16StatusKoEnableShift 0
#define LMG_LMGHCLM16LockFallback               25616      // 8 Bits, Bit 7-0
#define LMG_HCLM16AdaptiveActiveMode            26988      // 8 Bits, Bit 7-0
#define LMG_HCLM16AdaptiveCeilToHCL             26989      // 8 Bits, Bit 7-0
#define LMG_HCLM16AdaptiveDayNightPolarity      27009      // 8 Bits, Bit 7-0
#define LMG_HCLM16AdaptiveDeadband              26997      // uint16_t
#define LMG_HCLM16AdaptiveEndTime               27004      // char*, 5 Byte
#define     LMG_HCLM16AdaptiveEndTimeLength 5
#define LMG_HCLM16AdaptiveKp                    26996      // 8 Bits, Bit 7-0
#define LMG_HCLM16AdaptiveMaxLux                26990      // uint16_t
#define LMG_HCLM16AdaptiveMinBrightness         26992      // uint8_t
#define LMG_HCLM16AdaptiveMinChange             26994      // uint8_t
#define LMG_HCLM16AdaptiveMode                  26987      // 8 Bits, Bit 7-0
#define LMG_HCLM16AdaptiveSensorTimeout         26993      // uint8_t
#define LMG_HCLM16AdaptiveStartTime             26999      // char*, 5 Byte
#define     LMG_HCLM16AdaptiveStartTimeLength 5
#define LMG_HCLM16AdaptiveStrength              26995      // uint8_t
#define LMG_HCLM16AstroMaxBrightness            25676      // uint8_t
#define LMG_HCLM16AstroMaxKelvin                25673      // uint16_t
#define LMG_HCLM16AstroMinBrightness            25675      // uint8_t
#define LMG_HCLM16AstroMinKelvin                25671      // uint16_t
#define LMG_HCLM16CurveType                     25589      // 8 Bits, Bit 7-0
#define LMG_HCLM16DSTOffsetDays                 26564      // int8_t
#define LMG_HCLM16ManualKelvin                  25592      // uint16_t
#define LMG_HCLM16Name                          25507      // char*, 25 Byte
#define     LMG_HCLM16NameLength 25
#define LMG_HCLM16SeasonMode                    26563      // 8 Bits, Bit 7-0
#define LMG_HCLM16SetpointCount                 25684      // 8 Bits, Bit 7-0
#define LMG_HCLM16SlewRate                      25590      // uint16_t
#define LMG_HCLM16SP0Active                     26569      // 1 Bit, Bit 7
#define     LMG_HCLM16SP0ActiveMask 0x80
#define     LMG_HCLM16SP0ActiveShift 7
#define LMG_HCLM16SP0Brightness                 25359      // uint8_t
#define LMG_HCLM16SP0Kelvin                     25357      // uint16_t
#define LMG_HCLM16SP0SummerBrightness           26591      // uint8_t
#define LMG_HCLM16SP0SummerKelvin               26571      // uint16_t
#define LMG_HCLM16SP0Time                       25352      // char*, 5 Byte
#define     LMG_HCLM16SP0TimeLength 5
#define LMG_HCLM16SP1Active                     26569      // 1 Bit, Bit 6
#define     LMG_HCLM16SP1ActiveMask 0x40
#define     LMG_HCLM16SP1ActiveShift 6
#define LMG_HCLM16SP1Brightness                 25367      // uint8_t
#define LMG_HCLM16SP1Kelvin                     25365      // uint16_t
#define LMG_HCLM16SP1SummerBrightness           26592      // uint8_t
#define LMG_HCLM16SP1SummerKelvin               26573      // uint16_t
#define LMG_HCLM16SP1Time                       25360      // char*, 5 Byte
#define     LMG_HCLM16SP1TimeLength 5
#define LMG_HCLM16SP2Active                     26569      // 1 Bit, Bit 5
#define     LMG_HCLM16SP2ActiveMask 0x20
#define     LMG_HCLM16SP2ActiveShift 5
#define LMG_HCLM16SP2Brightness                 25375      // uint8_t
#define LMG_HCLM16SP2Kelvin                     25373      // uint16_t
#define LMG_HCLM16SP2SummerBrightness           26593      // uint8_t
#define LMG_HCLM16SP2SummerKelvin               26575      // uint16_t
#define LMG_HCLM16SP2Time                       25368      // char*, 5 Byte
#define     LMG_HCLM16SP2TimeLength 5
#define LMG_HCLM16SP3Active                     26569      // 1 Bit, Bit 4
#define     LMG_HCLM16SP3ActiveMask 0x10
#define     LMG_HCLM16SP3ActiveShift 4
#define LMG_HCLM16SP3Brightness                 25383      // uint8_t
#define LMG_HCLM16SP3Kelvin                     25381      // uint16_t
#define LMG_HCLM16SP3SummerBrightness           26594      // uint8_t
#define LMG_HCLM16SP3SummerKelvin               26577      // uint16_t
#define LMG_HCLM16SP3Time                       25376      // char*, 5 Byte
#define     LMG_HCLM16SP3TimeLength 5
#define LMG_HCLM16SP4Active                     26569      // 1 Bit, Bit 3
#define     LMG_HCLM16SP4ActiveMask 0x08
#define     LMG_HCLM16SP4ActiveShift 3
#define LMG_HCLM16SP4Brightness                 25391      // uint8_t
#define LMG_HCLM16SP4Kelvin                     25389      // uint16_t
#define LMG_HCLM16SP4SummerBrightness           26595      // uint8_t
#define LMG_HCLM16SP4SummerKelvin               26579      // uint16_t
#define LMG_HCLM16SP4Time                       25384      // char*, 5 Byte
#define     LMG_HCLM16SP4TimeLength 5
#define LMG_HCLM16SP5Active                     26569      // 1 Bit, Bit 2
#define     LMG_HCLM16SP5ActiveMask 0x04
#define     LMG_HCLM16SP5ActiveShift 2
#define LMG_HCLM16SP5Brightness                 25399      // uint8_t
#define LMG_HCLM16SP5Kelvin                     25397      // uint16_t
#define LMG_HCLM16SP5SummerBrightness           26596      // uint8_t
#define LMG_HCLM16SP5SummerKelvin               26581      // uint16_t
#define LMG_HCLM16SP5Time                       25392      // char*, 5 Byte
#define     LMG_HCLM16SP5TimeLength 5
#define LMG_HCLM16SP6Active                     26569      // 1 Bit, Bit 1
#define     LMG_HCLM16SP6ActiveMask 0x02
#define     LMG_HCLM16SP6ActiveShift 1
#define LMG_HCLM16SP6Brightness                 25407      // uint8_t
#define LMG_HCLM16SP6Kelvin                     25405      // uint16_t
#define LMG_HCLM16SP6SummerBrightness           26597      // uint8_t
#define LMG_HCLM16SP6SummerKelvin               26583      // uint16_t
#define LMG_HCLM16SP6Time                       25400      // char*, 5 Byte
#define     LMG_HCLM16SP6TimeLength 5
#define LMG_HCLM16SP7Active                     26569      // 1 Bit, Bit 0
#define     LMG_HCLM16SP7ActiveMask 0x01
#define     LMG_HCLM16SP7ActiveShift 0
#define LMG_HCLM16SP7Brightness                 25415      // uint8_t
#define LMG_HCLM16SP7Kelvin                     25413      // uint16_t
#define LMG_HCLM16SP7SummerBrightness           26598      // uint8_t
#define LMG_HCLM16SP7SummerKelvin               26585      // uint16_t
#define LMG_HCLM16SP7Time                       25408      // char*, 5 Byte
#define     LMG_HCLM16SP7TimeLength 5
#define LMG_HCLM16SP8Active                     26570      // 1 Bit, Bit 7
#define     LMG_HCLM16SP8ActiveMask 0x80
#define     LMG_HCLM16SP8ActiveShift 7
#define LMG_HCLM16SP8Brightness                 25423      // uint8_t
#define LMG_HCLM16SP8Kelvin                     25421      // uint16_t
#define LMG_HCLM16SP8SummerBrightness           26599      // uint8_t
#define LMG_HCLM16SP8SummerKelvin               26587      // uint16_t
#define LMG_HCLM16SP8Time                       25416      // char*, 5 Byte
#define     LMG_HCLM16SP8TimeLength 5
#define LMG_HCLM16SP9Active                     26570      // 1 Bit, Bit 6
#define     LMG_HCLM16SP9ActiveMask 0x40
#define     LMG_HCLM16SP9ActiveShift 6
#define LMG_HCLM16SP9Brightness                 25431      // uint8_t
#define LMG_HCLM16SP9Kelvin                     25429      // uint16_t
#define LMG_HCLM16SP9SummerBrightness           26600      // uint8_t
#define LMG_HCLM16SP9SummerKelvin               26589      // uint16_t
#define LMG_HCLM16SP9Time                       25424      // char*, 5 Byte
#define     LMG_HCLM16SP9TimeLength 5
#define LMG_HCLM16SummerEndDay                  26568      // uint8_t
#define LMG_HCLM16SummerEndMonth                26567      // uint8_t
#define LMG_HCLM16SummerStartDay                26566      // uint8_t
#define LMG_HCLM16SummerStartMonth              26565      // uint8_t
#define LMG_HCLM16Sunrise                       25594      // char*, 5 Byte
#define     LMG_HCLM16SunriseLength 5
#define LMG_HCLM16SunriseOffset                 25604      // int16_t
#define LMG_HCLM16Sunset                        25599      // char*, 5 Byte
#define     LMG_HCLM16SunsetLength 5
#define LMG_HCLM16SunsetOffset                  25606      // int16_t

// Lichtmanager
#define ParamLMG_LMGHCLEnable                        (knx.paramByte(LMG_LMGHCLEnable))
// Anzahl Lichtmanager
#define ParamLMG_LMGHCLMasterCount                   (knx.paramByte(LMG_LMGHCLMasterCount))
// Aktualisierungsintervall
#define ParamLMG_LMGHCLUpdateInterval                (knx.paramWord(LMG_LMGHCLUpdateInterval))
// Überblendzeit
#define ParamLMG_LMGHCLFadeDuration                  (knx.paramByte(LMG_LMGHCLFadeDuration))
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLLockFallback                  (knx.paramByte(LMG_LMGHCLLockFallback))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLFallbackPolicy                (knx.paramByte(LMG_LMGHCLFallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLFallbackDurationSec           (knx.paramWord(LMG_LMGHCLFallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLFallbackReleaseTime           (knx.paramData(LMG_LMGHCLFallbackReleaseTime))
#define ParamLMG_LMGHCLFallbackReleaseTimeStr        (knx.paramString(LMG_LMGHCLFallbackReleaseTime, LMG_LMGHCLFallbackReleaseTimeLength))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM1FallbackPolicy              (knx.paramByte(LMG_LMGHCLM1FallbackPolicy))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM2FallbackPolicy              (knx.paramByte(LMG_LMGHCLM2FallbackPolicy))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM3FallbackPolicy              (knx.paramByte(LMG_LMGHCLM3FallbackPolicy))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM4FallbackPolicy              (knx.paramByte(LMG_LMGHCLM4FallbackPolicy))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM5FallbackPolicy              (knx.paramByte(LMG_LMGHCLM5FallbackPolicy))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM6FallbackPolicy              (knx.paramByte(LMG_LMGHCLM6FallbackPolicy))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM7FallbackPolicy              (knx.paramByte(LMG_LMGHCLM7FallbackPolicy))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM8FallbackPolicy              (knx.paramByte(LMG_LMGHCLM8FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM1FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM1FallbackDurationSec))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM2FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM2FallbackDurationSec))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM3FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM3FallbackDurationSec))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM4FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM4FallbackDurationSec))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM5FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM5FallbackDurationSec))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM6FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM6FallbackDurationSec))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM7FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM7FallbackDurationSec))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM8FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM8FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM1FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM1FallbackReleaseTime))
#define ParamLMG_LMGHCLM1FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM1FallbackReleaseTime, LMG_LMGHCLM1FallbackReleaseTimeLength))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM2FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM2FallbackReleaseTime))
#define ParamLMG_LMGHCLM2FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM2FallbackReleaseTime, LMG_LMGHCLM2FallbackReleaseTimeLength))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM3FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM3FallbackReleaseTime))
#define ParamLMG_LMGHCLM3FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM3FallbackReleaseTime, LMG_LMGHCLM3FallbackReleaseTimeLength))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM4FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM4FallbackReleaseTime))
#define ParamLMG_LMGHCLM4FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM4FallbackReleaseTime, LMG_LMGHCLM4FallbackReleaseTimeLength))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM5FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM5FallbackReleaseTime))
#define ParamLMG_LMGHCLM5FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM5FallbackReleaseTime, LMG_LMGHCLM5FallbackReleaseTimeLength))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM6FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM6FallbackReleaseTime))
#define ParamLMG_LMGHCLM6FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM6FallbackReleaseTime, LMG_LMGHCLM6FallbackReleaseTimeLength))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM7FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM7FallbackReleaseTime))
#define ParamLMG_LMGHCLM7FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM7FallbackReleaseTime, LMG_LMGHCLM7FallbackReleaseTimeLength))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM8FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM8FallbackReleaseTime))
#define ParamLMG_LMGHCLM8FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM8FallbackReleaseTime, LMG_LMGHCLM8FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM1StatusKoEnable              ((knx.paramByte(LMG_LMGHCLM1StatusKoEnable) & LMG_LMGHCLM1StatusKoEnableMask) >> LMG_LMGHCLM1StatusKoEnableShift)
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM2StatusKoEnable              ((knx.paramByte(LMG_LMGHCLM2StatusKoEnable) & LMG_LMGHCLM2StatusKoEnableMask) >> LMG_LMGHCLM2StatusKoEnableShift)
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM3StatusKoEnable              ((knx.paramByte(LMG_LMGHCLM3StatusKoEnable) & LMG_LMGHCLM3StatusKoEnableMask) >> LMG_LMGHCLM3StatusKoEnableShift)
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM4StatusKoEnable              (knx.paramByte(LMG_LMGHCLM4StatusKoEnable) & LMG_LMGHCLM4StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM1LockFallback                (knx.paramByte(LMG_LMGHCLM1LockFallback))
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM2LockFallback                (knx.paramByte(LMG_LMGHCLM2LockFallback))
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM3LockFallback                (knx.paramByte(LMG_LMGHCLM3LockFallback))
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM4LockFallback                (knx.paramByte(LMG_LMGHCLM4LockFallback))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM5StatusKoEnable              ((knx.paramByte(LMG_LMGHCLM5StatusKoEnable) & LMG_LMGHCLM5StatusKoEnableMask) >> LMG_LMGHCLM5StatusKoEnableShift)
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM6StatusKoEnable              ((knx.paramByte(LMG_LMGHCLM6StatusKoEnable) & LMG_LMGHCLM6StatusKoEnableMask) >> LMG_LMGHCLM6StatusKoEnableShift)
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM7StatusKoEnable              ((knx.paramByte(LMG_LMGHCLM7StatusKoEnable) & LMG_LMGHCLM7StatusKoEnableMask) >> LMG_LMGHCLM7StatusKoEnableShift)
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM8StatusKoEnable              (knx.paramByte(LMG_LMGHCLM8StatusKoEnable) & LMG_LMGHCLM8StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM5LockFallback                (knx.paramByte(LMG_LMGHCLM5LockFallback))
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM6LockFallback                (knx.paramByte(LMG_LMGHCLM6LockFallback))
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM7LockFallback                (knx.paramByte(LMG_LMGHCLM7LockFallback))
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM8LockFallback                (knx.paramByte(LMG_LMGHCLM8LockFallback))
// M1 SP1 Zeit
#define ParamLMG_HCLM1SP0Time                        (knx.paramData(LMG_HCLM1SP0Time))
#define ParamLMG_HCLM1SP0TimeStr                     (knx.paramString(LMG_HCLM1SP0Time, LMG_HCLM1SP0TimeLength))
// M1 SP1 Farbtemperatur
#define ParamLMG_HCLM1SP0Kelvin                      (knx.paramWord(LMG_HCLM1SP0Kelvin))
// M1 SP1 Helligkeit
#define ParamLMG_HCLM1SP0Brightness                  (knx.paramByte(LMG_HCLM1SP0Brightness))
// M1 SP2 Zeit
#define ParamLMG_HCLM1SP1Time                        (knx.paramData(LMG_HCLM1SP1Time))
#define ParamLMG_HCLM1SP1TimeStr                     (knx.paramString(LMG_HCLM1SP1Time, LMG_HCLM1SP1TimeLength))
// M1 SP2 Farbtemperatur
#define ParamLMG_HCLM1SP1Kelvin                      (knx.paramWord(LMG_HCLM1SP1Kelvin))
// M1 SP2 Helligkeit
#define ParamLMG_HCLM1SP1Brightness                  (knx.paramByte(LMG_HCLM1SP1Brightness))
// M1 SP3 Zeit
#define ParamLMG_HCLM1SP2Time                        (knx.paramData(LMG_HCLM1SP2Time))
#define ParamLMG_HCLM1SP2TimeStr                     (knx.paramString(LMG_HCLM1SP2Time, LMG_HCLM1SP2TimeLength))
// M1 SP3 Farbtemperatur
#define ParamLMG_HCLM1SP2Kelvin                      (knx.paramWord(LMG_HCLM1SP2Kelvin))
// M1 SP3 Helligkeit
#define ParamLMG_HCLM1SP2Brightness                  (knx.paramByte(LMG_HCLM1SP2Brightness))
// M1 SP4 Zeit
#define ParamLMG_HCLM1SP3Time                        (knx.paramData(LMG_HCLM1SP3Time))
#define ParamLMG_HCLM1SP3TimeStr                     (knx.paramString(LMG_HCLM1SP3Time, LMG_HCLM1SP3TimeLength))
// M1 SP4 Farbtemperatur
#define ParamLMG_HCLM1SP3Kelvin                      (knx.paramWord(LMG_HCLM1SP3Kelvin))
// M1 SP4 Helligkeit
#define ParamLMG_HCLM1SP3Brightness                  (knx.paramByte(LMG_HCLM1SP3Brightness))
// M1 SP5 Zeit
#define ParamLMG_HCLM1SP4Time                        (knx.paramData(LMG_HCLM1SP4Time))
#define ParamLMG_HCLM1SP4TimeStr                     (knx.paramString(LMG_HCLM1SP4Time, LMG_HCLM1SP4TimeLength))
// M1 SP5 Farbtemperatur
#define ParamLMG_HCLM1SP4Kelvin                      (knx.paramWord(LMG_HCLM1SP4Kelvin))
// M1 SP5 Helligkeit
#define ParamLMG_HCLM1SP4Brightness                  (knx.paramByte(LMG_HCLM1SP4Brightness))
// M1 SP6 Zeit
#define ParamLMG_HCLM1SP5Time                        (knx.paramData(LMG_HCLM1SP5Time))
#define ParamLMG_HCLM1SP5TimeStr                     (knx.paramString(LMG_HCLM1SP5Time, LMG_HCLM1SP5TimeLength))
// M1 SP6 Farbtemperatur
#define ParamLMG_HCLM1SP5Kelvin                      (knx.paramWord(LMG_HCLM1SP5Kelvin))
// M1 SP6 Helligkeit
#define ParamLMG_HCLM1SP5Brightness                  (knx.paramByte(LMG_HCLM1SP5Brightness))
// M1 SP7 Zeit
#define ParamLMG_HCLM1SP6Time                        (knx.paramData(LMG_HCLM1SP6Time))
#define ParamLMG_HCLM1SP6TimeStr                     (knx.paramString(LMG_HCLM1SP6Time, LMG_HCLM1SP6TimeLength))
// M1 SP7 Farbtemperatur
#define ParamLMG_HCLM1SP6Kelvin                      (knx.paramWord(LMG_HCLM1SP6Kelvin))
// M1 SP7 Helligkeit
#define ParamLMG_HCLM1SP6Brightness                  (knx.paramByte(LMG_HCLM1SP6Brightness))
// M1 SP8 Zeit
#define ParamLMG_HCLM1SP7Time                        (knx.paramData(LMG_HCLM1SP7Time))
#define ParamLMG_HCLM1SP7TimeStr                     (knx.paramString(LMG_HCLM1SP7Time, LMG_HCLM1SP7TimeLength))
// M1 SP8 Farbtemperatur
#define ParamLMG_HCLM1SP7Kelvin                      (knx.paramWord(LMG_HCLM1SP7Kelvin))
// M1 SP8 Helligkeit
#define ParamLMG_HCLM1SP7Brightness                  (knx.paramByte(LMG_HCLM1SP7Brightness))
// M1 SP9 Zeit
#define ParamLMG_HCLM1SP8Time                        (knx.paramData(LMG_HCLM1SP8Time))
#define ParamLMG_HCLM1SP8TimeStr                     (knx.paramString(LMG_HCLM1SP8Time, LMG_HCLM1SP8TimeLength))
// M1 SP9 Farbtemperatur
#define ParamLMG_HCLM1SP8Kelvin                      (knx.paramWord(LMG_HCLM1SP8Kelvin))
// M1 SP9 Helligkeit
#define ParamLMG_HCLM1SP8Brightness                  (knx.paramByte(LMG_HCLM1SP8Brightness))
// M1 SP10 Zeit
#define ParamLMG_HCLM1SP9Time                        (knx.paramData(LMG_HCLM1SP9Time))
#define ParamLMG_HCLM1SP9TimeStr                     (knx.paramString(LMG_HCLM1SP9Time, LMG_HCLM1SP9TimeLength))
// M1 SP10 Farbtemperatur
#define ParamLMG_HCLM1SP9Kelvin                      (knx.paramWord(LMG_HCLM1SP9Kelvin))
// M1 SP10 Helligkeit
#define ParamLMG_HCLM1SP9Brightness                  (knx.paramByte(LMG_HCLM1SP9Brightness))
// M2 SP1 Zeit
#define ParamLMG_HCLM2SP0Time                        (knx.paramData(LMG_HCLM2SP0Time))
#define ParamLMG_HCLM2SP0TimeStr                     (knx.paramString(LMG_HCLM2SP0Time, LMG_HCLM2SP0TimeLength))
// M2 SP1 Farbtemperatur
#define ParamLMG_HCLM2SP0Kelvin                      (knx.paramWord(LMG_HCLM2SP0Kelvin))
// M2 SP1 Helligkeit
#define ParamLMG_HCLM2SP0Brightness                  (knx.paramByte(LMG_HCLM2SP0Brightness))
// M2 SP2 Zeit
#define ParamLMG_HCLM2SP1Time                        (knx.paramData(LMG_HCLM2SP1Time))
#define ParamLMG_HCLM2SP1TimeStr                     (knx.paramString(LMG_HCLM2SP1Time, LMG_HCLM2SP1TimeLength))
// M2 SP2 Farbtemperatur
#define ParamLMG_HCLM2SP1Kelvin                      (knx.paramWord(LMG_HCLM2SP1Kelvin))
// M2 SP2 Helligkeit
#define ParamLMG_HCLM2SP1Brightness                  (knx.paramByte(LMG_HCLM2SP1Brightness))
// M2 SP3 Zeit
#define ParamLMG_HCLM2SP2Time                        (knx.paramData(LMG_HCLM2SP2Time))
#define ParamLMG_HCLM2SP2TimeStr                     (knx.paramString(LMG_HCLM2SP2Time, LMG_HCLM2SP2TimeLength))
// M2 SP3 Farbtemperatur
#define ParamLMG_HCLM2SP2Kelvin                      (knx.paramWord(LMG_HCLM2SP2Kelvin))
// M2 SP3 Helligkeit
#define ParamLMG_HCLM2SP2Brightness                  (knx.paramByte(LMG_HCLM2SP2Brightness))
// M2 SP4 Zeit
#define ParamLMG_HCLM2SP3Time                        (knx.paramData(LMG_HCLM2SP3Time))
#define ParamLMG_HCLM2SP3TimeStr                     (knx.paramString(LMG_HCLM2SP3Time, LMG_HCLM2SP3TimeLength))
// M2 SP4 Farbtemperatur
#define ParamLMG_HCLM2SP3Kelvin                      (knx.paramWord(LMG_HCLM2SP3Kelvin))
// M2 SP4 Helligkeit
#define ParamLMG_HCLM2SP3Brightness                  (knx.paramByte(LMG_HCLM2SP3Brightness))
// M2 SP5 Zeit
#define ParamLMG_HCLM2SP4Time                        (knx.paramData(LMG_HCLM2SP4Time))
#define ParamLMG_HCLM2SP4TimeStr                     (knx.paramString(LMG_HCLM2SP4Time, LMG_HCLM2SP4TimeLength))
// M2 SP5 Farbtemperatur
#define ParamLMG_HCLM2SP4Kelvin                      (knx.paramWord(LMG_HCLM2SP4Kelvin))
// M2 SP5 Helligkeit
#define ParamLMG_HCLM2SP4Brightness                  (knx.paramByte(LMG_HCLM2SP4Brightness))
// M2 SP6 Zeit
#define ParamLMG_HCLM2SP5Time                        (knx.paramData(LMG_HCLM2SP5Time))
#define ParamLMG_HCLM2SP5TimeStr                     (knx.paramString(LMG_HCLM2SP5Time, LMG_HCLM2SP5TimeLength))
// M2 SP6 Farbtemperatur
#define ParamLMG_HCLM2SP5Kelvin                      (knx.paramWord(LMG_HCLM2SP5Kelvin))
// M2 SP6 Helligkeit
#define ParamLMG_HCLM2SP5Brightness                  (knx.paramByte(LMG_HCLM2SP5Brightness))
// M2 SP7 Zeit
#define ParamLMG_HCLM2SP6Time                        (knx.paramData(LMG_HCLM2SP6Time))
#define ParamLMG_HCLM2SP6TimeStr                     (knx.paramString(LMG_HCLM2SP6Time, LMG_HCLM2SP6TimeLength))
// M2 SP7 Farbtemperatur
#define ParamLMG_HCLM2SP6Kelvin                      (knx.paramWord(LMG_HCLM2SP6Kelvin))
// M2 SP7 Helligkeit
#define ParamLMG_HCLM2SP6Brightness                  (knx.paramByte(LMG_HCLM2SP6Brightness))
// M2 SP8 Zeit
#define ParamLMG_HCLM2SP7Time                        (knx.paramData(LMG_HCLM2SP7Time))
#define ParamLMG_HCLM2SP7TimeStr                     (knx.paramString(LMG_HCLM2SP7Time, LMG_HCLM2SP7TimeLength))
// M2 SP8 Farbtemperatur
#define ParamLMG_HCLM2SP7Kelvin                      (knx.paramWord(LMG_HCLM2SP7Kelvin))
// M2 SP8 Helligkeit
#define ParamLMG_HCLM2SP7Brightness                  (knx.paramByte(LMG_HCLM2SP7Brightness))
// M2 SP9 Zeit
#define ParamLMG_HCLM2SP8Time                        (knx.paramData(LMG_HCLM2SP8Time))
#define ParamLMG_HCLM2SP8TimeStr                     (knx.paramString(LMG_HCLM2SP8Time, LMG_HCLM2SP8TimeLength))
// M2 SP9 Farbtemperatur
#define ParamLMG_HCLM2SP8Kelvin                      (knx.paramWord(LMG_HCLM2SP8Kelvin))
// M2 SP9 Helligkeit
#define ParamLMG_HCLM2SP8Brightness                  (knx.paramByte(LMG_HCLM2SP8Brightness))
// M2 SP10 Zeit
#define ParamLMG_HCLM2SP9Time                        (knx.paramData(LMG_HCLM2SP9Time))
#define ParamLMG_HCLM2SP9TimeStr                     (knx.paramString(LMG_HCLM2SP9Time, LMG_HCLM2SP9TimeLength))
// M2 SP10 Farbtemperatur
#define ParamLMG_HCLM2SP9Kelvin                      (knx.paramWord(LMG_HCLM2SP9Kelvin))
// M2 SP10 Helligkeit
#define ParamLMG_HCLM2SP9Brightness                  (knx.paramByte(LMG_HCLM2SP9Brightness))
// M3 SP1 Zeit
#define ParamLMG_HCLM3SP0Time                        (knx.paramData(LMG_HCLM3SP0Time))
#define ParamLMG_HCLM3SP0TimeStr                     (knx.paramString(LMG_HCLM3SP0Time, LMG_HCLM3SP0TimeLength))
// M3 SP1 Farbtemperatur
#define ParamLMG_HCLM3SP0Kelvin                      (knx.paramWord(LMG_HCLM3SP0Kelvin))
// M3 SP1 Helligkeit
#define ParamLMG_HCLM3SP0Brightness                  (knx.paramByte(LMG_HCLM3SP0Brightness))
// M3 SP2 Zeit
#define ParamLMG_HCLM3SP1Time                        (knx.paramData(LMG_HCLM3SP1Time))
#define ParamLMG_HCLM3SP1TimeStr                     (knx.paramString(LMG_HCLM3SP1Time, LMG_HCLM3SP1TimeLength))
// M3 SP2 Farbtemperatur
#define ParamLMG_HCLM3SP1Kelvin                      (knx.paramWord(LMG_HCLM3SP1Kelvin))
// M3 SP2 Helligkeit
#define ParamLMG_HCLM3SP1Brightness                  (knx.paramByte(LMG_HCLM3SP1Brightness))
// M3 SP3 Zeit
#define ParamLMG_HCLM3SP2Time                        (knx.paramData(LMG_HCLM3SP2Time))
#define ParamLMG_HCLM3SP2TimeStr                     (knx.paramString(LMG_HCLM3SP2Time, LMG_HCLM3SP2TimeLength))
// M3 SP3 Farbtemperatur
#define ParamLMG_HCLM3SP2Kelvin                      (knx.paramWord(LMG_HCLM3SP2Kelvin))
// M3 SP3 Helligkeit
#define ParamLMG_HCLM3SP2Brightness                  (knx.paramByte(LMG_HCLM3SP2Brightness))
// M3 SP4 Zeit
#define ParamLMG_HCLM3SP3Time                        (knx.paramData(LMG_HCLM3SP3Time))
#define ParamLMG_HCLM3SP3TimeStr                     (knx.paramString(LMG_HCLM3SP3Time, LMG_HCLM3SP3TimeLength))
// M3 SP4 Farbtemperatur
#define ParamLMG_HCLM3SP3Kelvin                      (knx.paramWord(LMG_HCLM3SP3Kelvin))
// M3 SP4 Helligkeit
#define ParamLMG_HCLM3SP3Brightness                  (knx.paramByte(LMG_HCLM3SP3Brightness))
// M3 SP5 Zeit
#define ParamLMG_HCLM3SP4Time                        (knx.paramData(LMG_HCLM3SP4Time))
#define ParamLMG_HCLM3SP4TimeStr                     (knx.paramString(LMG_HCLM3SP4Time, LMG_HCLM3SP4TimeLength))
// M3 SP5 Farbtemperatur
#define ParamLMG_HCLM3SP4Kelvin                      (knx.paramWord(LMG_HCLM3SP4Kelvin))
// M3 SP5 Helligkeit
#define ParamLMG_HCLM3SP4Brightness                  (knx.paramByte(LMG_HCLM3SP4Brightness))
// M3 SP6 Zeit
#define ParamLMG_HCLM3SP5Time                        (knx.paramData(LMG_HCLM3SP5Time))
#define ParamLMG_HCLM3SP5TimeStr                     (knx.paramString(LMG_HCLM3SP5Time, LMG_HCLM3SP5TimeLength))
// M3 SP6 Farbtemperatur
#define ParamLMG_HCLM3SP5Kelvin                      (knx.paramWord(LMG_HCLM3SP5Kelvin))
// M3 SP6 Helligkeit
#define ParamLMG_HCLM3SP5Brightness                  (knx.paramByte(LMG_HCLM3SP5Brightness))
// M3 SP7 Zeit
#define ParamLMG_HCLM3SP6Time                        (knx.paramData(LMG_HCLM3SP6Time))
#define ParamLMG_HCLM3SP6TimeStr                     (knx.paramString(LMG_HCLM3SP6Time, LMG_HCLM3SP6TimeLength))
// M3 SP7 Farbtemperatur
#define ParamLMG_HCLM3SP6Kelvin                      (knx.paramWord(LMG_HCLM3SP6Kelvin))
// M3 SP7 Helligkeit
#define ParamLMG_HCLM3SP6Brightness                  (knx.paramByte(LMG_HCLM3SP6Brightness))
// M3 SP8 Zeit
#define ParamLMG_HCLM3SP7Time                        (knx.paramData(LMG_HCLM3SP7Time))
#define ParamLMG_HCLM3SP7TimeStr                     (knx.paramString(LMG_HCLM3SP7Time, LMG_HCLM3SP7TimeLength))
// M3 SP8 Farbtemperatur
#define ParamLMG_HCLM3SP7Kelvin                      (knx.paramWord(LMG_HCLM3SP7Kelvin))
// M3 SP8 Helligkeit
#define ParamLMG_HCLM3SP7Brightness                  (knx.paramByte(LMG_HCLM3SP7Brightness))
// M3 SP9 Zeit
#define ParamLMG_HCLM3SP8Time                        (knx.paramData(LMG_HCLM3SP8Time))
#define ParamLMG_HCLM3SP8TimeStr                     (knx.paramString(LMG_HCLM3SP8Time, LMG_HCLM3SP8TimeLength))
// M3 SP9 Farbtemperatur
#define ParamLMG_HCLM3SP8Kelvin                      (knx.paramWord(LMG_HCLM3SP8Kelvin))
// M3 SP9 Helligkeit
#define ParamLMG_HCLM3SP8Brightness                  (knx.paramByte(LMG_HCLM3SP8Brightness))
// M3 SP10 Zeit
#define ParamLMG_HCLM3SP9Time                        (knx.paramData(LMG_HCLM3SP9Time))
#define ParamLMG_HCLM3SP9TimeStr                     (knx.paramString(LMG_HCLM3SP9Time, LMG_HCLM3SP9TimeLength))
// M3 SP10 Farbtemperatur
#define ParamLMG_HCLM3SP9Kelvin                      (knx.paramWord(LMG_HCLM3SP9Kelvin))
// M3 SP10 Helligkeit
#define ParamLMG_HCLM3SP9Brightness                  (knx.paramByte(LMG_HCLM3SP9Brightness))
// M4 SP1 Zeit
#define ParamLMG_HCLM4SP0Time                        (knx.paramData(LMG_HCLM4SP0Time))
#define ParamLMG_HCLM4SP0TimeStr                     (knx.paramString(LMG_HCLM4SP0Time, LMG_HCLM4SP0TimeLength))
// M4 SP1 Farbtemperatur
#define ParamLMG_HCLM4SP0Kelvin                      (knx.paramWord(LMG_HCLM4SP0Kelvin))
// M4 SP1 Helligkeit
#define ParamLMG_HCLM4SP0Brightness                  (knx.paramByte(LMG_HCLM4SP0Brightness))
// M4 SP2 Zeit
#define ParamLMG_HCLM4SP1Time                        (knx.paramData(LMG_HCLM4SP1Time))
#define ParamLMG_HCLM4SP1TimeStr                     (knx.paramString(LMG_HCLM4SP1Time, LMG_HCLM4SP1TimeLength))
// M4 SP2 Farbtemperatur
#define ParamLMG_HCLM4SP1Kelvin                      (knx.paramWord(LMG_HCLM4SP1Kelvin))
// M4 SP2 Helligkeit
#define ParamLMG_HCLM4SP1Brightness                  (knx.paramByte(LMG_HCLM4SP1Brightness))
// M4 SP3 Zeit
#define ParamLMG_HCLM4SP2Time                        (knx.paramData(LMG_HCLM4SP2Time))
#define ParamLMG_HCLM4SP2TimeStr                     (knx.paramString(LMG_HCLM4SP2Time, LMG_HCLM4SP2TimeLength))
// M4 SP3 Farbtemperatur
#define ParamLMG_HCLM4SP2Kelvin                      (knx.paramWord(LMG_HCLM4SP2Kelvin))
// M4 SP3 Helligkeit
#define ParamLMG_HCLM4SP2Brightness                  (knx.paramByte(LMG_HCLM4SP2Brightness))
// M4 SP4 Zeit
#define ParamLMG_HCLM4SP3Time                        (knx.paramData(LMG_HCLM4SP3Time))
#define ParamLMG_HCLM4SP3TimeStr                     (knx.paramString(LMG_HCLM4SP3Time, LMG_HCLM4SP3TimeLength))
// M4 SP4 Farbtemperatur
#define ParamLMG_HCLM4SP3Kelvin                      (knx.paramWord(LMG_HCLM4SP3Kelvin))
// M4 SP4 Helligkeit
#define ParamLMG_HCLM4SP3Brightness                  (knx.paramByte(LMG_HCLM4SP3Brightness))
// M4 SP5 Zeit
#define ParamLMG_HCLM4SP4Time                        (knx.paramData(LMG_HCLM4SP4Time))
#define ParamLMG_HCLM4SP4TimeStr                     (knx.paramString(LMG_HCLM4SP4Time, LMG_HCLM4SP4TimeLength))
// M4 SP5 Farbtemperatur
#define ParamLMG_HCLM4SP4Kelvin                      (knx.paramWord(LMG_HCLM4SP4Kelvin))
// M4 SP5 Helligkeit
#define ParamLMG_HCLM4SP4Brightness                  (knx.paramByte(LMG_HCLM4SP4Brightness))
// M4 SP6 Zeit
#define ParamLMG_HCLM4SP5Time                        (knx.paramData(LMG_HCLM4SP5Time))
#define ParamLMG_HCLM4SP5TimeStr                     (knx.paramString(LMG_HCLM4SP5Time, LMG_HCLM4SP5TimeLength))
// M4 SP6 Farbtemperatur
#define ParamLMG_HCLM4SP5Kelvin                      (knx.paramWord(LMG_HCLM4SP5Kelvin))
// M4 SP6 Helligkeit
#define ParamLMG_HCLM4SP5Brightness                  (knx.paramByte(LMG_HCLM4SP5Brightness))
// M4 SP7 Zeit
#define ParamLMG_HCLM4SP6Time                        (knx.paramData(LMG_HCLM4SP6Time))
#define ParamLMG_HCLM4SP6TimeStr                     (knx.paramString(LMG_HCLM4SP6Time, LMG_HCLM4SP6TimeLength))
// M4 SP7 Farbtemperatur
#define ParamLMG_HCLM4SP6Kelvin                      (knx.paramWord(LMG_HCLM4SP6Kelvin))
// M4 SP7 Helligkeit
#define ParamLMG_HCLM4SP6Brightness                  (knx.paramByte(LMG_HCLM4SP6Brightness))
// M4 SP8 Zeit
#define ParamLMG_HCLM4SP7Time                        (knx.paramData(LMG_HCLM4SP7Time))
#define ParamLMG_HCLM4SP7TimeStr                     (knx.paramString(LMG_HCLM4SP7Time, LMG_HCLM4SP7TimeLength))
// M4 SP8 Farbtemperatur
#define ParamLMG_HCLM4SP7Kelvin                      (knx.paramWord(LMG_HCLM4SP7Kelvin))
// M4 SP8 Helligkeit
#define ParamLMG_HCLM4SP7Brightness                  (knx.paramByte(LMG_HCLM4SP7Brightness))
// M4 SP9 Zeit
#define ParamLMG_HCLM4SP8Time                        (knx.paramData(LMG_HCLM4SP8Time))
#define ParamLMG_HCLM4SP8TimeStr                     (knx.paramString(LMG_HCLM4SP8Time, LMG_HCLM4SP8TimeLength))
// M4 SP9 Farbtemperatur
#define ParamLMG_HCLM4SP8Kelvin                      (knx.paramWord(LMG_HCLM4SP8Kelvin))
// M4 SP9 Helligkeit
#define ParamLMG_HCLM4SP8Brightness                  (knx.paramByte(LMG_HCLM4SP8Brightness))
// M4 SP10 Zeit
#define ParamLMG_HCLM4SP9Time                        (knx.paramData(LMG_HCLM4SP9Time))
#define ParamLMG_HCLM4SP9TimeStr                     (knx.paramString(LMG_HCLM4SP9Time, LMG_HCLM4SP9TimeLength))
// M4 SP10 Kelvin
#define ParamLMG_HCLM4SP9Kelvin                      (knx.paramWord(LMG_HCLM4SP9Kelvin))
// M4 SP10 Helligkeit
#define ParamLMG_HCLM4SP9Brightness                  (knx.paramByte(LMG_HCLM4SP9Brightness))
// M5 SP1 Zeit
#define ParamLMG_HCLM5SP0Time                        (knx.paramData(LMG_HCLM5SP0Time))
#define ParamLMG_HCLM5SP0TimeStr                     (knx.paramString(LMG_HCLM5SP0Time, LMG_HCLM5SP0TimeLength))
// M5 SP1 Kelvin
#define ParamLMG_HCLM5SP0Kelvin                      (knx.paramWord(LMG_HCLM5SP0Kelvin))
// M5 SP1 Helligkeit
#define ParamLMG_HCLM5SP0Brightness                  (knx.paramByte(LMG_HCLM5SP0Brightness))
// M5 SP2 Zeit
#define ParamLMG_HCLM5SP1Time                        (knx.paramData(LMG_HCLM5SP1Time))
#define ParamLMG_HCLM5SP1TimeStr                     (knx.paramString(LMG_HCLM5SP1Time, LMG_HCLM5SP1TimeLength))
// M5 SP2 Farbtemperatur
#define ParamLMG_HCLM5SP1Kelvin                      (knx.paramWord(LMG_HCLM5SP1Kelvin))
// M5 SP2 Helligkeit
#define ParamLMG_HCLM5SP1Brightness                  (knx.paramByte(LMG_HCLM5SP1Brightness))
// M5 SP3 Zeit
#define ParamLMG_HCLM5SP2Time                        (knx.paramData(LMG_HCLM5SP2Time))
#define ParamLMG_HCLM5SP2TimeStr                     (knx.paramString(LMG_HCLM5SP2Time, LMG_HCLM5SP2TimeLength))
// M5 SP3 Kelvin
#define ParamLMG_HCLM5SP2Kelvin                      (knx.paramWord(LMG_HCLM5SP2Kelvin))
// M5 SP3 Helligkeit
#define ParamLMG_HCLM5SP2Brightness                  (knx.paramByte(LMG_HCLM5SP2Brightness))
// M5 SP4 Zeit
#define ParamLMG_HCLM5SP3Time                        (knx.paramData(LMG_HCLM5SP3Time))
#define ParamLMG_HCLM5SP3TimeStr                     (knx.paramString(LMG_HCLM5SP3Time, LMG_HCLM5SP3TimeLength))
// M5 SP4 Farbtemperatur
#define ParamLMG_HCLM5SP3Kelvin                      (knx.paramWord(LMG_HCLM5SP3Kelvin))
// M5 SP4 Helligkeit
#define ParamLMG_HCLM5SP3Brightness                  (knx.paramByte(LMG_HCLM5SP3Brightness))
// M5 SP5 Zeit
#define ParamLMG_HCLM5SP4Time                        (knx.paramData(LMG_HCLM5SP4Time))
#define ParamLMG_HCLM5SP4TimeStr                     (knx.paramString(LMG_HCLM5SP4Time, LMG_HCLM5SP4TimeLength))
// M5 SP5 Farbtemperatur
#define ParamLMG_HCLM5SP4Kelvin                      (knx.paramWord(LMG_HCLM5SP4Kelvin))
// M5 SP5 Helligkeit
#define ParamLMG_HCLM5SP4Brightness                  (knx.paramByte(LMG_HCLM5SP4Brightness))
// M5 SP6 Zeit
#define ParamLMG_HCLM5SP5Time                        (knx.paramData(LMG_HCLM5SP5Time))
#define ParamLMG_HCLM5SP5TimeStr                     (knx.paramString(LMG_HCLM5SP5Time, LMG_HCLM5SP5TimeLength))
// M5 SP6 Farbtemperatur
#define ParamLMG_HCLM5SP5Kelvin                      (knx.paramWord(LMG_HCLM5SP5Kelvin))
// M5 SP6 Helligkeit
#define ParamLMG_HCLM5SP5Brightness                  (knx.paramByte(LMG_HCLM5SP5Brightness))
// M5 SP7 Zeit
#define ParamLMG_HCLM5SP6Time                        (knx.paramData(LMG_HCLM5SP6Time))
#define ParamLMG_HCLM5SP6TimeStr                     (knx.paramString(LMG_HCLM5SP6Time, LMG_HCLM5SP6TimeLength))
// M5 SP7 Farbtemperatur
#define ParamLMG_HCLM5SP6Kelvin                      (knx.paramWord(LMG_HCLM5SP6Kelvin))
// M5 SP7 Helligkeit
#define ParamLMG_HCLM5SP6Brightness                  (knx.paramByte(LMG_HCLM5SP6Brightness))
// M5 SP8 Zeit
#define ParamLMG_HCLM5SP7Time                        (knx.paramData(LMG_HCLM5SP7Time))
#define ParamLMG_HCLM5SP7TimeStr                     (knx.paramString(LMG_HCLM5SP7Time, LMG_HCLM5SP7TimeLength))
// M5 SP8 Farbtemperatur
#define ParamLMG_HCLM5SP7Kelvin                      (knx.paramWord(LMG_HCLM5SP7Kelvin))
// M5 SP8 Helligkeit
#define ParamLMG_HCLM5SP7Brightness                  (knx.paramByte(LMG_HCLM5SP7Brightness))
// M5 SP9 Zeit
#define ParamLMG_HCLM5SP8Time                        (knx.paramData(LMG_HCLM5SP8Time))
#define ParamLMG_HCLM5SP8TimeStr                     (knx.paramString(LMG_HCLM5SP8Time, LMG_HCLM5SP8TimeLength))
// M5 SP9 Farbtemperatur
#define ParamLMG_HCLM5SP8Kelvin                      (knx.paramWord(LMG_HCLM5SP8Kelvin))
// M5 SP9 Helligkeit
#define ParamLMG_HCLM5SP8Brightness                  (knx.paramByte(LMG_HCLM5SP8Brightness))
// M5 SP10 Zeit
#define ParamLMG_HCLM5SP9Time                        (knx.paramData(LMG_HCLM5SP9Time))
#define ParamLMG_HCLM5SP9TimeStr                     (knx.paramString(LMG_HCLM5SP9Time, LMG_HCLM5SP9TimeLength))
// M5 SP10 Farbtemperatur
#define ParamLMG_HCLM5SP9Kelvin                      (knx.paramWord(LMG_HCLM5SP9Kelvin))
// M5 SP10 Helligkeit
#define ParamLMG_HCLM5SP9Brightness                  (knx.paramByte(LMG_HCLM5SP9Brightness))
// M6 SP1 Zeit
#define ParamLMG_HCLM6SP0Time                        (knx.paramData(LMG_HCLM6SP0Time))
#define ParamLMG_HCLM6SP0TimeStr                     (knx.paramString(LMG_HCLM6SP0Time, LMG_HCLM6SP0TimeLength))
// M6 SP1 Farbtemperatur
#define ParamLMG_HCLM6SP0Kelvin                      (knx.paramWord(LMG_HCLM6SP0Kelvin))
// M6 SP1 Helligkeit
#define ParamLMG_HCLM6SP0Brightness                  (knx.paramByte(LMG_HCLM6SP0Brightness))
// M6 SP2 Zeit
#define ParamLMG_HCLM6SP1Time                        (knx.paramData(LMG_HCLM6SP1Time))
#define ParamLMG_HCLM6SP1TimeStr                     (knx.paramString(LMG_HCLM6SP1Time, LMG_HCLM6SP1TimeLength))
// M6 SP2 Farbtemperatur
#define ParamLMG_HCLM6SP1Kelvin                      (knx.paramWord(LMG_HCLM6SP1Kelvin))
// M6 SP2 Helligkeit
#define ParamLMG_HCLM6SP1Brightness                  (knx.paramByte(LMG_HCLM6SP1Brightness))
// M6 SP3 Zeit
#define ParamLMG_HCLM6SP2Time                        (knx.paramData(LMG_HCLM6SP2Time))
#define ParamLMG_HCLM6SP2TimeStr                     (knx.paramString(LMG_HCLM6SP2Time, LMG_HCLM6SP2TimeLength))
// M6 SP3 Farbtemperatur
#define ParamLMG_HCLM6SP2Kelvin                      (knx.paramWord(LMG_HCLM6SP2Kelvin))
// M6 SP3 Helligkeit
#define ParamLMG_HCLM6SP2Brightness                  (knx.paramByte(LMG_HCLM6SP2Brightness))
// M6 SP4 Zeit
#define ParamLMG_HCLM6SP3Time                        (knx.paramData(LMG_HCLM6SP3Time))
#define ParamLMG_HCLM6SP3TimeStr                     (knx.paramString(LMG_HCLM6SP3Time, LMG_HCLM6SP3TimeLength))
// M6 SP4 Farbtemperatur
#define ParamLMG_HCLM6SP3Kelvin                      (knx.paramWord(LMG_HCLM6SP3Kelvin))
// M6 SP4 Helligkeit
#define ParamLMG_HCLM6SP3Brightness                  (knx.paramByte(LMG_HCLM6SP3Brightness))
// M6 SP5 Zeit
#define ParamLMG_HCLM6SP4Time                        (knx.paramData(LMG_HCLM6SP4Time))
#define ParamLMG_HCLM6SP4TimeStr                     (knx.paramString(LMG_HCLM6SP4Time, LMG_HCLM6SP4TimeLength))
// M6 SP5 Kelvin
#define ParamLMG_HCLM6SP4Kelvin                      (knx.paramWord(LMG_HCLM6SP4Kelvin))
// M6 SP5 Helligkeit
#define ParamLMG_HCLM6SP4Brightness                  (knx.paramByte(LMG_HCLM6SP4Brightness))
// M6 SP6 Zeit
#define ParamLMG_HCLM6SP5Time                        (knx.paramData(LMG_HCLM6SP5Time))
#define ParamLMG_HCLM6SP5TimeStr                     (knx.paramString(LMG_HCLM6SP5Time, LMG_HCLM6SP5TimeLength))
// M6 SP6 Kelvin
#define ParamLMG_HCLM6SP5Kelvin                      (knx.paramWord(LMG_HCLM6SP5Kelvin))
// M6 SP6 Helligkeit
#define ParamLMG_HCLM6SP5Brightness                  (knx.paramByte(LMG_HCLM6SP5Brightness))
// M6 SP7 Zeit
#define ParamLMG_HCLM6SP6Time                        (knx.paramData(LMG_HCLM6SP6Time))
#define ParamLMG_HCLM6SP6TimeStr                     (knx.paramString(LMG_HCLM6SP6Time, LMG_HCLM6SP6TimeLength))
// M6 SP7 Farbtemperatur
#define ParamLMG_HCLM6SP6Kelvin                      (knx.paramWord(LMG_HCLM6SP6Kelvin))
// M6 SP7 Helligkeit
#define ParamLMG_HCLM6SP6Brightness                  (knx.paramByte(LMG_HCLM6SP6Brightness))
// M6 SP8 Zeit
#define ParamLMG_HCLM6SP7Time                        (knx.paramData(LMG_HCLM6SP7Time))
#define ParamLMG_HCLM6SP7TimeStr                     (knx.paramString(LMG_HCLM6SP7Time, LMG_HCLM6SP7TimeLength))
// M6 SP8 Farbtemperatur
#define ParamLMG_HCLM6SP7Kelvin                      (knx.paramWord(LMG_HCLM6SP7Kelvin))
// M6 SP8 Helligkeit
#define ParamLMG_HCLM6SP7Brightness                  (knx.paramByte(LMG_HCLM6SP7Brightness))
// M6 SP9 Zeit
#define ParamLMG_HCLM6SP8Time                        (knx.paramData(LMG_HCLM6SP8Time))
#define ParamLMG_HCLM6SP8TimeStr                     (knx.paramString(LMG_HCLM6SP8Time, LMG_HCLM6SP8TimeLength))
// M6 SP9 Farbtemperatur
#define ParamLMG_HCLM6SP8Kelvin                      (knx.paramWord(LMG_HCLM6SP8Kelvin))
// M6 SP9 Helligkeit
#define ParamLMG_HCLM6SP8Brightness                  (knx.paramByte(LMG_HCLM6SP8Brightness))
// M6 SP10 Zeit
#define ParamLMG_HCLM6SP9Time                        (knx.paramData(LMG_HCLM6SP9Time))
#define ParamLMG_HCLM6SP9TimeStr                     (knx.paramString(LMG_HCLM6SP9Time, LMG_HCLM6SP9TimeLength))
// M6 SP10 Farbtemperatur
#define ParamLMG_HCLM6SP9Kelvin                      (knx.paramWord(LMG_HCLM6SP9Kelvin))
// M6 SP10 Helligkeit
#define ParamLMG_HCLM6SP9Brightness                  (knx.paramByte(LMG_HCLM6SP9Brightness))
// M7 SP1 Zeit
#define ParamLMG_HCLM7SP0Time                        (knx.paramData(LMG_HCLM7SP0Time))
#define ParamLMG_HCLM7SP0TimeStr                     (knx.paramString(LMG_HCLM7SP0Time, LMG_HCLM7SP0TimeLength))
// M7 SP1 Farbtemperatur
#define ParamLMG_HCLM7SP0Kelvin                      (knx.paramWord(LMG_HCLM7SP0Kelvin))
// M7 SP1 Helligkeit
#define ParamLMG_HCLM7SP0Brightness                  (knx.paramByte(LMG_HCLM7SP0Brightness))
// M7 SP2 Zeit
#define ParamLMG_HCLM7SP1Time                        (knx.paramData(LMG_HCLM7SP1Time))
#define ParamLMG_HCLM7SP1TimeStr                     (knx.paramString(LMG_HCLM7SP1Time, LMG_HCLM7SP1TimeLength))
// M7 SP2 Farbtemperatur
#define ParamLMG_HCLM7SP1Kelvin                      (knx.paramWord(LMG_HCLM7SP1Kelvin))
// M7 SP2 Helligkeit
#define ParamLMG_HCLM7SP1Brightness                  (knx.paramByte(LMG_HCLM7SP1Brightness))
// M7 SP3 Zeit
#define ParamLMG_HCLM7SP2Time                        (knx.paramData(LMG_HCLM7SP2Time))
#define ParamLMG_HCLM7SP2TimeStr                     (knx.paramString(LMG_HCLM7SP2Time, LMG_HCLM7SP2TimeLength))
// M7 SP3 Farbtemperatur
#define ParamLMG_HCLM7SP2Kelvin                      (knx.paramWord(LMG_HCLM7SP2Kelvin))
// M7 SP3 Helligkeit
#define ParamLMG_HCLM7SP2Brightness                  (knx.paramByte(LMG_HCLM7SP2Brightness))
// M7 SP4 Zeit
#define ParamLMG_HCLM7SP3Time                        (knx.paramData(LMG_HCLM7SP3Time))
#define ParamLMG_HCLM7SP3TimeStr                     (knx.paramString(LMG_HCLM7SP3Time, LMG_HCLM7SP3TimeLength))
// M7 SP4 Farbtemperatur
#define ParamLMG_HCLM7SP3Kelvin                      (knx.paramWord(LMG_HCLM7SP3Kelvin))
// M7 SP4 Helligkeit
#define ParamLMG_HCLM7SP3Brightness                  (knx.paramByte(LMG_HCLM7SP3Brightness))
// M7 SP5 Zeit
#define ParamLMG_HCLM7SP4Time                        (knx.paramData(LMG_HCLM7SP4Time))
#define ParamLMG_HCLM7SP4TimeStr                     (knx.paramString(LMG_HCLM7SP4Time, LMG_HCLM7SP4TimeLength))
// M7 SP5 Farbtemperatur
#define ParamLMG_HCLM7SP4Kelvin                      (knx.paramWord(LMG_HCLM7SP4Kelvin))
// M7 SP5 Helligkeit
#define ParamLMG_HCLM7SP4Brightness                  (knx.paramByte(LMG_HCLM7SP4Brightness))
// M7 SP6 Zeit
#define ParamLMG_HCLM7SP5Time                        (knx.paramData(LMG_HCLM7SP5Time))
#define ParamLMG_HCLM7SP5TimeStr                     (knx.paramString(LMG_HCLM7SP5Time, LMG_HCLM7SP5TimeLength))
// M7 SP6 Farbtemperatur
#define ParamLMG_HCLM7SP5Kelvin                      (knx.paramWord(LMG_HCLM7SP5Kelvin))
// M7 SP6 Helligkeit
#define ParamLMG_HCLM7SP5Brightness                  (knx.paramByte(LMG_HCLM7SP5Brightness))
// M7 SP7 Zeit
#define ParamLMG_HCLM7SP6Time                        (knx.paramData(LMG_HCLM7SP6Time))
#define ParamLMG_HCLM7SP6TimeStr                     (knx.paramString(LMG_HCLM7SP6Time, LMG_HCLM7SP6TimeLength))
// M7 SP7 Farbtemperatur
#define ParamLMG_HCLM7SP6Kelvin                      (knx.paramWord(LMG_HCLM7SP6Kelvin))
// M7 SP7 Helligkeit
#define ParamLMG_HCLM7SP6Brightness                  (knx.paramByte(LMG_HCLM7SP6Brightness))
// M7 SP8 Zeit
#define ParamLMG_HCLM7SP7Time                        (knx.paramData(LMG_HCLM7SP7Time))
#define ParamLMG_HCLM7SP7TimeStr                     (knx.paramString(LMG_HCLM7SP7Time, LMG_HCLM7SP7TimeLength))
// M7 SP8 Farbtemperatur
#define ParamLMG_HCLM7SP7Kelvin                      (knx.paramWord(LMG_HCLM7SP7Kelvin))
// M7 SP8 Helligkeit
#define ParamLMG_HCLM7SP7Brightness                  (knx.paramByte(LMG_HCLM7SP7Brightness))
// M7 SP9 Zeit
#define ParamLMG_HCLM7SP8Time                        (knx.paramData(LMG_HCLM7SP8Time))
#define ParamLMG_HCLM7SP8TimeStr                     (knx.paramString(LMG_HCLM7SP8Time, LMG_HCLM7SP8TimeLength))
// M7 SP9 Farbtemperatur
#define ParamLMG_HCLM7SP8Kelvin                      (knx.paramWord(LMG_HCLM7SP8Kelvin))
// M7 SP9 Helligkeit
#define ParamLMG_HCLM7SP8Brightness                  (knx.paramByte(LMG_HCLM7SP8Brightness))
// M7 SP10 Zeit
#define ParamLMG_HCLM7SP9Time                        (knx.paramData(LMG_HCLM7SP9Time))
#define ParamLMG_HCLM7SP9TimeStr                     (knx.paramString(LMG_HCLM7SP9Time, LMG_HCLM7SP9TimeLength))
// M7 SP10 Kelvin
#define ParamLMG_HCLM7SP9Kelvin                      (knx.paramWord(LMG_HCLM7SP9Kelvin))
// M7 SP10 Helligkeit
#define ParamLMG_HCLM7SP9Brightness                  (knx.paramByte(LMG_HCLM7SP9Brightness))
// M8 SP1 Zeit
#define ParamLMG_HCLM8SP0Time                        (knx.paramData(LMG_HCLM8SP0Time))
#define ParamLMG_HCLM8SP0TimeStr                     (knx.paramString(LMG_HCLM8SP0Time, LMG_HCLM8SP0TimeLength))
// M8 SP1 Farbtemperatur
#define ParamLMG_HCLM8SP0Kelvin                      (knx.paramWord(LMG_HCLM8SP0Kelvin))
// M8 SP1 Helligkeit
#define ParamLMG_HCLM8SP0Brightness                  (knx.paramByte(LMG_HCLM8SP0Brightness))
// M8 SP2 Zeit
#define ParamLMG_HCLM8SP1Time                        (knx.paramData(LMG_HCLM8SP1Time))
#define ParamLMG_HCLM8SP1TimeStr                     (knx.paramString(LMG_HCLM8SP1Time, LMG_HCLM8SP1TimeLength))
// M8 SP2 Kelvin
#define ParamLMG_HCLM8SP1Kelvin                      (knx.paramWord(LMG_HCLM8SP1Kelvin))
// M8 SP2 Helligkeit
#define ParamLMG_HCLM8SP1Brightness                  (knx.paramByte(LMG_HCLM8SP1Brightness))
// M8 SP3 Zeit
#define ParamLMG_HCLM8SP2Time                        (knx.paramData(LMG_HCLM8SP2Time))
#define ParamLMG_HCLM8SP2TimeStr                     (knx.paramString(LMG_HCLM8SP2Time, LMG_HCLM8SP2TimeLength))
// M8 SP3 Farbtemperatur
#define ParamLMG_HCLM8SP2Kelvin                      (knx.paramWord(LMG_HCLM8SP2Kelvin))
// M8 SP3 Helligkeit
#define ParamLMG_HCLM8SP2Brightness                  (knx.paramByte(LMG_HCLM8SP2Brightness))
// M8 SP4 Zeit
#define ParamLMG_HCLM8SP3Time                        (knx.paramData(LMG_HCLM8SP3Time))
#define ParamLMG_HCLM8SP3TimeStr                     (knx.paramString(LMG_HCLM8SP3Time, LMG_HCLM8SP3TimeLength))
// M8 SP4 Farbtemperatur
#define ParamLMG_HCLM8SP3Kelvin                      (knx.paramWord(LMG_HCLM8SP3Kelvin))
// M8 SP4 Helligkeit
#define ParamLMG_HCLM8SP3Brightness                  (knx.paramByte(LMG_HCLM8SP3Brightness))
// M8 SP5 Zeit
#define ParamLMG_HCLM8SP4Time                        (knx.paramData(LMG_HCLM8SP4Time))
#define ParamLMG_HCLM8SP4TimeStr                     (knx.paramString(LMG_HCLM8SP4Time, LMG_HCLM8SP4TimeLength))
// M8 SP5 Farbtemperatur
#define ParamLMG_HCLM8SP4Kelvin                      (knx.paramWord(LMG_HCLM8SP4Kelvin))
// M8 SP5 Helligkeit
#define ParamLMG_HCLM8SP4Brightness                  (knx.paramByte(LMG_HCLM8SP4Brightness))
// M8 SP6 Zeit
#define ParamLMG_HCLM8SP5Time                        (knx.paramData(LMG_HCLM8SP5Time))
#define ParamLMG_HCLM8SP5TimeStr                     (knx.paramString(LMG_HCLM8SP5Time, LMG_HCLM8SP5TimeLength))
// M8 SP6 Farbtemperatur
#define ParamLMG_HCLM8SP5Kelvin                      (knx.paramWord(LMG_HCLM8SP5Kelvin))
// M8 SP6 Helligkeit
#define ParamLMG_HCLM8SP5Brightness                  (knx.paramByte(LMG_HCLM8SP5Brightness))
// M8 SP7 Zeit
#define ParamLMG_HCLM8SP6Time                        (knx.paramData(LMG_HCLM8SP6Time))
#define ParamLMG_HCLM8SP6TimeStr                     (knx.paramString(LMG_HCLM8SP6Time, LMG_HCLM8SP6TimeLength))
// M8 SP7 Farbtemperatur
#define ParamLMG_HCLM8SP6Kelvin                      (knx.paramWord(LMG_HCLM8SP6Kelvin))
// M8 SP7 Helligkeit
#define ParamLMG_HCLM8SP6Brightness                  (knx.paramByte(LMG_HCLM8SP6Brightness))
// M8 SP8 Zeit
#define ParamLMG_HCLM8SP7Time                        (knx.paramData(LMG_HCLM8SP7Time))
#define ParamLMG_HCLM8SP7TimeStr                     (knx.paramString(LMG_HCLM8SP7Time, LMG_HCLM8SP7TimeLength))
// M8 SP8 Farbtemperatur
#define ParamLMG_HCLM8SP7Kelvin                      (knx.paramWord(LMG_HCLM8SP7Kelvin))
// M8 SP8 Helligkeit
#define ParamLMG_HCLM8SP7Brightness                  (knx.paramByte(LMG_HCLM8SP7Brightness))
// M8 SP9 Zeit
#define ParamLMG_HCLM8SP8Time                        (knx.paramData(LMG_HCLM8SP8Time))
#define ParamLMG_HCLM8SP8TimeStr                     (knx.paramString(LMG_HCLM8SP8Time, LMG_HCLM8SP8TimeLength))
// M8 SP9 Farbtemperatur
#define ParamLMG_HCLM8SP8Kelvin                      (knx.paramWord(LMG_HCLM8SP8Kelvin))
// M8 SP9 Helligkeit
#define ParamLMG_HCLM8SP8Brightness                  (knx.paramByte(LMG_HCLM8SP8Brightness))
// M8 SP10 Zeit
#define ParamLMG_HCLM8SP9Time                        (knx.paramData(LMG_HCLM8SP9Time))
#define ParamLMG_HCLM8SP9TimeStr                     (knx.paramString(LMG_HCLM8SP9Time, LMG_HCLM8SP9TimeLength))
// M8 SP10 Farbtemperatur
#define ParamLMG_HCLM8SP9Kelvin                      (knx.paramWord(LMG_HCLM8SP9Kelvin))
// M8 SP10 Helligkeit
#define ParamLMG_HCLM8SP9Brightness                  (knx.paramByte(LMG_HCLM8SP9Brightness))
// Name Lichtmanager 1
#define ParamLMG_HCLM1Name                           (knx.paramData(LMG_HCLM1Name))
#define ParamLMG_HCLM1NameStr                        (knx.paramString(LMG_HCLM1Name, LMG_HCLM1NameLength))
// Name Lichtmanager 2
#define ParamLMG_HCLM2Name                           (knx.paramData(LMG_HCLM2Name))
#define ParamLMG_HCLM2NameStr                        (knx.paramString(LMG_HCLM2Name, LMG_HCLM2NameLength))
// Name Lichtmanager 3
#define ParamLMG_HCLM3Name                           (knx.paramData(LMG_HCLM3Name))
#define ParamLMG_HCLM3NameStr                        (knx.paramString(LMG_HCLM3Name, LMG_HCLM3NameLength))
// Name Lichtmanager 4
#define ParamLMG_HCLM4Name                           (knx.paramData(LMG_HCLM4Name))
#define ParamLMG_HCLM4NameStr                        (knx.paramString(LMG_HCLM4Name, LMG_HCLM4NameLength))
// Name Lichtmanager 5
#define ParamLMG_HCLM5Name                           (knx.paramData(LMG_HCLM5Name))
#define ParamLMG_HCLM5NameStr                        (knx.paramString(LMG_HCLM5Name, LMG_HCLM5NameLength))
// Name Lichtmanager 6
#define ParamLMG_HCLM6Name                           (knx.paramData(LMG_HCLM6Name))
#define ParamLMG_HCLM6NameStr                        (knx.paramString(LMG_HCLM6Name, LMG_HCLM6NameLength))
// Name Lichtmanager 7
#define ParamLMG_HCLM7Name                           (knx.paramData(LMG_HCLM7Name))
#define ParamLMG_HCLM7NameStr                        (knx.paramString(LMG_HCLM7Name, LMG_HCLM7NameLength))
// Name Lichtmanager 8
#define ParamLMG_HCLM8Name                           (knx.paramData(LMG_HCLM8Name))
#define ParamLMG_HCLM8NameStr                        (knx.paramString(LMG_HCLM8Name, LMG_HCLM8NameLength))
// Kurventyp
#define ParamLMG_HCLM1CurveType                      (knx.paramByte(LMG_HCLM1CurveType))
// Slew-Rate
#define ParamLMG_HCLM1SlewRate                       (knx.paramWord(LMG_HCLM1SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM1ManualKelvin                   (knx.paramWord(LMG_HCLM1ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM1Sunrise                        (knx.paramData(LMG_HCLM1Sunrise))
#define ParamLMG_HCLM1SunriseStr                     (knx.paramString(LMG_HCLM1Sunrise, LMG_HCLM1SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM1Sunset                         (knx.paramData(LMG_HCLM1Sunset))
#define ParamLMG_HCLM1SunsetStr                      (knx.paramString(LMG_HCLM1Sunset, LMG_HCLM1SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM1SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM1SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM1SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM1SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM1AstroMinKelvin                 (knx.paramWord(LMG_HCLM1AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM1AstroMaxKelvin                 (knx.paramWord(LMG_HCLM1AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM1AstroMinBrightness             (knx.paramByte(LMG_HCLM1AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM1AstroMaxBrightness             (knx.paramByte(LMG_HCLM1AstroMaxBrightness))
// Kurventyp
#define ParamLMG_HCLM2CurveType                      (knx.paramByte(LMG_HCLM2CurveType))
// Slew-Rate
#define ParamLMG_HCLM2SlewRate                       (knx.paramWord(LMG_HCLM2SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM2ManualKelvin                   (knx.paramWord(LMG_HCLM2ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM2Sunrise                        (knx.paramData(LMG_HCLM2Sunrise))
#define ParamLMG_HCLM2SunriseStr                     (knx.paramString(LMG_HCLM2Sunrise, LMG_HCLM2SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM2Sunset                         (knx.paramData(LMG_HCLM2Sunset))
#define ParamLMG_HCLM2SunsetStr                      (knx.paramString(LMG_HCLM2Sunset, LMG_HCLM2SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM2SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM2SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM2SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM2SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM2AstroMinKelvin                 (knx.paramWord(LMG_HCLM2AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM2AstroMaxKelvin                 (knx.paramWord(LMG_HCLM2AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM2AstroMinBrightness             (knx.paramByte(LMG_HCLM2AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM2AstroMaxBrightness             (knx.paramByte(LMG_HCLM2AstroMaxBrightness))
// Kurventyp
#define ParamLMG_HCLM3CurveType                      (knx.paramByte(LMG_HCLM3CurveType))
// Slew-Rate
#define ParamLMG_HCLM3SlewRate                       (knx.paramWord(LMG_HCLM3SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM3ManualKelvin                   (knx.paramWord(LMG_HCLM3ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM3Sunrise                        (knx.paramData(LMG_HCLM3Sunrise))
#define ParamLMG_HCLM3SunriseStr                     (knx.paramString(LMG_HCLM3Sunrise, LMG_HCLM3SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM3Sunset                         (knx.paramData(LMG_HCLM3Sunset))
#define ParamLMG_HCLM3SunsetStr                      (knx.paramString(LMG_HCLM3Sunset, LMG_HCLM3SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM3SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM3SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM3SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM3SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM3AstroMinKelvin                 (knx.paramWord(LMG_HCLM3AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM3AstroMaxKelvin                 (knx.paramWord(LMG_HCLM3AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM3AstroMinBrightness             (knx.paramByte(LMG_HCLM3AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM3AstroMaxBrightness             (knx.paramByte(LMG_HCLM3AstroMaxBrightness))
// Kurventyp
#define ParamLMG_HCLM4CurveType                      (knx.paramByte(LMG_HCLM4CurveType))
// Slew-Rate
#define ParamLMG_HCLM4SlewRate                       (knx.paramWord(LMG_HCLM4SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM4ManualKelvin                   (knx.paramWord(LMG_HCLM4ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM4Sunrise                        (knx.paramData(LMG_HCLM4Sunrise))
#define ParamLMG_HCLM4SunriseStr                     (knx.paramString(LMG_HCLM4Sunrise, LMG_HCLM4SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM4Sunset                         (knx.paramData(LMG_HCLM4Sunset))
#define ParamLMG_HCLM4SunsetStr                      (knx.paramString(LMG_HCLM4Sunset, LMG_HCLM4SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM4SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM4SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM4SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM4SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM4AstroMinKelvin                 (knx.paramWord(LMG_HCLM4AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM4AstroMaxKelvin                 (knx.paramWord(LMG_HCLM4AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM4AstroMinBrightness             (knx.paramByte(LMG_HCLM4AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM4AstroMaxBrightness             (knx.paramByte(LMG_HCLM4AstroMaxBrightness))
// Kurventyp
#define ParamLMG_HCLM5CurveType                      (knx.paramByte(LMG_HCLM5CurveType))
// Slew-Rate
#define ParamLMG_HCLM5SlewRate                       (knx.paramWord(LMG_HCLM5SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM5ManualKelvin                   (knx.paramWord(LMG_HCLM5ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM5Sunrise                        (knx.paramData(LMG_HCLM5Sunrise))
#define ParamLMG_HCLM5SunriseStr                     (knx.paramString(LMG_HCLM5Sunrise, LMG_HCLM5SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM5Sunset                         (knx.paramData(LMG_HCLM5Sunset))
#define ParamLMG_HCLM5SunsetStr                      (knx.paramString(LMG_HCLM5Sunset, LMG_HCLM5SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM5SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM5SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM5SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM5SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM5AstroMinKelvin                 (knx.paramWord(LMG_HCLM5AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM5AstroMaxKelvin                 (knx.paramWord(LMG_HCLM5AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM5AstroMinBrightness             (knx.paramByte(LMG_HCLM5AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM5AstroMaxBrightness             (knx.paramByte(LMG_HCLM5AstroMaxBrightness))
// Kurventyp
#define ParamLMG_HCLM6CurveType                      (knx.paramByte(LMG_HCLM6CurveType))
// Slew-Rate
#define ParamLMG_HCLM6SlewRate                       (knx.paramWord(LMG_HCLM6SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM6ManualKelvin                   (knx.paramWord(LMG_HCLM6ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM6Sunrise                        (knx.paramData(LMG_HCLM6Sunrise))
#define ParamLMG_HCLM6SunriseStr                     (knx.paramString(LMG_HCLM6Sunrise, LMG_HCLM6SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM6Sunset                         (knx.paramData(LMG_HCLM6Sunset))
#define ParamLMG_HCLM6SunsetStr                      (knx.paramString(LMG_HCLM6Sunset, LMG_HCLM6SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM6SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM6SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM6SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM6SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM6AstroMinKelvin                 (knx.paramWord(LMG_HCLM6AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM6AstroMaxKelvin                 (knx.paramWord(LMG_HCLM6AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM6AstroMinBrightness             (knx.paramByte(LMG_HCLM6AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM6AstroMaxBrightness             (knx.paramByte(LMG_HCLM6AstroMaxBrightness))
// Kurventyp
#define ParamLMG_HCLM7CurveType                      (knx.paramByte(LMG_HCLM7CurveType))
// Slew-Rate
#define ParamLMG_HCLM7SlewRate                       (knx.paramWord(LMG_HCLM7SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM7ManualKelvin                   (knx.paramWord(LMG_HCLM7ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM7Sunrise                        (knx.paramData(LMG_HCLM7Sunrise))
#define ParamLMG_HCLM7SunriseStr                     (knx.paramString(LMG_HCLM7Sunrise, LMG_HCLM7SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM7Sunset                         (knx.paramData(LMG_HCLM7Sunset))
#define ParamLMG_HCLM7SunsetStr                      (knx.paramString(LMG_HCLM7Sunset, LMG_HCLM7SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM7SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM7SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM7SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM7SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM7AstroMinKelvin                 (knx.paramWord(LMG_HCLM7AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM7AstroMaxKelvin                 (knx.paramWord(LMG_HCLM7AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM7AstroMinBrightness             (knx.paramByte(LMG_HCLM7AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM7AstroMaxBrightness             (knx.paramByte(LMG_HCLM7AstroMaxBrightness))
// Kurventyp
#define ParamLMG_HCLM8CurveType                      (knx.paramByte(LMG_HCLM8CurveType))
// Slew-Rate
#define ParamLMG_HCLM8SlewRate                       (knx.paramWord(LMG_HCLM8SlewRate))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM8ManualKelvin                   (knx.paramWord(LMG_HCLM8ManualKelvin))
// Sunrise (HH:MM)
#define ParamLMG_HCLM8Sunrise                        (knx.paramData(LMG_HCLM8Sunrise))
#define ParamLMG_HCLM8SunriseStr                     (knx.paramString(LMG_HCLM8Sunrise, LMG_HCLM8SunriseLength))
// Sunset (HH:MM)
#define ParamLMG_HCLM8Sunset                         (knx.paramData(LMG_HCLM8Sunset))
#define ParamLMG_HCLM8SunsetStr                      (knx.paramString(LMG_HCLM8Sunset, LMG_HCLM8SunsetLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM8SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM8SunriseOffset))
// Sunset Offset (min)
#define ParamLMG_HCLM8SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM8SunsetOffset))
// Astro Minimum Kelvin
#define ParamLMG_HCLM8AstroMinKelvin                 (knx.paramWord(LMG_HCLM8AstroMinKelvin))
// Astro Maximum Kelvin
#define ParamLMG_HCLM8AstroMaxKelvin                 (knx.paramWord(LMG_HCLM8AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM8AstroMinBrightness             (knx.paramByte(LMG_HCLM8AstroMinBrightness))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM8AstroMaxBrightness             (knx.paramByte(LMG_HCLM8AstroMaxBrightness))
// Anzahl Stützpunkte
#define ParamLMG_HCLM1SetpointCount                  (knx.paramByte(LMG_HCLM1SetpointCount))
// Anzahl Stützpunkte
#define ParamLMG_HCLM2SetpointCount                  (knx.paramByte(LMG_HCLM2SetpointCount))
// Anzahl Stützpunkte
#define ParamLMG_HCLM3SetpointCount                  (knx.paramByte(LMG_HCLM3SetpointCount))
// Anzahl Stützpunkte
#define ParamLMG_HCLM4SetpointCount                  (knx.paramByte(LMG_HCLM4SetpointCount))
// Anzahl Stützpunkte
#define ParamLMG_HCLM5SetpointCount                  (knx.paramByte(LMG_HCLM5SetpointCount))
// Anzahl Stützpunkte
#define ParamLMG_HCLM6SetpointCount                  (knx.paramByte(LMG_HCLM6SetpointCount))
// Anzahl Stützpunkte
#define ParamLMG_HCLM7SetpointCount                  (knx.paramByte(LMG_HCLM7SetpointCount))
// Anzahl Stützpunkte
#define ParamLMG_HCLM8SetpointCount                  (knx.paramByte(LMG_HCLM8SetpointCount))
// Saison-Profil
#define ParamLMG_HCLM1SeasonMode                     (knx.paramByte(LMG_HCLM1SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM1DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM1DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM1SummerStartMonth               (knx.paramByte(LMG_HCLM1SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM1SummerStartDay                 (knx.paramByte(LMG_HCLM1SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM1SummerEndMonth                 (knx.paramByte(LMG_HCLM1SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM1SummerEndDay                   (knx.paramByte(LMG_HCLM1SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM1SP0SummerKelvin                (knx.paramWord(LMG_HCLM1SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM1SP1SummerKelvin                (knx.paramWord(LMG_HCLM1SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM1SP2SummerKelvin                (knx.paramWord(LMG_HCLM1SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM1SP3SummerKelvin                (knx.paramWord(LMG_HCLM1SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM1SP4SummerKelvin                (knx.paramWord(LMG_HCLM1SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM1SP5SummerKelvin                (knx.paramWord(LMG_HCLM1SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM1SP6SummerKelvin                (knx.paramWord(LMG_HCLM1SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM1SP7SummerKelvin                (knx.paramWord(LMG_HCLM1SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM1SP8SummerKelvin                (knx.paramWord(LMG_HCLM1SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM1SP9SummerKelvin                (knx.paramWord(LMG_HCLM1SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM1SP0SummerBrightness            (knx.paramByte(LMG_HCLM1SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM1SP1SummerBrightness            (knx.paramByte(LMG_HCLM1SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM1SP2SummerBrightness            (knx.paramByte(LMG_HCLM1SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM1SP3SummerBrightness            (knx.paramByte(LMG_HCLM1SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM1SP4SummerBrightness            (knx.paramByte(LMG_HCLM1SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM1SP5SummerBrightness            (knx.paramByte(LMG_HCLM1SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM1SP6SummerBrightness            (knx.paramByte(LMG_HCLM1SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM1SP7SummerBrightness            (knx.paramByte(LMG_HCLM1SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM1SP8SummerBrightness            (knx.paramByte(LMG_HCLM1SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM1SP9SummerBrightness            (knx.paramByte(LMG_HCLM1SP9SummerBrightness))
// Saison-Profil
#define ParamLMG_HCLM2SeasonMode                     (knx.paramByte(LMG_HCLM2SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM2DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM2DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM2SummerStartMonth               (knx.paramByte(LMG_HCLM2SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM2SummerStartDay                 (knx.paramByte(LMG_HCLM2SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM2SummerEndMonth                 (knx.paramByte(LMG_HCLM2SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM2SummerEndDay                   (knx.paramByte(LMG_HCLM2SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM2SP0SummerKelvin                (knx.paramWord(LMG_HCLM2SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM2SP1SummerKelvin                (knx.paramWord(LMG_HCLM2SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM2SP2SummerKelvin                (knx.paramWord(LMG_HCLM2SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM2SP3SummerKelvin                (knx.paramWord(LMG_HCLM2SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM2SP4SummerKelvin                (knx.paramWord(LMG_HCLM2SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM2SP5SummerKelvin                (knx.paramWord(LMG_HCLM2SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM2SP6SummerKelvin                (knx.paramWord(LMG_HCLM2SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM2SP7SummerKelvin                (knx.paramWord(LMG_HCLM2SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM2SP8SummerKelvin                (knx.paramWord(LMG_HCLM2SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM2SP9SummerKelvin                (knx.paramWord(LMG_HCLM2SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM2SP0SummerBrightness            (knx.paramByte(LMG_HCLM2SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM2SP1SummerBrightness            (knx.paramByte(LMG_HCLM2SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM2SP2SummerBrightness            (knx.paramByte(LMG_HCLM2SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM2SP3SummerBrightness            (knx.paramByte(LMG_HCLM2SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM2SP4SummerBrightness            (knx.paramByte(LMG_HCLM2SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM2SP5SummerBrightness            (knx.paramByte(LMG_HCLM2SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM2SP6SummerBrightness            (knx.paramByte(LMG_HCLM2SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM2SP7SummerBrightness            (knx.paramByte(LMG_HCLM2SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM2SP8SummerBrightness            (knx.paramByte(LMG_HCLM2SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM2SP9SummerBrightness            (knx.paramByte(LMG_HCLM2SP9SummerBrightness))
// Saison-Profil
#define ParamLMG_HCLM3SeasonMode                     (knx.paramByte(LMG_HCLM3SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM3DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM3DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM3SummerStartMonth               (knx.paramByte(LMG_HCLM3SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM3SummerStartDay                 (knx.paramByte(LMG_HCLM3SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM3SummerEndMonth                 (knx.paramByte(LMG_HCLM3SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM3SummerEndDay                   (knx.paramByte(LMG_HCLM3SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM3SP0SummerKelvin                (knx.paramWord(LMG_HCLM3SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM3SP1SummerKelvin                (knx.paramWord(LMG_HCLM3SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM3SP2SummerKelvin                (knx.paramWord(LMG_HCLM3SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM3SP3SummerKelvin                (knx.paramWord(LMG_HCLM3SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM3SP4SummerKelvin                (knx.paramWord(LMG_HCLM3SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM3SP5SummerKelvin                (knx.paramWord(LMG_HCLM3SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM3SP6SummerKelvin                (knx.paramWord(LMG_HCLM3SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM3SP7SummerKelvin                (knx.paramWord(LMG_HCLM3SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM3SP8SummerKelvin                (knx.paramWord(LMG_HCLM3SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM3SP9SummerKelvin                (knx.paramWord(LMG_HCLM3SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM3SP0SummerBrightness            (knx.paramByte(LMG_HCLM3SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM3SP1SummerBrightness            (knx.paramByte(LMG_HCLM3SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM3SP2SummerBrightness            (knx.paramByte(LMG_HCLM3SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM3SP3SummerBrightness            (knx.paramByte(LMG_HCLM3SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM3SP4SummerBrightness            (knx.paramByte(LMG_HCLM3SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM3SP5SummerBrightness            (knx.paramByte(LMG_HCLM3SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM3SP6SummerBrightness            (knx.paramByte(LMG_HCLM3SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM3SP7SummerBrightness            (knx.paramByte(LMG_HCLM3SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM3SP8SummerBrightness            (knx.paramByte(LMG_HCLM3SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM3SP9SummerBrightness            (knx.paramByte(LMG_HCLM3SP9SummerBrightness))
// Saison-Profil
#define ParamLMG_HCLM4SeasonMode                     (knx.paramByte(LMG_HCLM4SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM4DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM4DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM4SummerStartMonth               (knx.paramByte(LMG_HCLM4SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM4SummerStartDay                 (knx.paramByte(LMG_HCLM4SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM4SummerEndMonth                 (knx.paramByte(LMG_HCLM4SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM4SummerEndDay                   (knx.paramByte(LMG_HCLM4SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM4SP0SummerKelvin                (knx.paramWord(LMG_HCLM4SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM4SP1SummerKelvin                (knx.paramWord(LMG_HCLM4SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM4SP2SummerKelvin                (knx.paramWord(LMG_HCLM4SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM4SP3SummerKelvin                (knx.paramWord(LMG_HCLM4SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM4SP4SummerKelvin                (knx.paramWord(LMG_HCLM4SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM4SP5SummerKelvin                (knx.paramWord(LMG_HCLM4SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM4SP6SummerKelvin                (knx.paramWord(LMG_HCLM4SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM4SP7SummerKelvin                (knx.paramWord(LMG_HCLM4SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM4SP8SummerKelvin                (knx.paramWord(LMG_HCLM4SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM4SP9SummerKelvin                (knx.paramWord(LMG_HCLM4SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM4SP0SummerBrightness            (knx.paramByte(LMG_HCLM4SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM4SP1SummerBrightness            (knx.paramByte(LMG_HCLM4SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM4SP2SummerBrightness            (knx.paramByte(LMG_HCLM4SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM4SP3SummerBrightness            (knx.paramByte(LMG_HCLM4SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM4SP4SummerBrightness            (knx.paramByte(LMG_HCLM4SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM4SP5SummerBrightness            (knx.paramByte(LMG_HCLM4SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM4SP6SummerBrightness            (knx.paramByte(LMG_HCLM4SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM4SP7SummerBrightness            (knx.paramByte(LMG_HCLM4SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM4SP8SummerBrightness            (knx.paramByte(LMG_HCLM4SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM4SP9SummerBrightness            (knx.paramByte(LMG_HCLM4SP9SummerBrightness))
// Saison-Profil
#define ParamLMG_HCLM5SeasonMode                     (knx.paramByte(LMG_HCLM5SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM5DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM5DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM5SummerStartMonth               (knx.paramByte(LMG_HCLM5SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM5SummerStartDay                 (knx.paramByte(LMG_HCLM5SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM5SummerEndMonth                 (knx.paramByte(LMG_HCLM5SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM5SummerEndDay                   (knx.paramByte(LMG_HCLM5SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM5SP0SummerKelvin                (knx.paramWord(LMG_HCLM5SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM5SP1SummerKelvin                (knx.paramWord(LMG_HCLM5SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM5SP2SummerKelvin                (knx.paramWord(LMG_HCLM5SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM5SP3SummerKelvin                (knx.paramWord(LMG_HCLM5SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM5SP4SummerKelvin                (knx.paramWord(LMG_HCLM5SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM5SP5SummerKelvin                (knx.paramWord(LMG_HCLM5SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM5SP6SummerKelvin                (knx.paramWord(LMG_HCLM5SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM5SP7SummerKelvin                (knx.paramWord(LMG_HCLM5SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM5SP8SummerKelvin                (knx.paramWord(LMG_HCLM5SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM5SP9SummerKelvin                (knx.paramWord(LMG_HCLM5SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM5SP0SummerBrightness            (knx.paramByte(LMG_HCLM5SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM5SP1SummerBrightness            (knx.paramByte(LMG_HCLM5SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM5SP2SummerBrightness            (knx.paramByte(LMG_HCLM5SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM5SP3SummerBrightness            (knx.paramByte(LMG_HCLM5SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM5SP4SummerBrightness            (knx.paramByte(LMG_HCLM5SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM5SP5SummerBrightness            (knx.paramByte(LMG_HCLM5SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM5SP6SummerBrightness            (knx.paramByte(LMG_HCLM5SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM5SP7SummerBrightness            (knx.paramByte(LMG_HCLM5SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM5SP8SummerBrightness            (knx.paramByte(LMG_HCLM5SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM5SP9SummerBrightness            (knx.paramByte(LMG_HCLM5SP9SummerBrightness))
// Saison-Profil
#define ParamLMG_HCLM6SeasonMode                     (knx.paramByte(LMG_HCLM6SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM6DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM6DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM6SummerStartMonth               (knx.paramByte(LMG_HCLM6SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM6SummerStartDay                 (knx.paramByte(LMG_HCLM6SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM6SummerEndMonth                 (knx.paramByte(LMG_HCLM6SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM6SummerEndDay                   (knx.paramByte(LMG_HCLM6SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM6SP0SummerKelvin                (knx.paramWord(LMG_HCLM6SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM6SP1SummerKelvin                (knx.paramWord(LMG_HCLM6SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM6SP2SummerKelvin                (knx.paramWord(LMG_HCLM6SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM6SP3SummerKelvin                (knx.paramWord(LMG_HCLM6SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM6SP4SummerKelvin                (knx.paramWord(LMG_HCLM6SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM6SP5SummerKelvin                (knx.paramWord(LMG_HCLM6SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM6SP6SummerKelvin                (knx.paramWord(LMG_HCLM6SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM6SP7SummerKelvin                (knx.paramWord(LMG_HCLM6SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM6SP8SummerKelvin                (knx.paramWord(LMG_HCLM6SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM6SP9SummerKelvin                (knx.paramWord(LMG_HCLM6SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM6SP0SummerBrightness            (knx.paramByte(LMG_HCLM6SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM6SP1SummerBrightness            (knx.paramByte(LMG_HCLM6SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM6SP2SummerBrightness            (knx.paramByte(LMG_HCLM6SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM6SP3SummerBrightness            (knx.paramByte(LMG_HCLM6SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM6SP4SummerBrightness            (knx.paramByte(LMG_HCLM6SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM6SP5SummerBrightness            (knx.paramByte(LMG_HCLM6SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM6SP6SummerBrightness            (knx.paramByte(LMG_HCLM6SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM6SP7SummerBrightness            (knx.paramByte(LMG_HCLM6SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM6SP8SummerBrightness            (knx.paramByte(LMG_HCLM6SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM6SP9SummerBrightness            (knx.paramByte(LMG_HCLM6SP9SummerBrightness))
// Saison-Profil
#define ParamLMG_HCLM7SeasonMode                     (knx.paramByte(LMG_HCLM7SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM7DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM7DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM7SummerStartMonth               (knx.paramByte(LMG_HCLM7SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM7SummerStartDay                 (knx.paramByte(LMG_HCLM7SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM7SummerEndMonth                 (knx.paramByte(LMG_HCLM7SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM7SummerEndDay                   (knx.paramByte(LMG_HCLM7SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM7SP0SummerKelvin                (knx.paramWord(LMG_HCLM7SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM7SP1SummerKelvin                (knx.paramWord(LMG_HCLM7SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM7SP2SummerKelvin                (knx.paramWord(LMG_HCLM7SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM7SP3SummerKelvin                (knx.paramWord(LMG_HCLM7SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM7SP4SummerKelvin                (knx.paramWord(LMG_HCLM7SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM7SP5SummerKelvin                (knx.paramWord(LMG_HCLM7SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM7SP6SummerKelvin                (knx.paramWord(LMG_HCLM7SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM7SP7SummerKelvin                (knx.paramWord(LMG_HCLM7SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM7SP8SummerKelvin                (knx.paramWord(LMG_HCLM7SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM7SP9SummerKelvin                (knx.paramWord(LMG_HCLM7SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM7SP0SummerBrightness            (knx.paramByte(LMG_HCLM7SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM7SP1SummerBrightness            (knx.paramByte(LMG_HCLM7SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM7SP2SummerBrightness            (knx.paramByte(LMG_HCLM7SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM7SP3SummerBrightness            (knx.paramByte(LMG_HCLM7SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM7SP4SummerBrightness            (knx.paramByte(LMG_HCLM7SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM7SP5SummerBrightness            (knx.paramByte(LMG_HCLM7SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM7SP6SummerBrightness            (knx.paramByte(LMG_HCLM7SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM7SP7SummerBrightness            (knx.paramByte(LMG_HCLM7SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM7SP8SummerBrightness            (knx.paramByte(LMG_HCLM7SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM7SP9SummerBrightness            (knx.paramByte(LMG_HCLM7SP9SummerBrightness))
// Saison-Profil
#define ParamLMG_HCLM8SeasonMode                     (knx.paramByte(LMG_HCLM8SeasonMode))
// DST-Offset (Tage)
#define ParamLMG_HCLM8DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM8DSTOffsetDays))
// Sommerstart Monat
#define ParamLMG_HCLM8SummerStartMonth               (knx.paramByte(LMG_HCLM8SummerStartMonth))
// Sommerstart Tag
#define ParamLMG_HCLM8SummerStartDay                 (knx.paramByte(LMG_HCLM8SummerStartDay))
// Sommerende Monat
#define ParamLMG_HCLM8SummerEndMonth                 (knx.paramByte(LMG_HCLM8SummerEndMonth))
// Sommerende Tag
#define ParamLMG_HCLM8SummerEndDay                   (knx.paramByte(LMG_HCLM8SummerEndDay))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM8SP0SummerKelvin                (knx.paramWord(LMG_HCLM8SP0SummerKelvin))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM8SP1SummerKelvin                (knx.paramWord(LMG_HCLM8SP1SummerKelvin))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM8SP2SummerKelvin                (knx.paramWord(LMG_HCLM8SP2SummerKelvin))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM8SP3SummerKelvin                (knx.paramWord(LMG_HCLM8SP3SummerKelvin))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM8SP4SummerKelvin                (knx.paramWord(LMG_HCLM8SP4SummerKelvin))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM8SP5SummerKelvin                (knx.paramWord(LMG_HCLM8SP5SummerKelvin))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM8SP6SummerKelvin                (knx.paramWord(LMG_HCLM8SP6SummerKelvin))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM8SP7SummerKelvin                (knx.paramWord(LMG_HCLM8SP7SummerKelvin))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM8SP8SummerKelvin                (knx.paramWord(LMG_HCLM8SP8SummerKelvin))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM8SP9SummerKelvin                (knx.paramWord(LMG_HCLM8SP9SummerKelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM8SP0SummerBrightness            (knx.paramByte(LMG_HCLM8SP0SummerBrightness))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM8SP1SummerBrightness            (knx.paramByte(LMG_HCLM8SP1SummerBrightness))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM8SP2SummerBrightness            (knx.paramByte(LMG_HCLM8SP2SummerBrightness))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM8SP3SummerBrightness            (knx.paramByte(LMG_HCLM8SP3SummerBrightness))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM8SP4SummerBrightness            (knx.paramByte(LMG_HCLM8SP4SummerBrightness))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM8SP5SummerBrightness            (knx.paramByte(LMG_HCLM8SP5SummerBrightness))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM8SP6SummerBrightness            (knx.paramByte(LMG_HCLM8SP6SummerBrightness))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM8SP7SummerBrightness            (knx.paramByte(LMG_HCLM8SP7SummerBrightness))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM8SP8SummerBrightness            (knx.paramByte(LMG_HCLM8SP8SummerBrightness))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM8SP9SummerBrightness            (knx.paramByte(LMG_HCLM8SP9SummerBrightness))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM1AdaptiveMode                   (knx.paramByte(LMG_HCLM1AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM1AdaptiveActiveMode             (knx.paramByte(LMG_HCLM1AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM1AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM1AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM1AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM1AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM1AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM1AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM1AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM1AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM1AdaptiveMinChange              (knx.paramByte(LMG_HCLM1AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM1AdaptiveStrength               (knx.paramByte(LMG_HCLM1AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM1AdaptiveKp                     (knx.paramByte(LMG_HCLM1AdaptiveKp))
// Totband
#define ParamLMG_HCLM1AdaptiveDeadband               (knx.paramWord(LMG_HCLM1AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM1AdaptiveStartTime              (knx.paramData(LMG_HCLM1AdaptiveStartTime))
#define ParamLMG_HCLM1AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM1AdaptiveStartTime, LMG_HCLM1AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM1AdaptiveEndTime                (knx.paramData(LMG_HCLM1AdaptiveEndTime))
#define ParamLMG_HCLM1AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM1AdaptiveEndTime, LMG_HCLM1AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM1AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM1AdaptiveDayNightPolarity))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM2AdaptiveMode                   (knx.paramByte(LMG_HCLM2AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM2AdaptiveActiveMode             (knx.paramByte(LMG_HCLM2AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM2AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM2AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM2AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM2AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM2AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM2AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM2AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM2AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM2AdaptiveMinChange              (knx.paramByte(LMG_HCLM2AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM2AdaptiveStrength               (knx.paramByte(LMG_HCLM2AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM2AdaptiveKp                     (knx.paramByte(LMG_HCLM2AdaptiveKp))
// Totband
#define ParamLMG_HCLM2AdaptiveDeadband               (knx.paramWord(LMG_HCLM2AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM2AdaptiveStartTime              (knx.paramData(LMG_HCLM2AdaptiveStartTime))
#define ParamLMG_HCLM2AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM2AdaptiveStartTime, LMG_HCLM2AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM2AdaptiveEndTime                (knx.paramData(LMG_HCLM2AdaptiveEndTime))
#define ParamLMG_HCLM2AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM2AdaptiveEndTime, LMG_HCLM2AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM2AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM2AdaptiveDayNightPolarity))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM3AdaptiveMode                   (knx.paramByte(LMG_HCLM3AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM3AdaptiveActiveMode             (knx.paramByte(LMG_HCLM3AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM3AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM3AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM3AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM3AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM3AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM3AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM3AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM3AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM3AdaptiveMinChange              (knx.paramByte(LMG_HCLM3AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM3AdaptiveStrength               (knx.paramByte(LMG_HCLM3AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM3AdaptiveKp                     (knx.paramByte(LMG_HCLM3AdaptiveKp))
// Totband
#define ParamLMG_HCLM3AdaptiveDeadband               (knx.paramWord(LMG_HCLM3AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM3AdaptiveStartTime              (knx.paramData(LMG_HCLM3AdaptiveStartTime))
#define ParamLMG_HCLM3AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM3AdaptiveStartTime, LMG_HCLM3AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM3AdaptiveEndTime                (knx.paramData(LMG_HCLM3AdaptiveEndTime))
#define ParamLMG_HCLM3AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM3AdaptiveEndTime, LMG_HCLM3AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM3AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM3AdaptiveDayNightPolarity))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM4AdaptiveMode                   (knx.paramByte(LMG_HCLM4AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM4AdaptiveActiveMode             (knx.paramByte(LMG_HCLM4AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM4AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM4AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM4AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM4AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM4AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM4AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM4AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM4AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM4AdaptiveMinChange              (knx.paramByte(LMG_HCLM4AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM4AdaptiveStrength               (knx.paramByte(LMG_HCLM4AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM4AdaptiveKp                     (knx.paramByte(LMG_HCLM4AdaptiveKp))
// Totband
#define ParamLMG_HCLM4AdaptiveDeadband               (knx.paramWord(LMG_HCLM4AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM4AdaptiveStartTime              (knx.paramData(LMG_HCLM4AdaptiveStartTime))
#define ParamLMG_HCLM4AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM4AdaptiveStartTime, LMG_HCLM4AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM4AdaptiveEndTime                (knx.paramData(LMG_HCLM4AdaptiveEndTime))
#define ParamLMG_HCLM4AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM4AdaptiveEndTime, LMG_HCLM4AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM4AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM4AdaptiveDayNightPolarity))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM5AdaptiveMode                   (knx.paramByte(LMG_HCLM5AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM5AdaptiveActiveMode             (knx.paramByte(LMG_HCLM5AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM5AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM5AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM5AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM5AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM5AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM5AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM5AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM5AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM5AdaptiveMinChange              (knx.paramByte(LMG_HCLM5AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM5AdaptiveStrength               (knx.paramByte(LMG_HCLM5AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM5AdaptiveKp                     (knx.paramByte(LMG_HCLM5AdaptiveKp))
// Totband
#define ParamLMG_HCLM5AdaptiveDeadband               (knx.paramWord(LMG_HCLM5AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM5AdaptiveStartTime              (knx.paramData(LMG_HCLM5AdaptiveStartTime))
#define ParamLMG_HCLM5AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM5AdaptiveStartTime, LMG_HCLM5AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM5AdaptiveEndTime                (knx.paramData(LMG_HCLM5AdaptiveEndTime))
#define ParamLMG_HCLM5AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM5AdaptiveEndTime, LMG_HCLM5AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM5AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM5AdaptiveDayNightPolarity))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM6AdaptiveMode                   (knx.paramByte(LMG_HCLM6AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM6AdaptiveActiveMode             (knx.paramByte(LMG_HCLM6AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM6AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM6AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM6AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM6AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM6AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM6AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM6AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM6AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM6AdaptiveMinChange              (knx.paramByte(LMG_HCLM6AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM6AdaptiveStrength               (knx.paramByte(LMG_HCLM6AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM6AdaptiveKp                     (knx.paramByte(LMG_HCLM6AdaptiveKp))
// Totband
#define ParamLMG_HCLM6AdaptiveDeadband               (knx.paramWord(LMG_HCLM6AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM6AdaptiveStartTime              (knx.paramData(LMG_HCLM6AdaptiveStartTime))
#define ParamLMG_HCLM6AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM6AdaptiveStartTime, LMG_HCLM6AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM6AdaptiveEndTime                (knx.paramData(LMG_HCLM6AdaptiveEndTime))
#define ParamLMG_HCLM6AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM6AdaptiveEndTime, LMG_HCLM6AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM6AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM6AdaptiveDayNightPolarity))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM7AdaptiveMode                   (knx.paramByte(LMG_HCLM7AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM7AdaptiveActiveMode             (knx.paramByte(LMG_HCLM7AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM7AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM7AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM7AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM7AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM7AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM7AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM7AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM7AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM7AdaptiveMinChange              (knx.paramByte(LMG_HCLM7AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM7AdaptiveStrength               (knx.paramByte(LMG_HCLM7AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM7AdaptiveKp                     (knx.paramByte(LMG_HCLM7AdaptiveKp))
// Totband
#define ParamLMG_HCLM7AdaptiveDeadband               (knx.paramWord(LMG_HCLM7AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM7AdaptiveStartTime              (knx.paramData(LMG_HCLM7AdaptiveStartTime))
#define ParamLMG_HCLM7AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM7AdaptiveStartTime, LMG_HCLM7AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM7AdaptiveEndTime                (knx.paramData(LMG_HCLM7AdaptiveEndTime))
#define ParamLMG_HCLM7AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM7AdaptiveEndTime, LMG_HCLM7AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM7AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM7AdaptiveDayNightPolarity))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM8AdaptiveMode                   (knx.paramByte(LMG_HCLM8AdaptiveMode))
// Aktivierung
#define ParamLMG_HCLM8AdaptiveActiveMode             (knx.paramByte(LMG_HCLM8AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM8AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM8AdaptiveCeilToHCL))
// Skalierungsmaximum
#define ParamLMG_HCLM8AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM8AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM8AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM8AdaptiveMinBrightness))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM8AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM8AdaptiveSensorTimeout))
// Mindestschrittgröße
#define ParamLMG_HCLM8AdaptiveMinChange              (knx.paramByte(LMG_HCLM8AdaptiveMinChange))
// Kompensationsstärke
#define ParamLMG_HCLM8AdaptiveStrength               (knx.paramByte(LMG_HCLM8AdaptiveStrength))
// P-Faktor
#define ParamLMG_HCLM8AdaptiveKp                     (knx.paramByte(LMG_HCLM8AdaptiveKp))
// Totband
#define ParamLMG_HCLM8AdaptiveDeadband               (knx.paramWord(LMG_HCLM8AdaptiveDeadband))
// Startzeit
#define ParamLMG_HCLM8AdaptiveStartTime              (knx.paramData(LMG_HCLM8AdaptiveStartTime))
#define ParamLMG_HCLM8AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM8AdaptiveStartTime, LMG_HCLM8AdaptiveStartTimeLength))
// Endzeit
#define ParamLMG_HCLM8AdaptiveEndTime                (knx.paramData(LMG_HCLM8AdaptiveEndTime))
#define ParamLMG_HCLM8AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM8AdaptiveEndTime, LMG_HCLM8AdaptiveEndTimeLength))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM8AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM8AdaptiveDayNightPolarity))
// St.punkt 0 aktiv
#define ParamLMG_HCLM1SP0Active                      ((bool)(knx.paramByte(LMG_HCLM1SP0Active) & LMG_HCLM1SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM1SP1Active                      ((bool)(knx.paramByte(LMG_HCLM1SP1Active) & LMG_HCLM1SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM1SP2Active                      ((bool)(knx.paramByte(LMG_HCLM1SP2Active) & LMG_HCLM1SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM1SP3Active                      ((bool)(knx.paramByte(LMG_HCLM1SP3Active) & LMG_HCLM1SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM1SP4Active                      ((bool)(knx.paramByte(LMG_HCLM1SP4Active) & LMG_HCLM1SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM1SP5Active                      ((bool)(knx.paramByte(LMG_HCLM1SP5Active) & LMG_HCLM1SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM1SP6Active                      ((bool)(knx.paramByte(LMG_HCLM1SP6Active) & LMG_HCLM1SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM1SP7Active                      ((bool)(knx.paramByte(LMG_HCLM1SP7Active) & LMG_HCLM1SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM1SP8Active                      ((bool)(knx.paramByte(LMG_HCLM1SP8Active) & LMG_HCLM1SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM1SP9Active                      ((bool)(knx.paramByte(LMG_HCLM1SP9Active) & LMG_HCLM1SP9ActiveMask))
// St.punkt 0 aktiv
#define ParamLMG_HCLM2SP0Active                      ((bool)(knx.paramByte(LMG_HCLM2SP0Active) & LMG_HCLM2SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM2SP1Active                      ((bool)(knx.paramByte(LMG_HCLM2SP1Active) & LMG_HCLM2SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM2SP2Active                      ((bool)(knx.paramByte(LMG_HCLM2SP2Active) & LMG_HCLM2SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM2SP3Active                      ((bool)(knx.paramByte(LMG_HCLM2SP3Active) & LMG_HCLM2SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM2SP4Active                      ((bool)(knx.paramByte(LMG_HCLM2SP4Active) & LMG_HCLM2SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM2SP5Active                      ((bool)(knx.paramByte(LMG_HCLM2SP5Active) & LMG_HCLM2SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM2SP6Active                      ((bool)(knx.paramByte(LMG_HCLM2SP6Active) & LMG_HCLM2SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM2SP7Active                      ((bool)(knx.paramByte(LMG_HCLM2SP7Active) & LMG_HCLM2SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM2SP8Active                      ((bool)(knx.paramByte(LMG_HCLM2SP8Active) & LMG_HCLM2SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM2SP9Active                      ((bool)(knx.paramByte(LMG_HCLM2SP9Active) & LMG_HCLM2SP9ActiveMask))
// St.punkt 0 aktiv
#define ParamLMG_HCLM3SP0Active                      ((bool)(knx.paramByte(LMG_HCLM3SP0Active) & LMG_HCLM3SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM3SP1Active                      ((bool)(knx.paramByte(LMG_HCLM3SP1Active) & LMG_HCLM3SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM3SP2Active                      ((bool)(knx.paramByte(LMG_HCLM3SP2Active) & LMG_HCLM3SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM3SP3Active                      ((bool)(knx.paramByte(LMG_HCLM3SP3Active) & LMG_HCLM3SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM3SP4Active                      ((bool)(knx.paramByte(LMG_HCLM3SP4Active) & LMG_HCLM3SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM3SP5Active                      ((bool)(knx.paramByte(LMG_HCLM3SP5Active) & LMG_HCLM3SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM3SP6Active                      ((bool)(knx.paramByte(LMG_HCLM3SP6Active) & LMG_HCLM3SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM3SP7Active                      ((bool)(knx.paramByte(LMG_HCLM3SP7Active) & LMG_HCLM3SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM3SP8Active                      ((bool)(knx.paramByte(LMG_HCLM3SP8Active) & LMG_HCLM3SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM3SP9Active                      ((bool)(knx.paramByte(LMG_HCLM3SP9Active) & LMG_HCLM3SP9ActiveMask))
// St.punkt 0 aktiv
#define ParamLMG_HCLM4SP0Active                      ((bool)(knx.paramByte(LMG_HCLM4SP0Active) & LMG_HCLM4SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM4SP1Active                      ((bool)(knx.paramByte(LMG_HCLM4SP1Active) & LMG_HCLM4SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM4SP2Active                      ((bool)(knx.paramByte(LMG_HCLM4SP2Active) & LMG_HCLM4SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM4SP3Active                      ((bool)(knx.paramByte(LMG_HCLM4SP3Active) & LMG_HCLM4SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM4SP4Active                      ((bool)(knx.paramByte(LMG_HCLM4SP4Active) & LMG_HCLM4SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM4SP5Active                      ((bool)(knx.paramByte(LMG_HCLM4SP5Active) & LMG_HCLM4SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM4SP6Active                      ((bool)(knx.paramByte(LMG_HCLM4SP6Active) & LMG_HCLM4SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM4SP7Active                      ((bool)(knx.paramByte(LMG_HCLM4SP7Active) & LMG_HCLM4SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM4SP8Active                      ((bool)(knx.paramByte(LMG_HCLM4SP8Active) & LMG_HCLM4SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM4SP9Active                      ((bool)(knx.paramByte(LMG_HCLM4SP9Active) & LMG_HCLM4SP9ActiveMask))
// St.punkt 0 aktiv
#define ParamLMG_HCLM5SP0Active                      ((bool)(knx.paramByte(LMG_HCLM5SP0Active) & LMG_HCLM5SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM5SP1Active                      ((bool)(knx.paramByte(LMG_HCLM5SP1Active) & LMG_HCLM5SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM5SP2Active                      ((bool)(knx.paramByte(LMG_HCLM5SP2Active) & LMG_HCLM5SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM5SP3Active                      ((bool)(knx.paramByte(LMG_HCLM5SP3Active) & LMG_HCLM5SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM5SP4Active                      ((bool)(knx.paramByte(LMG_HCLM5SP4Active) & LMG_HCLM5SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM5SP5Active                      ((bool)(knx.paramByte(LMG_HCLM5SP5Active) & LMG_HCLM5SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM5SP6Active                      ((bool)(knx.paramByte(LMG_HCLM5SP6Active) & LMG_HCLM5SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM5SP7Active                      ((bool)(knx.paramByte(LMG_HCLM5SP7Active) & LMG_HCLM5SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM5SP8Active                      ((bool)(knx.paramByte(LMG_HCLM5SP8Active) & LMG_HCLM5SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM5SP9Active                      ((bool)(knx.paramByte(LMG_HCLM5SP9Active) & LMG_HCLM5SP9ActiveMask))
// St.punkt 0 aktiv
#define ParamLMG_HCLM6SP0Active                      ((bool)(knx.paramByte(LMG_HCLM6SP0Active) & LMG_HCLM6SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM6SP1Active                      ((bool)(knx.paramByte(LMG_HCLM6SP1Active) & LMG_HCLM6SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM6SP2Active                      ((bool)(knx.paramByte(LMG_HCLM6SP2Active) & LMG_HCLM6SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM6SP3Active                      ((bool)(knx.paramByte(LMG_HCLM6SP3Active) & LMG_HCLM6SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM6SP4Active                      ((bool)(knx.paramByte(LMG_HCLM6SP4Active) & LMG_HCLM6SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM6SP5Active                      ((bool)(knx.paramByte(LMG_HCLM6SP5Active) & LMG_HCLM6SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM6SP6Active                      ((bool)(knx.paramByte(LMG_HCLM6SP6Active) & LMG_HCLM6SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM6SP7Active                      ((bool)(knx.paramByte(LMG_HCLM6SP7Active) & LMG_HCLM6SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM6SP8Active                      ((bool)(knx.paramByte(LMG_HCLM6SP8Active) & LMG_HCLM6SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM6SP9Active                      ((bool)(knx.paramByte(LMG_HCLM6SP9Active) & LMG_HCLM6SP9ActiveMask))
// St.punkt 0 aktiv
#define ParamLMG_HCLM7SP0Active                      ((bool)(knx.paramByte(LMG_HCLM7SP0Active) & LMG_HCLM7SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM7SP1Active                      ((bool)(knx.paramByte(LMG_HCLM7SP1Active) & LMG_HCLM7SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM7SP2Active                      ((bool)(knx.paramByte(LMG_HCLM7SP2Active) & LMG_HCLM7SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM7SP3Active                      ((bool)(knx.paramByte(LMG_HCLM7SP3Active) & LMG_HCLM7SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM7SP4Active                      ((bool)(knx.paramByte(LMG_HCLM7SP4Active) & LMG_HCLM7SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM7SP5Active                      ((bool)(knx.paramByte(LMG_HCLM7SP5Active) & LMG_HCLM7SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM7SP6Active                      ((bool)(knx.paramByte(LMG_HCLM7SP6Active) & LMG_HCLM7SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM7SP7Active                      ((bool)(knx.paramByte(LMG_HCLM7SP7Active) & LMG_HCLM7SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM7SP8Active                      ((bool)(knx.paramByte(LMG_HCLM7SP8Active) & LMG_HCLM7SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM7SP9Active                      ((bool)(knx.paramByte(LMG_HCLM7SP9Active) & LMG_HCLM7SP9ActiveMask))
// St.punkt 0 aktiv
#define ParamLMG_HCLM8SP0Active                      ((bool)(knx.paramByte(LMG_HCLM8SP0Active) & LMG_HCLM8SP0ActiveMask))
// St.punkt 1 aktiv
#define ParamLMG_HCLM8SP1Active                      ((bool)(knx.paramByte(LMG_HCLM8SP1Active) & LMG_HCLM8SP1ActiveMask))
// St.punkt 2 aktiv
#define ParamLMG_HCLM8SP2Active                      ((bool)(knx.paramByte(LMG_HCLM8SP2Active) & LMG_HCLM8SP2ActiveMask))
// St.punkt 3 aktiv
#define ParamLMG_HCLM8SP3Active                      ((bool)(knx.paramByte(LMG_HCLM8SP3Active) & LMG_HCLM8SP3ActiveMask))
// St.punkt 4 aktiv
#define ParamLMG_HCLM8SP4Active                      ((bool)(knx.paramByte(LMG_HCLM8SP4Active) & LMG_HCLM8SP4ActiveMask))
// St.punkt 5 aktiv
#define ParamLMG_HCLM8SP5Active                      ((bool)(knx.paramByte(LMG_HCLM8SP5Active) & LMG_HCLM8SP5ActiveMask))
// St.punkt 6 aktiv
#define ParamLMG_HCLM8SP6Active                      ((bool)(knx.paramByte(LMG_HCLM8SP6Active) & LMG_HCLM8SP6ActiveMask))
// St.punkt 7 aktiv
#define ParamLMG_HCLM8SP7Active                      ((bool)(knx.paramByte(LMG_HCLM8SP7Active) & LMG_HCLM8SP7ActiveMask))
// St.punkt 8 aktiv
#define ParamLMG_HCLM8SP8Active                      ((bool)(knx.paramByte(LMG_HCLM8SP8Active) & LMG_HCLM8SP8ActiveMask))
// St.punkt 9 aktiv
#define ParamLMG_HCLM8SP9Active                      ((bool)(knx.paramByte(LMG_HCLM8SP9Active) & LMG_HCLM8SP9ActiveMask))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM9FallbackPolicy              (knx.paramByte(LMG_LMGHCLM9FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM9FallbackDurationSec         (knx.paramWord(LMG_LMGHCLM9FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM9FallbackReleaseTime         (knx.paramData(LMG_LMGHCLM9FallbackReleaseTime))
#define ParamLMG_LMGHCLM9FallbackReleaseTimeStr      (knx.paramString(LMG_LMGHCLM9FallbackReleaseTime, LMG_LMGHCLM9FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM9StatusKoEnable              (knx.paramByte(LMG_LMGHCLM9StatusKoEnable) & LMG_LMGHCLM9StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM9LockFallback                (knx.paramByte(LMG_LMGHCLM9LockFallback))
// Aktivierung
#define ParamLMG_HCLM9AdaptiveActiveMode             (knx.paramByte(LMG_HCLM9AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM9AdaptiveCeilToHCL              (knx.paramByte(LMG_HCLM9AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM9AdaptiveDayNightPolarity       (knx.paramByte(LMG_HCLM9AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM9AdaptiveDeadband               (knx.paramWord(LMG_HCLM9AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM9AdaptiveEndTime                (knx.paramData(LMG_HCLM9AdaptiveEndTime))
#define ParamLMG_HCLM9AdaptiveEndTimeStr             (knx.paramString(LMG_HCLM9AdaptiveEndTime, LMG_HCLM9AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM9AdaptiveKp                     (knx.paramByte(LMG_HCLM9AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM9AdaptiveMaxLux                 (knx.paramWord(LMG_HCLM9AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM9AdaptiveMinBrightness          (knx.paramByte(LMG_HCLM9AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM9AdaptiveMinChange              (knx.paramByte(LMG_HCLM9AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM9AdaptiveMode                   (knx.paramByte(LMG_HCLM9AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM9AdaptiveSensorTimeout          (knx.paramByte(LMG_HCLM9AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM9AdaptiveStartTime              (knx.paramData(LMG_HCLM9AdaptiveStartTime))
#define ParamLMG_HCLM9AdaptiveStartTimeStr           (knx.paramString(LMG_HCLM9AdaptiveStartTime, LMG_HCLM9AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM9AdaptiveStrength               (knx.paramByte(LMG_HCLM9AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM9AstroMaxBrightness             (knx.paramByte(LMG_HCLM9AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM9AstroMaxKelvin                 (knx.paramWord(LMG_HCLM9AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM9AstroMinBrightness             (knx.paramByte(LMG_HCLM9AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM9AstroMinKelvin                 (knx.paramWord(LMG_HCLM9AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM9CurveType                      (knx.paramByte(LMG_HCLM9CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM9DSTOffsetDays                  ((int8_t)knx.paramByte(LMG_HCLM9DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM9ManualKelvin                   (knx.paramWord(LMG_HCLM9ManualKelvin))
// Name Lichtmanager 9
#define ParamLMG_HCLM9Name                           (knx.paramData(LMG_HCLM9Name))
#define ParamLMG_HCLM9NameStr                        (knx.paramString(LMG_HCLM9Name, LMG_HCLM9NameLength))
// Saison-Profil
#define ParamLMG_HCLM9SeasonMode                     (knx.paramByte(LMG_HCLM9SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM9SetpointCount                  (knx.paramByte(LMG_HCLM9SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM9SlewRate                       (knx.paramWord(LMG_HCLM9SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM9SP0Active                      ((bool)(knx.paramByte(LMG_HCLM9SP0Active) & LMG_HCLM9SP0ActiveMask))
// M9 SP1 Helligkeit
#define ParamLMG_HCLM9SP0Brightness                  (knx.paramByte(LMG_HCLM9SP0Brightness))
// M9 SP1 Farbtemperatur
#define ParamLMG_HCLM9SP0Kelvin                      (knx.paramWord(LMG_HCLM9SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM9SP0SummerBrightness            (knx.paramByte(LMG_HCLM9SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM9SP0SummerKelvin                (knx.paramWord(LMG_HCLM9SP0SummerKelvin))
// M9 SP1 Zeit
#define ParamLMG_HCLM9SP0Time                        (knx.paramData(LMG_HCLM9SP0Time))
#define ParamLMG_HCLM9SP0TimeStr                     (knx.paramString(LMG_HCLM9SP0Time, LMG_HCLM9SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM9SP1Active                      ((bool)(knx.paramByte(LMG_HCLM9SP1Active) & LMG_HCLM9SP1ActiveMask))
// M9 SP2 Helligkeit
#define ParamLMG_HCLM9SP1Brightness                  (knx.paramByte(LMG_HCLM9SP1Brightness))
// M9 SP2 Kelvin
#define ParamLMG_HCLM9SP1Kelvin                      (knx.paramWord(LMG_HCLM9SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM9SP1SummerBrightness            (knx.paramByte(LMG_HCLM9SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM9SP1SummerKelvin                (knx.paramWord(LMG_HCLM9SP1SummerKelvin))
// M9 SP2 Zeit
#define ParamLMG_HCLM9SP1Time                        (knx.paramData(LMG_HCLM9SP1Time))
#define ParamLMG_HCLM9SP1TimeStr                     (knx.paramString(LMG_HCLM9SP1Time, LMG_HCLM9SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM9SP2Active                      ((bool)(knx.paramByte(LMG_HCLM9SP2Active) & LMG_HCLM9SP2ActiveMask))
// M9 SP3 Helligkeit
#define ParamLMG_HCLM9SP2Brightness                  (knx.paramByte(LMG_HCLM9SP2Brightness))
// M9 SP3 Farbtemperatur
#define ParamLMG_HCLM9SP2Kelvin                      (knx.paramWord(LMG_HCLM9SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM9SP2SummerBrightness            (knx.paramByte(LMG_HCLM9SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM9SP2SummerKelvin                (knx.paramWord(LMG_HCLM9SP2SummerKelvin))
// M9 SP3 Zeit
#define ParamLMG_HCLM9SP2Time                        (knx.paramData(LMG_HCLM9SP2Time))
#define ParamLMG_HCLM9SP2TimeStr                     (knx.paramString(LMG_HCLM9SP2Time, LMG_HCLM9SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM9SP3Active                      ((bool)(knx.paramByte(LMG_HCLM9SP3Active) & LMG_HCLM9SP3ActiveMask))
// M9 SP4 Helligkeit
#define ParamLMG_HCLM9SP3Brightness                  (knx.paramByte(LMG_HCLM9SP3Brightness))
// M9 SP4 Farbtemperatur
#define ParamLMG_HCLM9SP3Kelvin                      (knx.paramWord(LMG_HCLM9SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM9SP3SummerBrightness            (knx.paramByte(LMG_HCLM9SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM9SP3SummerKelvin                (knx.paramWord(LMG_HCLM9SP3SummerKelvin))
// M9 SP4 Zeit
#define ParamLMG_HCLM9SP3Time                        (knx.paramData(LMG_HCLM9SP3Time))
#define ParamLMG_HCLM9SP3TimeStr                     (knx.paramString(LMG_HCLM9SP3Time, LMG_HCLM9SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM9SP4Active                      ((bool)(knx.paramByte(LMG_HCLM9SP4Active) & LMG_HCLM9SP4ActiveMask))
// M9 SP5 Helligkeit
#define ParamLMG_HCLM9SP4Brightness                  (knx.paramByte(LMG_HCLM9SP4Brightness))
// M9 SP5 Farbtemperatur
#define ParamLMG_HCLM9SP4Kelvin                      (knx.paramWord(LMG_HCLM9SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM9SP4SummerBrightness            (knx.paramByte(LMG_HCLM9SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM9SP4SummerKelvin                (knx.paramWord(LMG_HCLM9SP4SummerKelvin))
// M9 SP5 Zeit
#define ParamLMG_HCLM9SP4Time                        (knx.paramData(LMG_HCLM9SP4Time))
#define ParamLMG_HCLM9SP4TimeStr                     (knx.paramString(LMG_HCLM9SP4Time, LMG_HCLM9SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM9SP5Active                      ((bool)(knx.paramByte(LMG_HCLM9SP5Active) & LMG_HCLM9SP5ActiveMask))
// M9 SP6 Helligkeit
#define ParamLMG_HCLM9SP5Brightness                  (knx.paramByte(LMG_HCLM9SP5Brightness))
// M9 SP6 Farbtemperatur
#define ParamLMG_HCLM9SP5Kelvin                      (knx.paramWord(LMG_HCLM9SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM9SP5SummerBrightness            (knx.paramByte(LMG_HCLM9SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM9SP5SummerKelvin                (knx.paramWord(LMG_HCLM9SP5SummerKelvin))
// M9 SP6 Zeit
#define ParamLMG_HCLM9SP5Time                        (knx.paramData(LMG_HCLM9SP5Time))
#define ParamLMG_HCLM9SP5TimeStr                     (knx.paramString(LMG_HCLM9SP5Time, LMG_HCLM9SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM9SP6Active                      ((bool)(knx.paramByte(LMG_HCLM9SP6Active) & LMG_HCLM9SP6ActiveMask))
// M9 SP7 Helligkeit
#define ParamLMG_HCLM9SP6Brightness                  (knx.paramByte(LMG_HCLM9SP6Brightness))
// M9 SP7 Farbtemperatur
#define ParamLMG_HCLM9SP6Kelvin                      (knx.paramWord(LMG_HCLM9SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM9SP6SummerBrightness            (knx.paramByte(LMG_HCLM9SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM9SP6SummerKelvin                (knx.paramWord(LMG_HCLM9SP6SummerKelvin))
// M9 SP7 Zeit
#define ParamLMG_HCLM9SP6Time                        (knx.paramData(LMG_HCLM9SP6Time))
#define ParamLMG_HCLM9SP6TimeStr                     (knx.paramString(LMG_HCLM9SP6Time, LMG_HCLM9SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM9SP7Active                      ((bool)(knx.paramByte(LMG_HCLM9SP7Active) & LMG_HCLM9SP7ActiveMask))
// M9 SP8 Helligkeit
#define ParamLMG_HCLM9SP7Brightness                  (knx.paramByte(LMG_HCLM9SP7Brightness))
// M9 SP8 Farbtemperatur
#define ParamLMG_HCLM9SP7Kelvin                      (knx.paramWord(LMG_HCLM9SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM9SP7SummerBrightness            (knx.paramByte(LMG_HCLM9SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM9SP7SummerKelvin                (knx.paramWord(LMG_HCLM9SP7SummerKelvin))
// M9 SP8 Zeit
#define ParamLMG_HCLM9SP7Time                        (knx.paramData(LMG_HCLM9SP7Time))
#define ParamLMG_HCLM9SP7TimeStr                     (knx.paramString(LMG_HCLM9SP7Time, LMG_HCLM9SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM9SP8Active                      ((bool)(knx.paramByte(LMG_HCLM9SP8Active) & LMG_HCLM9SP8ActiveMask))
// M9 SP9 Helligkeit
#define ParamLMG_HCLM9SP8Brightness                  (knx.paramByte(LMG_HCLM9SP8Brightness))
// M9 SP9 Farbtemperatur
#define ParamLMG_HCLM9SP8Kelvin                      (knx.paramWord(LMG_HCLM9SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM9SP8SummerBrightness            (knx.paramByte(LMG_HCLM9SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM9SP8SummerKelvin                (knx.paramWord(LMG_HCLM9SP8SummerKelvin))
// M9 SP9 Zeit
#define ParamLMG_HCLM9SP8Time                        (knx.paramData(LMG_HCLM9SP8Time))
#define ParamLMG_HCLM9SP8TimeStr                     (knx.paramString(LMG_HCLM9SP8Time, LMG_HCLM9SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM9SP9Active                      ((bool)(knx.paramByte(LMG_HCLM9SP9Active) & LMG_HCLM9SP9ActiveMask))
// M9 SP10 Helligkeit
#define ParamLMG_HCLM9SP9Brightness                  (knx.paramByte(LMG_HCLM9SP9Brightness))
// M9 SP10 Farbtemperatur
#define ParamLMG_HCLM9SP9Kelvin                      (knx.paramWord(LMG_HCLM9SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM9SP9SummerBrightness            (knx.paramByte(LMG_HCLM9SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM9SP9SummerKelvin                (knx.paramWord(LMG_HCLM9SP9SummerKelvin))
// M9 SP10 Zeit
#define ParamLMG_HCLM9SP9Time                        (knx.paramData(LMG_HCLM9SP9Time))
#define ParamLMG_HCLM9SP9TimeStr                     (knx.paramString(LMG_HCLM9SP9Time, LMG_HCLM9SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM9SummerEndDay                   (knx.paramByte(LMG_HCLM9SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM9SummerEndMonth                 (knx.paramByte(LMG_HCLM9SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM9SummerStartDay                 (knx.paramByte(LMG_HCLM9SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM9SummerStartMonth               (knx.paramByte(LMG_HCLM9SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM9Sunrise                        (knx.paramData(LMG_HCLM9Sunrise))
#define ParamLMG_HCLM9SunriseStr                     (knx.paramString(LMG_HCLM9Sunrise, LMG_HCLM9SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM9SunriseOffset                  ((int16_t)knx.paramWord(LMG_HCLM9SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM9Sunset                         (knx.paramData(LMG_HCLM9Sunset))
#define ParamLMG_HCLM9SunsetStr                      (knx.paramString(LMG_HCLM9Sunset, LMG_HCLM9SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM9SunsetOffset                   ((int16_t)knx.paramWord(LMG_HCLM9SunsetOffset))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM10FallbackPolicy             (knx.paramByte(LMG_LMGHCLM10FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM10FallbackDurationSec        (knx.paramWord(LMG_LMGHCLM10FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM10FallbackReleaseTime        (knx.paramData(LMG_LMGHCLM10FallbackReleaseTime))
#define ParamLMG_LMGHCLM10FallbackReleaseTimeStr     (knx.paramString(LMG_LMGHCLM10FallbackReleaseTime, LMG_LMGHCLM10FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM10StatusKoEnable             (knx.paramByte(LMG_LMGHCLM10StatusKoEnable) & LMG_LMGHCLM10StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM10LockFallback               (knx.paramByte(LMG_LMGHCLM10LockFallback))
// Aktivierung
#define ParamLMG_HCLM10AdaptiveActiveMode            (knx.paramByte(LMG_HCLM10AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM10AdaptiveCeilToHCL             (knx.paramByte(LMG_HCLM10AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM10AdaptiveDayNightPolarity      (knx.paramByte(LMG_HCLM10AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM10AdaptiveDeadband              (knx.paramWord(LMG_HCLM10AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM10AdaptiveEndTime               (knx.paramData(LMG_HCLM10AdaptiveEndTime))
#define ParamLMG_HCLM10AdaptiveEndTimeStr            (knx.paramString(LMG_HCLM10AdaptiveEndTime, LMG_HCLM10AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM10AdaptiveKp                    (knx.paramByte(LMG_HCLM10AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM10AdaptiveMaxLux                (knx.paramWord(LMG_HCLM10AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM10AdaptiveMinBrightness         (knx.paramByte(LMG_HCLM10AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM10AdaptiveMinChange             (knx.paramByte(LMG_HCLM10AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM10AdaptiveMode                  (knx.paramByte(LMG_HCLM10AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM10AdaptiveSensorTimeout         (knx.paramByte(LMG_HCLM10AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM10AdaptiveStartTime             (knx.paramData(LMG_HCLM10AdaptiveStartTime))
#define ParamLMG_HCLM10AdaptiveStartTimeStr          (knx.paramString(LMG_HCLM10AdaptiveStartTime, LMG_HCLM10AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM10AdaptiveStrength              (knx.paramByte(LMG_HCLM10AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM10AstroMaxBrightness            (knx.paramByte(LMG_HCLM10AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM10AstroMaxKelvin                (knx.paramWord(LMG_HCLM10AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM10AstroMinBrightness            (knx.paramByte(LMG_HCLM10AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM10AstroMinKelvin                (knx.paramWord(LMG_HCLM10AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM10CurveType                     (knx.paramByte(LMG_HCLM10CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM10DSTOffsetDays                 ((int8_t)knx.paramByte(LMG_HCLM10DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM10ManualKelvin                  (knx.paramWord(LMG_HCLM10ManualKelvin))
// Name Lichtmanager 10
#define ParamLMG_HCLM10Name                          (knx.paramData(LMG_HCLM10Name))
#define ParamLMG_HCLM10NameStr                       (knx.paramString(LMG_HCLM10Name, LMG_HCLM10NameLength))
// Saison-Profil
#define ParamLMG_HCLM10SeasonMode                    (knx.paramByte(LMG_HCLM10SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM10SetpointCount                 (knx.paramByte(LMG_HCLM10SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM10SlewRate                      (knx.paramWord(LMG_HCLM10SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM10SP0Active                     ((bool)(knx.paramByte(LMG_HCLM10SP0Active) & LMG_HCLM10SP0ActiveMask))
// M10 SP1 Helligkeit
#define ParamLMG_HCLM10SP0Brightness                 (knx.paramByte(LMG_HCLM10SP0Brightness))
// M10 SP1 Farbtemperatur
#define ParamLMG_HCLM10SP0Kelvin                     (knx.paramWord(LMG_HCLM10SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM10SP0SummerBrightness           (knx.paramByte(LMG_HCLM10SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM10SP0SummerKelvin               (knx.paramWord(LMG_HCLM10SP0SummerKelvin))
// M10 SP1 Zeit
#define ParamLMG_HCLM10SP0Time                       (knx.paramData(LMG_HCLM10SP0Time))
#define ParamLMG_HCLM10SP0TimeStr                    (knx.paramString(LMG_HCLM10SP0Time, LMG_HCLM10SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM10SP1Active                     ((bool)(knx.paramByte(LMG_HCLM10SP1Active) & LMG_HCLM10SP1ActiveMask))
// M10 SP2 Helligkeit
#define ParamLMG_HCLM10SP1Brightness                 (knx.paramByte(LMG_HCLM10SP1Brightness))
// M10 SP2 Kelvin
#define ParamLMG_HCLM10SP1Kelvin                     (knx.paramWord(LMG_HCLM10SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM10SP1SummerBrightness           (knx.paramByte(LMG_HCLM10SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM10SP1SummerKelvin               (knx.paramWord(LMG_HCLM10SP1SummerKelvin))
// M10 SP2 Zeit
#define ParamLMG_HCLM10SP1Time                       (knx.paramData(LMG_HCLM10SP1Time))
#define ParamLMG_HCLM10SP1TimeStr                    (knx.paramString(LMG_HCLM10SP1Time, LMG_HCLM10SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM10SP2Active                     ((bool)(knx.paramByte(LMG_HCLM10SP2Active) & LMG_HCLM10SP2ActiveMask))
// M10 SP3 Helligkeit
#define ParamLMG_HCLM10SP2Brightness                 (knx.paramByte(LMG_HCLM10SP2Brightness))
// M10 SP3 Farbtemperatur
#define ParamLMG_HCLM10SP2Kelvin                     (knx.paramWord(LMG_HCLM10SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM10SP2SummerBrightness           (knx.paramByte(LMG_HCLM10SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM10SP2SummerKelvin               (knx.paramWord(LMG_HCLM10SP2SummerKelvin))
// M10 SP3 Zeit
#define ParamLMG_HCLM10SP2Time                       (knx.paramData(LMG_HCLM10SP2Time))
#define ParamLMG_HCLM10SP2TimeStr                    (knx.paramString(LMG_HCLM10SP2Time, LMG_HCLM10SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM10SP3Active                     ((bool)(knx.paramByte(LMG_HCLM10SP3Active) & LMG_HCLM10SP3ActiveMask))
// M10 SP4 Helligkeit
#define ParamLMG_HCLM10SP3Brightness                 (knx.paramByte(LMG_HCLM10SP3Brightness))
// M10 SP4 Farbtemperatur
#define ParamLMG_HCLM10SP3Kelvin                     (knx.paramWord(LMG_HCLM10SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM10SP3SummerBrightness           (knx.paramByte(LMG_HCLM10SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM10SP3SummerKelvin               (knx.paramWord(LMG_HCLM10SP3SummerKelvin))
// M10 SP4 Zeit
#define ParamLMG_HCLM10SP3Time                       (knx.paramData(LMG_HCLM10SP3Time))
#define ParamLMG_HCLM10SP3TimeStr                    (knx.paramString(LMG_HCLM10SP3Time, LMG_HCLM10SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM10SP4Active                     ((bool)(knx.paramByte(LMG_HCLM10SP4Active) & LMG_HCLM10SP4ActiveMask))
// M10 SP5 Helligkeit
#define ParamLMG_HCLM10SP4Brightness                 (knx.paramByte(LMG_HCLM10SP4Brightness))
// M10 SP5 Farbtemperatur
#define ParamLMG_HCLM10SP4Kelvin                     (knx.paramWord(LMG_HCLM10SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM10SP4SummerBrightness           (knx.paramByte(LMG_HCLM10SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM10SP4SummerKelvin               (knx.paramWord(LMG_HCLM10SP4SummerKelvin))
// M10 SP5 Zeit
#define ParamLMG_HCLM10SP4Time                       (knx.paramData(LMG_HCLM10SP4Time))
#define ParamLMG_HCLM10SP4TimeStr                    (knx.paramString(LMG_HCLM10SP4Time, LMG_HCLM10SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM10SP5Active                     ((bool)(knx.paramByte(LMG_HCLM10SP5Active) & LMG_HCLM10SP5ActiveMask))
// M10 SP6 Helligkeit
#define ParamLMG_HCLM10SP5Brightness                 (knx.paramByte(LMG_HCLM10SP5Brightness))
// M10 SP6 Farbtemperatur
#define ParamLMG_HCLM10SP5Kelvin                     (knx.paramWord(LMG_HCLM10SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM10SP5SummerBrightness           (knx.paramByte(LMG_HCLM10SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM10SP5SummerKelvin               (knx.paramWord(LMG_HCLM10SP5SummerKelvin))
// M10 SP6 Zeit
#define ParamLMG_HCLM10SP5Time                       (knx.paramData(LMG_HCLM10SP5Time))
#define ParamLMG_HCLM10SP5TimeStr                    (knx.paramString(LMG_HCLM10SP5Time, LMG_HCLM10SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM10SP6Active                     ((bool)(knx.paramByte(LMG_HCLM10SP6Active) & LMG_HCLM10SP6ActiveMask))
// M10 SP7 Helligkeit
#define ParamLMG_HCLM10SP6Brightness                 (knx.paramByte(LMG_HCLM10SP6Brightness))
// M10 SP7 Farbtemperatur
#define ParamLMG_HCLM10SP6Kelvin                     (knx.paramWord(LMG_HCLM10SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM10SP6SummerBrightness           (knx.paramByte(LMG_HCLM10SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM10SP6SummerKelvin               (knx.paramWord(LMG_HCLM10SP6SummerKelvin))
// M10 SP7 Zeit
#define ParamLMG_HCLM10SP6Time                       (knx.paramData(LMG_HCLM10SP6Time))
#define ParamLMG_HCLM10SP6TimeStr                    (knx.paramString(LMG_HCLM10SP6Time, LMG_HCLM10SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM10SP7Active                     ((bool)(knx.paramByte(LMG_HCLM10SP7Active) & LMG_HCLM10SP7ActiveMask))
// M10 SP8 Helligkeit
#define ParamLMG_HCLM10SP7Brightness                 (knx.paramByte(LMG_HCLM10SP7Brightness))
// M10 SP8 Farbtemperatur
#define ParamLMG_HCLM10SP7Kelvin                     (knx.paramWord(LMG_HCLM10SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM10SP7SummerBrightness           (knx.paramByte(LMG_HCLM10SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM10SP7SummerKelvin               (knx.paramWord(LMG_HCLM10SP7SummerKelvin))
// M10 SP8 Zeit
#define ParamLMG_HCLM10SP7Time                       (knx.paramData(LMG_HCLM10SP7Time))
#define ParamLMG_HCLM10SP7TimeStr                    (knx.paramString(LMG_HCLM10SP7Time, LMG_HCLM10SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM10SP8Active                     ((bool)(knx.paramByte(LMG_HCLM10SP8Active) & LMG_HCLM10SP8ActiveMask))
// M10 SP9 Helligkeit
#define ParamLMG_HCLM10SP8Brightness                 (knx.paramByte(LMG_HCLM10SP8Brightness))
// M10 SP9 Farbtemperatur
#define ParamLMG_HCLM10SP8Kelvin                     (knx.paramWord(LMG_HCLM10SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM10SP8SummerBrightness           (knx.paramByte(LMG_HCLM10SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM10SP8SummerKelvin               (knx.paramWord(LMG_HCLM10SP8SummerKelvin))
// M10 SP9 Zeit
#define ParamLMG_HCLM10SP8Time                       (knx.paramData(LMG_HCLM10SP8Time))
#define ParamLMG_HCLM10SP8TimeStr                    (knx.paramString(LMG_HCLM10SP8Time, LMG_HCLM10SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM10SP9Active                     ((bool)(knx.paramByte(LMG_HCLM10SP9Active) & LMG_HCLM10SP9ActiveMask))
// M10 SP10 Helligkeit
#define ParamLMG_HCLM10SP9Brightness                 (knx.paramByte(LMG_HCLM10SP9Brightness))
// M10 SP10 Farbtemperatur
#define ParamLMG_HCLM10SP9Kelvin                     (knx.paramWord(LMG_HCLM10SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM10SP9SummerBrightness           (knx.paramByte(LMG_HCLM10SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM10SP9SummerKelvin               (knx.paramWord(LMG_HCLM10SP9SummerKelvin))
// M10 SP10 Zeit
#define ParamLMG_HCLM10SP9Time                       (knx.paramData(LMG_HCLM10SP9Time))
#define ParamLMG_HCLM10SP9TimeStr                    (knx.paramString(LMG_HCLM10SP9Time, LMG_HCLM10SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM10SummerEndDay                  (knx.paramByte(LMG_HCLM10SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM10SummerEndMonth                (knx.paramByte(LMG_HCLM10SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM10SummerStartDay                (knx.paramByte(LMG_HCLM10SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM10SummerStartMonth              (knx.paramByte(LMG_HCLM10SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM10Sunrise                       (knx.paramData(LMG_HCLM10Sunrise))
#define ParamLMG_HCLM10SunriseStr                    (knx.paramString(LMG_HCLM10Sunrise, LMG_HCLM10SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM10SunriseOffset                 ((int16_t)knx.paramWord(LMG_HCLM10SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM10Sunset                        (knx.paramData(LMG_HCLM10Sunset))
#define ParamLMG_HCLM10SunsetStr                     (knx.paramString(LMG_HCLM10Sunset, LMG_HCLM10SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM10SunsetOffset                  ((int16_t)knx.paramWord(LMG_HCLM10SunsetOffset))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM11FallbackPolicy             (knx.paramByte(LMG_LMGHCLM11FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM11FallbackDurationSec        (knx.paramWord(LMG_LMGHCLM11FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM11FallbackReleaseTime        (knx.paramData(LMG_LMGHCLM11FallbackReleaseTime))
#define ParamLMG_LMGHCLM11FallbackReleaseTimeStr     (knx.paramString(LMG_LMGHCLM11FallbackReleaseTime, LMG_LMGHCLM11FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM11StatusKoEnable             (knx.paramByte(LMG_LMGHCLM11StatusKoEnable) & LMG_LMGHCLM11StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM11LockFallback               (knx.paramByte(LMG_LMGHCLM11LockFallback))
// Aktivierung
#define ParamLMG_HCLM11AdaptiveActiveMode            (knx.paramByte(LMG_HCLM11AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM11AdaptiveCeilToHCL             (knx.paramByte(LMG_HCLM11AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM11AdaptiveDayNightPolarity      (knx.paramByte(LMG_HCLM11AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM11AdaptiveDeadband              (knx.paramWord(LMG_HCLM11AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM11AdaptiveEndTime               (knx.paramData(LMG_HCLM11AdaptiveEndTime))
#define ParamLMG_HCLM11AdaptiveEndTimeStr            (knx.paramString(LMG_HCLM11AdaptiveEndTime, LMG_HCLM11AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM11AdaptiveKp                    (knx.paramByte(LMG_HCLM11AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM11AdaptiveMaxLux                (knx.paramWord(LMG_HCLM11AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM11AdaptiveMinBrightness         (knx.paramByte(LMG_HCLM11AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM11AdaptiveMinChange             (knx.paramByte(LMG_HCLM11AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM11AdaptiveMode                  (knx.paramByte(LMG_HCLM11AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM11AdaptiveSensorTimeout         (knx.paramByte(LMG_HCLM11AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM11AdaptiveStartTime             (knx.paramData(LMG_HCLM11AdaptiveStartTime))
#define ParamLMG_HCLM11AdaptiveStartTimeStr          (knx.paramString(LMG_HCLM11AdaptiveStartTime, LMG_HCLM11AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM11AdaptiveStrength              (knx.paramByte(LMG_HCLM11AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM11AstroMaxBrightness            (knx.paramByte(LMG_HCLM11AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM11AstroMaxKelvin                (knx.paramWord(LMG_HCLM11AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM11AstroMinBrightness            (knx.paramByte(LMG_HCLM11AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM11AstroMinKelvin                (knx.paramWord(LMG_HCLM11AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM11CurveType                     (knx.paramByte(LMG_HCLM11CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM11DSTOffsetDays                 ((int8_t)knx.paramByte(LMG_HCLM11DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM11ManualKelvin                  (knx.paramWord(LMG_HCLM11ManualKelvin))
// Name Lichtmanager 11
#define ParamLMG_HCLM11Name                          (knx.paramData(LMG_HCLM11Name))
#define ParamLMG_HCLM11NameStr                       (knx.paramString(LMG_HCLM11Name, LMG_HCLM11NameLength))
// Saison-Profil
#define ParamLMG_HCLM11SeasonMode                    (knx.paramByte(LMG_HCLM11SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM11SetpointCount                 (knx.paramByte(LMG_HCLM11SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM11SlewRate                      (knx.paramWord(LMG_HCLM11SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM11SP0Active                     ((bool)(knx.paramByte(LMG_HCLM11SP0Active) & LMG_HCLM11SP0ActiveMask))
// M11 SP1 Helligkeit
#define ParamLMG_HCLM11SP0Brightness                 (knx.paramByte(LMG_HCLM11SP0Brightness))
// M11 SP1 Farbtemperatur
#define ParamLMG_HCLM11SP0Kelvin                     (knx.paramWord(LMG_HCLM11SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM11SP0SummerBrightness           (knx.paramByte(LMG_HCLM11SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM11SP0SummerKelvin               (knx.paramWord(LMG_HCLM11SP0SummerKelvin))
// M11 SP1 Zeit
#define ParamLMG_HCLM11SP0Time                       (knx.paramData(LMG_HCLM11SP0Time))
#define ParamLMG_HCLM11SP0TimeStr                    (knx.paramString(LMG_HCLM11SP0Time, LMG_HCLM11SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM11SP1Active                     ((bool)(knx.paramByte(LMG_HCLM11SP1Active) & LMG_HCLM11SP1ActiveMask))
// M11 SP2 Helligkeit
#define ParamLMG_HCLM11SP1Brightness                 (knx.paramByte(LMG_HCLM11SP1Brightness))
// M11 SP2 Kelvin
#define ParamLMG_HCLM11SP1Kelvin                     (knx.paramWord(LMG_HCLM11SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM11SP1SummerBrightness           (knx.paramByte(LMG_HCLM11SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM11SP1SummerKelvin               (knx.paramWord(LMG_HCLM11SP1SummerKelvin))
// M11 SP2 Zeit
#define ParamLMG_HCLM11SP1Time                       (knx.paramData(LMG_HCLM11SP1Time))
#define ParamLMG_HCLM11SP1TimeStr                    (knx.paramString(LMG_HCLM11SP1Time, LMG_HCLM11SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM11SP2Active                     ((bool)(knx.paramByte(LMG_HCLM11SP2Active) & LMG_HCLM11SP2ActiveMask))
// M11 SP3 Helligkeit
#define ParamLMG_HCLM11SP2Brightness                 (knx.paramByte(LMG_HCLM11SP2Brightness))
// M11 SP3 Farbtemperatur
#define ParamLMG_HCLM11SP2Kelvin                     (knx.paramWord(LMG_HCLM11SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM11SP2SummerBrightness           (knx.paramByte(LMG_HCLM11SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM11SP2SummerKelvin               (knx.paramWord(LMG_HCLM11SP2SummerKelvin))
// M11 SP3 Zeit
#define ParamLMG_HCLM11SP2Time                       (knx.paramData(LMG_HCLM11SP2Time))
#define ParamLMG_HCLM11SP2TimeStr                    (knx.paramString(LMG_HCLM11SP2Time, LMG_HCLM11SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM11SP3Active                     ((bool)(knx.paramByte(LMG_HCLM11SP3Active) & LMG_HCLM11SP3ActiveMask))
// M11 SP4 Helligkeit
#define ParamLMG_HCLM11SP3Brightness                 (knx.paramByte(LMG_HCLM11SP3Brightness))
// M11 SP4 Farbtemperatur
#define ParamLMG_HCLM11SP3Kelvin                     (knx.paramWord(LMG_HCLM11SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM11SP3SummerBrightness           (knx.paramByte(LMG_HCLM11SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM11SP3SummerKelvin               (knx.paramWord(LMG_HCLM11SP3SummerKelvin))
// M11 SP4 Zeit
#define ParamLMG_HCLM11SP3Time                       (knx.paramData(LMG_HCLM11SP3Time))
#define ParamLMG_HCLM11SP3TimeStr                    (knx.paramString(LMG_HCLM11SP3Time, LMG_HCLM11SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM11SP4Active                     ((bool)(knx.paramByte(LMG_HCLM11SP4Active) & LMG_HCLM11SP4ActiveMask))
// M11 SP5 Helligkeit
#define ParamLMG_HCLM11SP4Brightness                 (knx.paramByte(LMG_HCLM11SP4Brightness))
// M11 SP5 Farbtemperatur
#define ParamLMG_HCLM11SP4Kelvin                     (knx.paramWord(LMG_HCLM11SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM11SP4SummerBrightness           (knx.paramByte(LMG_HCLM11SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM11SP4SummerKelvin               (knx.paramWord(LMG_HCLM11SP4SummerKelvin))
// M11 SP5 Zeit
#define ParamLMG_HCLM11SP4Time                       (knx.paramData(LMG_HCLM11SP4Time))
#define ParamLMG_HCLM11SP4TimeStr                    (knx.paramString(LMG_HCLM11SP4Time, LMG_HCLM11SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM11SP5Active                     ((bool)(knx.paramByte(LMG_HCLM11SP5Active) & LMG_HCLM11SP5ActiveMask))
// M11 SP6 Helligkeit
#define ParamLMG_HCLM11SP5Brightness                 (knx.paramByte(LMG_HCLM11SP5Brightness))
// M11 SP6 Farbtemperatur
#define ParamLMG_HCLM11SP5Kelvin                     (knx.paramWord(LMG_HCLM11SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM11SP5SummerBrightness           (knx.paramByte(LMG_HCLM11SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM11SP5SummerKelvin               (knx.paramWord(LMG_HCLM11SP5SummerKelvin))
// M11 SP6 Zeit
#define ParamLMG_HCLM11SP5Time                       (knx.paramData(LMG_HCLM11SP5Time))
#define ParamLMG_HCLM11SP5TimeStr                    (knx.paramString(LMG_HCLM11SP5Time, LMG_HCLM11SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM11SP6Active                     ((bool)(knx.paramByte(LMG_HCLM11SP6Active) & LMG_HCLM11SP6ActiveMask))
// M11 SP7 Helligkeit
#define ParamLMG_HCLM11SP6Brightness                 (knx.paramByte(LMG_HCLM11SP6Brightness))
// M11 SP7 Farbtemperatur
#define ParamLMG_HCLM11SP6Kelvin                     (knx.paramWord(LMG_HCLM11SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM11SP6SummerBrightness           (knx.paramByte(LMG_HCLM11SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM11SP6SummerKelvin               (knx.paramWord(LMG_HCLM11SP6SummerKelvin))
// M11 SP7 Zeit
#define ParamLMG_HCLM11SP6Time                       (knx.paramData(LMG_HCLM11SP6Time))
#define ParamLMG_HCLM11SP6TimeStr                    (knx.paramString(LMG_HCLM11SP6Time, LMG_HCLM11SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM11SP7Active                     ((bool)(knx.paramByte(LMG_HCLM11SP7Active) & LMG_HCLM11SP7ActiveMask))
// M11 SP8 Helligkeit
#define ParamLMG_HCLM11SP7Brightness                 (knx.paramByte(LMG_HCLM11SP7Brightness))
// M11 SP8 Farbtemperatur
#define ParamLMG_HCLM11SP7Kelvin                     (knx.paramWord(LMG_HCLM11SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM11SP7SummerBrightness           (knx.paramByte(LMG_HCLM11SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM11SP7SummerKelvin               (knx.paramWord(LMG_HCLM11SP7SummerKelvin))
// M11 SP8 Zeit
#define ParamLMG_HCLM11SP7Time                       (knx.paramData(LMG_HCLM11SP7Time))
#define ParamLMG_HCLM11SP7TimeStr                    (knx.paramString(LMG_HCLM11SP7Time, LMG_HCLM11SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM11SP8Active                     ((bool)(knx.paramByte(LMG_HCLM11SP8Active) & LMG_HCLM11SP8ActiveMask))
// M11 SP9 Helligkeit
#define ParamLMG_HCLM11SP8Brightness                 (knx.paramByte(LMG_HCLM11SP8Brightness))
// M11 SP9 Farbtemperatur
#define ParamLMG_HCLM11SP8Kelvin                     (knx.paramWord(LMG_HCLM11SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM11SP8SummerBrightness           (knx.paramByte(LMG_HCLM11SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM11SP8SummerKelvin               (knx.paramWord(LMG_HCLM11SP8SummerKelvin))
// M11 SP9 Zeit
#define ParamLMG_HCLM11SP8Time                       (knx.paramData(LMG_HCLM11SP8Time))
#define ParamLMG_HCLM11SP8TimeStr                    (knx.paramString(LMG_HCLM11SP8Time, LMG_HCLM11SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM11SP9Active                     ((bool)(knx.paramByte(LMG_HCLM11SP9Active) & LMG_HCLM11SP9ActiveMask))
// M11 SP10 Helligkeit
#define ParamLMG_HCLM11SP9Brightness                 (knx.paramByte(LMG_HCLM11SP9Brightness))
// M11 SP10 Farbtemperatur
#define ParamLMG_HCLM11SP9Kelvin                     (knx.paramWord(LMG_HCLM11SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM11SP9SummerBrightness           (knx.paramByte(LMG_HCLM11SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM11SP9SummerKelvin               (knx.paramWord(LMG_HCLM11SP9SummerKelvin))
// M11 SP10 Zeit
#define ParamLMG_HCLM11SP9Time                       (knx.paramData(LMG_HCLM11SP9Time))
#define ParamLMG_HCLM11SP9TimeStr                    (knx.paramString(LMG_HCLM11SP9Time, LMG_HCLM11SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM11SummerEndDay                  (knx.paramByte(LMG_HCLM11SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM11SummerEndMonth                (knx.paramByte(LMG_HCLM11SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM11SummerStartDay                (knx.paramByte(LMG_HCLM11SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM11SummerStartMonth              (knx.paramByte(LMG_HCLM11SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM11Sunrise                       (knx.paramData(LMG_HCLM11Sunrise))
#define ParamLMG_HCLM11SunriseStr                    (knx.paramString(LMG_HCLM11Sunrise, LMG_HCLM11SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM11SunriseOffset                 ((int16_t)knx.paramWord(LMG_HCLM11SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM11Sunset                        (knx.paramData(LMG_HCLM11Sunset))
#define ParamLMG_HCLM11SunsetStr                     (knx.paramString(LMG_HCLM11Sunset, LMG_HCLM11SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM11SunsetOffset                  ((int16_t)knx.paramWord(LMG_HCLM11SunsetOffset))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM12FallbackPolicy             (knx.paramByte(LMG_LMGHCLM12FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM12FallbackDurationSec        (knx.paramWord(LMG_LMGHCLM12FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM12FallbackReleaseTime        (knx.paramData(LMG_LMGHCLM12FallbackReleaseTime))
#define ParamLMG_LMGHCLM12FallbackReleaseTimeStr     (knx.paramString(LMG_LMGHCLM12FallbackReleaseTime, LMG_LMGHCLM12FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM12StatusKoEnable             (knx.paramByte(LMG_LMGHCLM12StatusKoEnable) & LMG_LMGHCLM12StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM12LockFallback               (knx.paramByte(LMG_LMGHCLM12LockFallback))
// Aktivierung
#define ParamLMG_HCLM12AdaptiveActiveMode            (knx.paramByte(LMG_HCLM12AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM12AdaptiveCeilToHCL             (knx.paramByte(LMG_HCLM12AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM12AdaptiveDayNightPolarity      (knx.paramByte(LMG_HCLM12AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM12AdaptiveDeadband              (knx.paramWord(LMG_HCLM12AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM12AdaptiveEndTime               (knx.paramData(LMG_HCLM12AdaptiveEndTime))
#define ParamLMG_HCLM12AdaptiveEndTimeStr            (knx.paramString(LMG_HCLM12AdaptiveEndTime, LMG_HCLM12AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM12AdaptiveKp                    (knx.paramByte(LMG_HCLM12AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM12AdaptiveMaxLux                (knx.paramWord(LMG_HCLM12AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM12AdaptiveMinBrightness         (knx.paramByte(LMG_HCLM12AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM12AdaptiveMinChange             (knx.paramByte(LMG_HCLM12AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM12AdaptiveMode                  (knx.paramByte(LMG_HCLM12AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM12AdaptiveSensorTimeout         (knx.paramByte(LMG_HCLM12AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM12AdaptiveStartTime             (knx.paramData(LMG_HCLM12AdaptiveStartTime))
#define ParamLMG_HCLM12AdaptiveStartTimeStr          (knx.paramString(LMG_HCLM12AdaptiveStartTime, LMG_HCLM12AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM12AdaptiveStrength              (knx.paramByte(LMG_HCLM12AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM12AstroMaxBrightness            (knx.paramByte(LMG_HCLM12AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM12AstroMaxKelvin                (knx.paramWord(LMG_HCLM12AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM12AstroMinBrightness            (knx.paramByte(LMG_HCLM12AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM12AstroMinKelvin                (knx.paramWord(LMG_HCLM12AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM12CurveType                     (knx.paramByte(LMG_HCLM12CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM12DSTOffsetDays                 ((int8_t)knx.paramByte(LMG_HCLM12DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM12ManualKelvin                  (knx.paramWord(LMG_HCLM12ManualKelvin))
// Name Lichtmanager 12
#define ParamLMG_HCLM12Name                          (knx.paramData(LMG_HCLM12Name))
#define ParamLMG_HCLM12NameStr                       (knx.paramString(LMG_HCLM12Name, LMG_HCLM12NameLength))
// Saison-Profil
#define ParamLMG_HCLM12SeasonMode                    (knx.paramByte(LMG_HCLM12SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM12SetpointCount                 (knx.paramByte(LMG_HCLM12SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM12SlewRate                      (knx.paramWord(LMG_HCLM12SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM12SP0Active                     ((bool)(knx.paramByte(LMG_HCLM12SP0Active) & LMG_HCLM12SP0ActiveMask))
// M12 SP1 Helligkeit
#define ParamLMG_HCLM12SP0Brightness                 (knx.paramByte(LMG_HCLM12SP0Brightness))
// M12 SP1 Farbtemperatur
#define ParamLMG_HCLM12SP0Kelvin                     (knx.paramWord(LMG_HCLM12SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM12SP0SummerBrightness           (knx.paramByte(LMG_HCLM12SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM12SP0SummerKelvin               (knx.paramWord(LMG_HCLM12SP0SummerKelvin))
// M12 SP1 Zeit
#define ParamLMG_HCLM12SP0Time                       (knx.paramData(LMG_HCLM12SP0Time))
#define ParamLMG_HCLM12SP0TimeStr                    (knx.paramString(LMG_HCLM12SP0Time, LMG_HCLM12SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM12SP1Active                     ((bool)(knx.paramByte(LMG_HCLM12SP1Active) & LMG_HCLM12SP1ActiveMask))
// M12 SP2 Helligkeit
#define ParamLMG_HCLM12SP1Brightness                 (knx.paramByte(LMG_HCLM12SP1Brightness))
// M12 SP2 Kelvin
#define ParamLMG_HCLM12SP1Kelvin                     (knx.paramWord(LMG_HCLM12SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM12SP1SummerBrightness           (knx.paramByte(LMG_HCLM12SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM12SP1SummerKelvin               (knx.paramWord(LMG_HCLM12SP1SummerKelvin))
// M12 SP2 Zeit
#define ParamLMG_HCLM12SP1Time                       (knx.paramData(LMG_HCLM12SP1Time))
#define ParamLMG_HCLM12SP1TimeStr                    (knx.paramString(LMG_HCLM12SP1Time, LMG_HCLM12SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM12SP2Active                     ((bool)(knx.paramByte(LMG_HCLM12SP2Active) & LMG_HCLM12SP2ActiveMask))
// M12 SP3 Helligkeit
#define ParamLMG_HCLM12SP2Brightness                 (knx.paramByte(LMG_HCLM12SP2Brightness))
// M12 SP3 Farbtemperatur
#define ParamLMG_HCLM12SP2Kelvin                     (knx.paramWord(LMG_HCLM12SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM12SP2SummerBrightness           (knx.paramByte(LMG_HCLM12SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM12SP2SummerKelvin               (knx.paramWord(LMG_HCLM12SP2SummerKelvin))
// M12 SP3 Zeit
#define ParamLMG_HCLM12SP2Time                       (knx.paramData(LMG_HCLM12SP2Time))
#define ParamLMG_HCLM12SP2TimeStr                    (knx.paramString(LMG_HCLM12SP2Time, LMG_HCLM12SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM12SP3Active                     ((bool)(knx.paramByte(LMG_HCLM12SP3Active) & LMG_HCLM12SP3ActiveMask))
// M12 SP4 Helligkeit
#define ParamLMG_HCLM12SP3Brightness                 (knx.paramByte(LMG_HCLM12SP3Brightness))
// M12 SP4 Farbtemperatur
#define ParamLMG_HCLM12SP3Kelvin                     (knx.paramWord(LMG_HCLM12SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM12SP3SummerBrightness           (knx.paramByte(LMG_HCLM12SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM12SP3SummerKelvin               (knx.paramWord(LMG_HCLM12SP3SummerKelvin))
// M12 SP4 Zeit
#define ParamLMG_HCLM12SP3Time                       (knx.paramData(LMG_HCLM12SP3Time))
#define ParamLMG_HCLM12SP3TimeStr                    (knx.paramString(LMG_HCLM12SP3Time, LMG_HCLM12SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM12SP4Active                     ((bool)(knx.paramByte(LMG_HCLM12SP4Active) & LMG_HCLM12SP4ActiveMask))
// M12 SP5 Helligkeit
#define ParamLMG_HCLM12SP4Brightness                 (knx.paramByte(LMG_HCLM12SP4Brightness))
// M12 SP5 Farbtemperatur
#define ParamLMG_HCLM12SP4Kelvin                     (knx.paramWord(LMG_HCLM12SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM12SP4SummerBrightness           (knx.paramByte(LMG_HCLM12SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM12SP4SummerKelvin               (knx.paramWord(LMG_HCLM12SP4SummerKelvin))
// M12 SP5 Zeit
#define ParamLMG_HCLM12SP4Time                       (knx.paramData(LMG_HCLM12SP4Time))
#define ParamLMG_HCLM12SP4TimeStr                    (knx.paramString(LMG_HCLM12SP4Time, LMG_HCLM12SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM12SP5Active                     ((bool)(knx.paramByte(LMG_HCLM12SP5Active) & LMG_HCLM12SP5ActiveMask))
// M12 SP6 Helligkeit
#define ParamLMG_HCLM12SP5Brightness                 (knx.paramByte(LMG_HCLM12SP5Brightness))
// M12 SP6 Farbtemperatur
#define ParamLMG_HCLM12SP5Kelvin                     (knx.paramWord(LMG_HCLM12SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM12SP5SummerBrightness           (knx.paramByte(LMG_HCLM12SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM12SP5SummerKelvin               (knx.paramWord(LMG_HCLM12SP5SummerKelvin))
// M12 SP6 Zeit
#define ParamLMG_HCLM12SP5Time                       (knx.paramData(LMG_HCLM12SP5Time))
#define ParamLMG_HCLM12SP5TimeStr                    (knx.paramString(LMG_HCLM12SP5Time, LMG_HCLM12SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM12SP6Active                     ((bool)(knx.paramByte(LMG_HCLM12SP6Active) & LMG_HCLM12SP6ActiveMask))
// M12 SP7 Helligkeit
#define ParamLMG_HCLM12SP6Brightness                 (knx.paramByte(LMG_HCLM12SP6Brightness))
// M12 SP7 Farbtemperatur
#define ParamLMG_HCLM12SP6Kelvin                     (knx.paramWord(LMG_HCLM12SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM12SP6SummerBrightness           (knx.paramByte(LMG_HCLM12SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM12SP6SummerKelvin               (knx.paramWord(LMG_HCLM12SP6SummerKelvin))
// M12 SP7 Zeit
#define ParamLMG_HCLM12SP6Time                       (knx.paramData(LMG_HCLM12SP6Time))
#define ParamLMG_HCLM12SP6TimeStr                    (knx.paramString(LMG_HCLM12SP6Time, LMG_HCLM12SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM12SP7Active                     ((bool)(knx.paramByte(LMG_HCLM12SP7Active) & LMG_HCLM12SP7ActiveMask))
// M12 SP8 Helligkeit
#define ParamLMG_HCLM12SP7Brightness                 (knx.paramByte(LMG_HCLM12SP7Brightness))
// M12 SP8 Farbtemperatur
#define ParamLMG_HCLM12SP7Kelvin                     (knx.paramWord(LMG_HCLM12SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM12SP7SummerBrightness           (knx.paramByte(LMG_HCLM12SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM12SP7SummerKelvin               (knx.paramWord(LMG_HCLM12SP7SummerKelvin))
// M12 SP8 Zeit
#define ParamLMG_HCLM12SP7Time                       (knx.paramData(LMG_HCLM12SP7Time))
#define ParamLMG_HCLM12SP7TimeStr                    (knx.paramString(LMG_HCLM12SP7Time, LMG_HCLM12SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM12SP8Active                     ((bool)(knx.paramByte(LMG_HCLM12SP8Active) & LMG_HCLM12SP8ActiveMask))
// M12 SP9 Helligkeit
#define ParamLMG_HCLM12SP8Brightness                 (knx.paramByte(LMG_HCLM12SP8Brightness))
// M12 SP9 Farbtemperatur
#define ParamLMG_HCLM12SP8Kelvin                     (knx.paramWord(LMG_HCLM12SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM12SP8SummerBrightness           (knx.paramByte(LMG_HCLM12SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM12SP8SummerKelvin               (knx.paramWord(LMG_HCLM12SP8SummerKelvin))
// M12 SP9 Zeit
#define ParamLMG_HCLM12SP8Time                       (knx.paramData(LMG_HCLM12SP8Time))
#define ParamLMG_HCLM12SP8TimeStr                    (knx.paramString(LMG_HCLM12SP8Time, LMG_HCLM12SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM12SP9Active                     ((bool)(knx.paramByte(LMG_HCLM12SP9Active) & LMG_HCLM12SP9ActiveMask))
// M12 SP10 Helligkeit
#define ParamLMG_HCLM12SP9Brightness                 (knx.paramByte(LMG_HCLM12SP9Brightness))
// M12 SP10 Farbtemperatur
#define ParamLMG_HCLM12SP9Kelvin                     (knx.paramWord(LMG_HCLM12SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM12SP9SummerBrightness           (knx.paramByte(LMG_HCLM12SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM12SP9SummerKelvin               (knx.paramWord(LMG_HCLM12SP9SummerKelvin))
// M12 SP10 Zeit
#define ParamLMG_HCLM12SP9Time                       (knx.paramData(LMG_HCLM12SP9Time))
#define ParamLMG_HCLM12SP9TimeStr                    (knx.paramString(LMG_HCLM12SP9Time, LMG_HCLM12SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM12SummerEndDay                  (knx.paramByte(LMG_HCLM12SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM12SummerEndMonth                (knx.paramByte(LMG_HCLM12SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM12SummerStartDay                (knx.paramByte(LMG_HCLM12SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM12SummerStartMonth              (knx.paramByte(LMG_HCLM12SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM12Sunrise                       (knx.paramData(LMG_HCLM12Sunrise))
#define ParamLMG_HCLM12SunriseStr                    (knx.paramString(LMG_HCLM12Sunrise, LMG_HCLM12SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM12SunriseOffset                 ((int16_t)knx.paramWord(LMG_HCLM12SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM12Sunset                        (knx.paramData(LMG_HCLM12Sunset))
#define ParamLMG_HCLM12SunsetStr                     (knx.paramString(LMG_HCLM12Sunset, LMG_HCLM12SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM12SunsetOffset                  ((int16_t)knx.paramWord(LMG_HCLM12SunsetOffset))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM13FallbackPolicy             (knx.paramByte(LMG_LMGHCLM13FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM13FallbackDurationSec        (knx.paramWord(LMG_LMGHCLM13FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM13FallbackReleaseTime        (knx.paramData(LMG_LMGHCLM13FallbackReleaseTime))
#define ParamLMG_LMGHCLM13FallbackReleaseTimeStr     (knx.paramString(LMG_LMGHCLM13FallbackReleaseTime, LMG_LMGHCLM13FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM13StatusKoEnable             (knx.paramByte(LMG_LMGHCLM13StatusKoEnable) & LMG_LMGHCLM13StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM13LockFallback               (knx.paramByte(LMG_LMGHCLM13LockFallback))
// Aktivierung
#define ParamLMG_HCLM13AdaptiveActiveMode            (knx.paramByte(LMG_HCLM13AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM13AdaptiveCeilToHCL             (knx.paramByte(LMG_HCLM13AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM13AdaptiveDayNightPolarity      (knx.paramByte(LMG_HCLM13AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM13AdaptiveDeadband              (knx.paramWord(LMG_HCLM13AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM13AdaptiveEndTime               (knx.paramData(LMG_HCLM13AdaptiveEndTime))
#define ParamLMG_HCLM13AdaptiveEndTimeStr            (knx.paramString(LMG_HCLM13AdaptiveEndTime, LMG_HCLM13AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM13AdaptiveKp                    (knx.paramByte(LMG_HCLM13AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM13AdaptiveMaxLux                (knx.paramWord(LMG_HCLM13AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM13AdaptiveMinBrightness         (knx.paramByte(LMG_HCLM13AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM13AdaptiveMinChange             (knx.paramByte(LMG_HCLM13AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM13AdaptiveMode                  (knx.paramByte(LMG_HCLM13AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM13AdaptiveSensorTimeout         (knx.paramByte(LMG_HCLM13AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM13AdaptiveStartTime             (knx.paramData(LMG_HCLM13AdaptiveStartTime))
#define ParamLMG_HCLM13AdaptiveStartTimeStr          (knx.paramString(LMG_HCLM13AdaptiveStartTime, LMG_HCLM13AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM13AdaptiveStrength              (knx.paramByte(LMG_HCLM13AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM13AstroMaxBrightness            (knx.paramByte(LMG_HCLM13AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM13AstroMaxKelvin                (knx.paramWord(LMG_HCLM13AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM13AstroMinBrightness            (knx.paramByte(LMG_HCLM13AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM13AstroMinKelvin                (knx.paramWord(LMG_HCLM13AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM13CurveType                     (knx.paramByte(LMG_HCLM13CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM13DSTOffsetDays                 ((int8_t)knx.paramByte(LMG_HCLM13DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM13ManualKelvin                  (knx.paramWord(LMG_HCLM13ManualKelvin))
// Name Lichtmanager 13
#define ParamLMG_HCLM13Name                          (knx.paramData(LMG_HCLM13Name))
#define ParamLMG_HCLM13NameStr                       (knx.paramString(LMG_HCLM13Name, LMG_HCLM13NameLength))
// Saison-Profil
#define ParamLMG_HCLM13SeasonMode                    (knx.paramByte(LMG_HCLM13SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM13SetpointCount                 (knx.paramByte(LMG_HCLM13SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM13SlewRate                      (knx.paramWord(LMG_HCLM13SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM13SP0Active                     ((bool)(knx.paramByte(LMG_HCLM13SP0Active) & LMG_HCLM13SP0ActiveMask))
// M13 SP1 Helligkeit
#define ParamLMG_HCLM13SP0Brightness                 (knx.paramByte(LMG_HCLM13SP0Brightness))
// M13 SP1 Farbtemperatur
#define ParamLMG_HCLM13SP0Kelvin                     (knx.paramWord(LMG_HCLM13SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM13SP0SummerBrightness           (knx.paramByte(LMG_HCLM13SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM13SP0SummerKelvin               (knx.paramWord(LMG_HCLM13SP0SummerKelvin))
// M13 SP1 Zeit
#define ParamLMG_HCLM13SP0Time                       (knx.paramData(LMG_HCLM13SP0Time))
#define ParamLMG_HCLM13SP0TimeStr                    (knx.paramString(LMG_HCLM13SP0Time, LMG_HCLM13SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM13SP1Active                     ((bool)(knx.paramByte(LMG_HCLM13SP1Active) & LMG_HCLM13SP1ActiveMask))
// M13 SP2 Helligkeit
#define ParamLMG_HCLM13SP1Brightness                 (knx.paramByte(LMG_HCLM13SP1Brightness))
// M13 SP2 Kelvin
#define ParamLMG_HCLM13SP1Kelvin                     (knx.paramWord(LMG_HCLM13SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM13SP1SummerBrightness           (knx.paramByte(LMG_HCLM13SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM13SP1SummerKelvin               (knx.paramWord(LMG_HCLM13SP1SummerKelvin))
// M13 SP2 Zeit
#define ParamLMG_HCLM13SP1Time                       (knx.paramData(LMG_HCLM13SP1Time))
#define ParamLMG_HCLM13SP1TimeStr                    (knx.paramString(LMG_HCLM13SP1Time, LMG_HCLM13SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM13SP2Active                     ((bool)(knx.paramByte(LMG_HCLM13SP2Active) & LMG_HCLM13SP2ActiveMask))
// M13 SP3 Helligkeit
#define ParamLMG_HCLM13SP2Brightness                 (knx.paramByte(LMG_HCLM13SP2Brightness))
// M13 SP3 Farbtemperatur
#define ParamLMG_HCLM13SP2Kelvin                     (knx.paramWord(LMG_HCLM13SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM13SP2SummerBrightness           (knx.paramByte(LMG_HCLM13SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM13SP2SummerKelvin               (knx.paramWord(LMG_HCLM13SP2SummerKelvin))
// M13 SP3 Zeit
#define ParamLMG_HCLM13SP2Time                       (knx.paramData(LMG_HCLM13SP2Time))
#define ParamLMG_HCLM13SP2TimeStr                    (knx.paramString(LMG_HCLM13SP2Time, LMG_HCLM13SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM13SP3Active                     ((bool)(knx.paramByte(LMG_HCLM13SP3Active) & LMG_HCLM13SP3ActiveMask))
// M13 SP4 Helligkeit
#define ParamLMG_HCLM13SP3Brightness                 (knx.paramByte(LMG_HCLM13SP3Brightness))
// M13 SP4 Farbtemperatur
#define ParamLMG_HCLM13SP3Kelvin                     (knx.paramWord(LMG_HCLM13SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM13SP3SummerBrightness           (knx.paramByte(LMG_HCLM13SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM13SP3SummerKelvin               (knx.paramWord(LMG_HCLM13SP3SummerKelvin))
// M13 SP4 Zeit
#define ParamLMG_HCLM13SP3Time                       (knx.paramData(LMG_HCLM13SP3Time))
#define ParamLMG_HCLM13SP3TimeStr                    (knx.paramString(LMG_HCLM13SP3Time, LMG_HCLM13SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM13SP4Active                     ((bool)(knx.paramByte(LMG_HCLM13SP4Active) & LMG_HCLM13SP4ActiveMask))
// M13 SP5 Helligkeit
#define ParamLMG_HCLM13SP4Brightness                 (knx.paramByte(LMG_HCLM13SP4Brightness))
// M13 SP5 Farbtemperatur
#define ParamLMG_HCLM13SP4Kelvin                     (knx.paramWord(LMG_HCLM13SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM13SP4SummerBrightness           (knx.paramByte(LMG_HCLM13SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM13SP4SummerKelvin               (knx.paramWord(LMG_HCLM13SP4SummerKelvin))
// M13 SP5 Zeit
#define ParamLMG_HCLM13SP4Time                       (knx.paramData(LMG_HCLM13SP4Time))
#define ParamLMG_HCLM13SP4TimeStr                    (knx.paramString(LMG_HCLM13SP4Time, LMG_HCLM13SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM13SP5Active                     ((bool)(knx.paramByte(LMG_HCLM13SP5Active) & LMG_HCLM13SP5ActiveMask))
// M13 SP6 Helligkeit
#define ParamLMG_HCLM13SP5Brightness                 (knx.paramByte(LMG_HCLM13SP5Brightness))
// M13 SP6 Farbtemperatur
#define ParamLMG_HCLM13SP5Kelvin                     (knx.paramWord(LMG_HCLM13SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM13SP5SummerBrightness           (knx.paramByte(LMG_HCLM13SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM13SP5SummerKelvin               (knx.paramWord(LMG_HCLM13SP5SummerKelvin))
// M13 SP6 Zeit
#define ParamLMG_HCLM13SP5Time                       (knx.paramData(LMG_HCLM13SP5Time))
#define ParamLMG_HCLM13SP5TimeStr                    (knx.paramString(LMG_HCLM13SP5Time, LMG_HCLM13SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM13SP6Active                     ((bool)(knx.paramByte(LMG_HCLM13SP6Active) & LMG_HCLM13SP6ActiveMask))
// M13 SP7 Helligkeit
#define ParamLMG_HCLM13SP6Brightness                 (knx.paramByte(LMG_HCLM13SP6Brightness))
// M13 SP7 Farbtemperatur
#define ParamLMG_HCLM13SP6Kelvin                     (knx.paramWord(LMG_HCLM13SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM13SP6SummerBrightness           (knx.paramByte(LMG_HCLM13SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM13SP6SummerKelvin               (knx.paramWord(LMG_HCLM13SP6SummerKelvin))
// M13 SP7 Zeit
#define ParamLMG_HCLM13SP6Time                       (knx.paramData(LMG_HCLM13SP6Time))
#define ParamLMG_HCLM13SP6TimeStr                    (knx.paramString(LMG_HCLM13SP6Time, LMG_HCLM13SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM13SP7Active                     ((bool)(knx.paramByte(LMG_HCLM13SP7Active) & LMG_HCLM13SP7ActiveMask))
// M13 SP8 Helligkeit
#define ParamLMG_HCLM13SP7Brightness                 (knx.paramByte(LMG_HCLM13SP7Brightness))
// M13 SP8 Farbtemperatur
#define ParamLMG_HCLM13SP7Kelvin                     (knx.paramWord(LMG_HCLM13SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM13SP7SummerBrightness           (knx.paramByte(LMG_HCLM13SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM13SP7SummerKelvin               (knx.paramWord(LMG_HCLM13SP7SummerKelvin))
// M13 SP8 Zeit
#define ParamLMG_HCLM13SP7Time                       (knx.paramData(LMG_HCLM13SP7Time))
#define ParamLMG_HCLM13SP7TimeStr                    (knx.paramString(LMG_HCLM13SP7Time, LMG_HCLM13SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM13SP8Active                     ((bool)(knx.paramByte(LMG_HCLM13SP8Active) & LMG_HCLM13SP8ActiveMask))
// M13 SP9 Helligkeit
#define ParamLMG_HCLM13SP8Brightness                 (knx.paramByte(LMG_HCLM13SP8Brightness))
// M13 SP9 Farbtemperatur
#define ParamLMG_HCLM13SP8Kelvin                     (knx.paramWord(LMG_HCLM13SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM13SP8SummerBrightness           (knx.paramByte(LMG_HCLM13SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM13SP8SummerKelvin               (knx.paramWord(LMG_HCLM13SP8SummerKelvin))
// M13 SP9 Zeit
#define ParamLMG_HCLM13SP8Time                       (knx.paramData(LMG_HCLM13SP8Time))
#define ParamLMG_HCLM13SP8TimeStr                    (knx.paramString(LMG_HCLM13SP8Time, LMG_HCLM13SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM13SP9Active                     ((bool)(knx.paramByte(LMG_HCLM13SP9Active) & LMG_HCLM13SP9ActiveMask))
// M13 SP10 Helligkeit
#define ParamLMG_HCLM13SP9Brightness                 (knx.paramByte(LMG_HCLM13SP9Brightness))
// M13 SP10 Farbtemperatur
#define ParamLMG_HCLM13SP9Kelvin                     (knx.paramWord(LMG_HCLM13SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM13SP9SummerBrightness           (knx.paramByte(LMG_HCLM13SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM13SP9SummerKelvin               (knx.paramWord(LMG_HCLM13SP9SummerKelvin))
// M13 SP10 Zeit
#define ParamLMG_HCLM13SP9Time                       (knx.paramData(LMG_HCLM13SP9Time))
#define ParamLMG_HCLM13SP9TimeStr                    (knx.paramString(LMG_HCLM13SP9Time, LMG_HCLM13SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM13SummerEndDay                  (knx.paramByte(LMG_HCLM13SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM13SummerEndMonth                (knx.paramByte(LMG_HCLM13SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM13SummerStartDay                (knx.paramByte(LMG_HCLM13SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM13SummerStartMonth              (knx.paramByte(LMG_HCLM13SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM13Sunrise                       (knx.paramData(LMG_HCLM13Sunrise))
#define ParamLMG_HCLM13SunriseStr                    (knx.paramString(LMG_HCLM13Sunrise, LMG_HCLM13SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM13SunriseOffset                 ((int16_t)knx.paramWord(LMG_HCLM13SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM13Sunset                        (knx.paramData(LMG_HCLM13Sunset))
#define ParamLMG_HCLM13SunsetStr                     (knx.paramString(LMG_HCLM13Sunset, LMG_HCLM13SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM13SunsetOffset                  ((int16_t)knx.paramWord(LMG_HCLM13SunsetOffset))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM14FallbackPolicy             (knx.paramByte(LMG_LMGHCLM14FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM14FallbackDurationSec        (knx.paramWord(LMG_LMGHCLM14FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM14FallbackReleaseTime        (knx.paramData(LMG_LMGHCLM14FallbackReleaseTime))
#define ParamLMG_LMGHCLM14FallbackReleaseTimeStr     (knx.paramString(LMG_LMGHCLM14FallbackReleaseTime, LMG_LMGHCLM14FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM14StatusKoEnable             (knx.paramByte(LMG_LMGHCLM14StatusKoEnable) & LMG_LMGHCLM14StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM14LockFallback               (knx.paramByte(LMG_LMGHCLM14LockFallback))
// Aktivierung
#define ParamLMG_HCLM14AdaptiveActiveMode            (knx.paramByte(LMG_HCLM14AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM14AdaptiveCeilToHCL             (knx.paramByte(LMG_HCLM14AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM14AdaptiveDayNightPolarity      (knx.paramByte(LMG_HCLM14AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM14AdaptiveDeadband              (knx.paramWord(LMG_HCLM14AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM14AdaptiveEndTime               (knx.paramData(LMG_HCLM14AdaptiveEndTime))
#define ParamLMG_HCLM14AdaptiveEndTimeStr            (knx.paramString(LMG_HCLM14AdaptiveEndTime, LMG_HCLM14AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM14AdaptiveKp                    (knx.paramByte(LMG_HCLM14AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM14AdaptiveMaxLux                (knx.paramWord(LMG_HCLM14AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM14AdaptiveMinBrightness         (knx.paramByte(LMG_HCLM14AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM14AdaptiveMinChange             (knx.paramByte(LMG_HCLM14AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM14AdaptiveMode                  (knx.paramByte(LMG_HCLM14AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM14AdaptiveSensorTimeout         (knx.paramByte(LMG_HCLM14AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM14AdaptiveStartTime             (knx.paramData(LMG_HCLM14AdaptiveStartTime))
#define ParamLMG_HCLM14AdaptiveStartTimeStr          (knx.paramString(LMG_HCLM14AdaptiveStartTime, LMG_HCLM14AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM14AdaptiveStrength              (knx.paramByte(LMG_HCLM14AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM14AstroMaxBrightness            (knx.paramByte(LMG_HCLM14AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM14AstroMaxKelvin                (knx.paramWord(LMG_HCLM14AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM14AstroMinBrightness            (knx.paramByte(LMG_HCLM14AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM14AstroMinKelvin                (knx.paramWord(LMG_HCLM14AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM14CurveType                     (knx.paramByte(LMG_HCLM14CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM14DSTOffsetDays                 ((int8_t)knx.paramByte(LMG_HCLM14DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM14ManualKelvin                  (knx.paramWord(LMG_HCLM14ManualKelvin))
// Name Lichtmanager 14
#define ParamLMG_HCLM14Name                          (knx.paramData(LMG_HCLM14Name))
#define ParamLMG_HCLM14NameStr                       (knx.paramString(LMG_HCLM14Name, LMG_HCLM14NameLength))
// Saison-Profil
#define ParamLMG_HCLM14SeasonMode                    (knx.paramByte(LMG_HCLM14SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM14SetpointCount                 (knx.paramByte(LMG_HCLM14SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM14SlewRate                      (knx.paramWord(LMG_HCLM14SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM14SP0Active                     ((bool)(knx.paramByte(LMG_HCLM14SP0Active) & LMG_HCLM14SP0ActiveMask))
// M14 SP1 Helligkeit
#define ParamLMG_HCLM14SP0Brightness                 (knx.paramByte(LMG_HCLM14SP0Brightness))
// M14 SP1 Farbtemperatur
#define ParamLMG_HCLM14SP0Kelvin                     (knx.paramWord(LMG_HCLM14SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM14SP0SummerBrightness           (knx.paramByte(LMG_HCLM14SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM14SP0SummerKelvin               (knx.paramWord(LMG_HCLM14SP0SummerKelvin))
// M14 SP1 Zeit
#define ParamLMG_HCLM14SP0Time                       (knx.paramData(LMG_HCLM14SP0Time))
#define ParamLMG_HCLM14SP0TimeStr                    (knx.paramString(LMG_HCLM14SP0Time, LMG_HCLM14SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM14SP1Active                     ((bool)(knx.paramByte(LMG_HCLM14SP1Active) & LMG_HCLM14SP1ActiveMask))
// M14 SP2 Helligkeit
#define ParamLMG_HCLM14SP1Brightness                 (knx.paramByte(LMG_HCLM14SP1Brightness))
// M14 SP2 Kelvin
#define ParamLMG_HCLM14SP1Kelvin                     (knx.paramWord(LMG_HCLM14SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM14SP1SummerBrightness           (knx.paramByte(LMG_HCLM14SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM14SP1SummerKelvin               (knx.paramWord(LMG_HCLM14SP1SummerKelvin))
// M14 SP2 Zeit
#define ParamLMG_HCLM14SP1Time                       (knx.paramData(LMG_HCLM14SP1Time))
#define ParamLMG_HCLM14SP1TimeStr                    (knx.paramString(LMG_HCLM14SP1Time, LMG_HCLM14SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM14SP2Active                     ((bool)(knx.paramByte(LMG_HCLM14SP2Active) & LMG_HCLM14SP2ActiveMask))
// M14 SP3 Helligkeit
#define ParamLMG_HCLM14SP2Brightness                 (knx.paramByte(LMG_HCLM14SP2Brightness))
// M14 SP3 Farbtemperatur
#define ParamLMG_HCLM14SP2Kelvin                     (knx.paramWord(LMG_HCLM14SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM14SP2SummerBrightness           (knx.paramByte(LMG_HCLM14SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM14SP2SummerKelvin               (knx.paramWord(LMG_HCLM14SP2SummerKelvin))
// M14 SP3 Zeit
#define ParamLMG_HCLM14SP2Time                       (knx.paramData(LMG_HCLM14SP2Time))
#define ParamLMG_HCLM14SP2TimeStr                    (knx.paramString(LMG_HCLM14SP2Time, LMG_HCLM14SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM14SP3Active                     ((bool)(knx.paramByte(LMG_HCLM14SP3Active) & LMG_HCLM14SP3ActiveMask))
// M14 SP4 Helligkeit
#define ParamLMG_HCLM14SP3Brightness                 (knx.paramByte(LMG_HCLM14SP3Brightness))
// M14 SP4 Farbtemperatur
#define ParamLMG_HCLM14SP3Kelvin                     (knx.paramWord(LMG_HCLM14SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM14SP3SummerBrightness           (knx.paramByte(LMG_HCLM14SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM14SP3SummerKelvin               (knx.paramWord(LMG_HCLM14SP3SummerKelvin))
// M14 SP4 Zeit
#define ParamLMG_HCLM14SP3Time                       (knx.paramData(LMG_HCLM14SP3Time))
#define ParamLMG_HCLM14SP3TimeStr                    (knx.paramString(LMG_HCLM14SP3Time, LMG_HCLM14SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM14SP4Active                     ((bool)(knx.paramByte(LMG_HCLM14SP4Active) & LMG_HCLM14SP4ActiveMask))
// M14 SP5 Helligkeit
#define ParamLMG_HCLM14SP4Brightness                 (knx.paramByte(LMG_HCLM14SP4Brightness))
// M14 SP5 Farbtemperatur
#define ParamLMG_HCLM14SP4Kelvin                     (knx.paramWord(LMG_HCLM14SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM14SP4SummerBrightness           (knx.paramByte(LMG_HCLM14SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM14SP4SummerKelvin               (knx.paramWord(LMG_HCLM14SP4SummerKelvin))
// M14 SP5 Zeit
#define ParamLMG_HCLM14SP4Time                       (knx.paramData(LMG_HCLM14SP4Time))
#define ParamLMG_HCLM14SP4TimeStr                    (knx.paramString(LMG_HCLM14SP4Time, LMG_HCLM14SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM14SP5Active                     ((bool)(knx.paramByte(LMG_HCLM14SP5Active) & LMG_HCLM14SP5ActiveMask))
// M14 SP6 Helligkeit
#define ParamLMG_HCLM14SP5Brightness                 (knx.paramByte(LMG_HCLM14SP5Brightness))
// M14 SP6 Farbtemperatur
#define ParamLMG_HCLM14SP5Kelvin                     (knx.paramWord(LMG_HCLM14SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM14SP5SummerBrightness           (knx.paramByte(LMG_HCLM14SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM14SP5SummerKelvin               (knx.paramWord(LMG_HCLM14SP5SummerKelvin))
// M14 SP6 Zeit
#define ParamLMG_HCLM14SP5Time                       (knx.paramData(LMG_HCLM14SP5Time))
#define ParamLMG_HCLM14SP5TimeStr                    (knx.paramString(LMG_HCLM14SP5Time, LMG_HCLM14SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM14SP6Active                     ((bool)(knx.paramByte(LMG_HCLM14SP6Active) & LMG_HCLM14SP6ActiveMask))
// M14 SP7 Helligkeit
#define ParamLMG_HCLM14SP6Brightness                 (knx.paramByte(LMG_HCLM14SP6Brightness))
// M14 SP7 Farbtemperatur
#define ParamLMG_HCLM14SP6Kelvin                     (knx.paramWord(LMG_HCLM14SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM14SP6SummerBrightness           (knx.paramByte(LMG_HCLM14SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM14SP6SummerKelvin               (knx.paramWord(LMG_HCLM14SP6SummerKelvin))
// M14 SP7 Zeit
#define ParamLMG_HCLM14SP6Time                       (knx.paramData(LMG_HCLM14SP6Time))
#define ParamLMG_HCLM14SP6TimeStr                    (knx.paramString(LMG_HCLM14SP6Time, LMG_HCLM14SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM14SP7Active                     ((bool)(knx.paramByte(LMG_HCLM14SP7Active) & LMG_HCLM14SP7ActiveMask))
// M14 SP8 Helligkeit
#define ParamLMG_HCLM14SP7Brightness                 (knx.paramByte(LMG_HCLM14SP7Brightness))
// M14 SP8 Farbtemperatur
#define ParamLMG_HCLM14SP7Kelvin                     (knx.paramWord(LMG_HCLM14SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM14SP7SummerBrightness           (knx.paramByte(LMG_HCLM14SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM14SP7SummerKelvin               (knx.paramWord(LMG_HCLM14SP7SummerKelvin))
// M14 SP8 Zeit
#define ParamLMG_HCLM14SP7Time                       (knx.paramData(LMG_HCLM14SP7Time))
#define ParamLMG_HCLM14SP7TimeStr                    (knx.paramString(LMG_HCLM14SP7Time, LMG_HCLM14SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM14SP8Active                     ((bool)(knx.paramByte(LMG_HCLM14SP8Active) & LMG_HCLM14SP8ActiveMask))
// M14 SP9 Helligkeit
#define ParamLMG_HCLM14SP8Brightness                 (knx.paramByte(LMG_HCLM14SP8Brightness))
// M14 SP9 Farbtemperatur
#define ParamLMG_HCLM14SP8Kelvin                     (knx.paramWord(LMG_HCLM14SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM14SP8SummerBrightness           (knx.paramByte(LMG_HCLM14SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM14SP8SummerKelvin               (knx.paramWord(LMG_HCLM14SP8SummerKelvin))
// M14 SP9 Zeit
#define ParamLMG_HCLM14SP8Time                       (knx.paramData(LMG_HCLM14SP8Time))
#define ParamLMG_HCLM14SP8TimeStr                    (knx.paramString(LMG_HCLM14SP8Time, LMG_HCLM14SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM14SP9Active                     ((bool)(knx.paramByte(LMG_HCLM14SP9Active) & LMG_HCLM14SP9ActiveMask))
// M14 SP10 Helligkeit
#define ParamLMG_HCLM14SP9Brightness                 (knx.paramByte(LMG_HCLM14SP9Brightness))
// M14 SP10 Farbtemperatur
#define ParamLMG_HCLM14SP9Kelvin                     (knx.paramWord(LMG_HCLM14SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM14SP9SummerBrightness           (knx.paramByte(LMG_HCLM14SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM14SP9SummerKelvin               (knx.paramWord(LMG_HCLM14SP9SummerKelvin))
// M14 SP10 Zeit
#define ParamLMG_HCLM14SP9Time                       (knx.paramData(LMG_HCLM14SP9Time))
#define ParamLMG_HCLM14SP9TimeStr                    (knx.paramString(LMG_HCLM14SP9Time, LMG_HCLM14SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM14SummerEndDay                  (knx.paramByte(LMG_HCLM14SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM14SummerEndMonth                (knx.paramByte(LMG_HCLM14SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM14SummerStartDay                (knx.paramByte(LMG_HCLM14SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM14SummerStartMonth              (knx.paramByte(LMG_HCLM14SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM14Sunrise                       (knx.paramData(LMG_HCLM14Sunrise))
#define ParamLMG_HCLM14SunriseStr                    (knx.paramString(LMG_HCLM14Sunrise, LMG_HCLM14SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM14SunriseOffset                 ((int16_t)knx.paramWord(LMG_HCLM14SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM14Sunset                        (knx.paramData(LMG_HCLM14Sunset))
#define ParamLMG_HCLM14SunsetStr                     (knx.paramString(LMG_HCLM14Sunset, LMG_HCLM14SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM14SunsetOffset                  ((int16_t)knx.paramWord(LMG_HCLM14SunsetOffset))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM15FallbackPolicy             (knx.paramByte(LMG_LMGHCLM15FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM15FallbackDurationSec        (knx.paramWord(LMG_LMGHCLM15FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM15FallbackReleaseTime        (knx.paramData(LMG_LMGHCLM15FallbackReleaseTime))
#define ParamLMG_LMGHCLM15FallbackReleaseTimeStr     (knx.paramString(LMG_LMGHCLM15FallbackReleaseTime, LMG_LMGHCLM15FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM15StatusKoEnable             (knx.paramByte(LMG_LMGHCLM15StatusKoEnable) & LMG_LMGHCLM15StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM15LockFallback               (knx.paramByte(LMG_LMGHCLM15LockFallback))
// Aktivierung
#define ParamLMG_HCLM15AdaptiveActiveMode            (knx.paramByte(LMG_HCLM15AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM15AdaptiveCeilToHCL             (knx.paramByte(LMG_HCLM15AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM15AdaptiveDayNightPolarity      (knx.paramByte(LMG_HCLM15AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM15AdaptiveDeadband              (knx.paramWord(LMG_HCLM15AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM15AdaptiveEndTime               (knx.paramData(LMG_HCLM15AdaptiveEndTime))
#define ParamLMG_HCLM15AdaptiveEndTimeStr            (knx.paramString(LMG_HCLM15AdaptiveEndTime, LMG_HCLM15AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM15AdaptiveKp                    (knx.paramByte(LMG_HCLM15AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM15AdaptiveMaxLux                (knx.paramWord(LMG_HCLM15AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM15AdaptiveMinBrightness         (knx.paramByte(LMG_HCLM15AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM15AdaptiveMinChange             (knx.paramByte(LMG_HCLM15AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM15AdaptiveMode                  (knx.paramByte(LMG_HCLM15AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM15AdaptiveSensorTimeout         (knx.paramByte(LMG_HCLM15AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM15AdaptiveStartTime             (knx.paramData(LMG_HCLM15AdaptiveStartTime))
#define ParamLMG_HCLM15AdaptiveStartTimeStr          (knx.paramString(LMG_HCLM15AdaptiveStartTime, LMG_HCLM15AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM15AdaptiveStrength              (knx.paramByte(LMG_HCLM15AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM15AstroMaxBrightness            (knx.paramByte(LMG_HCLM15AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM15AstroMaxKelvin                (knx.paramWord(LMG_HCLM15AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM15AstroMinBrightness            (knx.paramByte(LMG_HCLM15AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM15AstroMinKelvin                (knx.paramWord(LMG_HCLM15AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM15CurveType                     (knx.paramByte(LMG_HCLM15CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM15DSTOffsetDays                 ((int8_t)knx.paramByte(LMG_HCLM15DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM15ManualKelvin                  (knx.paramWord(LMG_HCLM15ManualKelvin))
// Name Lichtmanager 15
#define ParamLMG_HCLM15Name                          (knx.paramData(LMG_HCLM15Name))
#define ParamLMG_HCLM15NameStr                       (knx.paramString(LMG_HCLM15Name, LMG_HCLM15NameLength))
// Saison-Profil
#define ParamLMG_HCLM15SeasonMode                    (knx.paramByte(LMG_HCLM15SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM15SetpointCount                 (knx.paramByte(LMG_HCLM15SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM15SlewRate                      (knx.paramWord(LMG_HCLM15SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM15SP0Active                     ((bool)(knx.paramByte(LMG_HCLM15SP0Active) & LMG_HCLM15SP0ActiveMask))
// M15 SP1 Helligkeit
#define ParamLMG_HCLM15SP0Brightness                 (knx.paramByte(LMG_HCLM15SP0Brightness))
// M15 SP1 Farbtemperatur
#define ParamLMG_HCLM15SP0Kelvin                     (knx.paramWord(LMG_HCLM15SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM15SP0SummerBrightness           (knx.paramByte(LMG_HCLM15SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM15SP0SummerKelvin               (knx.paramWord(LMG_HCLM15SP0SummerKelvin))
// M15 SP1 Zeit
#define ParamLMG_HCLM15SP0Time                       (knx.paramData(LMG_HCLM15SP0Time))
#define ParamLMG_HCLM15SP0TimeStr                    (knx.paramString(LMG_HCLM15SP0Time, LMG_HCLM15SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM15SP1Active                     ((bool)(knx.paramByte(LMG_HCLM15SP1Active) & LMG_HCLM15SP1ActiveMask))
// M15 SP2 Helligkeit
#define ParamLMG_HCLM15SP1Brightness                 (knx.paramByte(LMG_HCLM15SP1Brightness))
// M15 SP2 Kelvin
#define ParamLMG_HCLM15SP1Kelvin                     (knx.paramWord(LMG_HCLM15SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM15SP1SummerBrightness           (knx.paramByte(LMG_HCLM15SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM15SP1SummerKelvin               (knx.paramWord(LMG_HCLM15SP1SummerKelvin))
// M15 SP2 Zeit
#define ParamLMG_HCLM15SP1Time                       (knx.paramData(LMG_HCLM15SP1Time))
#define ParamLMG_HCLM15SP1TimeStr                    (knx.paramString(LMG_HCLM15SP1Time, LMG_HCLM15SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM15SP2Active                     ((bool)(knx.paramByte(LMG_HCLM15SP2Active) & LMG_HCLM15SP2ActiveMask))
// M15 SP3 Helligkeit
#define ParamLMG_HCLM15SP2Brightness                 (knx.paramByte(LMG_HCLM15SP2Brightness))
// M15 SP3 Farbtemperatur
#define ParamLMG_HCLM15SP2Kelvin                     (knx.paramWord(LMG_HCLM15SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM15SP2SummerBrightness           (knx.paramByte(LMG_HCLM15SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM15SP2SummerKelvin               (knx.paramWord(LMG_HCLM15SP2SummerKelvin))
// M15 SP3 Zeit
#define ParamLMG_HCLM15SP2Time                       (knx.paramData(LMG_HCLM15SP2Time))
#define ParamLMG_HCLM15SP2TimeStr                    (knx.paramString(LMG_HCLM15SP2Time, LMG_HCLM15SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM15SP3Active                     ((bool)(knx.paramByte(LMG_HCLM15SP3Active) & LMG_HCLM15SP3ActiveMask))
// M15 SP4 Helligkeit
#define ParamLMG_HCLM15SP3Brightness                 (knx.paramByte(LMG_HCLM15SP3Brightness))
// M15 SP4 Farbtemperatur
#define ParamLMG_HCLM15SP3Kelvin                     (knx.paramWord(LMG_HCLM15SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM15SP3SummerBrightness           (knx.paramByte(LMG_HCLM15SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM15SP3SummerKelvin               (knx.paramWord(LMG_HCLM15SP3SummerKelvin))
// M15 SP4 Zeit
#define ParamLMG_HCLM15SP3Time                       (knx.paramData(LMG_HCLM15SP3Time))
#define ParamLMG_HCLM15SP3TimeStr                    (knx.paramString(LMG_HCLM15SP3Time, LMG_HCLM15SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM15SP4Active                     ((bool)(knx.paramByte(LMG_HCLM15SP4Active) & LMG_HCLM15SP4ActiveMask))
// M15 SP5 Helligkeit
#define ParamLMG_HCLM15SP4Brightness                 (knx.paramByte(LMG_HCLM15SP4Brightness))
// M15 SP5 Farbtemperatur
#define ParamLMG_HCLM15SP4Kelvin                     (knx.paramWord(LMG_HCLM15SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM15SP4SummerBrightness           (knx.paramByte(LMG_HCLM15SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM15SP4SummerKelvin               (knx.paramWord(LMG_HCLM15SP4SummerKelvin))
// M15 SP5 Zeit
#define ParamLMG_HCLM15SP4Time                       (knx.paramData(LMG_HCLM15SP4Time))
#define ParamLMG_HCLM15SP4TimeStr                    (knx.paramString(LMG_HCLM15SP4Time, LMG_HCLM15SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM15SP5Active                     ((bool)(knx.paramByte(LMG_HCLM15SP5Active) & LMG_HCLM15SP5ActiveMask))
// M15 SP6 Helligkeit
#define ParamLMG_HCLM15SP5Brightness                 (knx.paramByte(LMG_HCLM15SP5Brightness))
// M15 SP6 Farbtemperatur
#define ParamLMG_HCLM15SP5Kelvin                     (knx.paramWord(LMG_HCLM15SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM15SP5SummerBrightness           (knx.paramByte(LMG_HCLM15SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM15SP5SummerKelvin               (knx.paramWord(LMG_HCLM15SP5SummerKelvin))
// M15 SP6 Zeit
#define ParamLMG_HCLM15SP5Time                       (knx.paramData(LMG_HCLM15SP5Time))
#define ParamLMG_HCLM15SP5TimeStr                    (knx.paramString(LMG_HCLM15SP5Time, LMG_HCLM15SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM15SP6Active                     ((bool)(knx.paramByte(LMG_HCLM15SP6Active) & LMG_HCLM15SP6ActiveMask))
// M15 SP7 Helligkeit
#define ParamLMG_HCLM15SP6Brightness                 (knx.paramByte(LMG_HCLM15SP6Brightness))
// M15 SP7 Farbtemperatur
#define ParamLMG_HCLM15SP6Kelvin                     (knx.paramWord(LMG_HCLM15SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM15SP6SummerBrightness           (knx.paramByte(LMG_HCLM15SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM15SP6SummerKelvin               (knx.paramWord(LMG_HCLM15SP6SummerKelvin))
// M15 SP7 Zeit
#define ParamLMG_HCLM15SP6Time                       (knx.paramData(LMG_HCLM15SP6Time))
#define ParamLMG_HCLM15SP6TimeStr                    (knx.paramString(LMG_HCLM15SP6Time, LMG_HCLM15SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM15SP7Active                     ((bool)(knx.paramByte(LMG_HCLM15SP7Active) & LMG_HCLM15SP7ActiveMask))
// M15 SP8 Helligkeit
#define ParamLMG_HCLM15SP7Brightness                 (knx.paramByte(LMG_HCLM15SP7Brightness))
// M15 SP8 Farbtemperatur
#define ParamLMG_HCLM15SP7Kelvin                     (knx.paramWord(LMG_HCLM15SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM15SP7SummerBrightness           (knx.paramByte(LMG_HCLM15SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM15SP7SummerKelvin               (knx.paramWord(LMG_HCLM15SP7SummerKelvin))
// M15 SP8 Zeit
#define ParamLMG_HCLM15SP7Time                       (knx.paramData(LMG_HCLM15SP7Time))
#define ParamLMG_HCLM15SP7TimeStr                    (knx.paramString(LMG_HCLM15SP7Time, LMG_HCLM15SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM15SP8Active                     ((bool)(knx.paramByte(LMG_HCLM15SP8Active) & LMG_HCLM15SP8ActiveMask))
// M15 SP9 Helligkeit
#define ParamLMG_HCLM15SP8Brightness                 (knx.paramByte(LMG_HCLM15SP8Brightness))
// M15 SP9 Farbtemperatur
#define ParamLMG_HCLM15SP8Kelvin                     (knx.paramWord(LMG_HCLM15SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM15SP8SummerBrightness           (knx.paramByte(LMG_HCLM15SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM15SP8SummerKelvin               (knx.paramWord(LMG_HCLM15SP8SummerKelvin))
// M15 SP9 Zeit
#define ParamLMG_HCLM15SP8Time                       (knx.paramData(LMG_HCLM15SP8Time))
#define ParamLMG_HCLM15SP8TimeStr                    (knx.paramString(LMG_HCLM15SP8Time, LMG_HCLM15SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM15SP9Active                     ((bool)(knx.paramByte(LMG_HCLM15SP9Active) & LMG_HCLM15SP9ActiveMask))
// M15 SP10 Helligkeit
#define ParamLMG_HCLM15SP9Brightness                 (knx.paramByte(LMG_HCLM15SP9Brightness))
// M15 SP10 Farbtemperatur
#define ParamLMG_HCLM15SP9Kelvin                     (knx.paramWord(LMG_HCLM15SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM15SP9SummerBrightness           (knx.paramByte(LMG_HCLM15SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM15SP9SummerKelvin               (knx.paramWord(LMG_HCLM15SP9SummerKelvin))
// M15 SP10 Zeit
#define ParamLMG_HCLM15SP9Time                       (knx.paramData(LMG_HCLM15SP9Time))
#define ParamLMG_HCLM15SP9TimeStr                    (knx.paramString(LMG_HCLM15SP9Time, LMG_HCLM15SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM15SummerEndDay                  (knx.paramByte(LMG_HCLM15SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM15SummerEndMonth                (knx.paramByte(LMG_HCLM15SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM15SummerStartDay                (knx.paramByte(LMG_HCLM15SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM15SummerStartMonth              (knx.paramByte(LMG_HCLM15SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM15Sunrise                       (knx.paramData(LMG_HCLM15Sunrise))
#define ParamLMG_HCLM15SunriseStr                    (knx.paramString(LMG_HCLM15Sunrise, LMG_HCLM15SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM15SunriseOffset                 ((int16_t)knx.paramWord(LMG_HCLM15SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM15Sunset                        (knx.paramData(LMG_HCLM15Sunset))
#define ParamLMG_HCLM15SunsetStr                     (knx.paramString(LMG_HCLM15Sunset, LMG_HCLM15SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM15SunsetOffset                  ((int16_t)knx.paramWord(LMG_HCLM15SunsetOffset))
// Rückfallstrategie nach Sperre
#define ParamLMG_LMGHCLM16FallbackPolicy             (knx.paramByte(LMG_LMGHCLM16FallbackPolicy))
// Freie Rückfalldauer
#define ParamLMG_LMGHCLM16FallbackDurationSec        (knx.paramWord(LMG_LMGHCLM16FallbackDurationSec))
// Rückfall-Uhrzeit
#define ParamLMG_LMGHCLM16FallbackReleaseTime        (knx.paramData(LMG_LMGHCLM16FallbackReleaseTime))
#define ParamLMG_LMGHCLM16FallbackReleaseTimeStr     (knx.paramString(LMG_LMGHCLM16FallbackReleaseTime, LMG_LMGHCLM16FallbackReleaseTimeLength))
// Bereitstellung der Lichtmanager-Sollwerte
#define ParamLMG_LMGHCLM16StatusKoEnable             (knx.paramByte(LMG_LMGHCLM16StatusKoEnable) & LMG_LMGHCLM16StatusKoEnableMask)
// Rückfallzeit nach Sperre
#define ParamLMG_LMGHCLM16LockFallback               (knx.paramByte(LMG_LMGHCLM16LockFallback))
// Aktivierung
#define ParamLMG_HCLM16AdaptiveActiveMode            (knx.paramByte(LMG_HCLM16AdaptiveActiveMode))
// Auf HCL-Wert begrenzen
#define ParamLMG_HCLM16AdaptiveCeilToHCL             (knx.paramByte(LMG_HCLM16AdaptiveCeilToHCL))
// Tag/Nacht-Polarität
#define ParamLMG_HCLM16AdaptiveDayNightPolarity      (knx.paramByte(LMG_HCLM16AdaptiveDayNightPolarity))
// Totband
#define ParamLMG_HCLM16AdaptiveDeadband              (knx.paramWord(LMG_HCLM16AdaptiveDeadband))
// Endzeit
#define ParamLMG_HCLM16AdaptiveEndTime               (knx.paramData(LMG_HCLM16AdaptiveEndTime))
#define ParamLMG_HCLM16AdaptiveEndTimeStr            (knx.paramString(LMG_HCLM16AdaptiveEndTime, LMG_HCLM16AdaptiveEndTimeLength))
// P-Faktor
#define ParamLMG_HCLM16AdaptiveKp                    (knx.paramByte(LMG_HCLM16AdaptiveKp))
// Skalierungsmaximum
#define ParamLMG_HCLM16AdaptiveMaxLux                (knx.paramWord(LMG_HCLM16AdaptiveMaxLux))
// Mindesthelligkeit
#define ParamLMG_HCLM16AdaptiveMinBrightness         (knx.paramByte(LMG_HCLM16AdaptiveMinBrightness))
// Mindestschrittgröße
#define ParamLMG_HCLM16AdaptiveMinChange             (knx.paramByte(LMG_HCLM16AdaptiveMinChange))
// Adaptive Helligkeit (Modus)
#define ParamLMG_HCLM16AdaptiveMode                  (knx.paramByte(LMG_HCLM16AdaptiveMode))
// Sensor-Timeout (0=aus)
#define ParamLMG_HCLM16AdaptiveSensorTimeout         (knx.paramByte(LMG_HCLM16AdaptiveSensorTimeout))
// Startzeit
#define ParamLMG_HCLM16AdaptiveStartTime             (knx.paramData(LMG_HCLM16AdaptiveStartTime))
#define ParamLMG_HCLM16AdaptiveStartTimeStr          (knx.paramString(LMG_HCLM16AdaptiveStartTime, LMG_HCLM16AdaptiveStartTimeLength))
// Kompensationsstärke
#define ParamLMG_HCLM16AdaptiveStrength              (knx.paramByte(LMG_HCLM16AdaptiveStrength))
// Astro Maximum Helligkeit
#define ParamLMG_HCLM16AstroMaxBrightness            (knx.paramByte(LMG_HCLM16AstroMaxBrightness))
// Astro Maximum Kelvin
#define ParamLMG_HCLM16AstroMaxKelvin                (knx.paramWord(LMG_HCLM16AstroMaxKelvin))
// Astro Minimum Helligkeit
#define ParamLMG_HCLM16AstroMinBrightness            (knx.paramByte(LMG_HCLM16AstroMinBrightness))
// Astro Minimum Kelvin
#define ParamLMG_HCLM16AstroMinKelvin                (knx.paramWord(LMG_HCLM16AstroMinKelvin))
// Kurventyp
#define ParamLMG_HCLM16CurveType                     (knx.paramByte(LMG_HCLM16CurveType))
// DST-Offset (Tage)
#define ParamLMG_HCLM16DSTOffsetDays                 ((int8_t)knx.paramByte(LMG_HCLM16DSTOffsetDays))
// Manuelle Farbtemperatur
#define ParamLMG_HCLM16ManualKelvin                  (knx.paramWord(LMG_HCLM16ManualKelvin))
// Name Lichtmanager 16
#define ParamLMG_HCLM16Name                          (knx.paramData(LMG_HCLM16Name))
#define ParamLMG_HCLM16NameStr                       (knx.paramString(LMG_HCLM16Name, LMG_HCLM16NameLength))
// Saison-Profil
#define ParamLMG_HCLM16SeasonMode                    (knx.paramByte(LMG_HCLM16SeasonMode))
// Anzahl Stützpunkte
#define ParamLMG_HCLM16SetpointCount                 (knx.paramByte(LMG_HCLM16SetpointCount))
// Slew-Rate
#define ParamLMG_HCLM16SlewRate                      (knx.paramWord(LMG_HCLM16SlewRate))
// St.punkt 0 aktiv
#define ParamLMG_HCLM16SP0Active                     ((bool)(knx.paramByte(LMG_HCLM16SP0Active) & LMG_HCLM16SP0ActiveMask))
// M16 SP1 Helligkeit
#define ParamLMG_HCLM16SP0Brightness                 (knx.paramByte(LMG_HCLM16SP0Brightness))
// M16 SP1 Farbtemperatur
#define ParamLMG_HCLM16SP0Kelvin                     (knx.paramWord(LMG_HCLM16SP0Kelvin))
// SP0 Sommer-Helligkeit
#define ParamLMG_HCLM16SP0SummerBrightness           (knx.paramByte(LMG_HCLM16SP0SummerBrightness))
// SP0 Sommer-Kelvin
#define ParamLMG_HCLM16SP0SummerKelvin               (knx.paramWord(LMG_HCLM16SP0SummerKelvin))
// M16 SP1 Zeit
#define ParamLMG_HCLM16SP0Time                       (knx.paramData(LMG_HCLM16SP0Time))
#define ParamLMG_HCLM16SP0TimeStr                    (knx.paramString(LMG_HCLM16SP0Time, LMG_HCLM16SP0TimeLength))
// St.punkt 1 aktiv
#define ParamLMG_HCLM16SP1Active                     ((bool)(knx.paramByte(LMG_HCLM16SP1Active) & LMG_HCLM16SP1ActiveMask))
// M16 SP2 Helligkeit
#define ParamLMG_HCLM16SP1Brightness                 (knx.paramByte(LMG_HCLM16SP1Brightness))
// M16 SP2 Kelvin
#define ParamLMG_HCLM16SP1Kelvin                     (knx.paramWord(LMG_HCLM16SP1Kelvin))
// SP1 Sommer-Helligkeit
#define ParamLMG_HCLM16SP1SummerBrightness           (knx.paramByte(LMG_HCLM16SP1SummerBrightness))
// SP1 Sommer-Kelvin
#define ParamLMG_HCLM16SP1SummerKelvin               (knx.paramWord(LMG_HCLM16SP1SummerKelvin))
// M16 SP2 Zeit
#define ParamLMG_HCLM16SP1Time                       (knx.paramData(LMG_HCLM16SP1Time))
#define ParamLMG_HCLM16SP1TimeStr                    (knx.paramString(LMG_HCLM16SP1Time, LMG_HCLM16SP1TimeLength))
// St.punkt 2 aktiv
#define ParamLMG_HCLM16SP2Active                     ((bool)(knx.paramByte(LMG_HCLM16SP2Active) & LMG_HCLM16SP2ActiveMask))
// M16 SP3 Helligkeit
#define ParamLMG_HCLM16SP2Brightness                 (knx.paramByte(LMG_HCLM16SP2Brightness))
// M16 SP3 Farbtemperatur
#define ParamLMG_HCLM16SP2Kelvin                     (knx.paramWord(LMG_HCLM16SP2Kelvin))
// SP2 Sommer-Helligkeit
#define ParamLMG_HCLM16SP2SummerBrightness           (knx.paramByte(LMG_HCLM16SP2SummerBrightness))
// SP2 Sommer-Kelvin
#define ParamLMG_HCLM16SP2SummerKelvin               (knx.paramWord(LMG_HCLM16SP2SummerKelvin))
// M16 SP3 Zeit
#define ParamLMG_HCLM16SP2Time                       (knx.paramData(LMG_HCLM16SP2Time))
#define ParamLMG_HCLM16SP2TimeStr                    (knx.paramString(LMG_HCLM16SP2Time, LMG_HCLM16SP2TimeLength))
// St.punkt 3 aktiv
#define ParamLMG_HCLM16SP3Active                     ((bool)(knx.paramByte(LMG_HCLM16SP3Active) & LMG_HCLM16SP3ActiveMask))
// M16 SP4 Helligkeit
#define ParamLMG_HCLM16SP3Brightness                 (knx.paramByte(LMG_HCLM16SP3Brightness))
// M16 SP4 Farbtemperatur
#define ParamLMG_HCLM16SP3Kelvin                     (knx.paramWord(LMG_HCLM16SP3Kelvin))
// SP3 Sommer-Helligkeit
#define ParamLMG_HCLM16SP3SummerBrightness           (knx.paramByte(LMG_HCLM16SP3SummerBrightness))
// SP3 Sommer-Kelvin
#define ParamLMG_HCLM16SP3SummerKelvin               (knx.paramWord(LMG_HCLM16SP3SummerKelvin))
// M16 SP4 Zeit
#define ParamLMG_HCLM16SP3Time                       (knx.paramData(LMG_HCLM16SP3Time))
#define ParamLMG_HCLM16SP3TimeStr                    (knx.paramString(LMG_HCLM16SP3Time, LMG_HCLM16SP3TimeLength))
// St.punkt 4 aktiv
#define ParamLMG_HCLM16SP4Active                     ((bool)(knx.paramByte(LMG_HCLM16SP4Active) & LMG_HCLM16SP4ActiveMask))
// M16 SP5 Helligkeit
#define ParamLMG_HCLM16SP4Brightness                 (knx.paramByte(LMG_HCLM16SP4Brightness))
// M16 SP5 Farbtemperatur
#define ParamLMG_HCLM16SP4Kelvin                     (knx.paramWord(LMG_HCLM16SP4Kelvin))
// SP4 Sommer-Helligkeit
#define ParamLMG_HCLM16SP4SummerBrightness           (knx.paramByte(LMG_HCLM16SP4SummerBrightness))
// SP4 Sommer-Kelvin
#define ParamLMG_HCLM16SP4SummerKelvin               (knx.paramWord(LMG_HCLM16SP4SummerKelvin))
// M16 SP5 Zeit
#define ParamLMG_HCLM16SP4Time                       (knx.paramData(LMG_HCLM16SP4Time))
#define ParamLMG_HCLM16SP4TimeStr                    (knx.paramString(LMG_HCLM16SP4Time, LMG_HCLM16SP4TimeLength))
// St.punkt 5 aktiv
#define ParamLMG_HCLM16SP5Active                     ((bool)(knx.paramByte(LMG_HCLM16SP5Active) & LMG_HCLM16SP5ActiveMask))
// M16 SP6 Helligkeit
#define ParamLMG_HCLM16SP5Brightness                 (knx.paramByte(LMG_HCLM16SP5Brightness))
// M16 SP6 Farbtemperatur
#define ParamLMG_HCLM16SP5Kelvin                     (knx.paramWord(LMG_HCLM16SP5Kelvin))
// SP5 Sommer-Helligkeit
#define ParamLMG_HCLM16SP5SummerBrightness           (knx.paramByte(LMG_HCLM16SP5SummerBrightness))
// SP5 Sommer-Kelvin
#define ParamLMG_HCLM16SP5SummerKelvin               (knx.paramWord(LMG_HCLM16SP5SummerKelvin))
// M16 SP6 Zeit
#define ParamLMG_HCLM16SP5Time                       (knx.paramData(LMG_HCLM16SP5Time))
#define ParamLMG_HCLM16SP5TimeStr                    (knx.paramString(LMG_HCLM16SP5Time, LMG_HCLM16SP5TimeLength))
// St.punkt 6 aktiv
#define ParamLMG_HCLM16SP6Active                     ((bool)(knx.paramByte(LMG_HCLM16SP6Active) & LMG_HCLM16SP6ActiveMask))
// M16 SP7 Helligkeit
#define ParamLMG_HCLM16SP6Brightness                 (knx.paramByte(LMG_HCLM16SP6Brightness))
// M16 SP7 Farbtemperatur
#define ParamLMG_HCLM16SP6Kelvin                     (knx.paramWord(LMG_HCLM16SP6Kelvin))
// SP6 Sommer-Helligkeit
#define ParamLMG_HCLM16SP6SummerBrightness           (knx.paramByte(LMG_HCLM16SP6SummerBrightness))
// SP6 Sommer-Kelvin
#define ParamLMG_HCLM16SP6SummerKelvin               (knx.paramWord(LMG_HCLM16SP6SummerKelvin))
// M16 SP7 Zeit
#define ParamLMG_HCLM16SP6Time                       (knx.paramData(LMG_HCLM16SP6Time))
#define ParamLMG_HCLM16SP6TimeStr                    (knx.paramString(LMG_HCLM16SP6Time, LMG_HCLM16SP6TimeLength))
// St.punkt 7 aktiv
#define ParamLMG_HCLM16SP7Active                     ((bool)(knx.paramByte(LMG_HCLM16SP7Active) & LMG_HCLM16SP7ActiveMask))
// M16 SP8 Helligkeit
#define ParamLMG_HCLM16SP7Brightness                 (knx.paramByte(LMG_HCLM16SP7Brightness))
// M16 SP8 Farbtemperatur
#define ParamLMG_HCLM16SP7Kelvin                     (knx.paramWord(LMG_HCLM16SP7Kelvin))
// SP7 Sommer-Helligkeit
#define ParamLMG_HCLM16SP7SummerBrightness           (knx.paramByte(LMG_HCLM16SP7SummerBrightness))
// SP7 Sommer-Kelvin
#define ParamLMG_HCLM16SP7SummerKelvin               (knx.paramWord(LMG_HCLM16SP7SummerKelvin))
// M16 SP8 Zeit
#define ParamLMG_HCLM16SP7Time                       (knx.paramData(LMG_HCLM16SP7Time))
#define ParamLMG_HCLM16SP7TimeStr                    (knx.paramString(LMG_HCLM16SP7Time, LMG_HCLM16SP7TimeLength))
// St.punkt 8 aktiv
#define ParamLMG_HCLM16SP8Active                     ((bool)(knx.paramByte(LMG_HCLM16SP8Active) & LMG_HCLM16SP8ActiveMask))
// M16 SP9 Helligkeit
#define ParamLMG_HCLM16SP8Brightness                 (knx.paramByte(LMG_HCLM16SP8Brightness))
// M16 SP9 Farbtemperatur
#define ParamLMG_HCLM16SP8Kelvin                     (knx.paramWord(LMG_HCLM16SP8Kelvin))
// SP8 Sommer-Helligkeit
#define ParamLMG_HCLM16SP8SummerBrightness           (knx.paramByte(LMG_HCLM16SP8SummerBrightness))
// SP8 Sommer-Kelvin
#define ParamLMG_HCLM16SP8SummerKelvin               (knx.paramWord(LMG_HCLM16SP8SummerKelvin))
// M16 SP9 Zeit
#define ParamLMG_HCLM16SP8Time                       (knx.paramData(LMG_HCLM16SP8Time))
#define ParamLMG_HCLM16SP8TimeStr                    (knx.paramString(LMG_HCLM16SP8Time, LMG_HCLM16SP8TimeLength))
// St.punkt 9 aktiv
#define ParamLMG_HCLM16SP9Active                     ((bool)(knx.paramByte(LMG_HCLM16SP9Active) & LMG_HCLM16SP9ActiveMask))
// M16 SP10 Helligkeit
#define ParamLMG_HCLM16SP9Brightness                 (knx.paramByte(LMG_HCLM16SP9Brightness))
// M16 SP10 Farbtemperatur
#define ParamLMG_HCLM16SP9Kelvin                     (knx.paramWord(LMG_HCLM16SP9Kelvin))
// SP9 Sommer-Helligkeit
#define ParamLMG_HCLM16SP9SummerBrightness           (knx.paramByte(LMG_HCLM16SP9SummerBrightness))
// SP9 Sommer-Kelvin
#define ParamLMG_HCLM16SP9SummerKelvin               (knx.paramWord(LMG_HCLM16SP9SummerKelvin))
// M16 SP10 Zeit
#define ParamLMG_HCLM16SP9Time                       (knx.paramData(LMG_HCLM16SP9Time))
#define ParamLMG_HCLM16SP9TimeStr                    (knx.paramString(LMG_HCLM16SP9Time, LMG_HCLM16SP9TimeLength))
// Sommerende Tag
#define ParamLMG_HCLM16SummerEndDay                  (knx.paramByte(LMG_HCLM16SummerEndDay))
// Sommerende Monat
#define ParamLMG_HCLM16SummerEndMonth                (knx.paramByte(LMG_HCLM16SummerEndMonth))
// Sommerstart Tag
#define ParamLMG_HCLM16SummerStartDay                (knx.paramByte(LMG_HCLM16SummerStartDay))
// Sommerstart Monat
#define ParamLMG_HCLM16SummerStartMonth              (knx.paramByte(LMG_HCLM16SummerStartMonth))
// Sunrise (HH:MM)
#define ParamLMG_HCLM16Sunrise                       (knx.paramData(LMG_HCLM16Sunrise))
#define ParamLMG_HCLM16SunriseStr                    (knx.paramString(LMG_HCLM16Sunrise, LMG_HCLM16SunriseLength))
// Sunrise Offset (min)
#define ParamLMG_HCLM16SunriseOffset                 ((int16_t)knx.paramWord(LMG_HCLM16SunriseOffset))
// Sunset (HH:MM)
#define ParamLMG_HCLM16Sunset                        (knx.paramData(LMG_HCLM16Sunset))
#define ParamLMG_HCLM16SunsetStr                     (knx.paramString(LMG_HCLM16Sunset, LMG_HCLM16SunsetLength))
// Sunset Offset (min)
#define ParamLMG_HCLM16SunsetOffset                  ((int16_t)knx.paramWord(LMG_HCLM16SunsetOffset))

#define LMG_KoLMGHCLLock 400
#define LMG_KoLMGHCLLockStatus 401
#define LMG_KoLMGHCLM1StatusBrightness 403
#define LMG_KoLMGHCLM1StatusColorTemp 404
#define LMG_KoLMGHCLM2StatusBrightness 411
#define LMG_KoLMGHCLM2StatusColorTemp 412
#define LMG_KoLMGHCLM3StatusBrightness 419
#define LMG_KoLMGHCLM3StatusColorTemp 420
#define LMG_KoLMGHCLM4StatusBrightness 427
#define LMG_KoLMGHCLM4StatusColorTemp 428
#define LMG_KoLMGHCLM1Lock 405
#define LMG_KoLMGHCLM1LockStatus 406
#define LMG_KoLMGHCLM2Lock 413
#define LMG_KoLMGHCLM2LockStatus 414
#define LMG_KoLMGHCLM3Lock 421
#define LMG_KoLMGHCLM3LockStatus 422
#define LMG_KoLMGHCLM4Lock 429
#define LMG_KoLMGHCLM4LockStatus 430
#define LMG_KoLMGHCLM5StatusBrightness 435
#define LMG_KoLMGHCLM5StatusColorTemp 436
#define LMG_KoLMGHCLM6StatusBrightness 443
#define LMG_KoLMGHCLM6StatusColorTemp 444
#define LMG_KoLMGHCLM7StatusBrightness 451
#define LMG_KoLMGHCLM7StatusColorTemp 452
#define LMG_KoLMGHCLM8StatusBrightness 459
#define LMG_KoLMGHCLM8StatusColorTemp 460
#define LMG_KoLMGHCLM5Lock 437
#define LMG_KoLMGHCLM5LockStatus 438
#define LMG_KoLMGHCLM6Lock 445
#define LMG_KoLMGHCLM6LockStatus 446
#define LMG_KoLMGHCLM7Lock 453
#define LMG_KoLMGHCLM7LockStatus 454
#define LMG_KoLMGHCLM8Lock 461
#define LMG_KoLMGHCLM8LockStatus 462
#define LMG_KoLMGHCLReleaseTrigger 402
#define LMG_KoLMGHCLM1SummerActive 407
#define LMG_KoLMGHCLM2SummerActive 415
#define LMG_KoLMGHCLM3SummerActive 423
#define LMG_KoLMGHCLM4SummerActive 431
#define LMG_KoLMGHCLM5SummerActive 439
#define LMG_KoLMGHCLM6SummerActive 447
#define LMG_KoLMGHCLM7SummerActive 455
#define LMG_KoLMGHCLM8SummerActive 463
#define LMG_KoLMGHCLM1AmbientLux 408
#define LMG_KoLMGHCLM1DayNight 409
#define LMG_KoLMGHCLM1AdaptiveActive 410
#define LMG_KoLMGHCLM2AmbientLux 416
#define LMG_KoLMGHCLM2DayNight 417
#define LMG_KoLMGHCLM2AdaptiveActive 418
#define LMG_KoLMGHCLM3AmbientLux 424
#define LMG_KoLMGHCLM3DayNight 425
#define LMG_KoLMGHCLM3AdaptiveActive 426
#define LMG_KoLMGHCLM4AmbientLux 432
#define LMG_KoLMGHCLM4DayNight 433
#define LMG_KoLMGHCLM4AdaptiveActive 434
#define LMG_KoLMGHCLM5AmbientLux 440
#define LMG_KoLMGHCLM5DayNight 441
#define LMG_KoLMGHCLM5AdaptiveActive 442
#define LMG_KoLMGHCLM6AmbientLux 448
#define LMG_KoLMGHCLM6DayNight 449
#define LMG_KoLMGHCLM6AdaptiveActive 450
#define LMG_KoLMGHCLM7AmbientLux 456
#define LMG_KoLMGHCLM7DayNight 457
#define LMG_KoLMGHCLM7AdaptiveActive 458
#define LMG_KoLMGHCLM8AmbientLux 464
#define LMG_KoLMGHCLM8DayNight 465
#define LMG_KoLMGHCLM8AdaptiveActive 466
#define LMG_KoLMGHCLM9StatusBrightness 467
#define LMG_KoLMGHCLM9StatusColorTemp 468
#define LMG_KoLMGHCLM9Lock 469
#define LMG_KoLMGHCLM9LockStatus 470
#define LMG_KoLMGHCLM9SummerActive 471
#define LMG_KoLMGHCLM9AmbientLux 472
#define LMG_KoLMGHCLM9DayNight 473
#define LMG_KoLMGHCLM9AdaptiveActive 474
#define LMG_KoLMGHCLM10StatusBrightness 475
#define LMG_KoLMGHCLM10StatusColorTemp 476
#define LMG_KoLMGHCLM10Lock 477
#define LMG_KoLMGHCLM10LockStatus 478
#define LMG_KoLMGHCLM10SummerActive 479
#define LMG_KoLMGHCLM10AmbientLux 480
#define LMG_KoLMGHCLM10DayNight 481
#define LMG_KoLMGHCLM10AdaptiveActive 482
#define LMG_KoLMGHCLM11StatusBrightness 483
#define LMG_KoLMGHCLM11StatusColorTemp 484
#define LMG_KoLMGHCLM11Lock 485
#define LMG_KoLMGHCLM11LockStatus 486
#define LMG_KoLMGHCLM11SummerActive 487
#define LMG_KoLMGHCLM11AmbientLux 488
#define LMG_KoLMGHCLM11DayNight 489
#define LMG_KoLMGHCLM11AdaptiveActive 490
#define LMG_KoLMGHCLM12StatusBrightness 491
#define LMG_KoLMGHCLM12StatusColorTemp 492
#define LMG_KoLMGHCLM12Lock 493
#define LMG_KoLMGHCLM12LockStatus 494
#define LMG_KoLMGHCLM12SummerActive 495
#define LMG_KoLMGHCLM12AmbientLux 496
#define LMG_KoLMGHCLM12DayNight 497
#define LMG_KoLMGHCLM12AdaptiveActive 498
#define LMG_KoLMGHCLM13StatusBrightness 499
#define LMG_KoLMGHCLM13StatusColorTemp 500
#define LMG_KoLMGHCLM13Lock 501
#define LMG_KoLMGHCLM13LockStatus 502
#define LMG_KoLMGHCLM13SummerActive 503
#define LMG_KoLMGHCLM13AmbientLux 504
#define LMG_KoLMGHCLM13DayNight 505
#define LMG_KoLMGHCLM13AdaptiveActive 506
#define LMG_KoLMGHCLM14StatusBrightness 507
#define LMG_KoLMGHCLM14StatusColorTemp 508
#define LMG_KoLMGHCLM14Lock 509
#define LMG_KoLMGHCLM14LockStatus 510
#define LMG_KoLMGHCLM14SummerActive 511
#define LMG_KoLMGHCLM14AmbientLux 512
#define LMG_KoLMGHCLM14DayNight 513
#define LMG_KoLMGHCLM14AdaptiveActive 514
#define LMG_KoLMGHCLM15StatusBrightness 515
#define LMG_KoLMGHCLM15StatusColorTemp 516
#define LMG_KoLMGHCLM15Lock 517
#define LMG_KoLMGHCLM15LockStatus 518
#define LMG_KoLMGHCLM15SummerActive 519
#define LMG_KoLMGHCLM15AmbientLux 520
#define LMG_KoLMGHCLM15DayNight 521
#define LMG_KoLMGHCLM15AdaptiveActive 522
#define LMG_KoLMGHCLM16StatusBrightness 523
#define LMG_KoLMGHCLM16StatusColorTemp 524
#define LMG_KoLMGHCLM16Lock 525
#define LMG_KoLMGHCLM16LockStatus 526
#define LMG_KoLMGHCLM16SummerActive 527
#define LMG_KoLMGHCLM16AmbientLux 528
#define LMG_KoLMGHCLM16DayNight 529
#define LMG_KoLMGHCLM16AdaptiveActive 530

// LM: Sperre (global)
#define KoLMG_LMGHCLLock                          (knx.getGroupObject(LMG_KoLMGHCLLock))
// LM: Status Sperre (global)
#define KoLMG_LMGHCLLockStatus                    (knx.getGroupObject(LMG_KoLMGHCLLockStatus))
// LM 1: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM1StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM1StatusBrightness))
// LM 1: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM1StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM1StatusColorTemp))
// LM 2: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM2StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM2StatusBrightness))
// LM 2: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM2StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM2StatusColorTemp))
// LM 3: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM3StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM3StatusBrightness))
// LM 3: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM3StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM3StatusColorTemp))
// LM 4: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM4StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM4StatusBrightness))
// LM 4: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM4StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM4StatusColorTemp))
// LM 1: Sperre
#define KoLMG_LMGHCLM1Lock                        (knx.getGroupObject(LMG_KoLMGHCLM1Lock))
// LM 1: Status Sperre
#define KoLMG_LMGHCLM1LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM1LockStatus))
// LM 2: Sperre
#define KoLMG_LMGHCLM2Lock                        (knx.getGroupObject(LMG_KoLMGHCLM2Lock))
// LM 2: Status Sperre
#define KoLMG_LMGHCLM2LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM2LockStatus))
// LM 3: Sperre
#define KoLMG_LMGHCLM3Lock                        (knx.getGroupObject(LMG_KoLMGHCLM3Lock))
// LM 3: Status Sperre
#define KoLMG_LMGHCLM3LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM3LockStatus))
// LM 4: Sperre
#define KoLMG_LMGHCLM4Lock                        (knx.getGroupObject(LMG_KoLMGHCLM4Lock))
// LM 4: Status Sperre
#define KoLMG_LMGHCLM4LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM4LockStatus))
// LM 5: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM5StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM5StatusBrightness))
// LM 5: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM5StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM5StatusColorTemp))
// LM 6: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM6StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM6StatusBrightness))
// LM 6: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM6StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM6StatusColorTemp))
// LM 7: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM7StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM7StatusBrightness))
// LM 7: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM7StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM7StatusColorTemp))
// LM 8: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM8StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM8StatusBrightness))
// LM 8: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM8StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM8StatusColorTemp))
// LM 5: Sperre
#define KoLMG_LMGHCLM5Lock                        (knx.getGroupObject(LMG_KoLMGHCLM5Lock))
// LM 5: Status Sperre
#define KoLMG_LMGHCLM5LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM5LockStatus))
// LM 6: Sperre
#define KoLMG_LMGHCLM6Lock                        (knx.getGroupObject(LMG_KoLMGHCLM6Lock))
// LM 6: Status Sperre
#define KoLMG_LMGHCLM6LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM6LockStatus))
// LM 7: Sperre
#define KoLMG_LMGHCLM7Lock                        (knx.getGroupObject(LMG_KoLMGHCLM7Lock))
// LM 7: Status Sperre
#define KoLMG_LMGHCLM7LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM7LockStatus))
// LM 8: Sperre
#define KoLMG_LMGHCLM8Lock                        (knx.getGroupObject(LMG_KoLMGHCLM8Lock))
// LM 8: Status Sperre
#define KoLMG_LMGHCLM8LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM8LockStatus))
// LM: Entsperr-Trigger (global)
#define KoLMG_LMGHCLReleaseTrigger                (knx.getGroupObject(LMG_KoLMGHCLReleaseTrigger))
// LM 1: Sommer aktiv
#define KoLMG_LMGHCLM1SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM1SummerActive))
// LM 2: Sommer aktiv
#define KoLMG_LMGHCLM2SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM2SummerActive))
// LM 3: Sommer aktiv
#define KoLMG_LMGHCLM3SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM3SummerActive))
// LM 4: Sommer aktiv
#define KoLMG_LMGHCLM4SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM4SummerActive))
// LM 5: Sommer aktiv
#define KoLMG_LMGHCLM5SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM5SummerActive))
// LM 6: Sommer aktiv
#define KoLMG_LMGHCLM6SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM6SummerActive))
// LM 7: Sommer aktiv
#define KoLMG_LMGHCLM7SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM7SummerActive))
// LM 8: Sommer aktiv
#define KoLMG_LMGHCLM8SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM8SummerActive))
// LM 1: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM1AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM1AmbientLux))
// LM 1: Tag/Nacht
#define KoLMG_LMGHCLM1DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM1DayNight))
// LM 1: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM1AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM1AdaptiveActive))
// LM 2: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM2AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM2AmbientLux))
// LM 2: Tag/Nacht
#define KoLMG_LMGHCLM2DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM2DayNight))
// LM 2: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM2AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM2AdaptiveActive))
// LM 3: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM3AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM3AmbientLux))
// LM 3: Tag/Nacht
#define KoLMG_LMGHCLM3DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM3DayNight))
// LM 3: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM3AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM3AdaptiveActive))
// LM 4: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM4AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM4AmbientLux))
// LM 4: Tag/Nacht
#define KoLMG_LMGHCLM4DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM4DayNight))
// LM 4: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM4AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM4AdaptiveActive))
// LM 5: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM5AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM5AmbientLux))
// LM 5: Tag/Nacht
#define KoLMG_LMGHCLM5DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM5DayNight))
// LM 5: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM5AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM5AdaptiveActive))
// LM 6: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM6AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM6AmbientLux))
// LM 6: Tag/Nacht
#define KoLMG_LMGHCLM6DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM6DayNight))
// LM 6: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM6AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM6AdaptiveActive))
// LM 7: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM7AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM7AmbientLux))
// LM 7: Tag/Nacht
#define KoLMG_LMGHCLM7DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM7DayNight))
// LM 7: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM7AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM7AdaptiveActive))
// LM 8: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM8AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM8AmbientLux))
// LM 8: Tag/Nacht
#define KoLMG_LMGHCLM8DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM8DayNight))
// LM 8: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM8AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM8AdaptiveActive))
// LM 9: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM9StatusBrightness            (knx.getGroupObject(LMG_KoLMGHCLM9StatusBrightness))
// LM 9: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM9StatusColorTemp             (knx.getGroupObject(LMG_KoLMGHCLM9StatusColorTemp))
// LM 9: Sperre
#define KoLMG_LMGHCLM9Lock                        (knx.getGroupObject(LMG_KoLMGHCLM9Lock))
// LM 9: Status Sperre
#define KoLMG_LMGHCLM9LockStatus                  (knx.getGroupObject(LMG_KoLMGHCLM9LockStatus))
// LM 9: Sommer aktiv
#define KoLMG_LMGHCLM9SummerActive                (knx.getGroupObject(LMG_KoLMGHCLM9SummerActive))
// LM 9: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM9AmbientLux                  (knx.getGroupObject(LMG_KoLMGHCLM9AmbientLux))
// LM 9: Tag/Nacht
#define KoLMG_LMGHCLM9DayNight                    (knx.getGroupObject(LMG_KoLMGHCLM9DayNight))
// LM 9: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM9AdaptiveActive              (knx.getGroupObject(LMG_KoLMGHCLM9AdaptiveActive))
// LM 10: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM10StatusBrightness           (knx.getGroupObject(LMG_KoLMGHCLM10StatusBrightness))
// LM 10: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM10StatusColorTemp            (knx.getGroupObject(LMG_KoLMGHCLM10StatusColorTemp))
// LM 10: Sperre
#define KoLMG_LMGHCLM10Lock                       (knx.getGroupObject(LMG_KoLMGHCLM10Lock))
// LM 10: Status Sperre
#define KoLMG_LMGHCLM10LockStatus                 (knx.getGroupObject(LMG_KoLMGHCLM10LockStatus))
// LM 10: Sommer aktiv
#define KoLMG_LMGHCLM10SummerActive               (knx.getGroupObject(LMG_KoLMGHCLM10SummerActive))
// LM 10: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM10AmbientLux                 (knx.getGroupObject(LMG_KoLMGHCLM10AmbientLux))
// LM 10: Tag/Nacht
#define KoLMG_LMGHCLM10DayNight                   (knx.getGroupObject(LMG_KoLMGHCLM10DayNight))
// LM 10: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM10AdaptiveActive             (knx.getGroupObject(LMG_KoLMGHCLM10AdaptiveActive))
// LM 11: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM11StatusBrightness           (knx.getGroupObject(LMG_KoLMGHCLM11StatusBrightness))
// LM 11: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM11StatusColorTemp            (knx.getGroupObject(LMG_KoLMGHCLM11StatusColorTemp))
// LM 11: Sperre
#define KoLMG_LMGHCLM11Lock                       (knx.getGroupObject(LMG_KoLMGHCLM11Lock))
// LM 11: Status Sperre
#define KoLMG_LMGHCLM11LockStatus                 (knx.getGroupObject(LMG_KoLMGHCLM11LockStatus))
// LM 11: Sommer aktiv
#define KoLMG_LMGHCLM11SummerActive               (knx.getGroupObject(LMG_KoLMGHCLM11SummerActive))
// LM 11: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM11AmbientLux                 (knx.getGroupObject(LMG_KoLMGHCLM11AmbientLux))
// LM 11: Tag/Nacht
#define KoLMG_LMGHCLM11DayNight                   (knx.getGroupObject(LMG_KoLMGHCLM11DayNight))
// LM 11: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM11AdaptiveActive             (knx.getGroupObject(LMG_KoLMGHCLM11AdaptiveActive))
// LM 12: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM12StatusBrightness           (knx.getGroupObject(LMG_KoLMGHCLM12StatusBrightness))
// LM 12: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM12StatusColorTemp            (knx.getGroupObject(LMG_KoLMGHCLM12StatusColorTemp))
// LM 12: Sperre
#define KoLMG_LMGHCLM12Lock                       (knx.getGroupObject(LMG_KoLMGHCLM12Lock))
// LM 12: Status Sperre
#define KoLMG_LMGHCLM12LockStatus                 (knx.getGroupObject(LMG_KoLMGHCLM12LockStatus))
// LM 12: Sommer aktiv
#define KoLMG_LMGHCLM12SummerActive               (knx.getGroupObject(LMG_KoLMGHCLM12SummerActive))
// LM 12: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM12AmbientLux                 (knx.getGroupObject(LMG_KoLMGHCLM12AmbientLux))
// LM 12: Tag/Nacht
#define KoLMG_LMGHCLM12DayNight                   (knx.getGroupObject(LMG_KoLMGHCLM12DayNight))
// LM 12: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM12AdaptiveActive             (knx.getGroupObject(LMG_KoLMGHCLM12AdaptiveActive))
// LM 13: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM13StatusBrightness           (knx.getGroupObject(LMG_KoLMGHCLM13StatusBrightness))
// LM 13: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM13StatusColorTemp            (knx.getGroupObject(LMG_KoLMGHCLM13StatusColorTemp))
// LM 13: Sperre
#define KoLMG_LMGHCLM13Lock                       (knx.getGroupObject(LMG_KoLMGHCLM13Lock))
// LM 13: Status Sperre
#define KoLMG_LMGHCLM13LockStatus                 (knx.getGroupObject(LMG_KoLMGHCLM13LockStatus))
// LM 13: Sommer aktiv
#define KoLMG_LMGHCLM13SummerActive               (knx.getGroupObject(LMG_KoLMGHCLM13SummerActive))
// LM 13: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM13AmbientLux                 (knx.getGroupObject(LMG_KoLMGHCLM13AmbientLux))
// LM 13: Tag/Nacht
#define KoLMG_LMGHCLM13DayNight                   (knx.getGroupObject(LMG_KoLMGHCLM13DayNight))
// LM 13: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM13AdaptiveActive             (knx.getGroupObject(LMG_KoLMGHCLM13AdaptiveActive))
// LM 14: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM14StatusBrightness           (knx.getGroupObject(LMG_KoLMGHCLM14StatusBrightness))
// LM 14: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM14StatusColorTemp            (knx.getGroupObject(LMG_KoLMGHCLM14StatusColorTemp))
// LM 14: Sperre
#define KoLMG_LMGHCLM14Lock                       (knx.getGroupObject(LMG_KoLMGHCLM14Lock))
// LM 14: Status Sperre
#define KoLMG_LMGHCLM14LockStatus                 (knx.getGroupObject(LMG_KoLMGHCLM14LockStatus))
// LM 14: Sommer aktiv
#define KoLMG_LMGHCLM14SummerActive               (knx.getGroupObject(LMG_KoLMGHCLM14SummerActive))
// LM 14: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM14AmbientLux                 (knx.getGroupObject(LMG_KoLMGHCLM14AmbientLux))
// LM 14: Tag/Nacht
#define KoLMG_LMGHCLM14DayNight                   (knx.getGroupObject(LMG_KoLMGHCLM14DayNight))
// LM 14: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM14AdaptiveActive             (knx.getGroupObject(LMG_KoLMGHCLM14AdaptiveActive))
// LM 15: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM15StatusBrightness           (knx.getGroupObject(LMG_KoLMGHCLM15StatusBrightness))
// LM 15: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM15StatusColorTemp            (knx.getGroupObject(LMG_KoLMGHCLM15StatusColorTemp))
// LM 15: Sperre
#define KoLMG_LMGHCLM15Lock                       (knx.getGroupObject(LMG_KoLMGHCLM15Lock))
// LM 15: Status Sperre
#define KoLMG_LMGHCLM15LockStatus                 (knx.getGroupObject(LMG_KoLMGHCLM15LockStatus))
// LM 15: Sommer aktiv
#define KoLMG_LMGHCLM15SummerActive               (knx.getGroupObject(LMG_KoLMGHCLM15SummerActive))
// LM 15: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM15AmbientLux                 (knx.getGroupObject(LMG_KoLMGHCLM15AmbientLux))
// LM 15: Tag/Nacht
#define KoLMG_LMGHCLM15DayNight                   (knx.getGroupObject(LMG_KoLMGHCLM15DayNight))
// LM 15: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM15AdaptiveActive             (knx.getGroupObject(LMG_KoLMGHCLM15AdaptiveActive))
// LM 16: Status-Soll-Helligkeit
#define KoLMG_LMGHCLM16StatusBrightness           (knx.getGroupObject(LMG_KoLMGHCLM16StatusBrightness))
// LM 16: Status-Soll-Farbtemperatur
#define KoLMG_LMGHCLM16StatusColorTemp            (knx.getGroupObject(LMG_KoLMGHCLM16StatusColorTemp))
// LM 16: Sperre
#define KoLMG_LMGHCLM16Lock                       (knx.getGroupObject(LMG_KoLMGHCLM16Lock))
// LM 16: Status Sperre
#define KoLMG_LMGHCLM16LockStatus                 (knx.getGroupObject(LMG_KoLMGHCLM16LockStatus))
// LM 16: Sommer aktiv
#define KoLMG_LMGHCLM16SummerActive               (knx.getGroupObject(LMG_KoLMGHCLM16SummerActive))
// LM 16: Umgebungslicht (Lux)
#define KoLMG_LMGHCLM16AmbientLux                 (knx.getGroupObject(LMG_KoLMGHCLM16AmbientLux))
// LM 16: Tag/Nacht
#define KoLMG_LMGHCLM16DayNight                   (knx.getGroupObject(LMG_KoLMGHCLM16DayNight))
// LM 16: Adaptive Helligkeit aktiv
#define KoLMG_LMGHCLM16AdaptiveActive             (knx.getGroupObject(LMG_KoLMGHCLM16AdaptiveActive))

#define LOG_VisibleChannels                     27012      // uint8_t
#define LOG_VacationKo                          27013      // 1 Bit, Bit 7
#define     LOG_VacationKoMask 0x80
#define     LOG_VacationKoShift 7
#define LOG_HolidayKo                           27013      // 1 Bit, Bit 6
#define     LOG_HolidayKoMask 0x40
#define     LOG_HolidayKoShift 6
#define LOG_VacationRead                        27013      // 1 Bit, Bit 5
#define     LOG_VacationReadMask 0x20
#define     LOG_VacationReadShift 5
#define LOG_HolidaySend                         27013      // 1 Bit, Bit 4
#define     LOG_HolidaySendMask 0x10
#define     LOG_HolidaySendShift 4
#define LOG_Neujahr                             27014      // 1 Bit, Bit 7
#define     LOG_NeujahrMask 0x80
#define     LOG_NeujahrShift 7
#define LOG_DreiKoenige                         27014      // 1 Bit, Bit 6
#define     LOG_DreiKoenigeMask 0x40
#define     LOG_DreiKoenigeShift 6
#define LOG_Weiberfastnacht                     27014      // 1 Bit, Bit 5
#define     LOG_WeiberfastnachtMask 0x20
#define     LOG_WeiberfastnachtShift 5
#define LOG_Rosenmontag                         27014      // 1 Bit, Bit 4
#define     LOG_RosenmontagMask 0x10
#define     LOG_RosenmontagShift 4
#define LOG_Fastnachtsdienstag                  27014      // 1 Bit, Bit 3
#define     LOG_FastnachtsdienstagMask 0x08
#define     LOG_FastnachtsdienstagShift 3
#define LOG_Aschermittwoch                      27014      // 1 Bit, Bit 2
#define     LOG_AschermittwochMask 0x04
#define     LOG_AschermittwochShift 2
#define LOG_Frauentag                           27014      // 1 Bit, Bit 1
#define     LOG_FrauentagMask 0x02
#define     LOG_FrauentagShift 1
#define LOG_Gruendonnerstag                     27014      // 1 Bit, Bit 0
#define     LOG_GruendonnerstagMask 0x01
#define     LOG_GruendonnerstagShift 0
#define LOG_Karfreitag                          27015      // 1 Bit, Bit 7
#define     LOG_KarfreitagMask 0x80
#define     LOG_KarfreitagShift 7
#define LOG_Ostersonntag                        27015      // 1 Bit, Bit 6
#define     LOG_OstersonntagMask 0x40
#define     LOG_OstersonntagShift 6
#define LOG_Ostermontag                         27015      // 1 Bit, Bit 5
#define     LOG_OstermontagMask 0x20
#define     LOG_OstermontagShift 5
#define LOG_TagDerArbeit                        27015      // 1 Bit, Bit 4
#define     LOG_TagDerArbeitMask 0x10
#define     LOG_TagDerArbeitShift 4
#define LOG_Himmelfahrt                         27015      // 1 Bit, Bit 3
#define     LOG_HimmelfahrtMask 0x08
#define     LOG_HimmelfahrtShift 3
#define LOG_Pfingstsonntag                      27015      // 1 Bit, Bit 2
#define     LOG_PfingstsonntagMask 0x04
#define     LOG_PfingstsonntagShift 2
#define LOG_Pfingstmontag                       27015      // 1 Bit, Bit 1
#define     LOG_PfingstmontagMask 0x02
#define     LOG_PfingstmontagShift 1
#define LOG_Fronleichnam                        27015      // 1 Bit, Bit 0
#define     LOG_FronleichnamMask 0x01
#define     LOG_FronleichnamShift 0
#define LOG_Friedensfest                        27016      // 1 Bit, Bit 7
#define     LOG_FriedensfestMask 0x80
#define     LOG_FriedensfestShift 7
#define LOG_MariaHimmelfahrt                    27016      // 1 Bit, Bit 6
#define     LOG_MariaHimmelfahrtMask 0x40
#define     LOG_MariaHimmelfahrtShift 6
#define LOG_DeutscheEinheit                     27016      // 1 Bit, Bit 5
#define     LOG_DeutscheEinheitMask 0x20
#define     LOG_DeutscheEinheitShift 5
#define LOG_Reformationstag                     27016      // 1 Bit, Bit 4
#define     LOG_ReformationstagMask 0x10
#define     LOG_ReformationstagShift 4
#define LOG_Allerheiligen                       27016      // 1 Bit, Bit 3
#define     LOG_AllerheiligenMask 0x08
#define     LOG_AllerheiligenShift 3
#define LOG_BussBettag                          27016      // 1 Bit, Bit 2
#define     LOG_BussBettagMask 0x04
#define     LOG_BussBettagShift 2
#define LOG_Advent1                             27016      // 1 Bit, Bit 1
#define     LOG_Advent1Mask 0x02
#define     LOG_Advent1Shift 1
#define LOG_Advent2                             27016      // 1 Bit, Bit 0
#define     LOG_Advent2Mask 0x01
#define     LOG_Advent2Shift 0
#define LOG_Advent3                             27017      // 1 Bit, Bit 7
#define     LOG_Advent3Mask 0x80
#define     LOG_Advent3Shift 7
#define LOG_Advent4                             27017      // 1 Bit, Bit 6
#define     LOG_Advent4Mask 0x40
#define     LOG_Advent4Shift 6
#define LOG_Heiligabend                         27017      // 1 Bit, Bit 5
#define     LOG_HeiligabendMask 0x20
#define     LOG_HeiligabendShift 5
#define LOG_Weihnachtstag1                      27017      // 1 Bit, Bit 4
#define     LOG_Weihnachtstag1Mask 0x10
#define     LOG_Weihnachtstag1Shift 4
#define LOG_Weihnachtstag2                      27017      // 1 Bit, Bit 3
#define     LOG_Weihnachtstag2Mask 0x08
#define     LOG_Weihnachtstag2Shift 3
#define LOG_Silvester                           27017      // 1 Bit, Bit 2
#define     LOG_SilvesterMask 0x04
#define     LOG_SilvesterShift 2
#define LOG_Nationalfeiertag                    27017      // 1 Bit, Bit 1
#define     LOG_NationalfeiertagMask 0x02
#define     LOG_NationalfeiertagShift 1
#define LOG_MariaEmpfaengnis                    27017      // 1 Bit, Bit 0
#define     LOG_MariaEmpfaengnisMask 0x01
#define     LOG_MariaEmpfaengnisShift 0
#define LOG_NationalfeiertagSchweiz             27018      // 1 Bit, Bit 7
#define     LOG_NationalfeiertagSchweizMask 0x80
#define     LOG_NationalfeiertagSchweizShift 7
#define LOG_Totensonntag                        27018      // 1 Bit, Bit 6
#define     LOG_TotensonntagMask 0x40
#define     LOG_TotensonntagShift 6
#define LOG_Weltkindertag                       27018      // 1 Bit, Bit 5
#define     LOG_WeltkindertagMask 0x20
#define     LOG_WeltkindertagShift 5
#define LOG_UserFormula1                        27019      // char*, 99 Byte
#define     LOG_UserFormula1Length 99
#define LOG_UserFormula1Active                  27118      // 1 Bit, Bit 7
#define     LOG_UserFormula1ActiveMask 0x80
#define     LOG_UserFormula1ActiveShift 7
#define LOG_UserFormula2                        27119      // char*, 99 Byte
#define     LOG_UserFormula2Length 99
#define LOG_UserFormula2Active                  27218      // 1 Bit, Bit 7
#define     LOG_UserFormula2ActiveMask 0x80
#define     LOG_UserFormula2ActiveShift 7
#define LOG_UserFormula3                        27219      // char*, 99 Byte
#define     LOG_UserFormula3Length 99
#define LOG_UserFormula3Active                  27318      // 1 Bit, Bit 7
#define     LOG_UserFormula3ActiveMask 0x80
#define     LOG_UserFormula3ActiveShift 7
#define LOG_UserFormula4                        27319      // char*, 99 Byte
#define     LOG_UserFormula4Length 99
#define LOG_UserFormula4Active                  27418      // 1 Bit, Bit 7
#define     LOG_UserFormula4ActiveMask 0x80
#define     LOG_UserFormula4ActiveShift 7
#define LOG_UserFormula5                        27419      // char*, 99 Byte
#define     LOG_UserFormula5Length 99
#define LOG_UserFormula5Active                  27518      // 1 Bit, Bit 7
#define     LOG_UserFormula5ActiveMask 0x80
#define     LOG_UserFormula5ActiveShift 7
#define LOG_UserFormula6                        27519      // char*, 99 Byte
#define     LOG_UserFormula6Length 99
#define LOG_UserFormula6Active                  27618      // 1 Bit, Bit 7
#define     LOG_UserFormula6ActiveMask 0x80
#define     LOG_UserFormula6ActiveShift 7
#define LOG_UserFormula7                        27619      // char*, 99 Byte
#define     LOG_UserFormula7Length 99
#define LOG_UserFormula7Active                  27718      // 1 Bit, Bit 7
#define     LOG_UserFormula7ActiveMask 0x80
#define     LOG_UserFormula7ActiveShift 7
#define LOG_UserFormula8                        27719      // char*, 99 Byte
#define     LOG_UserFormula8Length 99
#define LOG_UserFormula8Active                  27818      // 1 Bit, Bit 7
#define     LOG_UserFormula8ActiveMask 0x80
#define     LOG_UserFormula8ActiveShift 7
#define LOG_UserFormula9                        27819      // char*, 99 Byte
#define     LOG_UserFormula9Length 99
#define LOG_UserFormula9Active                  27918      // 1 Bit, Bit 7
#define     LOG_UserFormula9ActiveMask 0x80
#define     LOG_UserFormula9ActiveShift 7
#define LOG_UserFormula10                       27919      // char*, 99 Byte
#define     LOG_UserFormula10Length 99
#define LOG_UserFormula10Active                 28018      // 1 Bit, Bit 7
#define     LOG_UserFormula10ActiveMask 0x80
#define     LOG_UserFormula10ActiveShift 7
#define LOG_UserFormula11                       28019      // char*, 99 Byte
#define     LOG_UserFormula11Length 99
#define LOG_UserFormula11Active                 28118      // 1 Bit, Bit 7
#define     LOG_UserFormula11ActiveMask 0x80
#define     LOG_UserFormula11ActiveShift 7
#define LOG_UserFormula12                       28119      // char*, 99 Byte
#define     LOG_UserFormula12Length 99
#define LOG_UserFormula12Active                 28218      // 1 Bit, Bit 7
#define     LOG_UserFormula12ActiveMask 0x80
#define     LOG_UserFormula12ActiveShift 7
#define LOG_UserFormula13                       28219      // char*, 99 Byte
#define     LOG_UserFormula13Length 99
#define LOG_UserFormula13Active                 28318      // 1 Bit, Bit 7
#define     LOG_UserFormula13ActiveMask 0x80
#define     LOG_UserFormula13ActiveShift 7
#define LOG_UserFormula14                       28319      // char*, 99 Byte
#define     LOG_UserFormula14Length 99
#define LOG_UserFormula14Active                 28418      // 1 Bit, Bit 7
#define     LOG_UserFormula14ActiveMask 0x80
#define     LOG_UserFormula14ActiveShift 7
#define LOG_UserFormula15                       28419      // char*, 99 Byte
#define     LOG_UserFormula15Length 99
#define LOG_UserFormula15Active                 28518      // 1 Bit, Bit 7
#define     LOG_UserFormula15ActiveMask 0x80
#define     LOG_UserFormula15ActiveShift 7
#define LOG_UserFormula16                       28519      // char*, 99 Byte
#define     LOG_UserFormula16Length 99
#define LOG_UserFormula16Active                 28618      // 1 Bit, Bit 7
#define     LOG_UserFormula16ActiveMask 0x80
#define     LOG_UserFormula16ActiveShift 7
#define LOG_UserFormula17                       28619      // char*, 99 Byte
#define     LOG_UserFormula17Length 99
#define LOG_UserFormula17Active                 28718      // 1 Bit, Bit 7
#define     LOG_UserFormula17ActiveMask 0x80
#define     LOG_UserFormula17ActiveShift 7
#define LOG_UserFormula18                       28719      // char*, 99 Byte
#define     LOG_UserFormula18Length 99
#define LOG_UserFormula18Active                 28818      // 1 Bit, Bit 7
#define     LOG_UserFormula18ActiveMask 0x80
#define     LOG_UserFormula18ActiveShift 7
#define LOG_UserFormula19                       28819      // char*, 99 Byte
#define     LOG_UserFormula19Length 99
#define LOG_UserFormula19Active                 28918      // 1 Bit, Bit 7
#define     LOG_UserFormula19ActiveMask 0x80
#define     LOG_UserFormula19ActiveShift 7
#define LOG_UserFormula20                       28919      // char*, 99 Byte
#define     LOG_UserFormula20Length 99
#define LOG_UserFormula20Active                 29018      // 1 Bit, Bit 7
#define     LOG_UserFormula20ActiveMask 0x80
#define     LOG_UserFormula20ActiveShift 7
#define LOG_UserFormula21                       29019      // char*, 99 Byte
#define     LOG_UserFormula21Length 99
#define LOG_UserFormula21Active                 29118      // 1 Bit, Bit 7
#define     LOG_UserFormula21ActiveMask 0x80
#define     LOG_UserFormula21ActiveShift 7
#define LOG_UserFormula22                       29119      // char*, 99 Byte
#define     LOG_UserFormula22Length 99
#define LOG_UserFormula22Active                 29218      // 1 Bit, Bit 7
#define     LOG_UserFormula22ActiveMask 0x80
#define     LOG_UserFormula22ActiveShift 7
#define LOG_UserFormula23                       29219      // char*, 99 Byte
#define     LOG_UserFormula23Length 99
#define LOG_UserFormula23Active                 29318      // 1 Bit, Bit 7
#define     LOG_UserFormula23ActiveMask 0x80
#define     LOG_UserFormula23ActiveShift 7
#define LOG_UserFormula24                       29319      // char*, 99 Byte
#define     LOG_UserFormula24Length 99
#define LOG_UserFormula24Active                 29418      // 1 Bit, Bit 7
#define     LOG_UserFormula24ActiveMask 0x80
#define     LOG_UserFormula24ActiveShift 7
#define LOG_UserFormula25                       29419      // char*, 99 Byte
#define     LOG_UserFormula25Length 99
#define LOG_UserFormula25Active                 29518      // 1 Bit, Bit 7
#define     LOG_UserFormula25ActiveMask 0x80
#define     LOG_UserFormula25ActiveShift 7
#define LOG_UserFormula26                       29519      // char*, 99 Byte
#define     LOG_UserFormula26Length 99
#define LOG_UserFormula26Active                 29618      // 1 Bit, Bit 7
#define     LOG_UserFormula26ActiveMask 0x80
#define     LOG_UserFormula26ActiveShift 7
#define LOG_UserFormula27                       29619      // char*, 99 Byte
#define     LOG_UserFormula27Length 99
#define LOG_UserFormula27Active                 29718      // 1 Bit, Bit 7
#define     LOG_UserFormula27ActiveMask 0x80
#define     LOG_UserFormula27ActiveShift 7
#define LOG_UserFormula28                       29719      // char*, 99 Byte
#define     LOG_UserFormula28Length 99
#define LOG_UserFormula28Active                 29818      // 1 Bit, Bit 7
#define     LOG_UserFormula28ActiveMask 0x80
#define     LOG_UserFormula28ActiveShift 7
#define LOG_UserFormula29                       29819      // char*, 99 Byte
#define     LOG_UserFormula29Length 99
#define LOG_UserFormula29Active                 29918      // 1 Bit, Bit 7
#define     LOG_UserFormula29ActiveMask 0x80
#define     LOG_UserFormula29ActiveShift 7
#define LOG_UserFormula30                       29919      // char*, 99 Byte
#define     LOG_UserFormula30Length 99
#define LOG_UserFormula30Active                 30018      // 1 Bit, Bit 7
#define     LOG_UserFormula30ActiveMask 0x80
#define     LOG_UserFormula30ActiveShift 7

// Verfügbare Kanäle
#define ParamLOG_VisibleChannels                     (knx.paramByte(LOG_VisibleChannels))
// Urlaubsbehandlung aktivieren?
#define ParamLOG_VacationKo                          ((bool)(knx.paramByte(LOG_VacationKo) & LOG_VacationKoMask))
// Feiertage auf dem Bus verfügbar machen?
#define ParamLOG_HolidayKo                           ((bool)(knx.paramByte(LOG_HolidayKo) & LOG_HolidayKoMask))
// Nach Neustart Urlaubsinfo lesen?
#define ParamLOG_VacationRead                        ((bool)(knx.paramByte(LOG_VacationRead) & LOG_VacationReadMask))
// Nach Neuberechnung Feiertagsinfo senden?
#define ParamLOG_HolidaySend                         ((bool)(knx.paramByte(LOG_HolidaySend) & LOG_HolidaySendMask))
// 1. Neujahr
#define ParamLOG_Neujahr                             ((bool)(knx.paramByte(LOG_Neujahr) & LOG_NeujahrMask))
// 2. Heilige Drei Könige
#define ParamLOG_DreiKoenige                         ((bool)(knx.paramByte(LOG_DreiKoenige) & LOG_DreiKoenigeMask))
// 3. Weiberfastnacht
#define ParamLOG_Weiberfastnacht                     ((bool)(knx.paramByte(LOG_Weiberfastnacht) & LOG_WeiberfastnachtMask))
// 4. Rosenmontag
#define ParamLOG_Rosenmontag                         ((bool)(knx.paramByte(LOG_Rosenmontag) & LOG_RosenmontagMask))
// 5. Fastnachtsdienstag
#define ParamLOG_Fastnachtsdienstag                  ((bool)(knx.paramByte(LOG_Fastnachtsdienstag) & LOG_FastnachtsdienstagMask))
// 6. Aschermittwoch
#define ParamLOG_Aschermittwoch                      ((bool)(knx.paramByte(LOG_Aschermittwoch) & LOG_AschermittwochMask))
// 7. Frauentag
#define ParamLOG_Frauentag                           ((bool)(knx.paramByte(LOG_Frauentag) & LOG_FrauentagMask))
// 8. Gründonnerstag
#define ParamLOG_Gruendonnerstag                     ((bool)(knx.paramByte(LOG_Gruendonnerstag) & LOG_GruendonnerstagMask))
// 9. Karfreitag
#define ParamLOG_Karfreitag                          ((bool)(knx.paramByte(LOG_Karfreitag) & LOG_KarfreitagMask))
// 10. Ostersonntag
#define ParamLOG_Ostersonntag                        ((bool)(knx.paramByte(LOG_Ostersonntag) & LOG_OstersonntagMask))
// 11. Ostermontag
#define ParamLOG_Ostermontag                         ((bool)(knx.paramByte(LOG_Ostermontag) & LOG_OstermontagMask))
// 12. Tag der Arbeit
#define ParamLOG_TagDerArbeit                        ((bool)(knx.paramByte(LOG_TagDerArbeit) & LOG_TagDerArbeitMask))
// 13. Christi Himmelfahrt
#define ParamLOG_Himmelfahrt                         ((bool)(knx.paramByte(LOG_Himmelfahrt) & LOG_HimmelfahrtMask))
// 14. Pfingstsonntag
#define ParamLOG_Pfingstsonntag                      ((bool)(knx.paramByte(LOG_Pfingstsonntag) & LOG_PfingstsonntagMask))
// 15. Pfingstmontag
#define ParamLOG_Pfingstmontag                       ((bool)(knx.paramByte(LOG_Pfingstmontag) & LOG_PfingstmontagMask))
// 16. Fronleichnam
#define ParamLOG_Fronleichnam                        ((bool)(knx.paramByte(LOG_Fronleichnam) & LOG_FronleichnamMask))
// 17. Hohes Friedensfest
#define ParamLOG_Friedensfest                        ((bool)(knx.paramByte(LOG_Friedensfest) & LOG_FriedensfestMask))
// 18. Mariä Himmelfahrt
#define ParamLOG_MariaHimmelfahrt                    ((bool)(knx.paramByte(LOG_MariaHimmelfahrt) & LOG_MariaHimmelfahrtMask))
// 19. Tag der Deutschen Einheit
#define ParamLOG_DeutscheEinheit                     ((bool)(knx.paramByte(LOG_DeutscheEinheit) & LOG_DeutscheEinheitMask))
// 20. Reformationstag
#define ParamLOG_Reformationstag                     ((bool)(knx.paramByte(LOG_Reformationstag) & LOG_ReformationstagMask))
// 21. Allerheiligen
#define ParamLOG_Allerheiligen                       ((bool)(knx.paramByte(LOG_Allerheiligen) & LOG_AllerheiligenMask))
// 22. Buß- und Bettag
#define ParamLOG_BussBettag                          ((bool)(knx.paramByte(LOG_BussBettag) & LOG_BussBettagMask))
// 23. Erster Advent
#define ParamLOG_Advent1                             ((bool)(knx.paramByte(LOG_Advent1) & LOG_Advent1Mask))
// 24. Zweiter Advent
#define ParamLOG_Advent2                             ((bool)(knx.paramByte(LOG_Advent2) & LOG_Advent2Mask))
// 25. Dritter Advent
#define ParamLOG_Advent3                             ((bool)(knx.paramByte(LOG_Advent3) & LOG_Advent3Mask))
// 26. Vierter Advent
#define ParamLOG_Advent4                             ((bool)(knx.paramByte(LOG_Advent4) & LOG_Advent4Mask))
// 27. Heiligabend
#define ParamLOG_Heiligabend                         ((bool)(knx.paramByte(LOG_Heiligabend) & LOG_HeiligabendMask))
// 28. Erster Weihnachtstag
#define ParamLOG_Weihnachtstag1                      ((bool)(knx.paramByte(LOG_Weihnachtstag1) & LOG_Weihnachtstag1Mask))
// 29. Zweiter Weihnachtstag
#define ParamLOG_Weihnachtstag2                      ((bool)(knx.paramByte(LOG_Weihnachtstag2) & LOG_Weihnachtstag2Mask))
// 30. Silvester
#define ParamLOG_Silvester                           ((bool)(knx.paramByte(LOG_Silvester) & LOG_SilvesterMask))
// 31. Nationalfeiertag (AT)
#define ParamLOG_Nationalfeiertag                    ((bool)(knx.paramByte(LOG_Nationalfeiertag) & LOG_NationalfeiertagMask))
// 32. Maria Empfängnis (AT)
#define ParamLOG_MariaEmpfaengnis                    ((bool)(knx.paramByte(LOG_MariaEmpfaengnis) & LOG_MariaEmpfaengnisMask))
// 33. Nationalfeiertag (CH)
#define ParamLOG_NationalfeiertagSchweiz             ((bool)(knx.paramByte(LOG_NationalfeiertagSchweiz) & LOG_NationalfeiertagSchweizMask))
// 34. Totensonntag
#define ParamLOG_Totensonntag                        ((bool)(knx.paramByte(LOG_Totensonntag) & LOG_TotensonntagMask))
// 35. Weltkindertag
#define ParamLOG_Weltkindertag                       ((bool)(knx.paramByte(LOG_Weltkindertag) & LOG_WeltkindertagMask))
// Formeldefinition
#define ParamLOG_UserFormula1                        (knx.paramData(LOG_UserFormula1))
#define ParamLOG_UserFormula1Str                     (knx.paramString(LOG_UserFormula1, LOG_UserFormula1Length))
// Benutzerformel 1 aktiv
#define ParamLOG_UserFormula1Active                  ((bool)(knx.paramByte(LOG_UserFormula1Active) & LOG_UserFormula1ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula2                        (knx.paramData(LOG_UserFormula2))
#define ParamLOG_UserFormula2Str                     (knx.paramString(LOG_UserFormula2, LOG_UserFormula2Length))
// Benutzerformel 2 aktiv
#define ParamLOG_UserFormula2Active                  ((bool)(knx.paramByte(LOG_UserFormula2Active) & LOG_UserFormula2ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula3                        (knx.paramData(LOG_UserFormula3))
#define ParamLOG_UserFormula3Str                     (knx.paramString(LOG_UserFormula3, LOG_UserFormula3Length))
// Benutzerformel 3 aktiv
#define ParamLOG_UserFormula3Active                  ((bool)(knx.paramByte(LOG_UserFormula3Active) & LOG_UserFormula3ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula4                        (knx.paramData(LOG_UserFormula4))
#define ParamLOG_UserFormula4Str                     (knx.paramString(LOG_UserFormula4, LOG_UserFormula4Length))
// Benutzerformel 4 aktiv
#define ParamLOG_UserFormula4Active                  ((bool)(knx.paramByte(LOG_UserFormula4Active) & LOG_UserFormula4ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula5                        (knx.paramData(LOG_UserFormula5))
#define ParamLOG_UserFormula5Str                     (knx.paramString(LOG_UserFormula5, LOG_UserFormula5Length))
// Benutzerformel 5 aktiv
#define ParamLOG_UserFormula5Active                  ((bool)(knx.paramByte(LOG_UserFormula5Active) & LOG_UserFormula5ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula6                        (knx.paramData(LOG_UserFormula6))
#define ParamLOG_UserFormula6Str                     (knx.paramString(LOG_UserFormula6, LOG_UserFormula6Length))
// Benutzerformel 6 aktiv
#define ParamLOG_UserFormula6Active                  ((bool)(knx.paramByte(LOG_UserFormula6Active) & LOG_UserFormula6ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula7                        (knx.paramData(LOG_UserFormula7))
#define ParamLOG_UserFormula7Str                     (knx.paramString(LOG_UserFormula7, LOG_UserFormula7Length))
// Benutzerformel 7 aktiv
#define ParamLOG_UserFormula7Active                  ((bool)(knx.paramByte(LOG_UserFormula7Active) & LOG_UserFormula7ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula8                        (knx.paramData(LOG_UserFormula8))
#define ParamLOG_UserFormula8Str                     (knx.paramString(LOG_UserFormula8, LOG_UserFormula8Length))
// Benutzerformel 8 aktiv
#define ParamLOG_UserFormula8Active                  ((bool)(knx.paramByte(LOG_UserFormula8Active) & LOG_UserFormula8ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula9                        (knx.paramData(LOG_UserFormula9))
#define ParamLOG_UserFormula9Str                     (knx.paramString(LOG_UserFormula9, LOG_UserFormula9Length))
// Benutzerformel 9 aktiv
#define ParamLOG_UserFormula9Active                  ((bool)(knx.paramByte(LOG_UserFormula9Active) & LOG_UserFormula9ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula10                       (knx.paramData(LOG_UserFormula10))
#define ParamLOG_UserFormula10Str                    (knx.paramString(LOG_UserFormula10, LOG_UserFormula10Length))
// Benutzerformel 10 aktiv
#define ParamLOG_UserFormula10Active                 ((bool)(knx.paramByte(LOG_UserFormula10Active) & LOG_UserFormula10ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula11                       (knx.paramData(LOG_UserFormula11))
#define ParamLOG_UserFormula11Str                    (knx.paramString(LOG_UserFormula11, LOG_UserFormula11Length))
// Benutzerformel 11 aktiv
#define ParamLOG_UserFormula11Active                 ((bool)(knx.paramByte(LOG_UserFormula11Active) & LOG_UserFormula11ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula12                       (knx.paramData(LOG_UserFormula12))
#define ParamLOG_UserFormula12Str                    (knx.paramString(LOG_UserFormula12, LOG_UserFormula12Length))
// Benutzerformel 12 aktiv
#define ParamLOG_UserFormula12Active                 ((bool)(knx.paramByte(LOG_UserFormula12Active) & LOG_UserFormula12ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula13                       (knx.paramData(LOG_UserFormula13))
#define ParamLOG_UserFormula13Str                    (knx.paramString(LOG_UserFormula13, LOG_UserFormula13Length))
// Benutzerformel 13 aktiv
#define ParamLOG_UserFormula13Active                 ((bool)(knx.paramByte(LOG_UserFormula13Active) & LOG_UserFormula13ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula14                       (knx.paramData(LOG_UserFormula14))
#define ParamLOG_UserFormula14Str                    (knx.paramString(LOG_UserFormula14, LOG_UserFormula14Length))
// Benutzerformel 14 aktiv
#define ParamLOG_UserFormula14Active                 ((bool)(knx.paramByte(LOG_UserFormula14Active) & LOG_UserFormula14ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula15                       (knx.paramData(LOG_UserFormula15))
#define ParamLOG_UserFormula15Str                    (knx.paramString(LOG_UserFormula15, LOG_UserFormula15Length))
// Benutzerformel 15 aktiv
#define ParamLOG_UserFormula15Active                 ((bool)(knx.paramByte(LOG_UserFormula15Active) & LOG_UserFormula15ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula16                       (knx.paramData(LOG_UserFormula16))
#define ParamLOG_UserFormula16Str                    (knx.paramString(LOG_UserFormula16, LOG_UserFormula16Length))
// Benutzerformel 16 aktiv
#define ParamLOG_UserFormula16Active                 ((bool)(knx.paramByte(LOG_UserFormula16Active) & LOG_UserFormula16ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula17                       (knx.paramData(LOG_UserFormula17))
#define ParamLOG_UserFormula17Str                    (knx.paramString(LOG_UserFormula17, LOG_UserFormula17Length))
// Benutzerformel 17 aktiv
#define ParamLOG_UserFormula17Active                 ((bool)(knx.paramByte(LOG_UserFormula17Active) & LOG_UserFormula17ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula18                       (knx.paramData(LOG_UserFormula18))
#define ParamLOG_UserFormula18Str                    (knx.paramString(LOG_UserFormula18, LOG_UserFormula18Length))
// Benutzerformel 18 aktiv
#define ParamLOG_UserFormula18Active                 ((bool)(knx.paramByte(LOG_UserFormula18Active) & LOG_UserFormula18ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula19                       (knx.paramData(LOG_UserFormula19))
#define ParamLOG_UserFormula19Str                    (knx.paramString(LOG_UserFormula19, LOG_UserFormula19Length))
// Benutzerformel 19 aktiv
#define ParamLOG_UserFormula19Active                 ((bool)(knx.paramByte(LOG_UserFormula19Active) & LOG_UserFormula19ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula20                       (knx.paramData(LOG_UserFormula20))
#define ParamLOG_UserFormula20Str                    (knx.paramString(LOG_UserFormula20, LOG_UserFormula20Length))
// Benutzerformel 20 aktiv
#define ParamLOG_UserFormula20Active                 ((bool)(knx.paramByte(LOG_UserFormula20Active) & LOG_UserFormula20ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula21                       (knx.paramData(LOG_UserFormula21))
#define ParamLOG_UserFormula21Str                    (knx.paramString(LOG_UserFormula21, LOG_UserFormula21Length))
// Benutzerformel 21 aktiv
#define ParamLOG_UserFormula21Active                 ((bool)(knx.paramByte(LOG_UserFormula21Active) & LOG_UserFormula21ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula22                       (knx.paramData(LOG_UserFormula22))
#define ParamLOG_UserFormula22Str                    (knx.paramString(LOG_UserFormula22, LOG_UserFormula22Length))
// Benutzerformel 22 aktiv
#define ParamLOG_UserFormula22Active                 ((bool)(knx.paramByte(LOG_UserFormula22Active) & LOG_UserFormula22ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula23                       (knx.paramData(LOG_UserFormula23))
#define ParamLOG_UserFormula23Str                    (knx.paramString(LOG_UserFormula23, LOG_UserFormula23Length))
// Benutzerformel 23 aktiv
#define ParamLOG_UserFormula23Active                 ((bool)(knx.paramByte(LOG_UserFormula23Active) & LOG_UserFormula23ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula24                       (knx.paramData(LOG_UserFormula24))
#define ParamLOG_UserFormula24Str                    (knx.paramString(LOG_UserFormula24, LOG_UserFormula24Length))
// Benutzerformel 24 aktiv
#define ParamLOG_UserFormula24Active                 ((bool)(knx.paramByte(LOG_UserFormula24Active) & LOG_UserFormula24ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula25                       (knx.paramData(LOG_UserFormula25))
#define ParamLOG_UserFormula25Str                    (knx.paramString(LOG_UserFormula25, LOG_UserFormula25Length))
// Benutzerformel 25 aktiv
#define ParamLOG_UserFormula25Active                 ((bool)(knx.paramByte(LOG_UserFormula25Active) & LOG_UserFormula25ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula26                       (knx.paramData(LOG_UserFormula26))
#define ParamLOG_UserFormula26Str                    (knx.paramString(LOG_UserFormula26, LOG_UserFormula26Length))
// Benutzerformel 26 aktiv
#define ParamLOG_UserFormula26Active                 ((bool)(knx.paramByte(LOG_UserFormula26Active) & LOG_UserFormula26ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula27                       (knx.paramData(LOG_UserFormula27))
#define ParamLOG_UserFormula27Str                    (knx.paramString(LOG_UserFormula27, LOG_UserFormula27Length))
// Benutzerformel 27 aktiv
#define ParamLOG_UserFormula27Active                 ((bool)(knx.paramByte(LOG_UserFormula27Active) & LOG_UserFormula27ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula28                       (knx.paramData(LOG_UserFormula28))
#define ParamLOG_UserFormula28Str                    (knx.paramString(LOG_UserFormula28, LOG_UserFormula28Length))
// Benutzerformel 28 aktiv
#define ParamLOG_UserFormula28Active                 ((bool)(knx.paramByte(LOG_UserFormula28Active) & LOG_UserFormula28ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula29                       (knx.paramData(LOG_UserFormula29))
#define ParamLOG_UserFormula29Str                    (knx.paramString(LOG_UserFormula29, LOG_UserFormula29Length))
// Benutzerformel 29 aktiv
#define ParamLOG_UserFormula29Active                 ((bool)(knx.paramByte(LOG_UserFormula29Active) & LOG_UserFormula29ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula30                       (knx.paramData(LOG_UserFormula30))
#define ParamLOG_UserFormula30Str                    (knx.paramString(LOG_UserFormula30, LOG_UserFormula30Length))
// Benutzerformel 30 aktiv
#define ParamLOG_UserFormula30Active                 ((bool)(knx.paramByte(LOG_UserFormula30Active) & LOG_UserFormula30ActiveMask))

#define LOG_KoVacation 15
#define LOG_KoHoliday1 16
#define LOG_KoHoliday2 17

// Urlaub
#define KoLOG_Vacation                            (knx.getGroupObject(LOG_KoVacation))
// Welcher Feiertag ist heute?
#define KoLOG_Holiday1                            (knx.getGroupObject(LOG_KoHoliday1))
// Welcher Feiertag ist morgen?
#define KoLOG_Holiday2                            (knx.getGroupObject(LOG_KoHoliday2))

#define LOG_ChannelCount 50

// Parameter per channel
#define LOG_ParamBlockOffset 30019
#define LOG_ParamBlockSize 89
#define LOG_ParamCalcIndex(index) (index + LOG_ParamBlockOffset + _channelIndex * LOG_ParamBlockSize)

#define LOG_fChannelDelayBase                    0      // 2 Bits, Bit 7-6
#define     LOG_fChannelDelayBaseMask 0xC0
#define     LOG_fChannelDelayBaseShift 6
#define LOG_fChannelDelayTime                    0      // 14 Bits, Bit 13-0
#define     LOG_fChannelDelayTimeMask 0x3FFF
#define     LOG_fChannelDelayTimeShift 0
#define LOG_fLogic                               2      // 8 Bits, Bit 7-0
#define LOG_fCalculate                           3      // 2 Bits, Bit 1-0
#define     LOG_fCalculateMask 0x03
#define     LOG_fCalculateShift 0
#define LOG_fDisable                             3      // 1 Bit, Bit 2
#define     LOG_fDisableMask 0x04
#define     LOG_fDisableShift 2
#define LOG_fTGate                               3      // 1 Bit, Bit 4
#define     LOG_fTGateMask 0x10
#define     LOG_fTGateShift 4
#define LOG_fOInternalOn                         3      // 1 Bit, Bit 5
#define     LOG_fOInternalOnMask 0x20
#define     LOG_fOInternalOnShift 5
#define LOG_fOInternalOff                        3      // 1 Bit, Bit 6
#define     LOG_fOInternalOffMask 0x40
#define     LOG_fOInternalOffShift 6
#define LOG_fTrigger                             4      // 8 Bits, Bit 7-0
#define LOG_fTriggerE1                           4      // 1 Bit, Bit 0
#define     LOG_fTriggerE1Mask 0x01
#define     LOG_fTriggerE1Shift 0
#define LOG_fTriggerE2                           4      // 1 Bit, Bit 1
#define     LOG_fTriggerE2Mask 0x02
#define     LOG_fTriggerE2Shift 1
#define LOG_fTriggerI1                           4      // 1 Bit, Bit 2
#define     LOG_fTriggerI1Mask 0x04
#define     LOG_fTriggerI1Shift 2
#define LOG_fTriggerI2                           4      // 1 Bit, Bit 3
#define     LOG_fTriggerI2Mask 0x08
#define     LOG_fTriggerI2Shift 3
#define LOG_fTriggerTime                         4      // 8 Bits, Bit 7-0
#define LOG_fTriggerGateClose                    5      // 2 Bits, Bit 7-6
#define     LOG_fTriggerGateCloseMask 0xC0
#define     LOG_fTriggerGateCloseShift 6
#define LOG_fTriggerGateOpen                     5      // 2 Bits, Bit 5-4
#define     LOG_fTriggerGateOpenMask 0x30
#define     LOG_fTriggerGateOpenShift 4
#define LOG_fE1ConvertInt                        6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertIntMask 0xF0
#define     LOG_fE1ConvertIntShift 4
#define LOG_fE1Convert                           6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertMask 0xF0
#define     LOG_fE1ConvertShift 4
#define LOG_fE1ConvertFloat                      6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertFloatMask 0xF0
#define     LOG_fE1ConvertFloatShift 4
#define LOG_fE1ConvertSpecial                    6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertSpecialMask 0xF0
#define     LOG_fE1ConvertSpecialShift 4
#define LOG_fE1ConvertBool                       6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertBoolMask 0xF0
#define     LOG_fE1ConvertBoolShift 4
#define LOG_fE1                                  6      // 2 Bits, Bit 1-0
#define     LOG_fE1Mask 0x03
#define     LOG_fE1Shift 0
#define LOG_fE1Dpt                               7      // 8 Bits, Bit 7-0
#define LOG_fE1RepeatBase                        8      // 2 Bits, Bit 7-6
#define     LOG_fE1RepeatBaseMask 0xC0
#define     LOG_fE1RepeatBaseShift 6
#define LOG_fE1RepeatTime                        8      // 14 Bits, Bit 13-0
#define     LOG_fE1RepeatTimeMask 0x3FFF
#define     LOG_fE1RepeatTimeShift 0
#define LOG_fE1OtherKO                          10      // uint16_t
#define LOG_fE1OtherKORel                       10      // int16_t
#define LOG_fE1Default                          12      // 2 Bits, Bit 1-0
#define     LOG_fE1DefaultMask 0x03
#define     LOG_fE1DefaultShift 0
#define LOG_fE1DefaultExt                       12      // 2 Bits, Bit 1-0
#define     LOG_fE1DefaultExtMask 0x03
#define     LOG_fE1DefaultExtShift 0
#define LOG_fE1DefaultEEPROM                    12      // 1 Bit, Bit 2
#define     LOG_fE1DefaultEEPROMMask 0x04
#define     LOG_fE1DefaultEEPROMShift 2
#define LOG_fE1DefaultRepeat                    12      // 1 Bit, Bit 3
#define     LOG_fE1DefaultRepeatMask 0x08
#define     LOG_fE1DefaultRepeatShift 3
#define LOG_fE1UseOtherKO                       12      // 2 Bits, Bit 5-4
#define     LOG_fE1UseOtherKOMask 0x30
#define     LOG_fE1UseOtherKOShift 4
#define LOG_fE1LowDelta                         13      // int32_t
#define LOG_fE1HighDelta                        17      // int32_t
#define LOG_fE1LowDeltaFloat                    13      // float (4 Byte)
#define LOG_fE1HighDeltaFloat                   17      // float (4 Byte)
#define LOG_fE1LowDeltaDouble                   13      // float (4 Byte)
#define LOG_fE1HighDeltaDouble                  17      // float (4 Byte)
#define LOG_fE1Low0Valid                        20      // 1 Bit, Bit 7
#define     LOG_fE1Low0ValidMask 0x80
#define     LOG_fE1Low0ValidShift 7
#define LOG_fE1Low1Valid                        20      // 1 Bit, Bit 6
#define     LOG_fE1Low1ValidMask 0x40
#define     LOG_fE1Low1ValidShift 6
#define LOG_fE1Low2Valid                        20      // 1 Bit, Bit 5
#define     LOG_fE1Low2ValidMask 0x20
#define     LOG_fE1Low2ValidShift 5
#define LOG_fE1Low3Valid                        20      // 1 Bit, Bit 4
#define     LOG_fE1Low3ValidMask 0x10
#define     LOG_fE1Low3ValidShift 4
#define LOG_fE1Low4Valid                        20      // 1 Bit, Bit 3
#define     LOG_fE1Low4ValidMask 0x08
#define     LOG_fE1Low4ValidShift 3
#define LOG_fE1Low5Valid                        20      // 1 Bit, Bit 2
#define     LOG_fE1Low5ValidMask 0x04
#define     LOG_fE1Low5ValidShift 2
#define LOG_fE1Low6Valid                        20      // 1 Bit, Bit 1
#define     LOG_fE1Low6ValidMask 0x02
#define     LOG_fE1Low6ValidShift 1
#define LOG_fE1Low0Dpt2                         13      // 8 Bits, Bit 7-0
#define LOG_fE1Low1Dpt2                         14      // 8 Bits, Bit 7-0
#define LOG_fE1Low2Dpt2                         15      // 8 Bits, Bit 7-0
#define LOG_fE1Low3Dpt2                         16      // 8 Bits, Bit 7-0
#define LOG_fE1LowDpt2Fix                       13      // 8 Bits, Bit 7-0
#define LOG_fE1Low0Dpt3Dir                      13      // 5 Bits, Bit 7-3
#define     LOG_fE1Low0Dpt3DirMask 0xF8
#define     LOG_fE1Low0Dpt3DirShift 3
#define LOG_fE1Low0Dpt3Dim                      13      // 3 Bits, Bit 2-0
#define     LOG_fE1Low0Dpt3DimMask 0x07
#define     LOG_fE1Low0Dpt3DimShift 0
#define LOG_fE1Low1Dpt3Dir                      14      // 5 Bits, Bit 7-3
#define     LOG_fE1Low1Dpt3DirMask 0xF8
#define     LOG_fE1Low1Dpt3DirShift 3
#define LOG_fE1Low1Dpt3Dim                      14      // 3 Bits, Bit 2-0
#define     LOG_fE1Low1Dpt3DimMask 0x07
#define     LOG_fE1Low1Dpt3DimShift 0
#define LOG_fE1Low2Dpt3Dir                      15      // 5 Bits, Bit 7-3
#define     LOG_fE1Low2Dpt3DirMask 0xF8
#define     LOG_fE1Low2Dpt3DirShift 3
#define LOG_fE1Low2Dpt3Dim                      15      // 3 Bits, Bit 2-0
#define     LOG_fE1Low2Dpt3DimMask 0x07
#define     LOG_fE1Low2Dpt3DimShift 0
#define LOG_fE1Low3Dpt3Dir                      16      // 5 Bits, Bit 7-3
#define     LOG_fE1Low3Dpt3DirMask 0xF8
#define     LOG_fE1Low3Dpt3DirShift 3
#define LOG_fE1Low3Dpt3Dim                      16      // 3 Bits, Bit 2-0
#define     LOG_fE1Low3Dpt3DimMask 0x07
#define     LOG_fE1Low3Dpt3DimShift 0
#define LOG_fE1LowDpt3FixDir                    13      // 5 Bits, Bit 7-3
#define     LOG_fE1LowDpt3FixDirMask 0xF8
#define     LOG_fE1LowDpt3FixDirShift 3
#define LOG_fE1LowDpt3FixDim                    13      // 3 Bits, Bit 2-0
#define     LOG_fE1LowDpt3FixDimMask 0x07
#define     LOG_fE1LowDpt3FixDimShift 0
#define LOG_fE1LowDpt5                          13      // uint8_t
#define LOG_fE1HighDpt5                         17      // uint8_t
#define LOG_fE1Low0Dpt5In                       13      // uint8_t
#define LOG_fE1Low1Dpt5In                       14      // uint8_t
#define LOG_fE1Low2Dpt5In                       15      // uint8_t
#define LOG_fE1Low3Dpt5In                       16      // uint8_t
#define LOG_fE1Low4Dpt5In                       17      // uint8_t
#define LOG_fE1Low5Dpt5In                       18      // uint8_t
#define LOG_fE1Low6Dpt5In                       19      // uint8_t
#define LOG_fE1LowDpt5Fix                       13      // uint8_t
#define LOG_fE1LowDpt5001                       13      // uint8_t
#define LOG_fE1HighDpt5001                      17      // uint8_t
#define LOG_fE1Low0Dpt5xIn                      13      // uint8_t
#define LOG_fE1Low1Dpt5xIn                      14      // uint8_t
#define LOG_fE1Low2Dpt5xIn                      15      // uint8_t
#define LOG_fE1Low3Dpt5xIn                      16      // uint8_t
#define LOG_fE1Low4Dpt5xIn                      17      // uint8_t
#define LOG_fE1Low5Dpt5xIn                      18      // uint8_t
#define LOG_fE1Low6Dpt5xIn                      19      // uint8_t
#define LOG_fE1LowDpt5xFix                      13      // uint8_t
#define LOG_fE1LowDpt6                          13      // int8_t
#define LOG_fE1HighDpt6                         17      // int8_t
#define LOG_fE1Low0Dpt6In                       13      // int8_t
#define LOG_fE1Low1Dpt6In                       14      // int8_t
#define LOG_fE1Low2Dpt6In                       15      // int8_t
#define LOG_fE1Low3Dpt6In                       16      // int8_t
#define LOG_fE1Low4Dpt6In                       17      // int8_t
#define LOG_fE1Low5Dpt6In                       18      // int8_t
#define LOG_fE1Low6Dpt6In                       19      // int8_t
#define LOG_fE1LowDpt6Fix                       13      // int8_t
#define LOG_fE1LowDpt7                          13      // uint16_t
#define LOG_fE1HighDpt7                         17      // uint16_t
#define LOG_fE1Low0Dpt7In                       13      // uint16_t
#define LOG_fE1Low1Dpt7In                       15      // uint16_t
#define LOG_fE1Low2Dpt7In                       17      // uint16_t
#define LOG_fE1LowDpt7Fix                       13      // uint16_t
#define LOG_fE1LowDpt8                          13      // int16_t
#define LOG_fE1HighDpt8                         17      // int16_t
#define LOG_fE1Low0Dpt8In                       13      // int16_t
#define LOG_fE1Low1Dpt8In                       15      // int16_t
#define LOG_fE1Low2Dpt8In                       17      // int16_t
#define LOG_fE1LowDpt8Fix                       13      // int16_t
#define LOG_fE1LowDpt9                          13      // float (4 Byte)
#define LOG_fE1HighDpt9                         17      // float (4 Byte)
#define LOG_fE1LowDpt9Fix                       13      // float (4 Byte)
#define LOG_fE1LowDpt12                         13      // uint32_t
#define LOG_fE1HighDpt12                        17      // uint32_t
#define LOG_fE1LowDpt12Fix                      13      // uint32_t
#define LOG_fE1LowDpt13                         13      // int32_t
#define LOG_fE1HighDpt13                        17      // int32_t
#define LOG_fE1LowDpt13Fix                      13      // int32_t
#define LOG_fE1LowDpt14                         13      // float (4 Byte)
#define LOG_fE1HighDpt14                        17      // float (4 Byte)
#define LOG_fE1LowDpt14Fix                      13      // float (4 Byte)
#define LOG_fE1Low0Dpt17                        13      // 8 Bits, Bit 7-0
#define LOG_fE1Low1Dpt17                        14      // 8 Bits, Bit 7-0
#define LOG_fE1Low2Dpt17                        15      // 8 Bits, Bit 7-0
#define LOG_fE1Low3Dpt17                        16      // 8 Bits, Bit 7-0
#define LOG_fE1Low4Dpt17                        17      // 8 Bits, Bit 7-0
#define LOG_fE1Low5Dpt17                        18      // 8 Bits, Bit 7-0
#define LOG_fE1Low6Dpt17                        19      // 8 Bits, Bit 7-0
#define LOG_fE1Low7Dpt17                        20      // 8 Bits, Bit 7-0
#define LOG_fE1LowDpt17Fix                      13      // 8 Bits, Bit 7-0
#define LOG_fE1LowDptRGB                        13      // int32_t
#define LOG_fE1HighDptRGB                       17      // int32_t
#define LOG_fE1LowDptRGBFix                     13      // int32_t
#define LOG_fE2ConvertInt                       21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertIntMask 0xF0
#define     LOG_fE2ConvertIntShift 4
#define LOG_fE2Convert                          21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertMask 0xF0
#define     LOG_fE2ConvertShift 4
#define LOG_fE2ConvertFloat                     21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertFloatMask 0xF0
#define     LOG_fE2ConvertFloatShift 4
#define LOG_fE2ConvertSpecial                   21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertSpecialMask 0xF0
#define     LOG_fE2ConvertSpecialShift 4
#define LOG_fE2ConvertBool                      21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertBoolMask 0xF0
#define     LOG_fE2ConvertBoolShift 4
#define LOG_fE2                                 21      // 2 Bits, Bit 1-0
#define     LOG_fE2Mask 0x03
#define     LOG_fE2Shift 0
#define LOG_fE2Dpt                              22      // 8 Bits, Bit 7-0
#define LOG_fE2RepeatBase                       23      // 2 Bits, Bit 7-6
#define     LOG_fE2RepeatBaseMask 0xC0
#define     LOG_fE2RepeatBaseShift 6
#define LOG_fE2RepeatTime                       23      // 14 Bits, Bit 13-0
#define     LOG_fE2RepeatTimeMask 0x3FFF
#define     LOG_fE2RepeatTimeShift 0
#define LOG_fE2OtherKO                          25      // uint16_t
#define LOG_fE2OtherKORel                       25      // int16_t
#define LOG_fE2Default                          27      // 2 Bits, Bit 1-0
#define     LOG_fE2DefaultMask 0x03
#define     LOG_fE2DefaultShift 0
#define LOG_fE2DefaultExt                       27      // 2 Bits, Bit 1-0
#define     LOG_fE2DefaultExtMask 0x03
#define     LOG_fE2DefaultExtShift 0
#define LOG_fE2DefaultEEPROM                    27      // 1 Bit, Bit 2
#define     LOG_fE2DefaultEEPROMMask 0x04
#define     LOG_fE2DefaultEEPROMShift 2
#define LOG_fE2DefaultRepeat                    27      // 1 Bit, Bit 3
#define     LOG_fE2DefaultRepeatMask 0x08
#define     LOG_fE2DefaultRepeatShift 3
#define LOG_fE2UseOtherKO                       27      // 2 Bits, Bit 5-4
#define     LOG_fE2UseOtherKOMask 0x30
#define     LOG_fE2UseOtherKOShift 4
#define LOG_fE2LowDelta                         28      // int32_t
#define LOG_fE2HighDelta                        32      // int32_t
#define LOG_fE2LowDeltaFloat                    28      // float (4 Byte)
#define LOG_fE2HighDeltaFloat                   32      // float (4 Byte)
#define LOG_fE2LowDeltaDouble                   28      // float (4 Byte)
#define LOG_fE2HighDeltaDouble                  32      // float (4 Byte)
#define LOG_fE2Low0Valid                        35      // 1 Bit, Bit 7
#define     LOG_fE2Low0ValidMask 0x80
#define     LOG_fE2Low0ValidShift 7
#define LOG_fE2Low1Valid                        35      // 1 Bit, Bit 6
#define     LOG_fE2Low1ValidMask 0x40
#define     LOG_fE2Low1ValidShift 6
#define LOG_fE2Low2Valid                        35      // 1 Bit, Bit 5
#define     LOG_fE2Low2ValidMask 0x20
#define     LOG_fE2Low2ValidShift 5
#define LOG_fE2Low3Valid                        35      // 1 Bit, Bit 4
#define     LOG_fE2Low3ValidMask 0x10
#define     LOG_fE2Low3ValidShift 4
#define LOG_fE2Low4Valid                        35      // 1 Bit, Bit 3
#define     LOG_fE2Low4ValidMask 0x08
#define     LOG_fE2Low4ValidShift 3
#define LOG_fE2Low5Valid                        35      // 1 Bit, Bit 2
#define     LOG_fE2Low5ValidMask 0x04
#define     LOG_fE2Low5ValidShift 2
#define LOG_fE2Low6Valid                        35      // 1 Bit, Bit 1
#define     LOG_fE2Low6ValidMask 0x02
#define     LOG_fE2Low6ValidShift 1
#define LOG_fE2Low0Dpt2                         28      // 8 Bits, Bit 7-0
#define LOG_fE2Low1Dpt2                         29      // 8 Bits, Bit 7-0
#define LOG_fE2Low2Dpt2                         30      // 8 Bits, Bit 7-0
#define LOG_fE2Low3Dpt2                         31      // 8 Bits, Bit 7-0
#define LOG_fE2LowDpt2Fix                       28      // 8 Bits, Bit 7-0
#define LOG_fE2Low0Dpt3Dir                      28      // 5 Bits, Bit 7-3
#define     LOG_fE2Low0Dpt3DirMask 0xF8
#define     LOG_fE2Low0Dpt3DirShift 3
#define LOG_fE2Low0Dpt3Dim                      28      // 3 Bits, Bit 2-0
#define     LOG_fE2Low0Dpt3DimMask 0x07
#define     LOG_fE2Low0Dpt3DimShift 0
#define LOG_fE2Low1Dpt3Dir                      29      // 5 Bits, Bit 7-3
#define     LOG_fE2Low1Dpt3DirMask 0xF8
#define     LOG_fE2Low1Dpt3DirShift 3
#define LOG_fE2Low1Dpt3Dim                      29      // 3 Bits, Bit 2-0
#define     LOG_fE2Low1Dpt3DimMask 0x07
#define     LOG_fE2Low1Dpt3DimShift 0
#define LOG_fE2Low2Dpt3Dir                      30      // 5 Bits, Bit 7-3
#define     LOG_fE2Low2Dpt3DirMask 0xF8
#define     LOG_fE2Low2Dpt3DirShift 3
#define LOG_fE2Low2Dpt3Dim                      30      // 3 Bits, Bit 2-0
#define     LOG_fE2Low2Dpt3DimMask 0x07
#define     LOG_fE2Low2Dpt3DimShift 0
#define LOG_fE2Low3Dpt3Dir                      31      // 5 Bits, Bit 7-3
#define     LOG_fE2Low3Dpt3DirMask 0xF8
#define     LOG_fE2Low3Dpt3DirShift 3
#define LOG_fE2Low3Dpt3Dim                      31      // 3 Bits, Bit 2-0
#define     LOG_fE2Low3Dpt3DimMask 0x07
#define     LOG_fE2Low3Dpt3DimShift 0
#define LOG_fE2LowDpt3FixDir                    28      // 5 Bits, Bit 7-3
#define     LOG_fE2LowDpt3FixDirMask 0xF8
#define     LOG_fE2LowDpt3FixDirShift 3
#define LOG_fE2LowDpt3FixDim                    28      // 3 Bits, Bit 2-0
#define     LOG_fE2LowDpt3FixDimMask 0x07
#define     LOG_fE2LowDpt3FixDimShift 0
#define LOG_fE2LowDpt5                          28      // uint8_t
#define LOG_fE2HighDpt5                         32      // uint8_t
#define LOG_fE2Low0Dpt5In                       28      // uint8_t
#define LOG_fE2Low1Dpt5In                       29      // uint8_t
#define LOG_fE2Low2Dpt5In                       30      // uint8_t
#define LOG_fE2Low3Dpt5In                       31      // uint8_t
#define LOG_fE2Low4Dpt5In                       32      // uint8_t
#define LOG_fE2Low5Dpt5In                       33      // uint8_t
#define LOG_fE2Low6Dpt5In                       34      // uint8_t
#define LOG_fE2LowDpt5Fix                       28      // uint8_t
#define LOG_fE2LowDpt5001                       28      // uint8_t
#define LOG_fE2HighDpt5001                      32      // uint8_t
#define LOG_fE2Low0Dpt5xIn                      28      // uint8_t
#define LOG_fE2Low1Dpt5xIn                      29      // uint8_t
#define LOG_fE2Low2Dpt5xIn                      30      // uint8_t
#define LOG_fE2Low3Dpt5xIn                      31      // uint8_t
#define LOG_fE2Low4Dpt5xIn                      32      // uint8_t
#define LOG_fE2Low5Dpt5xIn                      33      // uint8_t
#define LOG_fE2Low6Dpt5xIn                      34      // uint8_t
#define LOG_fE2LowDpt5xFix                      28      // uint8_t
#define LOG_fE2LowDpt6                          28      // int8_t
#define LOG_fE2HighDpt6                         32      // int8_t
#define LOG_fE2Low0Dpt6In                       28      // int8_t
#define LOG_fE2Low1Dpt6In                       29      // int8_t
#define LOG_fE2Low2Dpt6In                       30      // int8_t
#define LOG_fE2Low3Dpt6In                       31      // int8_t
#define LOG_fE2Low4Dpt6In                       32      // int8_t
#define LOG_fE2Low5Dpt6In                       33      // int8_t
#define LOG_fE2Low6Dpt6In                       34      // int8_t
#define LOG_fE2LowDpt6Fix                       28      // int8_t
#define LOG_fE2LowDpt7                          28      // uint16_t
#define LOG_fE2HighDpt7                         32      // uint16_t
#define LOG_fE2Low0Dpt7In                       28      // uint16_t
#define LOG_fE2Low1Dpt7In                       30      // uint16_t
#define LOG_fE2Low2Dpt7In                       32      // uint16_t
#define LOG_fE2LowDpt7Fix                       28      // uint16_t
#define LOG_fE2LowDpt8                          28      // int16_t
#define LOG_fE2HighDpt8                         32      // int16_t
#define LOG_fE2Low0Dpt8In                       28      // int16_t
#define LOG_fE2Low1Dpt8In                       30      // int16_t
#define LOG_fE2Low2Dpt8In                       32      // int16_t
#define LOG_fE2LowDpt8Fix                       28      // int16_t
#define LOG_fE2LowDpt9                          28      // float (4 Byte)
#define LOG_fE2HighDpt9                         32      // float (4 Byte)
#define LOG_fE2LowDpt9Fix                       28      // float (4 Byte)
#define LOG_fE2LowDpt12                         28      // uint32_t
#define LOG_fE2HighDpt12                        32      // uint32_t
#define LOG_fE2LowDpt12Fix                      28      // uint32_t
#define LOG_fE2LowDpt13                         28      // int32_t
#define LOG_fE2HighDpt13                        32      // int32_t
#define LOG_fE2LowDpt13Fix                      28      // int32_t
#define LOG_fE2LowDpt14                         28      // float (4 Byte)
#define LOG_fE2HighDpt14                        32      // float (4 Byte)
#define LOG_fE2LowDpt14Fix                      28      // float (4 Byte)
#define LOG_fE2Low0Dpt17                        28      // 8 Bits, Bit 7-0
#define LOG_fE2Low1Dpt17                        29      // 8 Bits, Bit 7-0
#define LOG_fE2Low2Dpt17                        30      // 8 Bits, Bit 7-0
#define LOG_fE2Low3Dpt17                        31      // 8 Bits, Bit 7-0
#define LOG_fE2Low4Dpt17                        32      // 8 Bits, Bit 7-0
#define LOG_fE2Low5Dpt17                        33      // 8 Bits, Bit 7-0
#define LOG_fE2Low6Dpt17                        34      // 8 Bits, Bit 7-0
#define LOG_fE2Low7Dpt17                        35      // 8 Bits, Bit 7-0
#define LOG_fE2LowDpt17Fix                      28      // 8 Bits, Bit 7-0
#define LOG_fE2LowDptRGB                        28      // int32_t
#define LOG_fE2HighDptRGB                       32      // int32_t
#define LOG_fE2LowDptRGBFix                     28      // int32_t
#define LOG_fTd1DuskDawn                         6      // 4 Bits, Bit 7-4
#define     LOG_fTd1DuskDawnMask 0xF0
#define     LOG_fTd1DuskDawnShift 4
#define LOG_fTd2DuskDawn                         6      // 4 Bits, Bit 3-0
#define     LOG_fTd2DuskDawnMask 0x0F
#define     LOG_fTd2DuskDawnShift 0
#define LOG_fTd3DuskDawn                         7      // 4 Bits, Bit 7-4
#define     LOG_fTd3DuskDawnMask 0xF0
#define     LOG_fTd3DuskDawnShift 4
#define LOG_fTd4DuskDawn                         7      // 4 Bits, Bit 3-0
#define     LOG_fTd4DuskDawnMask 0x0F
#define     LOG_fTd4DuskDawnShift 0
#define LOG_fTd5DuskDawn                         8      // 4 Bits, Bit 7-4
#define     LOG_fTd5DuskDawnMask 0xF0
#define     LOG_fTd5DuskDawnShift 4
#define LOG_fTd6DuskDawn                         8      // 4 Bits, Bit 3-0
#define     LOG_fTd6DuskDawnMask 0x0F
#define     LOG_fTd6DuskDawnShift 0
#define LOG_fTd7DuskDawn                         9      // 4 Bits, Bit 7-4
#define     LOG_fTd7DuskDawnMask 0xF0
#define     LOG_fTd7DuskDawnShift 4
#define LOG_fTd8DuskDawn                         9      // 4 Bits, Bit 3-0
#define     LOG_fTd8DuskDawnMask 0x0F
#define     LOG_fTd8DuskDawnShift 0
#define LOG_fTYearDay                           10      // 2 Bits, Bit 7-6
#define     LOG_fTYearDayMask 0xC0
#define     LOG_fTYearDayShift 6
#define LOG_fTHoliday                           10      // 2 Bits, Bit 5-4
#define     LOG_fTHolidayMask 0x30
#define     LOG_fTHolidayShift 4
#define LOG_fTRestoreState                      10      // 2 Bits, Bit 3-2
#define     LOG_fTRestoreStateMask 0x0C
#define     LOG_fTRestoreStateShift 2
#define LOG_fTVacation                          10      // 2 Bits, Bit 1-0
#define     LOG_fTVacationMask 0x03
#define     LOG_fTVacationShift 0
#define LOG_fTd1ValueNum                        11      // uint8_t
#define LOG_fTd2ValueNum                        12      // uint8_t
#define LOG_fTd3ValueNum                        13      // uint8_t
#define LOG_fTd4ValueNum                        14      // uint8_t
#define LOG_fTd5ValueNum                        15      // uint8_t
#define LOG_fTd6ValueNum                        16      // uint8_t
#define LOG_fTd7ValueNum                        17      // uint8_t
#define LOG_fTd8ValueNum                        18      // uint8_t
#define LOG_fTd1Value                           20      // 1 Bit, Bit 7
#define     LOG_fTd1ValueMask 0x80
#define     LOG_fTd1ValueShift 7
#define LOG_fTd1Degree                          20      // 6 Bits, Bit 6-1
#define     LOG_fTd1DegreeMask 0x7E
#define     LOG_fTd1DegreeShift 1
#define LOG_fTd1HourAbs                         20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourAbsMask 0x3E
#define     LOG_fTd1HourAbsShift 1
#define LOG_fTd1HourRel                         20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourRelMask 0x3E
#define     LOG_fTd1HourRelShift 1
#define LOG_fTd1HourRelShort                    20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourRelShortMask 0x3E
#define     LOG_fTd1HourRelShortShift 1
#define LOG_fTd1MinuteAbs                       20      // 6 Bits, Bit 0--5
#define LOG_fTd1MinuteRel                       20      // 6 Bits, Bit 0--5
#define LOG_fTd1Weekday                         21      // 3 Bits, Bit 2-0
#define     LOG_fTd1WeekdayMask 0x07
#define     LOG_fTd1WeekdayShift 0
#define LOG_fTd2Value                           22      // 1 Bit, Bit 7
#define     LOG_fTd2ValueMask 0x80
#define     LOG_fTd2ValueShift 7
#define LOG_fTd2Degree                          22      // 6 Bits, Bit 6-1
#define     LOG_fTd2DegreeMask 0x7E
#define     LOG_fTd2DegreeShift 1
#define LOG_fTd2HourAbs                         22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourAbsMask 0x3E
#define     LOG_fTd2HourAbsShift 1
#define LOG_fTd2HourRel                         22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourRelMask 0x3E
#define     LOG_fTd2HourRelShift 1
#define LOG_fTd2HourRelShort                    22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourRelShortMask 0x3E
#define     LOG_fTd2HourRelShortShift 1
#define LOG_fTd2MinuteAbs                       22      // 6 Bits, Bit 0--5
#define LOG_fTd2MinuteRel                       22      // 6 Bits, Bit 0--5
#define LOG_fTd2Weekday                         23      // 3 Bits, Bit 2-0
#define     LOG_fTd2WeekdayMask 0x07
#define     LOG_fTd2WeekdayShift 0
#define LOG_fTd3Value                           24      // 1 Bit, Bit 7
#define     LOG_fTd3ValueMask 0x80
#define     LOG_fTd3ValueShift 7
#define LOG_fTd3Degree                          24      // 6 Bits, Bit 6-1
#define     LOG_fTd3DegreeMask 0x7E
#define     LOG_fTd3DegreeShift 1
#define LOG_fTd3HourAbs                         24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourAbsMask 0x3E
#define     LOG_fTd3HourAbsShift 1
#define LOG_fTd3HourRel                         24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourRelMask 0x3E
#define     LOG_fTd3HourRelShift 1
#define LOG_fTd3HourRelShort                    24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourRelShortMask 0x3E
#define     LOG_fTd3HourRelShortShift 1
#define LOG_fTd3MinuteAbs                       24      // 6 Bits, Bit 0--5
#define LOG_fTd3MinuteRel                       24      // 6 Bits, Bit 0--5
#define LOG_fTd3Weekday                         25      // 3 Bits, Bit 2-0
#define     LOG_fTd3WeekdayMask 0x07
#define     LOG_fTd3WeekdayShift 0
#define LOG_fTd4Value                           26      // 1 Bit, Bit 7
#define     LOG_fTd4ValueMask 0x80
#define     LOG_fTd4ValueShift 7
#define LOG_fTd4Degree                          26      // 6 Bits, Bit 6-1
#define     LOG_fTd4DegreeMask 0x7E
#define     LOG_fTd4DegreeShift 1
#define LOG_fTd4HourAbs                         26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourAbsMask 0x3E
#define     LOG_fTd4HourAbsShift 1
#define LOG_fTd4HourRel                         26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourRelMask 0x3E
#define     LOG_fTd4HourRelShift 1
#define LOG_fTd4HourRelShort                    26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourRelShortMask 0x3E
#define     LOG_fTd4HourRelShortShift 1
#define LOG_fTd4MinuteAbs                       26      // 6 Bits, Bit 0--5
#define LOG_fTd4MinuteRel                       26      // 6 Bits, Bit 0--5
#define LOG_fTd4Weekday                         27      // 3 Bits, Bit 2-0
#define     LOG_fTd4WeekdayMask 0x07
#define     LOG_fTd4WeekdayShift 0
#define LOG_fTd5Value                           28      // 1 Bit, Bit 7
#define     LOG_fTd5ValueMask 0x80
#define     LOG_fTd5ValueShift 7
#define LOG_fTd5Degree                          28      // 6 Bits, Bit 6-1
#define     LOG_fTd5DegreeMask 0x7E
#define     LOG_fTd5DegreeShift 1
#define LOG_fTd5HourAbs                         28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourAbsMask 0x3E
#define     LOG_fTd5HourAbsShift 1
#define LOG_fTd5HourRel                         28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourRelMask 0x3E
#define     LOG_fTd5HourRelShift 1
#define LOG_fTd5HourRelShort                    28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourRelShortMask 0x3E
#define     LOG_fTd5HourRelShortShift 1
#define LOG_fTd5MinuteAbs                       28      // 6 Bits, Bit 0--5
#define LOG_fTd5MinuteRel                       28      // 6 Bits, Bit 0--5
#define LOG_fTd5Weekday                         29      // 3 Bits, Bit 2-0
#define     LOG_fTd5WeekdayMask 0x07
#define     LOG_fTd5WeekdayShift 0
#define LOG_fTd6Value                           30      // 1 Bit, Bit 7
#define     LOG_fTd6ValueMask 0x80
#define     LOG_fTd6ValueShift 7
#define LOG_fTd6Degree                          30      // 6 Bits, Bit 6-1
#define     LOG_fTd6DegreeMask 0x7E
#define     LOG_fTd6DegreeShift 1
#define LOG_fTd6HourAbs                         30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourAbsMask 0x3E
#define     LOG_fTd6HourAbsShift 1
#define LOG_fTd6HourRel                         30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourRelMask 0x3E
#define     LOG_fTd6HourRelShift 1
#define LOG_fTd6HourRelShort                    30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourRelShortMask 0x3E
#define     LOG_fTd6HourRelShortShift 1
#define LOG_fTd6MinuteAbs                       30      // 6 Bits, Bit 0--5
#define LOG_fTd6MinuteRel                       30      // 6 Bits, Bit 0--5
#define LOG_fTd6Weekday                         31      // 3 Bits, Bit 2-0
#define     LOG_fTd6WeekdayMask 0x07
#define     LOG_fTd6WeekdayShift 0
#define LOG_fTd7Value                           32      // 1 Bit, Bit 7
#define     LOG_fTd7ValueMask 0x80
#define     LOG_fTd7ValueShift 7
#define LOG_fTd7Degree                          32      // 6 Bits, Bit 6-1
#define     LOG_fTd7DegreeMask 0x7E
#define     LOG_fTd7DegreeShift 1
#define LOG_fTd7HourAbs                         32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourAbsMask 0x3E
#define     LOG_fTd7HourAbsShift 1
#define LOG_fTd7HourRel                         32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourRelMask 0x3E
#define     LOG_fTd7HourRelShift 1
#define LOG_fTd7HourRelShort                    32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourRelShortMask 0x3E
#define     LOG_fTd7HourRelShortShift 1
#define LOG_fTd7MinuteAbs                       32      // 6 Bits, Bit 0--5
#define LOG_fTd7MinuteRel                       32      // 6 Bits, Bit 0--5
#define LOG_fTd7Weekday                         33      // 3 Bits, Bit 2-0
#define     LOG_fTd7WeekdayMask 0x07
#define     LOG_fTd7WeekdayShift 0
#define LOG_fTd8Value                           34      // 1 Bit, Bit 7
#define     LOG_fTd8ValueMask 0x80
#define     LOG_fTd8ValueShift 7
#define LOG_fTd8Degree                          34      // 6 Bits, Bit 6-1
#define     LOG_fTd8DegreeMask 0x7E
#define     LOG_fTd8DegreeShift 1
#define LOG_fTd8HourAbs                         34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourAbsMask 0x3E
#define     LOG_fTd8HourAbsShift 1
#define LOG_fTd8HourRel                         34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourRelMask 0x3E
#define     LOG_fTd8HourRelShift 1
#define LOG_fTd8HourRelShort                    34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourRelShortMask 0x3E
#define     LOG_fTd8HourRelShortShift 1
#define LOG_fTd8MinuteAbs                       34      // 6 Bits, Bit 0--5
#define LOG_fTd8MinuteRel                       34      // 6 Bits, Bit 0--5
#define LOG_fTd8Weekday                         35      // 3 Bits, Bit 2-0
#define     LOG_fTd8WeekdayMask 0x07
#define     LOG_fTd8WeekdayShift 0
#define LOG_fTy1Weekday1                        28      // 1 Bit, Bit 7
#define     LOG_fTy1Weekday1Mask 0x80
#define     LOG_fTy1Weekday1Shift 7
#define LOG_fTy1Weekday2                        28      // 1 Bit, Bit 6
#define     LOG_fTy1Weekday2Mask 0x40
#define     LOG_fTy1Weekday2Shift 6
#define LOG_fTy1Weekday3                        28      // 1 Bit, Bit 5
#define     LOG_fTy1Weekday3Mask 0x20
#define     LOG_fTy1Weekday3Shift 5
#define LOG_fTy1Weekday4                        28      // 1 Bit, Bit 4
#define     LOG_fTy1Weekday4Mask 0x10
#define     LOG_fTy1Weekday4Shift 4
#define LOG_fTy1Weekday5                        28      // 1 Bit, Bit 3
#define     LOG_fTy1Weekday5Mask 0x08
#define     LOG_fTy1Weekday5Shift 3
#define LOG_fTy1Weekday6                        28      // 1 Bit, Bit 2
#define     LOG_fTy1Weekday6Mask 0x04
#define     LOG_fTy1Weekday6Shift 2
#define LOG_fTy1Weekday7                        28      // 1 Bit, Bit 1
#define     LOG_fTy1Weekday7Mask 0x02
#define     LOG_fTy1Weekday7Shift 1
#define LOG_fTy1Day                             28      // 7 Bits, Bit 7-1
#define     LOG_fTy1DayMask 0xFE
#define     LOG_fTy1DayShift 1
#define LOG_fTy1IsWeekday                       28      // 1 Bit, Bit 0
#define     LOG_fTy1IsWeekdayMask 0x01
#define     LOG_fTy1IsWeekdayShift 0
#define LOG_fTy1Month                           29      // 4 Bits, Bit 7-4
#define     LOG_fTy1MonthMask 0xF0
#define     LOG_fTy1MonthShift 4
#define LOG_fTy2Weekday1                        30      // 1 Bit, Bit 7
#define     LOG_fTy2Weekday1Mask 0x80
#define     LOG_fTy2Weekday1Shift 7
#define LOG_fTy2Weekday2                        30      // 1 Bit, Bit 6
#define     LOG_fTy2Weekday2Mask 0x40
#define     LOG_fTy2Weekday2Shift 6
#define LOG_fTy2Weekday3                        30      // 1 Bit, Bit 5
#define     LOG_fTy2Weekday3Mask 0x20
#define     LOG_fTy2Weekday3Shift 5
#define LOG_fTy2Weekday4                        30      // 1 Bit, Bit 4
#define     LOG_fTy2Weekday4Mask 0x10
#define     LOG_fTy2Weekday4Shift 4
#define LOG_fTy2Weekday5                        30      // 1 Bit, Bit 3
#define     LOG_fTy2Weekday5Mask 0x08
#define     LOG_fTy2Weekday5Shift 3
#define LOG_fTy2Weekday6                        30      // 1 Bit, Bit 2
#define     LOG_fTy2Weekday6Mask 0x04
#define     LOG_fTy2Weekday6Shift 2
#define LOG_fTy2Weekday7                        30      // 1 Bit, Bit 1
#define     LOG_fTy2Weekday7Mask 0x02
#define     LOG_fTy2Weekday7Shift 1
#define LOG_fTy2Day                             30      // 7 Bits, Bit 7-1
#define     LOG_fTy2DayMask 0xFE
#define     LOG_fTy2DayShift 1
#define LOG_fTy2IsWeekday                       30      // 1 Bit, Bit 0
#define     LOG_fTy2IsWeekdayMask 0x01
#define     LOG_fTy2IsWeekdayShift 0
#define LOG_fTy2Month                           31      // 4 Bits, Bit 7-4
#define     LOG_fTy2MonthMask 0xF0
#define     LOG_fTy2MonthShift 4
#define LOG_fTy3Weekday1                        32      // 1 Bit, Bit 7
#define     LOG_fTy3Weekday1Mask 0x80
#define     LOG_fTy3Weekday1Shift 7
#define LOG_fTy3Weekday2                        32      // 1 Bit, Bit 6
#define     LOG_fTy3Weekday2Mask 0x40
#define     LOG_fTy3Weekday2Shift 6
#define LOG_fTy3Weekday3                        32      // 1 Bit, Bit 5
#define     LOG_fTy3Weekday3Mask 0x20
#define     LOG_fTy3Weekday3Shift 5
#define LOG_fTy3Weekday4                        32      // 1 Bit, Bit 4
#define     LOG_fTy3Weekday4Mask 0x10
#define     LOG_fTy3Weekday4Shift 4
#define LOG_fTy3Weekday5                        32      // 1 Bit, Bit 3
#define     LOG_fTy3Weekday5Mask 0x08
#define     LOG_fTy3Weekday5Shift 3
#define LOG_fTy3Weekday6                        32      // 1 Bit, Bit 2
#define     LOG_fTy3Weekday6Mask 0x04
#define     LOG_fTy3Weekday6Shift 2
#define LOG_fTy3Weekday7                        32      // 1 Bit, Bit 1
#define     LOG_fTy3Weekday7Mask 0x02
#define     LOG_fTy3Weekday7Shift 1
#define LOG_fTy3Day                             32      // 7 Bits, Bit 7-1
#define     LOG_fTy3DayMask 0xFE
#define     LOG_fTy3DayShift 1
#define LOG_fTy3IsWeekday                       32      // 1 Bit, Bit 0
#define     LOG_fTy3IsWeekdayMask 0x01
#define     LOG_fTy3IsWeekdayShift 0
#define LOG_fTy3Month                           33      // 4 Bits, Bit 7-4
#define     LOG_fTy3MonthMask 0xF0
#define     LOG_fTy3MonthShift 4
#define LOG_fTy4Weekday1                        34      // 1 Bit, Bit 7
#define     LOG_fTy4Weekday1Mask 0x80
#define     LOG_fTy4Weekday1Shift 7
#define LOG_fTy4Weekday2                        34      // 1 Bit, Bit 6
#define     LOG_fTy4Weekday2Mask 0x40
#define     LOG_fTy4Weekday2Shift 6
#define LOG_fTy4Weekday3                        34      // 1 Bit, Bit 5
#define     LOG_fTy4Weekday3Mask 0x20
#define     LOG_fTy4Weekday3Shift 5
#define LOG_fTy4Weekday4                        34      // 1 Bit, Bit 4
#define     LOG_fTy4Weekday4Mask 0x10
#define     LOG_fTy4Weekday4Shift 4
#define LOG_fTy4Weekday5                        34      // 1 Bit, Bit 3
#define     LOG_fTy4Weekday5Mask 0x08
#define     LOG_fTy4Weekday5Shift 3
#define LOG_fTy4Weekday6                        34      // 1 Bit, Bit 2
#define     LOG_fTy4Weekday6Mask 0x04
#define     LOG_fTy4Weekday6Shift 2
#define LOG_fTy4Weekday7                        34      // 1 Bit, Bit 1
#define     LOG_fTy4Weekday7Mask 0x02
#define     LOG_fTy4Weekday7Shift 1
#define LOG_fTy4Day                             34      // 7 Bits, Bit 7-1
#define     LOG_fTy4DayMask 0xFE
#define     LOG_fTy4DayShift 1
#define LOG_fTy4IsWeekday                       34      // 1 Bit, Bit 0
#define     LOG_fTy4IsWeekdayMask 0x01
#define     LOG_fTy4IsWeekdayShift 0
#define LOG_fTy4Month                           35      // 4 Bits, Bit 7-4
#define     LOG_fTy4MonthMask 0xF0
#define     LOG_fTy4MonthShift 4
#define LOG_fI1                                 36      // 2 Bits, Bit 7-6
#define     LOG_fI1Mask 0xC0
#define     LOG_fI1Shift 6
#define LOG_fI1Kind                             36      // 2 Bits, Bit 5-4
#define     LOG_fI1KindMask 0x30
#define     LOG_fI1KindShift 4
#define LOG_fI1AsTrigger                        36      // 1 Bit, Bit 3
#define     LOG_fI1AsTriggerMask 0x08
#define     LOG_fI1AsTriggerShift 3
#define LOG_fI1InternalInputType                36      // 1 Bit, Bit 2
#define     LOG_fI1InternalInputTypeMask 0x04
#define     LOG_fI1InternalInputTypeShift 2
#define LOG_fI1Function                         37      // uint8_t
#define LOG_fI1FunctionRel                      37      // int8_t
#define LOG_fI1StatusLed                        37      // 16 Bits, Bit 15-0
#define LOG_fI2                                 39      // 2 Bits, Bit 7-6
#define     LOG_fI2Mask 0xC0
#define     LOG_fI2Shift 6
#define LOG_fI2Kind                             39      // 2 Bits, Bit 5-4
#define     LOG_fI2KindMask 0x30
#define     LOG_fI2KindShift 4
#define LOG_fI2AsTrigger                        39      // 1 Bit, Bit 3
#define     LOG_fI2AsTriggerMask 0x08
#define     LOG_fI2AsTriggerShift 3
#define LOG_fI2InternalInputType                39      // 1 Bit, Bit 2
#define     LOG_fI2InternalInputTypeMask 0x04
#define     LOG_fI2InternalInputTypeShift 2
#define LOG_fI2Function                         40      // uint8_t
#define LOG_fI2FunctionRel                      40      // int8_t
#define LOG_fI2StatusLed                        40      // 16 Bits, Bit 15-0
#define LOG_fOStairtimeBase                     42      // 2 Bits, Bit 7-6
#define     LOG_fOStairtimeBaseMask 0xC0
#define     LOG_fOStairtimeBaseShift 6
#define LOG_fOStairtimeTime                     42      // 14 Bits, Bit 13-0
#define     LOG_fOStairtimeTimeMask 0x3FFF
#define     LOG_fOStairtimeTimeShift 0
#define LOG_fOBlinkBase                         44      // 2 Bits, Bit 7-6
#define     LOG_fOBlinkBaseMask 0xC0
#define     LOG_fOBlinkBaseShift 6
#define LOG_fOBlinkTime                         44      // 14 Bits, Bit 13-0
#define     LOG_fOBlinkTimeMask 0x3FFF
#define     LOG_fOBlinkTimeShift 0
#define LOG_fODelayOnBase                       46      // 2 Bits, Bit 7-6
#define     LOG_fODelayOnBaseMask 0xC0
#define     LOG_fODelayOnBaseShift 6
#define LOG_fODelayOnTime                       46      // 14 Bits, Bit 13-0
#define     LOG_fODelayOnTimeMask 0x3FFF
#define     LOG_fODelayOnTimeShift 0
#define LOG_fODelayOffBase                      48      // 2 Bits, Bit 7-6
#define     LOG_fODelayOffBaseMask 0xC0
#define     LOG_fODelayOffBaseShift 6
#define LOG_fODelayOffTime                      48      // 14 Bits, Bit 13-0
#define     LOG_fODelayOffTimeMask 0x3FFF
#define     LOG_fODelayOffTimeShift 0
#define LOG_fORepeatOnBase                      50      // 2 Bits, Bit 7-6
#define     LOG_fORepeatOnBaseMask 0xC0
#define     LOG_fORepeatOnBaseShift 6
#define LOG_fORepeatOnTime                      50      // 14 Bits, Bit 13-0
#define     LOG_fORepeatOnTimeMask 0x3FFF
#define     LOG_fORepeatOnTimeShift 0
#define LOG_fORepeatOffBase                     52      // 2 Bits, Bit 7-6
#define     LOG_fORepeatOffBaseMask 0xC0
#define     LOG_fORepeatOffBaseShift 6
#define LOG_fORepeatOffTime                     52      // 14 Bits, Bit 13-0
#define     LOG_fORepeatOffTimeMask 0x3FFF
#define     LOG_fORepeatOffTimeShift 0
#define LOG_fODelay                             54      // 1 Bit, Bit 7
#define     LOG_fODelayMask 0x80
#define     LOG_fODelayShift 7
#define LOG_fODelayOnRepeat                     54      // 2 Bits, Bit 6-5
#define     LOG_fODelayOnRepeatMask 0x60
#define     LOG_fODelayOnRepeatShift 5
#define LOG_fODelayOnReset                      54      // 1 Bit, Bit 4
#define     LOG_fODelayOnResetMask 0x10
#define     LOG_fODelayOnResetShift 4
#define LOG_fODelayOffRepeat                    54      // 2 Bits, Bit 3-2
#define     LOG_fODelayOffRepeatMask 0x0C
#define     LOG_fODelayOffRepeatShift 2
#define LOG_fODelayOffReset                     54      // 1 Bit, Bit 1
#define     LOG_fODelayOffResetMask 0x02
#define     LOG_fODelayOffResetShift 1
#define LOG_fOStair                             54      // 1 Bit, Bit 0
#define     LOG_fOStairMask 0x01
#define     LOG_fOStairShift 0
#define LOG_fORetrigger                         55      // 1 Bit, Bit 7
#define     LOG_fORetriggerMask 0x80
#define     LOG_fORetriggerShift 7
#define LOG_fOStairOff                          55      // 1 Bit, Bit 6
#define     LOG_fOStairOffMask 0x40
#define     LOG_fOStairOffShift 6
#define LOG_fORepeat                            55      // 1 Bit, Bit 5
#define     LOG_fORepeatMask 0x20
#define     LOG_fORepeatShift 5
#define LOG_fOOutputFilter                      55      // 2 Bits, Bit 4-3
#define     LOG_fOOutputFilterMask 0x18
#define     LOG_fOOutputFilterShift 3
#define LOG_fOSendOnChange                      55      // 1 Bit, Bit 2
#define     LOG_fOSendOnChangeMask 0x04
#define     LOG_fOSendOnChangeShift 2
#define LOG_fOLockEnabled                       55      // 1 Bit, Bit 1
#define     LOG_fOLockEnabledMask 0x02
#define     LOG_fOLockEnabledShift 1
#define LOG_fODpt                               56      // 8 Bits, Bit 7-0
#define LOG_fOLockTriggerLock                   57      // 2 Bits, Bit 7-6
#define     LOG_fOLockTriggerLockMask 0xC0
#define     LOG_fOLockTriggerLockShift 6
#define LOG_fOLockTriggerUnlock                 57      // 2 Bits, Bit 5-4
#define     LOG_fOLockTriggerUnlockMask 0x30
#define     LOG_fOLockTriggerUnlockShift 4
#define LOG_fOLockResetQueue                    57      // 2 Bits, Bit 3-2
#define     LOG_fOLockResetQueueMask 0x0C
#define     LOG_fOLockResetQueueShift 2
#define LOG_fOLockKind                          57      // 2 Bits, Bit 1-0
#define     LOG_fOLockKindMask 0x03
#define     LOG_fOLockKindShift 0
#define LOG_fOLockFunction                      58      // uint8_t
#define LOG_fOLockFunctionRel                   58      // int8_t
#define LOG_fOOnAll                             59      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt1                            60      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt2                            60      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt3Dir                         60      // 5 Bits, Bit 7-3
#define     LOG_fOOnDpt3DirMask 0xF8
#define     LOG_fOOnDpt3DirShift 3
#define LOG_fOOnDpt3Dim                         60      // 3 Bits, Bit 2-0
#define     LOG_fOOnDpt3DimMask 0x07
#define     LOG_fOOnDpt3DimShift 0
#define LOG_fOOnDpt5                            60      // uint8_t
#define LOG_fOOnDpt5001                         60      // uint8_t
#define LOG_fOOnDpt6                            60      // int8_t
#define LOG_fOOnDpt7                            60      // uint16_t
#define LOG_fOOnDpt8                            60      // int16_t
#define LOG_fOOnDpt9                            60      // float (4 Byte)
#define LOG_fOOnDpt12                           60      // uint32_t
#define LOG_fOOnDpt13                           60      // int32_t
#define LOG_fOOnDpt14                           60      // float (4 Byte)
#define LOG_fOOnDpt16                           60      // char*, 14 Byte
#define     LOG_fOOnDpt16Length 14
#define LOG_fOOnDpt17                           60      // 8 Bits, Bit 7-0
#define LOG_fOOnRGB                             60      // 24 Bits, Bit 31-8
#define     LOG_fOOnRGBMask 0xFFFFFF00
#define     LOG_fOOnRGBShift 8
#define LOG_fOOnLedProvider                     64      // 3 Bits, Bit 2-0
#define     LOG_fOOnLedProviderMask 0x07
#define     LOG_fOOnLedProviderShift 0
#define LOG_fOOnLedEffect                       65      // 3 Bits, Bit 2-0
#define     LOG_fOOnLedEffectMask 0x07
#define     LOG_fOOnLedEffectShift 0
#define LOG_fOOnLedDuration                     66      // uint16_t
#define LOG_fOOnPAArea                          60      // 4 Bits, Bit 7-4
#define     LOG_fOOnPAAreaMask 0xF0
#define     LOG_fOOnPAAreaShift 4
#define LOG_fOOnPALine                          60      // 4 Bits, Bit 3-0
#define     LOG_fOOnPALineMask 0x0F
#define     LOG_fOOnPALineShift 0
#define LOG_fOOnPADevice                        61      // uint8_t
#define LOG_fOOnFunction                        60      // 8 Bits, Bit 7-0
#define LOG_fOOnKOKind                          65      // 2 Bits, Bit 7-6
#define     LOG_fOOnKOKindMask 0xC0
#define     LOG_fOOnKOKindShift 6
#define LOG_fOOnKONumber                        60      // uint16_t
#define LOG_fOOnKONumberRel                     60      // int16_t
#define LOG_fOOnKODpt                           62      // 8 Bits, Bit 7-0
#define LOG_fOOnKOSend                          65      // 2 Bits, Bit 5-4
#define     LOG_fOOnKOSendMask 0x30
#define     LOG_fOOnKOSendShift 4
#define LOG_fOOnKOSendNumber                    66      // uint16_t
#define LOG_fOOnKOSendNumberRel                 66      // int16_t
#define LOG_fOOffAll                            74      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt1                           75      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt2                           75      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt3Dir                        75      // 5 Bits, Bit 7-3
#define     LOG_fOOffDpt3DirMask 0xF8
#define     LOG_fOOffDpt3DirShift 3
#define LOG_fOOffDpt3Dim                        75      // 3 Bits, Bit 2-0
#define     LOG_fOOffDpt3DimMask 0x07
#define     LOG_fOOffDpt3DimShift 0
#define LOG_fOOffDpt5                           75      // uint8_t
#define LOG_fOOffDpt5001                        75      // uint8_t
#define LOG_fOOffDpt6                           75      // int8_t
#define LOG_fOOffDpt7                           75      // uint16_t
#define LOG_fOOffDpt8                           75      // int16_t
#define LOG_fOOffDpt9                           75      // float (4 Byte)
#define LOG_fOOffDpt12                          75      // uint32_t
#define LOG_fOOffDpt13                          75      // int32_t
#define LOG_fOOffDpt14                          75      // float (4 Byte)
#define LOG_fOOffDpt16                          75      // char*, 14 Byte
#define     LOG_fOOffDpt16Length 14
#define LOG_fOOffDpt17                          75      // 8 Bits, Bit 7-0
#define LOG_fOOffRGB                            75      // 24 Bits, Bit 31-8
#define     LOG_fOOffRGBMask 0xFFFFFF00
#define     LOG_fOOffRGBShift 8
#define LOG_fOOffLedProvider                    79      // 3 Bits, Bit 2-0
#define     LOG_fOOffLedProviderMask 0x07
#define     LOG_fOOffLedProviderShift 0
#define LOG_fOOffLedEffect                      80      // 3 Bits, Bit 2-0
#define     LOG_fOOffLedEffectMask 0x07
#define     LOG_fOOffLedEffectShift 0
#define LOG_fOOffLedDuration                    81      // uint16_t
#define LOG_fOOffPAArea                         75      // 4 Bits, Bit 7-4
#define     LOG_fOOffPAAreaMask 0xF0
#define     LOG_fOOffPAAreaShift 4
#define LOG_fOOffPALine                         75      // 4 Bits, Bit 3-0
#define     LOG_fOOffPALineMask 0x0F
#define     LOG_fOOffPALineShift 0
#define LOG_fOOffPADevice                       76      // uint8_t
#define LOG_fOOffFunction                       75      // 8 Bits, Bit 7-0
#define LOG_fOOffKOKind                         80      // 2 Bits, Bit 7-6
#define     LOG_fOOffKOKindMask 0xC0
#define     LOG_fOOffKOKindShift 6
#define LOG_fOOffKONumber                       75      // uint16_t
#define LOG_fOOffKONumberRel                    75      // int16_t
#define LOG_fOOffKODpt                          77      // 8 Bits, Bit 7-0
#define LOG_fOOffKOSend                         80      // 2 Bits, Bit 5-4
#define     LOG_fOOffKOSendMask 0x30
#define     LOG_fOOffKOSendShift 4
#define LOG_fOOffKOSendNumber                   81      // uint16_t
#define LOG_fOOffKOSendNumberRel                81      // int16_t

// Zeit bis der Kanal nach einem Neustart aktiv wird
#define ParamLOG_fChannelDelayBase                   ((knx.paramByte(LOG_ParamCalcIndex(LOG_fChannelDelayBase)) & LOG_fChannelDelayBaseMask) >> LOG_fChannelDelayBaseShift)
// Zeit bis der Kanal nach einem Neustart aktiv wird
#define ParamLOG_fChannelDelayTime                   (knx.paramWord(LOG_ParamCalcIndex(LOG_fChannelDelayTime)) & LOG_fChannelDelayTimeMask)
// Zeit bis der Kanal nach einem Neustart aktiv wird (in Millisekunden)
#define ParamLOG_fChannelDelayTimeMS                 (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fChannelDelayTime))))
// Logik-Operation
#define ParamLOG_fLogic                              (PT_Logic)(knx.paramByte(LOG_ParamCalcIndex(LOG_fLogic)))
// Logik auswerten
#define ParamLOG_fCalculate                          (PT_Calculate)(knx.paramByte(LOG_ParamCalcIndex(LOG_fCalculate)) & LOG_fCalculateMask)
// Kanal deaktivieren (zu Testzwecken)
#define ParamLOG_fDisable                            ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fDisable)) & LOG_fDisableMask))
// Tor geht sofort wieder zu
#define ParamLOG_fTGate                              ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTGate)) & LOG_fTGateMask))
// Wert EIN intern weiterleiten
#define ParamLOG_fOInternalOn                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOInternalOn)) & LOG_fOInternalOnMask))
// Wert AUS intern weiterleiten
#define ParamLOG_fOInternalOff                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOInternalOff)) & LOG_fOInternalOffMask))
// Logik sendet ihren Wert weiter
#define ParamLOG_fTrigger                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fTrigger)))
//           Eingang 1
#define ParamLOG_fTriggerE1                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerE1)) & LOG_fTriggerE1Mask))
//           Eingang 2
#define ParamLOG_fTriggerE2                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerE2)) & LOG_fTriggerE2Mask))
//           Interner Eingang 3
#define ParamLOG_fTriggerI1                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerI1)) & LOG_fTriggerI1Mask))
//           Interner Eingang 4
#define ParamLOG_fTriggerI2                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerI2)) & LOG_fTriggerI2Mask))
// Logik sendet ihren Wert weiter
#define ParamLOG_fTriggerTime                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerTime)))
// Beim schließen vom Tor wird
#define ParamLOG_fTriggerGateClose                   (PT_GateTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerGateClose)) & LOG_fTriggerGateCloseMask) >> LOG_fTriggerGateCloseShift)
// Beim öffnen vom Tor wird
#define ParamLOG_fTriggerGateOpen                    (PT_GateTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerGateOpen)) & LOG_fTriggerGateOpenMask) >> LOG_fTriggerGateOpenShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertInt                       (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertInt)) & LOG_fE1ConvertIntMask) >> LOG_fE1ConvertIntShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1Convert                          (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Convert)) & LOG_fE1ConvertMask) >> LOG_fE1ConvertShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertFloat                     (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertFloat)) & LOG_fE1ConvertFloatMask) >> LOG_fE1ConvertFloatShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertSpecial                   (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertSpecial)) & LOG_fE1ConvertSpecialMask) >> LOG_fE1ConvertSpecialShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertBool                      (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertBool)) & LOG_fE1ConvertBoolMask) >> LOG_fE1ConvertBoolShift)
// Eingang 1
#define ParamLOG_fE1                                 (PT_InputEnable)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1)) & LOG_fE1Mask)
// DPT für Eingang
#define ParamLOG_fE1Dpt                              (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Dpt)))
// Eingang wird gelesen alle
#define ParamLOG_fE1RepeatBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1RepeatBase)) & LOG_fE1RepeatBaseMask) >> LOG_fE1RepeatBaseShift)
// Eingang wird gelesen alle
#define ParamLOG_fE1RepeatTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1RepeatTime)) & LOG_fE1RepeatTimeMask)
// Eingang wird gelesen alle (in Millisekunden)
#define ParamLOG_fE1RepeatTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fE1RepeatTime))))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE1OtherKO                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1OtherKO)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE1OtherKORel                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1OtherKORel)))
// Falls Vorbelegung aus dem Speicher nicht möglich oder nicht gewünscht, dann vorbelegen mit
#define ParamLOG_fE1Default                          (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Default)) & LOG_fE1DefaultMask)
// Eingang vorbelegen mit
#define ParamLOG_fE1DefaultExt                       (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultExt)) & LOG_fE1DefaultExtMask)
// Eingangswert speichern und beim nächsten Neustart als Vorbelegung nutzen?
#define ParamLOG_fE1DefaultEEPROM                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultEEPROM)) & LOG_fE1DefaultEEPROMMask))
// Nur so lange zyklisch lesen, bis erstes Telegramm eingeht
#define ParamLOG_fE1DefaultRepeat                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultRepeat)) & LOG_fE1DefaultRepeatMask))
// Kommunikationsobjekt für Eingang
#define ParamLOG_fE1UseOtherKO                       (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1UseOtherKO)) & LOG_fE1UseOtherKOMask) >> LOG_fE1UseOtherKOShift)
// Von-Wert
#define ParamLOG_fE1LowDelta                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDelta)))
// Bis-Wert
#define ParamLOG_fE1HighDelta                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDelta)))
// Von-Wert
#define ParamLOG_fE1LowDeltaFloat                    (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDeltaFloat), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDeltaFloat                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDeltaFloat), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE1LowDeltaDouble                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDeltaDouble), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDeltaDouble                  (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDeltaDouble), Float_Enc_IEEE754Single))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low0Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Valid)) & LOG_fE1Low0ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low1Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Valid)) & LOG_fE1Low1ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low2Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Valid)) & LOG_fE1Low2ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low3Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Valid)) & LOG_fE1Low3ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low4Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Valid)) & LOG_fE1Low4ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low5Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Valid)) & LOG_fE1Low5ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low6Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Valid)) & LOG_fE1Low6ValidMask))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE1Low0Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low1Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low2Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low3Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt2)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt2Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt2Fix)))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE1Low0Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt3Dir)) & LOG_fE1Low0Dpt3DirMask) >> LOG_fE1Low0Dpt3DirShift)
// 
#define ParamLOG_fE1Low0Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt3Dim)) & LOG_fE1Low0Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low1Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt3Dir)) & LOG_fE1Low1Dpt3DirMask) >> LOG_fE1Low1Dpt3DirShift)
// 
#define ParamLOG_fE1Low1Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt3Dim)) & LOG_fE1Low1Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low2Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt3Dir)) & LOG_fE1Low2Dpt3DirMask) >> LOG_fE1Low2Dpt3DirShift)
// 
#define ParamLOG_fE1Low2Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt3Dim)) & LOG_fE1Low2Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low3Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt3Dir)) & LOG_fE1Low3Dpt3DirMask) >> LOG_fE1Low3Dpt3DirShift)
// 
#define ParamLOG_fE1Low3Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt3Dim)) & LOG_fE1Low3Dpt3DimMask)
// Eingang ist konstant
#define ParamLOG_fE1LowDpt3FixDir                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt3FixDir)) & LOG_fE1LowDpt3FixDirMask) >> LOG_fE1LowDpt3FixDirShift)
// 
#define ParamLOG_fE1LowDpt3FixDim                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt3FixDim)) & LOG_fE1LowDpt3FixDimMask)
// Von-Wert
#define ParamLOG_fE1LowDpt5                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5)))
// Bis-Wert
#define ParamLOG_fE1HighDpt5                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt5)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt5In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt5Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt5001                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5001)))
// Bis-Wert
#define ParamLOG_fE1HighDpt5001                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt5001)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt5xIn)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt5xFix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5xFix)))
// Von-Wert
#define ParamLOG_fE1LowDpt6                          ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt6)))
// Bis-Wert
#define ParamLOG_fE1HighDpt6                         ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt6)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt6In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt6Fix                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt6Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt7                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt7)))
// Bis-Wert
#define ParamLOG_fE1HighDpt7                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1HighDpt7)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low0Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low1Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low2Dpt7In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt7Fix                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt7Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt8                          ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt8)))
// Bis-Wert
#define ParamLOG_fE1HighDpt8                         ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1HighDpt8)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low0Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low1Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low2Dpt8In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt8Fix                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt8Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt9                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt9), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDpt9                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDpt9), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt9Fix                       (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt9Fix), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE1LowDpt12                         (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt12)))
// Bis-Wert
#define ParamLOG_fE1HighDpt12                        (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDpt12)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt12Fix                      (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt12Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt13                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt13)))
// Bis-Wert
#define ParamLOG_fE1HighDpt13                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDpt13)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt13Fix                      ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt13Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt14                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt14), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDpt14                        (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDpt14), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt14Fix                      (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt14Fix), Float_Enc_IEEE754Single))
// Eingang ist EIN bei Szene
#define ParamLOG_fE1Low0Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low1Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low2Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low3Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low4Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low5Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low6Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low7Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low7Dpt17)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt17Fix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt17Fix)))
// Von-Wert
#define ParamLOG_fE1LowDptRGB                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDptRGB)))
// Bis-Wert
#define ParamLOG_fE1HighDptRGB                       ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDptRGB)))
// Eingang ist konstant
#define ParamLOG_fE1LowDptRGBFix                     ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDptRGBFix)))
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertInt                       (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertInt)) & LOG_fE2ConvertIntMask) >> LOG_fE2ConvertIntShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2Convert                          (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Convert)) & LOG_fE2ConvertMask) >> LOG_fE2ConvertShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertFloat                     (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertFloat)) & LOG_fE2ConvertFloatMask) >> LOG_fE2ConvertFloatShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertSpecial                   (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertSpecial)) & LOG_fE2ConvertSpecialMask) >> LOG_fE2ConvertSpecialShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertBool                      (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertBool)) & LOG_fE2ConvertBoolMask) >> LOG_fE2ConvertBoolShift)
// Eingang 2
#define ParamLOG_fE2                                 (PT_InputEnable)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2)) & LOG_fE2Mask)
// DPT für Eingang
#define ParamLOG_fE2Dpt                              (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Dpt)))
// Eingang wird gelesen alle
#define ParamLOG_fE2RepeatBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2RepeatBase)) & LOG_fE2RepeatBaseMask) >> LOG_fE2RepeatBaseShift)
// Eingang wird gelesen alle
#define ParamLOG_fE2RepeatTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2RepeatTime)) & LOG_fE2RepeatTimeMask)
// Eingang wird gelesen alle (in Millisekunden)
#define ParamLOG_fE2RepeatTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fE2RepeatTime))))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE2OtherKO                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2OtherKO)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE2OtherKORel                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2OtherKORel)))
// Falls Vorbelegung aus dem Speicher nicht möglich oder nicht gewünscht, dann vorbelegen mit
#define ParamLOG_fE2Default                          (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Default)) & LOG_fE2DefaultMask)
// Eingang vorbelegen mit
#define ParamLOG_fE2DefaultExt                       (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultExt)) & LOG_fE2DefaultExtMask)
// Eingangswert speichern und beim nächsten Neustart als Vorbelegung nutzen?
#define ParamLOG_fE2DefaultEEPROM                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultEEPROM)) & LOG_fE2DefaultEEPROMMask))
// Nur so lange zyklisch lesen, bis erstes Telegramm eingeht
#define ParamLOG_fE2DefaultRepeat                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultRepeat)) & LOG_fE2DefaultRepeatMask))
// Kommunikationsobjekt für Eingang
#define ParamLOG_fE2UseOtherKO                       (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2UseOtherKO)) & LOG_fE2UseOtherKOMask) >> LOG_fE2UseOtherKOShift)
// Von-Wert
#define ParamLOG_fE2LowDelta                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDelta)))
// Bis-Wert
#define ParamLOG_fE2HighDelta                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDelta)))
// Von-Wert
#define ParamLOG_fE2LowDeltaFloat                    (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDeltaFloat), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDeltaFloat                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDeltaFloat), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE2LowDeltaDouble                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDeltaDouble), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDeltaDouble                  (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDeltaDouble), Float_Enc_IEEE754Single))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low0Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Valid)) & LOG_fE2Low0ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low1Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Valid)) & LOG_fE2Low1ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low2Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Valid)) & LOG_fE2Low2ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low3Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Valid)) & LOG_fE2Low3ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low4Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Valid)) & LOG_fE2Low4ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low5Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Valid)) & LOG_fE2Low5ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low6Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Valid)) & LOG_fE2Low6ValidMask))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE2Low0Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low1Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low2Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low3Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt2)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt2Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt2Fix)))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE2Low0Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt3Dir)) & LOG_fE2Low0Dpt3DirMask) >> LOG_fE2Low0Dpt3DirShift)
// 
#define ParamLOG_fE2Low0Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt3Dim)) & LOG_fE2Low0Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low1Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt3Dir)) & LOG_fE2Low1Dpt3DirMask) >> LOG_fE2Low1Dpt3DirShift)
// 
#define ParamLOG_fE2Low1Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt3Dim)) & LOG_fE2Low1Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low2Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt3Dir)) & LOG_fE2Low2Dpt3DirMask) >> LOG_fE2Low2Dpt3DirShift)
// 
#define ParamLOG_fE2Low2Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt3Dim)) & LOG_fE2Low2Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low3Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt3Dir)) & LOG_fE2Low3Dpt3DirMask) >> LOG_fE2Low3Dpt3DirShift)
// 
#define ParamLOG_fE2Low3Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt3Dim)) & LOG_fE2Low3Dpt3DimMask)
// Eingang ist konstant
#define ParamLOG_fE2LowDpt3FixDir                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt3FixDir)) & LOG_fE2LowDpt3FixDirMask) >> LOG_fE2LowDpt3FixDirShift)
// 
#define ParamLOG_fE2LowDpt3FixDim                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt3FixDim)) & LOG_fE2LowDpt3FixDimMask)
// Von-Wert
#define ParamLOG_fE2LowDpt5                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5)))
// Bis-Wert
#define ParamLOG_fE2HighDpt5                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt5)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt5In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt5Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt5001                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5001)))
// Bis-Wert
#define ParamLOG_fE2HighDpt5001                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt5001)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt5xIn)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt5xFix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5xFix)))
// Von-Wert
#define ParamLOG_fE2LowDpt6                          ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt6)))
// Bis-Wert
#define ParamLOG_fE2HighDpt6                         ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt6)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt6In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt6Fix                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt6Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt7                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt7)))
// Bis-Wert
#define ParamLOG_fE2HighDpt7                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2HighDpt7)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low0Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low1Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low2Dpt7In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt7Fix                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt7Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt8                          ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt8)))
// Bis-Wert
#define ParamLOG_fE2HighDpt8                         ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2HighDpt8)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low0Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low1Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low2Dpt8In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt8Fix                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt8Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt9                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt9), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDpt9                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDpt9), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt9Fix                       (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt9Fix), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE2LowDpt12                         (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt12)))
// Bis-Wert
#define ParamLOG_fE2HighDpt12                        (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDpt12)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt12Fix                      (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt12Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt13                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt13)))
// Bis-Wert
#define ParamLOG_fE2HighDpt13                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDpt13)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt13Fix                      ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt13Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt14                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt14), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDpt14                        (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDpt14), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt14Fix                      (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt14Fix), Float_Enc_IEEE754Single))
// Eingang ist EIN bei Szene
#define ParamLOG_fE2Low0Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low1Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low2Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low3Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low4Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low5Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low6Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low7Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low7Dpt17)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt17Fix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt17Fix)))
// Von-Wert
#define ParamLOG_fE2LowDptRGB                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDptRGB)))
// Bis-Wert
#define ParamLOG_fE2HighDptRGB                       ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDptRGB)))
// Eingang ist konstant
#define ParamLOG_fE2LowDptRGBFix                     ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDptRGBFix)))
// Zeitbezug
#define ParamLOG_fTd1DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1DuskDawn)) & LOG_fTd1DuskDawnMask) >> LOG_fTd1DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd2DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2DuskDawn)) & LOG_fTd2DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd3DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3DuskDawn)) & LOG_fTd3DuskDawnMask) >> LOG_fTd3DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd4DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4DuskDawn)) & LOG_fTd4DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd5DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5DuskDawn)) & LOG_fTd5DuskDawnMask) >> LOG_fTd5DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd6DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6DuskDawn)) & LOG_fTd6DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd7DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7DuskDawn)) & LOG_fTd7DuskDawnMask) >> LOG_fTd7DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd8DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8DuskDawn)) & LOG_fTd8DuskDawnMask)
// Typ der Zeitschaltuhr
#define ParamLOG_fTYearDay                           (PT_YearDay)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTYearDay)) & LOG_fTYearDayMask) >> LOG_fTYearDayShift)
// Feiertagsbehandlung
#define ParamLOG_fTHoliday                           (PT_Holiday)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTHoliday)) & LOG_fTHolidayMask) >> LOG_fTHolidayShift)
// Bei Neustart letzte Schaltzeit nachholen
#define ParamLOG_fTRestoreState                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTRestoreState)) & LOG_fTRestoreStateMask) >> LOG_fTRestoreStateShift)
// Urlaubsbehandlung
#define ParamLOG_fTVacation                          (PT_Vacation)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTVacation)) & LOG_fTVacationMask)
// Zahlenwert
#define ParamLOG_fTd1ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1ValueNum)))
// Zahlenwert
#define ParamLOG_fTd2ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2ValueNum)))
// Zahlenwert
#define ParamLOG_fTd3ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3ValueNum)))
// Zahlenwert
#define ParamLOG_fTd4ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4ValueNum)))
// Zahlenwert
#define ParamLOG_fTd5ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5ValueNum)))
// Zahlenwert
#define ParamLOG_fTd6ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6ValueNum)))
// Zahlenwert
#define ParamLOG_fTd7ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7ValueNum)))
// Zahlenwert
#define ParamLOG_fTd8ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8ValueNum)))
// Schaltwert
#define ParamLOG_fTd1Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Value)) & LOG_fTd1ValueMask))
// Grad
#define ParamLOG_fTd1Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Degree)) & LOG_fTd1DegreeMask) >> LOG_fTd1DegreeShift)
// Stunde
#define ParamLOG_fTd1HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourAbs)) & LOG_fTd1HourAbsMask) >> LOG_fTd1HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd1HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourRel)) & LOG_fTd1HourRelMask) >> LOG_fTd1HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd1HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourRelShort)) & LOG_fTd1HourRelShortMask) >> LOG_fTd1HourRelShortShift)
// Minute
#define ParamLOG_fTd1MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1MinuteAbs)))
// Minute
#define ParamLOG_fTd1MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1MinuteRel)))
// Wochentag
#define ParamLOG_fTd1Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Weekday)) & LOG_fTd1WeekdayMask)
// Schaltwert
#define ParamLOG_fTd2Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Value)) & LOG_fTd2ValueMask))
// Grad
#define ParamLOG_fTd2Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Degree)) & LOG_fTd2DegreeMask) >> LOG_fTd2DegreeShift)
// Stunde
#define ParamLOG_fTd2HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourAbs)) & LOG_fTd2HourAbsMask) >> LOG_fTd2HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd2HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourRel)) & LOG_fTd2HourRelMask) >> LOG_fTd2HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd2HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourRelShort)) & LOG_fTd2HourRelShortMask) >> LOG_fTd2HourRelShortShift)
// Minute
#define ParamLOG_fTd2MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2MinuteAbs)))
// Minute
#define ParamLOG_fTd2MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2MinuteRel)))
// Wochentag
#define ParamLOG_fTd2Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Weekday)) & LOG_fTd2WeekdayMask)
// Schaltwert
#define ParamLOG_fTd3Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Value)) & LOG_fTd3ValueMask))
// Grad
#define ParamLOG_fTd3Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Degree)) & LOG_fTd3DegreeMask) >> LOG_fTd3DegreeShift)
// Stunde
#define ParamLOG_fTd3HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourAbs)) & LOG_fTd3HourAbsMask) >> LOG_fTd3HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd3HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourRel)) & LOG_fTd3HourRelMask) >> LOG_fTd3HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd3HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourRelShort)) & LOG_fTd3HourRelShortMask) >> LOG_fTd3HourRelShortShift)
// Minute
#define ParamLOG_fTd3MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3MinuteAbs)))
// Minute
#define ParamLOG_fTd3MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3MinuteRel)))
// Wochentag
#define ParamLOG_fTd3Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Weekday)) & LOG_fTd3WeekdayMask)
// Schaltwert
#define ParamLOG_fTd4Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Value)) & LOG_fTd4ValueMask))
// Grad
#define ParamLOG_fTd4Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Degree)) & LOG_fTd4DegreeMask) >> LOG_fTd4DegreeShift)
// Stunde
#define ParamLOG_fTd4HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourAbs)) & LOG_fTd4HourAbsMask) >> LOG_fTd4HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd4HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourRel)) & LOG_fTd4HourRelMask) >> LOG_fTd4HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd4HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourRelShort)) & LOG_fTd4HourRelShortMask) >> LOG_fTd4HourRelShortShift)
// Minute
#define ParamLOG_fTd4MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4MinuteAbs)))
// Minute
#define ParamLOG_fTd4MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4MinuteRel)))
// Wochentag
#define ParamLOG_fTd4Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Weekday)) & LOG_fTd4WeekdayMask)
// Schaltwert
#define ParamLOG_fTd5Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Value)) & LOG_fTd5ValueMask))
// Grad
#define ParamLOG_fTd5Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Degree)) & LOG_fTd5DegreeMask) >> LOG_fTd5DegreeShift)
// Stunde
#define ParamLOG_fTd5HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourAbs)) & LOG_fTd5HourAbsMask) >> LOG_fTd5HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd5HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourRel)) & LOG_fTd5HourRelMask) >> LOG_fTd5HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd5HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourRelShort)) & LOG_fTd5HourRelShortMask) >> LOG_fTd5HourRelShortShift)
// Minute
#define ParamLOG_fTd5MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5MinuteAbs)))
// Minute
#define ParamLOG_fTd5MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5MinuteRel)))
// Wochentag
#define ParamLOG_fTd5Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Weekday)) & LOG_fTd5WeekdayMask)
// Schaltwert
#define ParamLOG_fTd6Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Value)) & LOG_fTd6ValueMask))
// Grad
#define ParamLOG_fTd6Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Degree)) & LOG_fTd6DegreeMask) >> LOG_fTd6DegreeShift)
// Stunde
#define ParamLOG_fTd6HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourAbs)) & LOG_fTd6HourAbsMask) >> LOG_fTd6HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd6HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourRel)) & LOG_fTd6HourRelMask) >> LOG_fTd6HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd6HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourRelShort)) & LOG_fTd6HourRelShortMask) >> LOG_fTd6HourRelShortShift)
// Minute
#define ParamLOG_fTd6MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6MinuteAbs)))
// Minute
#define ParamLOG_fTd6MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6MinuteRel)))
// Wochentag
#define ParamLOG_fTd6Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Weekday)) & LOG_fTd6WeekdayMask)
// Schaltwert
#define ParamLOG_fTd7Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Value)) & LOG_fTd7ValueMask))
// Grad
#define ParamLOG_fTd7Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Degree)) & LOG_fTd7DegreeMask) >> LOG_fTd7DegreeShift)
// Stunde
#define ParamLOG_fTd7HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourAbs)) & LOG_fTd7HourAbsMask) >> LOG_fTd7HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd7HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourRel)) & LOG_fTd7HourRelMask) >> LOG_fTd7HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd7HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourRelShort)) & LOG_fTd7HourRelShortMask) >> LOG_fTd7HourRelShortShift)
// Minute
#define ParamLOG_fTd7MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7MinuteAbs)))
// Minute
#define ParamLOG_fTd7MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7MinuteRel)))
// Wochentag
#define ParamLOG_fTd7Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Weekday)) & LOG_fTd7WeekdayMask)
// Schaltwert
#define ParamLOG_fTd8Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Value)) & LOG_fTd8ValueMask))
// Grad
#define ParamLOG_fTd8Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Degree)) & LOG_fTd8DegreeMask) >> LOG_fTd8DegreeShift)
// Stunde
#define ParamLOG_fTd8HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourAbs)) & LOG_fTd8HourAbsMask) >> LOG_fTd8HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd8HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourRel)) & LOG_fTd8HourRelMask) >> LOG_fTd8HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd8HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourRelShort)) & LOG_fTd8HourRelShortMask) >> LOG_fTd8HourRelShortShift)
// Minute
#define ParamLOG_fTd8MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8MinuteAbs)))
// Minute
#define ParamLOG_fTd8MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8MinuteRel)))
// Wochentag
#define ParamLOG_fTd8Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Weekday)) & LOG_fTd8WeekdayMask)
// Mo
#define ParamLOG_fTy1Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday1)) & LOG_fTy1Weekday1Mask))
// Di
#define ParamLOG_fTy1Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday2)) & LOG_fTy1Weekday2Mask))
// Mi
#define ParamLOG_fTy1Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday3)) & LOG_fTy1Weekday3Mask))
// Do
#define ParamLOG_fTy1Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday4)) & LOG_fTy1Weekday4Mask))
// Fr
#define ParamLOG_fTy1Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday5)) & LOG_fTy1Weekday5Mask))
// Sa
#define ParamLOG_fTy1Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday6)) & LOG_fTy1Weekday6Mask))
// So
#define ParamLOG_fTy1Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday7)) & LOG_fTy1Weekday7Mask))
// Tag
#define ParamLOG_fTy1Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Day)) & LOG_fTy1DayMask) >> LOG_fTy1DayShift)
// Wochentag
#define ParamLOG_fTy1IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1IsWeekday)) & LOG_fTy1IsWeekdayMask))
// Monat
#define ParamLOG_fTy1Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Month)) & LOG_fTy1MonthMask) >> LOG_fTy1MonthShift)
// Mo
#define ParamLOG_fTy2Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday1)) & LOG_fTy2Weekday1Mask))
// Di
#define ParamLOG_fTy2Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday2)) & LOG_fTy2Weekday2Mask))
// Mi
#define ParamLOG_fTy2Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday3)) & LOG_fTy2Weekday3Mask))
// Do
#define ParamLOG_fTy2Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday4)) & LOG_fTy2Weekday4Mask))
// Fr
#define ParamLOG_fTy2Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday5)) & LOG_fTy2Weekday5Mask))
// Sa
#define ParamLOG_fTy2Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday6)) & LOG_fTy2Weekday6Mask))
// So
#define ParamLOG_fTy2Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday7)) & LOG_fTy2Weekday7Mask))
// Tag
#define ParamLOG_fTy2Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Day)) & LOG_fTy2DayMask) >> LOG_fTy2DayShift)
// Wochentag
#define ParamLOG_fTy2IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2IsWeekday)) & LOG_fTy2IsWeekdayMask))
// Monat
#define ParamLOG_fTy2Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Month)) & LOG_fTy2MonthMask) >> LOG_fTy2MonthShift)
// Mo
#define ParamLOG_fTy3Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday1)) & LOG_fTy3Weekday1Mask))
// Di
#define ParamLOG_fTy3Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday2)) & LOG_fTy3Weekday2Mask))
// Mi
#define ParamLOG_fTy3Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday3)) & LOG_fTy3Weekday3Mask))
// Do
#define ParamLOG_fTy3Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday4)) & LOG_fTy3Weekday4Mask))
// Fr
#define ParamLOG_fTy3Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday5)) & LOG_fTy3Weekday5Mask))
// Sa
#define ParamLOG_fTy3Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday6)) & LOG_fTy3Weekday6Mask))
// So
#define ParamLOG_fTy3Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday7)) & LOG_fTy3Weekday7Mask))
// Tag
#define ParamLOG_fTy3Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Day)) & LOG_fTy3DayMask) >> LOG_fTy3DayShift)
// Wochentag
#define ParamLOG_fTy3IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3IsWeekday)) & LOG_fTy3IsWeekdayMask))
// Monat
#define ParamLOG_fTy3Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Month)) & LOG_fTy3MonthMask) >> LOG_fTy3MonthShift)
// Mo
#define ParamLOG_fTy4Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday1)) & LOG_fTy4Weekday1Mask))
// Di
#define ParamLOG_fTy4Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday2)) & LOG_fTy4Weekday2Mask))
// Mi
#define ParamLOG_fTy4Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday3)) & LOG_fTy4Weekday3Mask))
// Do
#define ParamLOG_fTy4Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday4)) & LOG_fTy4Weekday4Mask))
// Fr
#define ParamLOG_fTy4Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday5)) & LOG_fTy4Weekday5Mask))
// Sa
#define ParamLOG_fTy4Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday6)) & LOG_fTy4Weekday6Mask))
// So
#define ParamLOG_fTy4Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday7)) & LOG_fTy4Weekday7Mask))
// Tag
#define ParamLOG_fTy4Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Day)) & LOG_fTy4DayMask) >> LOG_fTy4DayShift)
// Wochentag
#define ParamLOG_fTy4IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4IsWeekday)) & LOG_fTy4IsWeekdayMask))
// Monat
#define ParamLOG_fTy4Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Month)) & LOG_fTy4MonthMask) >> LOG_fTy4MonthShift)
// Interner Eingang 3
#define ParamLOG_fI1                                 (PT_InputEnable)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1)) & LOG_fI1Mask) >> LOG_fI1Shift)
// Art der Verknüpfung
#define ParamLOG_fI1Kind                             (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1Kind)) & LOG_fI1KindMask) >> LOG_fI1KindShift)
// Internen Eingang als Trigger nutzen(ist immer logisch EIN)
#define ParamLOG_fI1AsTrigger                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fI1AsTrigger)) & LOG_fI1AsTriggerMask))
// Interner Eingang wird versorgt vom
#define ParamLOG_fI1InternalInputType                (PT_InternalInputType)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1InternalInputType)) & LOG_fI1InternalInputTypeMask) >> LOG_fI1InternalInputTypeShift)
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI1Function                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fI1Function)))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI1FunctionRel                      ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fI1FunctionRel)))
// Statuskanal
#define ParamLOG_fI1StatusLed                        (knx.paramWord(LOG_ParamCalcIndex(LOG_fI1StatusLed)))
// Interner Eingang 4
#define ParamLOG_fI2                                 (PT_InputEnable)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2)) & LOG_fI2Mask) >> LOG_fI2Shift)
// Art der Verknüpfung
#define ParamLOG_fI2Kind                             (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2Kind)) & LOG_fI2KindMask) >> LOG_fI2KindShift)
// Internen Eingang als Trigger nutzen(ist immer logisch EIN)
#define ParamLOG_fI2AsTrigger                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fI2AsTrigger)) & LOG_fI2AsTriggerMask))
// Interner Eingang wird versorgt vom
#define ParamLOG_fI2InternalInputType                (PT_InternalInputType)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2InternalInputType)) & LOG_fI2InternalInputTypeMask) >> LOG_fI2InternalInputTypeShift)
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI2Function                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fI2Function)))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI2FunctionRel                      ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fI2FunctionRel)))
// Statuskanal
#define ParamLOG_fI2StatusLed                        (knx.paramWord(LOG_ParamCalcIndex(LOG_fI2StatusLed)))
// Zeit für Treppenlicht
#define ParamLOG_fOStairtimeBase                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOStairtimeBase)) & LOG_fOStairtimeBaseMask) >> LOG_fOStairtimeBaseShift)
// Zeit für Treppenlicht
#define ParamLOG_fOStairtimeTime                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fOStairtimeTime)) & LOG_fOStairtimeTimeMask)
// Zeit für Treppenlicht (in Millisekunden)
#define ParamLOG_fOStairtimeTimeMS                   (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fOStairtimeTime))))
// Treppenlicht blinkt im Rhythmus
#define ParamLOG_fOBlinkBase                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOBlinkBase)) & LOG_fOBlinkBaseMask) >> LOG_fOBlinkBaseShift)
// Treppenlicht blinkt im Rhythmus
#define ParamLOG_fOBlinkTime                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fOBlinkTime)) & LOG_fOBlinkTimeMask)
// Treppenlicht blinkt im Rhythmus (in Millisekunden)
#define ParamLOG_fOBlinkTimeMS                       (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fOBlinkTime))))
// EINschalten wird verzögert um
#define ParamLOG_fODelayOnBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnBase)) & LOG_fODelayOnBaseMask) >> LOG_fODelayOnBaseShift)
// EINschalten wird verzögert um
#define ParamLOG_fODelayOnTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOnTime)) & LOG_fODelayOnTimeMask)
// EINschalten wird verzögert um (in Millisekunden)
#define ParamLOG_fODelayOnTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOnTime))))
// AUSschalten wird verzögert um
#define ParamLOG_fODelayOffBase                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffBase)) & LOG_fODelayOffBaseMask) >> LOG_fODelayOffBaseShift)
// AUSschalten wird verzögert um
#define ParamLOG_fODelayOffTime                      (knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOffTime)) & LOG_fODelayOffTimeMask)
// AUSschalten wird verzögert um (in Millisekunden)
#define ParamLOG_fODelayOffTimeMS                    (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOffTime))))
// EIN-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOnBase                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeatOnBase)) & LOG_fORepeatOnBaseMask) >> LOG_fORepeatOnBaseShift)
// EIN-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOnTime                      (knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOnTime)) & LOG_fORepeatOnTimeMask)
// EIN-Telegramm wird wiederholt alle (in Millisekunden)
#define ParamLOG_fORepeatOnTimeMS                    (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOnTime))))
// AUS-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOffBase                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeatOffBase)) & LOG_fORepeatOffBaseMask) >> LOG_fORepeatOffBaseShift)
// AUS-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOffTime                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOffTime)) & LOG_fORepeatOffTimeMask)
// AUS-Telegramm wird wiederholt alle (in Millisekunden)
#define ParamLOG_fORepeatOffTimeMS                   (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOffTime))))
// Ausgang schaltet zeitverzögert
#define ParamLOG_fODelay                             ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fODelay)) & LOG_fODelayMask))
// Erneutes EIN führt zu
#define ParamLOG_fODelayOnRepeat                     (PT_OnOffRepeat)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnRepeat)) & LOG_fODelayOnRepeatMask) >> LOG_fODelayOnRepeatShift)
// Darauffolgendes AUS führt zu
#define ParamLOG_fODelayOnReset                      (PT_OnOffReset)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnReset)) & LOG_fODelayOnResetMask) >> LOG_fODelayOnResetShift)
// Erneutes AUS führt zu
#define ParamLOG_fODelayOffRepeat                    (PT_OnOffRepeat)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffRepeat)) & LOG_fODelayOffRepeatMask) >> LOG_fODelayOffRepeatShift)
// Darauffolgendes EIN führt zu
#define ParamLOG_fODelayOffReset                     (PT_OnOffReset)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffReset)) & LOG_fODelayOffResetMask) >> LOG_fODelayOffResetShift)
// Ausgang hat eine Treppenlichtfunktion
#define ParamLOG_fOStair                             ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOStair)) & LOG_fOStairMask))
// Treppenlicht kann verlängert werden
#define ParamLOG_fORetrigger                         ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fORetrigger)) & LOG_fORetriggerMask))
// Treppenlicht kann ausgeschaltet werden
#define ParamLOG_fOStairOff                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOStairOff)) & LOG_fOStairOffMask))
// Ausgang wiederholt zyklisch
#define ParamLOG_fORepeat                            ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeat)) & LOG_fORepeatMask))
// Wiederholungsfilter
#define ParamLOG_fOOutputFilter                      (PT_OutputFilter)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOutputFilter)) & LOG_fOOutputFilterMask) >> LOG_fOOutputFilterShift)
// Sendeverhalten für Ausgang
#define ParamLOG_fOSendOnChange                      (PT_SendOnChange)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOSendOnChange)) & LOG_fOSendOnChangeMask) >> LOG_fOSendOnChangeShift)
// Sperre aktivieren
#define ParamLOG_fOLockEnabled                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockEnabled)) & LOG_fOLockEnabledMask))
// DPT für Ausgang
#define ParamLOG_fODpt                               (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fODpt)))
// Beim Sperren
#define ParamLOG_fOLockTriggerLock                   (PT_LockTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockTriggerLock)) & LOG_fOLockTriggerLockMask) >> LOG_fOLockTriggerLockShift)
// Beim Entsperren
#define ParamLOG_fOLockTriggerUnlock                 (PT_LockTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockTriggerUnlock)) & LOG_fOLockTriggerUnlockMask) >> LOG_fOLockTriggerUnlockShift)
// Anschließend die Signalverarbeitung
#define ParamLOG_fOLockResetQueue                    (PT_LockResetQueue)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockResetQueue)) & LOG_fOLockResetQueueMask) >> LOG_fOLockResetQueueShift)
// Art der Verknüpfung
#define ParamLOG_fOLockKind                          (PT_KORelInput)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockKind)) & LOG_fOLockKindMask)
// Sperre verbinden mit Kanal Nr.
#define ParamLOG_fOLockFunction                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockFunction)))
// Sperre verbinden mit Kanal Nr.
#define ParamLOG_fOLockFunctionRel                   ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockFunctionRel)))
// Wert für EIN senden?
#define ParamLOG_fOOnAll                             (PT_OutputSend)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnAll)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt1                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt1)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt2                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt2)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt3Dir                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt3Dir)) & LOG_fOOnDpt3DirMask) >> LOG_fOOnDpt3DirShift)
// 
#define ParamLOG_fOOnDpt3Dim                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt3Dim)) & LOG_fOOnDpt3DimMask)
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt5                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt5)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt5001                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt5001)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt6                            ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt6)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt7                            (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnDpt7)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt8                            ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnDpt8)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt9                            (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOnDpt9), Float_Enc_IEEE754Single))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt12                           (knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnDpt12)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt13                           ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnDpt13)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt14                           (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOnDpt14), Float_Enc_IEEE754Single))
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt16                           (knx.paramData(LOG_ParamCalcIndex(LOG_fOOnDpt16)))
#define ParamLOG_fOOnDpt16Str                        (knx.paramString(LOG_ParamCalcIndex(LOG_fOOnDpt16), LOG_fOOnDpt16Length))
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt17                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt17)))
//     Wert für EIN senden als (3-Byte-RGB)
#define ParamLOG_fOOnRGB                             ((knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnRGB)) & LOG_fOOnRGBMask) >> LOG_fOOnRGBShift)
//     Status-LED Kanal
#define ParamLOG_fOOnLedProvider                     (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnLedProvider)) & LOG_fOOnLedProviderMask)
//     Status-LED Effekt
#define ParamLOG_fOOnLedEffect                       (PT_StatusLedEffect)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnLedEffect)) & LOG_fOOnLedEffectMask)
//     Status-LED Effektdauer
#define ParamLOG_fOOnLedDuration                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnLedDuration)))
// 
#define ParamLOG_fOOnPAArea                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPAArea)) & LOG_fOOnPAAreaMask) >> LOG_fOOnPAAreaShift)
// 
#define ParamLOG_fOOnPALine                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPALine)) & LOG_fOOnPALineMask)
// 
#define ParamLOG_fOOnPADevice                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPADevice)))
//     Wert für EIN ermitteln als
#define ParamLOG_fOOnFunction                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnFunction)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKOKind                          (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKOKind)) & LOG_fOOnKOKindMask) >> LOG_fOOnKOKindShift)
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKONumber                        (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKONumber)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKONumberRel                     ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKONumberRel)))
//     DPT des Kommunikationsobjekts
#define ParamLOG_fOOnKODpt                           (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKODpt)))
//     Wert für EIN an ein zusätzliches    KO senden?
#define ParamLOG_fOOnKOSend                          (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKOSend)) & LOG_fOOnKOSendMask) >> LOG_fOOnKOSendShift)
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOnKOSendNumber                    (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKOSendNumber)))
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOnKOSendNumberRel                 ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKOSendNumberRel)))
// Wert für AUS senden?
#define ParamLOG_fOOffAll                            (PT_OutputSend)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffAll)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt1                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt1)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt2                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt2)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt3Dir                        ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt3Dir)) & LOG_fOOffDpt3DirMask) >> LOG_fOOffDpt3DirShift)
// 
#define ParamLOG_fOOffDpt3Dim                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt3Dim)) & LOG_fOOffDpt3DimMask)
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt5                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt5)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt5001                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt5001)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt6                           ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt6)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt7                           (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffDpt7)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt8                           ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffDpt8)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt9                           (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOffDpt9), Float_Enc_IEEE754Single))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt12                          (knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffDpt12)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt13                          ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffDpt13)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt14                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOffDpt14), Float_Enc_IEEE754Single))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt16                          (knx.paramData(LOG_ParamCalcIndex(LOG_fOOffDpt16)))
#define ParamLOG_fOOffDpt16Str                       (knx.paramString(LOG_ParamCalcIndex(LOG_fOOffDpt16), LOG_fOOffDpt16Length))
//     Wert für AUS senden als 
#define ParamLOG_fOOffDpt17                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt17)))
//     Wert für AUS senden als (3-Byte-RGB)
#define ParamLOG_fOOffRGB                            ((knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffRGB)) & LOG_fOOffRGBMask) >> LOG_fOOffRGBShift)
//     Status-LED-Kanal
#define ParamLOG_fOOffLedProvider                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffLedProvider)) & LOG_fOOffLedProviderMask)
//     Status-LED Effekt
#define ParamLOG_fOOffLedEffect                      (PT_StatusLedEffect)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffLedEffect)) & LOG_fOOffLedEffectMask)
//     Status-LED Effektdauer
#define ParamLOG_fOOffLedDuration                    (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffLedDuration)))
// 
#define ParamLOG_fOOffPAArea                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPAArea)) & LOG_fOOffPAAreaMask) >> LOG_fOOffPAAreaShift)
// 
#define ParamLOG_fOOffPALine                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPALine)) & LOG_fOOffPALineMask)
// 
#define ParamLOG_fOOffPADevice                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPADevice)))
//     Wert für AUS ermitteln als
#define ParamLOG_fOOffFunction                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffFunction)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKOKind                         (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKOKind)) & LOG_fOOffKOKindMask) >> LOG_fOOffKOKindShift)
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKONumber                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKONumber)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKONumberRel                    ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKONumberRel)))
//     DPT des Kommunikationsobjekts
#define ParamLOG_fOOffKODpt                          (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKODpt)))
//     Wert für AUS an ein zusätzliches    KO senden?
#define ParamLOG_fOOffKOSend                         (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKOSend)) & LOG_fOOffKOSendMask) >> LOG_fOOffKOSendShift)
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOffKOSendNumber                   (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKOSendNumber)))
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOffKOSendNumberRel                ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKOSendNumberRel)))

// deprecated
#define LOG_KoOffset 100

// Communication objects per channel (multiple occurrence)
#define LOG_KoBlockOffset 100
#define LOG_KoBlockSize 3

#define LOG_KoCalcNumber(index) (index + LOG_KoBlockOffset + _channelIndex * LOG_KoBlockSize)
#define LOG_KoCalcIndex(number) ((number >= LOG_KoCalcNumber(0) && number < LOG_KoCalcNumber(LOG_KoBlockSize)) ? (number - LOG_KoBlockOffset) % LOG_KoBlockSize : -1)
#define LOG_KoCalcChannel(number) ((number >= LOG_KoBlockOffset && number < LOG_KoBlockOffset + LOG_ChannelCount * LOG_KoBlockSize) ? (number - LOG_KoBlockOffset) / LOG_KoBlockSize : -1)

#define LOG_KoKOfE1 0
#define LOG_KoKOfE2 1
#define LOG_KoKOfO 2

// Eingang 1
#define KoLOG_KOfE1                               (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfE1)))
// Eingang 2
#define KoLOG_KOfE2                               (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfE2)))
// Ausgang
#define KoLOG_KOfO                                (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfO)))

#define FCB_VisibleChannels                     34469      // uint8_t

// Verfügbare Kanäle
#define ParamFCB_VisibleChannels                     (knx.paramByte(FCB_VisibleChannels))

#define FCB_ChannelCount 15

// Parameter per channel
#define FCB_ParamBlockOffset 34470
#define FCB_ParamBlockSize 81
#define FCB_ParamCalcIndex(index) (index + FCB_ParamBlockOffset + _channelIndex * FCB_ParamBlockSize)

#define FCB_CHChannelType                        0      // 8 Bits, Bit 7-0
#define FCB_CHChannelDisabled                    1      // 1 Bit, Bit 7
#define     FCB_CHChannelDisabledMask 0x80
#define     FCB_CHChannelDisabledShift 7
#define FCB_CHLogicKo0D                          2      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo0DMask 0xC0
#define     FCB_CHLogicKo0DShift 6
#define FCB_CHLogicKo1D                          2      // 2 Bits, Bit 5-4
#define     FCB_CHLogicKo1DMask 0x30
#define     FCB_CHLogicKo1DShift 4
#define FCB_CHLogicKo2D                          2      // 2 Bits, Bit 3-2
#define     FCB_CHLogicKo2DMask 0x0C
#define     FCB_CHLogicKo2DShift 2
#define FCB_CHLogicKo3D                          2      // 2 Bits, Bit 1-0
#define     FCB_CHLogicKo3DMask 0x03
#define     FCB_CHLogicKo3DShift 0
#define FCB_CHLogicKo4D                          3      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo4DMask 0xC0
#define     FCB_CHLogicKo4DShift 6
#define FCB_CHLogicKo5D                          3      // 2 Bits, Bit 5-4
#define     FCB_CHLogicKo5DMask 0x30
#define     FCB_CHLogicKo5DShift 4
#define FCB_CHLogicKo6D                          3      // 2 Bits, Bit 3-2
#define     FCB_CHLogicKo6DMask 0x0C
#define     FCB_CHLogicKo6DShift 2
#define FCB_CHLogicKo7D                          3      // 2 Bits, Bit 1-0
#define     FCB_CHLogicKo7DMask 0x03
#define     FCB_CHLogicKo7DShift 0
#define FCB_CHLogicKo8D                          4      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo8DMask 0xC0
#define     FCB_CHLogicKo8DShift 6
#define FCB_CHLogicOutInv                        4      // 1 Bit, Bit 4
#define     FCB_CHLogicOutInvMask 0x10
#define     FCB_CHLogicOutInvShift 4
#define FCB_CHLogicBehavOut                      4      // 1 Bit, Bit 3
#define     FCB_CHLogicBehavOutMask 0x08
#define     FCB_CHLogicBehavOutShift 3
#define FCB_CHLogicBehavKo0                      5      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo0Mask 0xF0
#define     FCB_CHLogicBehavKo0Shift 4
#define FCB_CHLogicBehavKo1                      5      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo1Mask 0x0F
#define     FCB_CHLogicBehavKo1Shift 0
#define FCB_CHLogicBehavKo2                      6      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo2Mask 0xF0
#define     FCB_CHLogicBehavKo2Shift 4
#define FCB_CHLogicBehavKo3                      6      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo3Mask 0x0F
#define     FCB_CHLogicBehavKo3Shift 0
#define FCB_CHLogicBehavKo4                      7      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo4Mask 0xF0
#define     FCB_CHLogicBehavKo4Shift 4
#define FCB_CHLogicBehavKo5                      7      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo5Mask 0x0F
#define     FCB_CHLogicBehavKo5Shift 0
#define FCB_CHLogicBehavKo6                      8      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo6Mask 0xF0
#define     FCB_CHLogicBehavKo6Shift 4
#define FCB_CHLogicBehavKo7                      8      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo7Mask 0x0F
#define     FCB_CHLogicBehavKo7Shift 0
#define FCB_CHLogicBehavKo8                      9      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo8Mask 0xF0
#define     FCB_CHLogicBehavKo8Shift 4
#define FCB_CHBayesianPrior                     10      // uint8_t
#define FCB_CHBayesianThreshold                 11      // uint8_t
#define FCB_CHBayesianEnableProbOutput          12      // 1 Bit, Bit 7
#define     FCB_CHBayesianEnableProbOutputMask 0x80
#define     FCB_CHBayesianEnableProbOutputShift 7
#define FCB_CHLogicKo0BayesProbTrue             15      // uint8_t
#define FCB_CHLogicKo0BayesProbFalse            16      // uint8_t
#define FCB_CHLogicKo1BayesProbTrue             17      // uint8_t
#define FCB_CHLogicKo1BayesProbFalse            18      // uint8_t
#define FCB_CHLogicKo2BayesProbTrue             19      // uint8_t
#define FCB_CHLogicKo2BayesProbFalse            20      // uint8_t
#define FCB_CHLogicKo3BayesProbTrue             21      // uint8_t
#define FCB_CHLogicKo3BayesProbFalse            22      // uint8_t
#define FCB_CHLogicKo4BayesProbTrue             23      // uint8_t
#define FCB_CHLogicKo4BayesProbFalse            24      // uint8_t
#define FCB_CHLogicKo5BayesProbTrue             25      // uint8_t
#define FCB_CHLogicKo5BayesProbFalse            26      // uint8_t
#define FCB_CHLogicKo6BayesProbTrue             27      // uint8_t
#define FCB_CHLogicKo6BayesProbFalse            28      // uint8_t
#define FCB_CHLogicKo7BayesProbTrue             29      // uint8_t
#define FCB_CHLogicKo7BayesProbFalse            30      // uint8_t
#define FCB_CHLogicKo8BayesProbTrue             31      // uint8_t
#define FCB_CHLogicKo8BayesProbFalse            32      // uint8_t
#define FCB_CHPrioKo0D                           2      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo0DMask 0xC0
#define     FCB_CHPrioKo0DShift 6
#define FCB_CHPrioKo1D                           2      // 2 Bits, Bit 5-4
#define     FCB_CHPrioKo1DMask 0x30
#define     FCB_CHPrioKo1DShift 4
#define FCB_CHPrioKo2D                           2      // 2 Bits, Bit 3-2
#define     FCB_CHPrioKo2DMask 0x0C
#define     FCB_CHPrioKo2DShift 2
#define FCB_CHPrioKo3D                           2      // 2 Bits, Bit 1-0
#define     FCB_CHPrioKo3DMask 0x03
#define     FCB_CHPrioKo3DShift 0
#define FCB_CHPrioKo4D                           3      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo4DMask 0xC0
#define     FCB_CHPrioKo4DShift 6
#define FCB_CHPrioKo5D                           3      // 2 Bits, Bit 5-4
#define     FCB_CHPrioKo5DMask 0x30
#define     FCB_CHPrioKo5DShift 4
#define FCB_CHPrioKo6D                           3      // 2 Bits, Bit 3-2
#define     FCB_CHPrioKo6DMask 0x0C
#define     FCB_CHPrioKo6DShift 2
#define FCB_CHPrioKo7D                           3      // 2 Bits, Bit 1-0
#define     FCB_CHPrioKo7DMask 0x03
#define     FCB_CHPrioKo7DShift 0
#define FCB_CHPrioKo8D                           4      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo8DMask 0xC0
#define     FCB_CHPrioKo8DShift 6
#define FCB_CHPrioOutputType                     4      // 2 Bits, Bit 5-4
#define     FCB_CHPrioOutputTypeMask 0x30
#define     FCB_CHPrioOutputTypeShift 4
#define FCB_CHPrioOutPKo0                        5      // uint8_t
#define FCB_CHPrioOutByteKo0                     5      // uint8_t
#define FCB_CHPrioOutSceneKo0                    5      // uint8_t
#define FCB_CHPrioOutPKo1                        6      // uint8_t
#define FCB_CHPrioOutByteKo1                     6      // uint8_t
#define FCB_CHPrioOutSceneKo1                    6      // uint8_t
#define FCB_CHPrioOutPKo2                        7      // uint8_t
#define FCB_CHPrioOutByteKo2                     7      // uint8_t
#define FCB_CHPrioOutSceneKo2                    7      // uint8_t
#define FCB_CHPrioOutPKo3                        8      // uint8_t
#define FCB_CHPrioOutByteKo3                     8      // uint8_t
#define FCB_CHPrioOutSceneKo3                    8      // uint8_t
#define FCB_CHPrioOutPKo4                        9      // uint8_t
#define FCB_CHPrioOutByteKo4                     9      // uint8_t
#define FCB_CHPrioOutSceneKo4                    9      // uint8_t
#define FCB_CHPrioOutPKo5                       10      // uint8_t
#define FCB_CHPrioOutByteKo5                    10      // uint8_t
#define FCB_CHPrioOutSceneKo5                   10      // uint8_t
#define FCB_CHPrioOutPKo6                       11      // uint8_t
#define FCB_CHPrioOutByteKo6                    11      // uint8_t
#define FCB_CHPrioOutSceneKo6                   11      // uint8_t
#define FCB_CHPrioOutPKo7                       12      // uint8_t
#define FCB_CHPrioOutByteKo7                    12      // uint8_t
#define FCB_CHPrioOutSceneKo7                   12      // uint8_t
#define FCB_CHPrioOutPKo8                       13      // uint8_t
#define FCB_CHPrioOutByteKo8                    13      // uint8_t
#define FCB_CHPrioOutSceneKo8                   13      // uint8_t
#define FCB_CHPrioOutPDefault                   14      // uint8_t
#define FCB_CHPrioOutByteDefault                14      // uint8_t
#define FCB_CHPrioOutSceneDefault               14      // uint8_t
#define FCB_CHPrioBehavKo0                      15      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo0Mask 0xF0
#define     FCB_CHPrioBehavKo0Shift 4
#define FCB_CHPrioBehavKo1                      15      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo1Mask 0x0F
#define     FCB_CHPrioBehavKo1Shift 0
#define FCB_CHPrioBehavKo2                      16      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo2Mask 0xF0
#define     FCB_CHPrioBehavKo2Shift 4
#define FCB_CHPrioBehavKo3                      16      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo3Mask 0x0F
#define     FCB_CHPrioBehavKo3Shift 0
#define FCB_CHPrioBehavKo4                      17      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo4Mask 0xF0
#define     FCB_CHPrioBehavKo4Shift 4
#define FCB_CHPrioBehavKo5                      17      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo5Mask 0x0F
#define     FCB_CHPrioBehavKo5Shift 0
#define FCB_CHPrioBehavKo6                      18      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo6Mask 0xF0
#define     FCB_CHPrioBehavKo6Shift 4
#define FCB_CHPrioBehavKo7                      18      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo7Mask 0x0F
#define     FCB_CHPrioBehavKo7Shift 0
#define FCB_CHPrioBehavKo8                      19      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo8Mask 0xF0
#define     FCB_CHPrioBehavKo8Shift 4
#define FCB_CHPrioBehavOut                      19      // 1 Bit, Bit 3
#define     FCB_CHPrioBehavOutMask 0x08
#define     FCB_CHPrioBehavOutShift 3
#define FCB_CHAggWeight                          2      // 1 Bit, Bit 7
#define     FCB_CHAggWeightMask 0x80
#define     FCB_CHAggWeightShift 7
#define FCB_CHAggType                            2      // 7 Bits, Bit 6-0
#define     FCB_CHAggTypeMask 0x7F
#define     FCB_CHAggTypeShift 0
#define FCB_CHAggKo0D                            3      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo0DMask 0xC0
#define     FCB_CHAggKo0DShift 6
#define FCB_CHAggKo1D                            3      // 2 Bits, Bit 5-4
#define     FCB_CHAggKo1DMask 0x30
#define     FCB_CHAggKo1DShift 4
#define FCB_CHAggKo2D                            3      // 2 Bits, Bit 3-2
#define     FCB_CHAggKo2DMask 0x0C
#define     FCB_CHAggKo2DShift 2
#define FCB_CHAggKo3D                            3      // 2 Bits, Bit 1-0
#define     FCB_CHAggKo3DMask 0x03
#define     FCB_CHAggKo3DShift 0
#define FCB_CHAggKo4D                            4      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo4DMask 0xC0
#define     FCB_CHAggKo4DShift 6
#define FCB_CHAggKo5D                            4      // 2 Bits, Bit 5-4
#define     FCB_CHAggKo5DMask 0x30
#define     FCB_CHAggKo5DShift 4
#define FCB_CHAggKo6D                            4      // 2 Bits, Bit 3-2
#define     FCB_CHAggKo6DMask 0x0C
#define     FCB_CHAggKo6DShift 2
#define FCB_CHAggKo7D                            4      // 2 Bits, Bit 1-0
#define     FCB_CHAggKo7DMask 0x03
#define     FCB_CHAggKo7DShift 0
#define FCB_CHAggKo8D                            5      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo8DMask 0xC0
#define     FCB_CHAggKo8DShift 6
#define FCB_CHAggBehavOut                        5      // 1 Bit, Bit 5
#define     FCB_CHAggBehavOutMask 0x20
#define     FCB_CHAggBehavOutShift 5
#define FCB_CHAggOutputRounding                  5      // 1 Bit, Bit 3
#define     FCB_CHAggOutputRoundingMask 0x08
#define     FCB_CHAggOutputRoundingShift 3
#define FCB_CHAggOutputOverflow                  5      // 2 Bits, Bit 2-1
#define     FCB_CHAggOutputOverflowMask 0x06
#define     FCB_CHAggOutputOverflowShift 1
#define FCB_CHAggInputDpt                        6      // 8 Bits, Bit 7-0
#define FCB_CHAggOutputDptEff                    7      // 8 Bits, Bit 7-0
#define FCB_CHAggKo0W                            8      // int8_t
#define FCB_CHAggKo1W                            9      // int8_t
#define FCB_CHAggKo2W                           10      // int8_t
#define FCB_CHAggKo3W                           11      // int8_t
#define FCB_CHAggKo4W                           12      // int8_t
#define FCB_CHAggKo5W                           13      // int8_t
#define FCB_CHAggKo6W                           14      // int8_t
#define FCB_CHAggKo7W                           15      // int8_t
#define FCB_CHAggKo8W                           16      // int8_t
#define FCB_CHCountDownTimeStartKo               2      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownTimeStartKoMask 0xF0
#define     FCB_CHCountDownTimeStartKoShift 4
#define FCB_CHCountDownDelayBase                 3      // 2 Bits, Bit 7-6
#define     FCB_CHCountDownDelayBaseMask 0xC0
#define     FCB_CHCountDownDelayBaseShift 6
#define FCB_CHCountDownDelayTime                 3      // 14 Bits, Bit 13-0
#define     FCB_CHCountDownDelayTimeMask 0x3FFF
#define     FCB_CHCountDownDelayTimeShift 0
#define FCB_CHCountDownTimeOffset                5      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownTimeOffsetMask 0xF0
#define     FCB_CHCountDownTimeOffsetShift 4
#define FCB_CHCountDownTrigger                   5      // 4 Bits, Bit 3-0
#define     FCB_CHCountDownTriggerMask 0x0F
#define     FCB_CHCountDownTriggerShift 0
#define FCB_CHCountDownTemplate                  6      // char*, 14 Byte
#define     FCB_CHCountDownTemplateLength 14
#define FCB_CHCountDownTemplate1h               20      // char*, 14 Byte
#define     FCB_CHCountDownTemplate1hLength 14
#define FCB_CHCountDownTemplate1m               34      // char*, 14 Byte
#define     FCB_CHCountDownTemplate1mLength 14
#define FCB_CHCountDownTemplateEnd              48      // char*, 14 Byte
#define     FCB_CHCountDownTemplateEndLength 14
#define FCB_CHCountDownTextPause                62      // char*, 1 Byte
#define     FCB_CHCountDownTextPauseLength 1
#define FCB_CHCountDownTextRun                  63      // char*, 1 Byte
#define     FCB_CHCountDownTextRunLength 1
#define FCB_CHCountDownCounterKo                64      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownCounterKoMask 0xF0
#define     FCB_CHCountDownCounterKoShift 4
#define FCB_CHCountDownTextKo                   64      // 2 Bits, Bit 3-2
#define     FCB_CHCountDownTextKoMask 0x0C
#define     FCB_CHCountDownTextKoShift 2
#define FCB_CHCountDownTemplateStopp            65      // char*, 14 Byte
#define     FCB_CHCountDownTemplateStoppLength 14
#define FCB_CHCountDownMaxDelayBase             79      // 2 Bits, Bit 7-6
#define     FCB_CHCountDownMaxDelayBaseMask 0xC0
#define     FCB_CHCountDownMaxDelayBaseShift 6
#define FCB_CHCountDownMaxDelayTime             79      // 14 Bits, Bit 13-0
#define     FCB_CHCountDownMaxDelayTimeMask 0x3FFF
#define     FCB_CHCountDownMaxDelayTimeShift 0
#define FCB_CHMonitoringValueType                2      // 8 Bits, Bit 7-0
#define FCB_CHMonitoringWDEnabled                3      // 1 Bit, Bit 7
#define     FCB_CHMonitoringWDEnabledMask 0x80
#define     FCB_CHMonitoringWDEnabledShift 7
#define FCB_CHMonitoringWDTTimeoutDelayBase      4      // 2 Bits, Bit 7-6
#define     FCB_CHMonitoringWDTTimeoutDelayBaseMask 0xC0
#define     FCB_CHMonitoringWDTTimeoutDelayBaseShift 6
#define FCB_CHMonitoringWDTTimeoutDelayTime      4      // 14 Bits, Bit 13-0
#define     FCB_CHMonitoringWDTTimeoutDelayTimeMask 0x3FFF
#define     FCB_CHMonitoringWDTTimeoutDelayTimeShift 0
#define FCB_CHMonitoringWDBehavior               6      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringWDBehaviorMask 0xF0
#define     FCB_CHMonitoringWDBehaviorShift 4
#define FCB_CHMonitoringStart                    6      // 2 Bits, Bit 3-2
#define     FCB_CHMonitoringStartMask 0x0C
#define     FCB_CHMonitoringStartShift 2
#define FCB_CHMonitoringWDDpt1                   7      // 8 Bits, Bit 7-0
#define FCB_CHMonitoringWDDpt5                   7      // uint8_t
#define FCB_CHMonitoringWDDpt5001                7      // uint8_t
#define FCB_CHMonitoringWDDpt6                   7      // int8_t
#define FCB_CHMonitoringWDDpt7                   7      // uint16_t
#define FCB_CHMonitoringWDDpt8                   7      // int16_t
#define FCB_CHMonitoringWDDpt9                   7      // float (4 Byte)
#define FCB_CHMonitoringWDDpt12                  7      // uint32_t
#define FCB_CHMonitoringWDDpt13                  7      // int32_t
#define FCB_CHMonitoringWDDpt14                  7      // float (4 Byte)
#define FCB_CHMonitoringWDDpt16                  7      // char*, 14 Byte
#define     FCB_CHMonitoringWDDpt16Length 14
#define FCB_CHMonitoringMin                     22      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringMinMask 0xF0
#define     FCB_CHMonitoringMinShift 4
#define FCB_CHMonitoringMinDpt1                 23      // 1 Bit, Bit 7
#define     FCB_CHMonitoringMinDpt1Mask 0x80
#define     FCB_CHMonitoringMinDpt1Shift 7
#define FCB_CHMonitoringMinDpt5                 23      // uint8_t
#define FCB_CHMonitoringMinDpt5001              23      // uint8_t
#define FCB_CHMonitoringMinDpt6                 23      // int8_t
#define FCB_CHMonitoringMinDpt7                 23      // uint16_t
#define FCB_CHMonitoringMinDpt8                 23      // int16_t
#define FCB_CHMonitoringMinDpt9                 23      // float (4 Byte)
#define FCB_CHMonitoringMinDpt12                23      // uint32_t
#define FCB_CHMonitoringMinDpt13                23      // int32_t
#define FCB_CHMonitoringMinDpt14                23      // float (4 Byte)
#define FCB_CHMonitoringMax                     27      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringMaxMask 0xF0
#define     FCB_CHMonitoringMaxShift 4
#define FCB_CHMonitoringMaxDpt1                 28      // 1 Bit, Bit 7
#define     FCB_CHMonitoringMaxDpt1Mask 0x80
#define     FCB_CHMonitoringMaxDpt1Shift 7
#define FCB_CHMonitoringMaxDpt5                 28      // uint8_t
#define FCB_CHMonitoringMaxDpt5001              28      // uint8_t
#define FCB_CHMonitoringMaxDpt6                 28      // int8_t
#define FCB_CHMonitoringMaxDpt7                 28      // uint16_t
#define FCB_CHMonitoringMaxDpt8                 28      // int16_t
#define FCB_CHMonitoringMaxDpt9                 28      // float (4 Byte)
#define FCB_CHMonitoringMaxDpt12                28      // uint32_t
#define FCB_CHMonitoringMaxDpt13                28      // int32_t
#define FCB_CHMonitoringMaxDpt14                28      // float (4 Byte)
#define FCB_CHMonitoringOutput                  32      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringOutputMask 0xF0
#define     FCB_CHMonitoringOutputShift 4
#define FCB_CHSelectionValueType                 2      // 8 Bits, Bit 7-0
#define FCB_CHSelectionType                      3      // 8 Bits, Bit 7-0
#define FCB_CHSelectionSwitching                 4      // 4 Bits, Bit 7-4
#define     FCB_CHSelectionSwitchingMask 0xF0
#define     FCB_CHSelectionSwitchingShift 4
#define FCB_CHSelectionStateOutput               4      // 1 Bit, Bit 3
#define     FCB_CHSelectionStateOutputMask 0x08
#define     FCB_CHSelectionStateOutputShift 3
#define FCB_CHBlinkerOnDelayBase                 4      // 2 Bits, Bit 7-6
#define     FCB_CHBlinkerOnDelayBaseMask 0xC0
#define     FCB_CHBlinkerOnDelayBaseShift 6
#define FCB_CHBlinkerOnDelayTime                 4      // 14 Bits, Bit 13-0
#define     FCB_CHBlinkerOnDelayTimeMask 0x3FFF
#define     FCB_CHBlinkerOnDelayTimeShift 0
#define FCB_CHBlinkerOffDelayBase                6      // 2 Bits, Bit 7-6
#define     FCB_CHBlinkerOffDelayBaseMask 0xC0
#define     FCB_CHBlinkerOffDelayBaseShift 6
#define FCB_CHBlinkerOffDelayTime                6      // 14 Bits, Bit 13-0
#define     FCB_CHBlinkerOffDelayTimeMask 0x3FFF
#define     FCB_CHBlinkerOffDelayTimeShift 0
#define FCB_CHBlinkerStart                       8      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerStartMask 0xF0
#define     FCB_CHBlinkerStartShift 4
#define FCB_CHBlinkerStop                        8      // 4 Bits, Bit 3-0
#define     FCB_CHBlinkerStopMask 0x0F
#define     FCB_CHBlinkerStopShift 0
#define FCB_CHBlinkerBreak                       9      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerBreakMask 0xF0
#define     FCB_CHBlinkerBreakShift 4
#define FCB_CHBlinkerBreakWithoutBreak           9      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerBreakWithoutBreakMask 0xF0
#define     FCB_CHBlinkerBreakWithoutBreakShift 4
#define FCB_CHBlinkerOutputDpt                  10      // 8 Bits, Bit 7-0
#define FCB_CHBlinkerOnPercentage               11      // uint8_t
#define FCB_CHBlinkerOffPercentage              12      // uint8_t
#define FCB_CHBlinkerCount                      13      // 8 Bits, Bit 7-0
#define FCB_CHBlinkerStartAnzahl                14      // 1 Bit, Bit 7
#define     FCB_CHBlinkerStartAnzahlMask 0x80
#define     FCB_CHBlinkerStartAnzahlShift 7
#define FCB_CHFormatString                       2      // char*, 28 Byte
#define     FCB_CHFormatStringLength 28
#define FCB_CHFormatOff                         30      // char*, 14 Byte
#define     FCB_CHFormatOffLength 14
#define FCB_CHFormatOn                          44      // char*, 14 Byte
#define     FCB_CHFormatOnLength 14
#define FCB_CHFormatThousand                    58      // char*, 1 Byte
#define     FCB_CHFormatThousandLength 1
#define FCB_CHFormatIn1                         59      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat1                 60      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat1Mask 0xC0
#define     FCB_CHFormatRoundFloat1Shift 6
#define FCB_CHFormatRound1                      60      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound1Mask 0xC0
#define     FCB_CHFormatRound1Shift 6
#define FCB_CHFCBFormatRound5_1                 60      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_1Mask 0x20
#define     FCB_CHFCBFormatRound5_1Shift 5
#define FCB_CHFormatDecimalPlaces1              60      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces1Mask 0x0F
#define     FCB_CHFormatDecimalPlaces1Shift 0
#define FCB_CHFormatSignificant1                60      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant1Mask 0x0F
#define     FCB_CHFormatSignificant1Shift 0
#define FCB_CHFormatFillupPrecomma1             61      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma1Mask 0xF0
#define     FCB_CHFormatFillupPrecomma1Shift 4
#define FCB_CHFormatFillupMode1                 61      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode1Mask 0xF0
#define     FCB_CHFormatFillupMode1Shift 4
#define FCB_CHFormatFillupAfterComma1           61      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma1Mask 0x0F
#define     FCB_CHFormatFillupAfterComma1Shift 0
#define FCB_CHFCBFormatRoundType1               62      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType1Mask 0xF0
#define     FCB_CHFCBFormatRoundType1Shift 4
#define FCB_CHFormatFillupLength1               62      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength1Mask 0x0F
#define     FCB_CHFormatFillupLength1Shift 0
#define FCB_CHFormatBit1                        60      // 8 Bits, Bit 7-0
#define FCB_CHFormatIn2                         63      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat2                 64      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat2Mask 0xC0
#define     FCB_CHFormatRoundFloat2Shift 6
#define FCB_CHFormatRound2                      64      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound2Mask 0xC0
#define     FCB_CHFormatRound2Shift 6
#define FCB_CHFCBFormatRound5_2                 64      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_2Mask 0x20
#define     FCB_CHFCBFormatRound5_2Shift 5
#define FCB_CHFormatDecimalPlaces2              64      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces2Mask 0x0F
#define     FCB_CHFormatDecimalPlaces2Shift 0
#define FCB_CHFormatSignificant2                64      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant2Mask 0x0F
#define     FCB_CHFormatSignificant2Shift 0
#define FCB_CHFormatFillupPrecomma2             65      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma2Mask 0xF0
#define     FCB_CHFormatFillupPrecomma2Shift 4
#define FCB_CHFormatFillupMode2                 65      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode2Mask 0xF0
#define     FCB_CHFormatFillupMode2Shift 4
#define FCB_CHFormatFillupAfterComma2           65      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma2Mask 0x0F
#define     FCB_CHFormatFillupAfterComma2Shift 0
#define FCB_CHFCBFormatRoundType2               66      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType2Mask 0xF0
#define     FCB_CHFCBFormatRoundType2Shift 4
#define FCB_CHFormatFillupLength2               66      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength2Mask 0x0F
#define     FCB_CHFormatFillupLength2Shift 0
#define FCB_CHFormatBit2                        64      // 8 Bits, Bit 7-0
#define FCB_CHFormatIn3                         67      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat3                 68      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat3Mask 0xC0
#define     FCB_CHFormatRoundFloat3Shift 6
#define FCB_CHFormatRound3                      68      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound3Mask 0xC0
#define     FCB_CHFormatRound3Shift 6
#define FCB_CHFCBFormatRound5_3                 68      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_3Mask 0x20
#define     FCB_CHFCBFormatRound5_3Shift 5
#define FCB_CHFormatDecimalPlaces3              68      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces3Mask 0x0F
#define     FCB_CHFormatDecimalPlaces3Shift 0
#define FCB_CHFormatSignificant3                68      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant3Mask 0x0F
#define     FCB_CHFormatSignificant3Shift 0
#define FCB_CHFormatFillupPrecomma3             69      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma3Mask 0xF0
#define     FCB_CHFormatFillupPrecomma3Shift 4
#define FCB_CHFormatFillupMode3                 69      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode3Mask 0xF0
#define     FCB_CHFormatFillupMode3Shift 4
#define FCB_CHFormatFillupAfterComma3           69      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma3Mask 0x0F
#define     FCB_CHFormatFillupAfterComma3Shift 0
#define FCB_CHFCBFormatRoundType3               70      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType3Mask 0xF0
#define     FCB_CHFCBFormatRoundType3Shift 4
#define FCB_CHFormatFillupLength3               70      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength3Mask 0x0F
#define     FCB_CHFormatFillupLength3Shift 0
#define FCB_CHFormatBit3                        68      // 8 Bits, Bit 7-0
#define FCB_CHFormatIn4                         71      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat4                 72      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat4Mask 0xC0
#define     FCB_CHFormatRoundFloat4Shift 6
#define FCB_CHFormatRound4                      72      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound4Mask 0xC0
#define     FCB_CHFormatRound4Shift 6
#define FCB_CHFCBFormatRound5_4                 72      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_4Mask 0x20
#define     FCB_CHFCBFormatRound5_4Shift 5
#define FCB_CHFormatDecimalPlaces4              72      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces4Mask 0x0F
#define     FCB_CHFormatDecimalPlaces4Shift 0
#define FCB_CHFormatSignificant4                72      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant4Mask 0x0F
#define     FCB_CHFormatSignificant4Shift 0
#define FCB_CHFormatFillupPrecomma4             73      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma4Mask 0xF0
#define     FCB_CHFormatFillupPrecomma4Shift 4
#define FCB_CHFormatFillupMode4                 73      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode4Mask 0xF0
#define     FCB_CHFormatFillupMode4Shift 4
#define FCB_CHFormatFillupAfterComma4           73      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma4Mask 0x0F
#define     FCB_CHFormatFillupAfterComma4Shift 0
#define FCB_CHFCBFormatRoundType4               74      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType4Mask 0xF0
#define     FCB_CHFCBFormatRoundType4Shift 4
#define FCB_CHFormatFillupLength4               74      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength4Mask 0x0F
#define     FCB_CHFormatFillupLength4Shift 0
#define FCB_CHFormatBit4                        72      // 8 Bits, Bit 7-0

// Type
#define ParamFCB_CHChannelType                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHChannelType)))
// Kanal deaktivieren (zu Testzwecken)
#define ParamFCB_CHChannelDisabled                   ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHChannelDisabled)) & FCB_CHChannelDisabledMask))
// Eingang 1
#define ParamFCB_CHLogicKo0D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo0D)) & FCB_CHLogicKo0DMask) >> FCB_CHLogicKo0DShift)
// Eingang 2
#define ParamFCB_CHLogicKo1D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo1D)) & FCB_CHLogicKo1DMask) >> FCB_CHLogicKo1DShift)
// Eingang 3
#define ParamFCB_CHLogicKo2D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo2D)) & FCB_CHLogicKo2DMask) >> FCB_CHLogicKo2DShift)
// Eingang 4
#define ParamFCB_CHLogicKo3D                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo3D)) & FCB_CHLogicKo3DMask)
// Eingang 5
#define ParamFCB_CHLogicKo4D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo4D)) & FCB_CHLogicKo4DMask) >> FCB_CHLogicKo4DShift)
// Eingang 6
#define ParamFCB_CHLogicKo5D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo5D)) & FCB_CHLogicKo5DMask) >> FCB_CHLogicKo5DShift)
// Eingang 7
#define ParamFCB_CHLogicKo6D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo6D)) & FCB_CHLogicKo6DMask) >> FCB_CHLogicKo6DShift)
// Eingang 8
#define ParamFCB_CHLogicKo7D                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo7D)) & FCB_CHLogicKo7DMask)
// Eingang 9
#define ParamFCB_CHLogicKo8D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo8D)) & FCB_CHLogicKo8DMask) >> FCB_CHLogicKo8DShift)
// Invertiert
#define ParamFCB_CHLogicOutInv                       ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicOutInv)) & FCB_CHLogicOutInvMask))
// Sendeverhalten
#define ParamFCB_CHLogicBehavOut                     ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavOut)) & FCB_CHLogicBehavOutMask))
// Initialisierung
#define ParamFCB_CHLogicBehavKo0                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo0)) & FCB_CHLogicBehavKo0Mask) >> FCB_CHLogicBehavKo0Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo1                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo1)) & FCB_CHLogicBehavKo1Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo2                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo2)) & FCB_CHLogicBehavKo2Mask) >> FCB_CHLogicBehavKo2Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo3                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo3)) & FCB_CHLogicBehavKo3Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo4                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo4)) & FCB_CHLogicBehavKo4Mask) >> FCB_CHLogicBehavKo4Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo5                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo5)) & FCB_CHLogicBehavKo5Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo6                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo6)) & FCB_CHLogicBehavKo6Mask) >> FCB_CHLogicBehavKo6Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo7                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo7)) & FCB_CHLogicBehavKo7Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo8                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo8)) & FCB_CHLogicBehavKo8Mask) >> FCB_CHLogicBehavKo8Shift)
// Prior-Wahrscheinlichkeit
#define ParamFCB_CHBayesianPrior                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBayesianPrior)))
// Schwellwert für binären Ausgang
#define ParamFCB_CHBayesianThreshold                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBayesianThreshold)))
// Wahrscheinlichkeits-Ausgang aktivieren
#define ParamFCB_CHBayesianEnableProbOutput          ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHBayesianEnableProbOutput)) & FCB_CHBayesianEnableProbOutputMask))
// P(A|E_1)
#define ParamFCB_CHLogicKo0BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo0BayesProbTrue)))
// P(A|!E_1)
#define ParamFCB_CHLogicKo0BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo0BayesProbFalse)))
// P(A|E_2)
#define ParamFCB_CHLogicKo1BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo1BayesProbTrue)))
// P(A|!E_2)
#define ParamFCB_CHLogicKo1BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo1BayesProbFalse)))
// P(A|E_3)
#define ParamFCB_CHLogicKo2BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo2BayesProbTrue)))
// P(A|!E_3)
#define ParamFCB_CHLogicKo2BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo2BayesProbFalse)))
// P(A|E_4)
#define ParamFCB_CHLogicKo3BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo3BayesProbTrue)))
// P(A|!E_4)
#define ParamFCB_CHLogicKo3BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo3BayesProbFalse)))
// P(A|E_5)
#define ParamFCB_CHLogicKo4BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo4BayesProbTrue)))
// P(A|!E_5)
#define ParamFCB_CHLogicKo4BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo4BayesProbFalse)))
// P(A|E_6)
#define ParamFCB_CHLogicKo5BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo5BayesProbTrue)))
// P(A|!E_6)
#define ParamFCB_CHLogicKo5BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo5BayesProbFalse)))
// P(A|E_7)
#define ParamFCB_CHLogicKo6BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo6BayesProbTrue)))
// P(A|!E_7)
#define ParamFCB_CHLogicKo6BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo6BayesProbFalse)))
// P(A|E_8)
#define ParamFCB_CHLogicKo7BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo7BayesProbTrue)))
// P(A|!E_8)
#define ParamFCB_CHLogicKo7BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo7BayesProbFalse)))
// P(A|E_9)
#define ParamFCB_CHLogicKo8BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo8BayesProbTrue)))
// P(A|!E_9)
#define ParamFCB_CHLogicKo8BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo8BayesProbFalse)))
// Eingang 1
#define ParamFCB_CHPrioKo0D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo0D)) & FCB_CHPrioKo0DMask) >> FCB_CHPrioKo0DShift)
// Eingang 2
#define ParamFCB_CHPrioKo1D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo1D)) & FCB_CHPrioKo1DMask) >> FCB_CHPrioKo1DShift)
// Eingang 3
#define ParamFCB_CHPrioKo2D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo2D)) & FCB_CHPrioKo2DMask) >> FCB_CHPrioKo2DShift)
// Eingang 4
#define ParamFCB_CHPrioKo3D                          (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo3D)) & FCB_CHPrioKo3DMask)
// Eingang 5
#define ParamFCB_CHPrioKo4D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo4D)) & FCB_CHPrioKo4DMask) >> FCB_CHPrioKo4DShift)
// Eingang 6
#define ParamFCB_CHPrioKo5D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo5D)) & FCB_CHPrioKo5DMask) >> FCB_CHPrioKo5DShift)
// Eingang 7
#define ParamFCB_CHPrioKo6D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo6D)) & FCB_CHPrioKo6DMask) >> FCB_CHPrioKo6DShift)
// Eingang 8
#define ParamFCB_CHPrioKo7D                          (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo7D)) & FCB_CHPrioKo7DMask)
// Eingang 9
#define ParamFCB_CHPrioKo8D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo8D)) & FCB_CHPrioKo8DMask) >> FCB_CHPrioKo8DShift)
// Type
#define ParamFCB_CHPrioOutputType                    ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutputType)) & FCB_CHPrioOutputTypeMask) >> FCB_CHPrioOutputTypeShift)
// Ausgangswert
#define ParamFCB_CHPrioOutPKo0                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo0)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo0                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo0)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo0                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo0)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo1                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo1)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo1                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo1)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo1                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo1)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo2                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo2)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo2                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo2)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo2                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo2)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo3                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo3)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo3                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo3)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo3                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo3)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo4                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo4)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo4                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo4)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo4                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo4)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo5                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo5)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo5                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo5)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo5                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo5)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo6                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo6)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo6                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo6)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo6                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo6)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo7                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo7)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo7                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo7)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo7                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo7)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo8                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo8)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo8                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo8)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo8                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo8)))
// Ausgangswert wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutPDefault                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPDefault)))
// Ausgangswert wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutByteDefault                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteDefault)))
// Ausgangswert Szenennummer wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutSceneDefault               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneDefault)))
// Initialisierung
#define ParamFCB_CHPrioBehavKo0                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo0)) & FCB_CHPrioBehavKo0Mask) >> FCB_CHPrioBehavKo0Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo1                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo1)) & FCB_CHPrioBehavKo1Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo2                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo2)) & FCB_CHPrioBehavKo2Mask) >> FCB_CHPrioBehavKo2Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo3                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo3)) & FCB_CHPrioBehavKo3Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo4                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo4)) & FCB_CHPrioBehavKo4Mask) >> FCB_CHPrioBehavKo4Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo5                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo5)) & FCB_CHPrioBehavKo5Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo6                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo6)) & FCB_CHPrioBehavKo6Mask) >> FCB_CHPrioBehavKo6Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo7                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo7)) & FCB_CHPrioBehavKo7Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo8                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo8)) & FCB_CHPrioBehavKo8Mask) >> FCB_CHPrioBehavKo8Shift)
// Sendeverhalten
#define ParamFCB_CHPrioBehavOut                      ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavOut)) & FCB_CHPrioBehavOutMask))
// Gewichtung der Eingänge
#define ParamFCB_CHAggWeight                         ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggWeight)) & FCB_CHAggWeightMask))
// Funktion
#define ParamFCB_CHAggType                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggType)) & FCB_CHAggTypeMask)
// Eingang 1
#define ParamFCB_CHAggKo0D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo0D)) & FCB_CHAggKo0DMask) >> FCB_CHAggKo0DShift)
// Eingang 2
#define ParamFCB_CHAggKo1D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo1D)) & FCB_CHAggKo1DMask) >> FCB_CHAggKo1DShift)
// Eingang 3
#define ParamFCB_CHAggKo2D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo2D)) & FCB_CHAggKo2DMask) >> FCB_CHAggKo2DShift)
// Eingang 4
#define ParamFCB_CHAggKo3D                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo3D)) & FCB_CHAggKo3DMask)
// Eingang 5
#define ParamFCB_CHAggKo4D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo4D)) & FCB_CHAggKo4DMask) >> FCB_CHAggKo4DShift)
// Eingang 6
#define ParamFCB_CHAggKo5D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo5D)) & FCB_CHAggKo5DMask) >> FCB_CHAggKo5DShift)
// Eingang 7
#define ParamFCB_CHAggKo6D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo6D)) & FCB_CHAggKo6DMask) >> FCB_CHAggKo6DShift)
// Eingang 8
#define ParamFCB_CHAggKo7D                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo7D)) & FCB_CHAggKo7DMask)
// Eingang 9
#define ParamFCB_CHAggKo8D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo8D)) & FCB_CHAggKo8DMask) >> FCB_CHAggKo8DShift)
// Sendeverhalten
#define ParamFCB_CHAggBehavOut                       ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggBehavOut)) & FCB_CHAggBehavOutMask))
// Rundungsmodus
#define ParamFCB_CHAggOutputRounding                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputRounding)) & FCB_CHAggOutputRoundingMask))
// Bei Überschreiten des Wertebereichs
#define ParamFCB_CHAggOutputOverflow                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputOverflow)) & FCB_CHAggOutputOverflowMask) >> FCB_CHAggOutputOverflowShift)
// Wertetype / DPT
#define ParamFCB_CHAggInputDpt                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggInputDpt)))
// DPT Ausgang
#define ParamFCB_CHAggOutputDptEff                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputDptEff)))
// Gewicht Eingang 1
#define ParamFCB_CHAggKo0W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo0W)))
// Gewicht Eingang 2
#define ParamFCB_CHAggKo1W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo1W)))
// Gewicht Eingang 3
#define ParamFCB_CHAggKo2W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo2W)))
// Gewicht Eingang 4
#define ParamFCB_CHAggKo3W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo3W)))
// Gewicht Eingang 5
#define ParamFCB_CHAggKo4W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo4W)))
// Gewicht Eingang 6
#define ParamFCB_CHAggKo5W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo5W)))
// Gewicht Eingang 7
#define ParamFCB_CHAggKo6W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo6W)))
// Gewicht Eingang 8
#define ParamFCB_CHAggKo7W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo7W)))
// Gewicht Eingang 9
#define ParamFCB_CHAggKo8W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo8W)))
// Start mit Zeit
#define ParamFCB_CHCountDownTimeStartKo              ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTimeStartKo)) & FCB_CHCountDownTimeStartKoMask) >> FCB_CHCountDownTimeStartKoShift)
// Ablaufzeit Einheit
#define ParamFCB_CHCountDownDelayBase                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownDelayBase)) & FCB_CHCountDownDelayBaseMask) >> FCB_CHCountDownDelayBaseShift)
// Ablaufzeit
#define ParamFCB_CHCountDownDelayTime                (knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownDelayTime)) & FCB_CHCountDownDelayTimeMask)
// Ablaufzeit (in Millisekunden)
#define ParamFCB_CHCountDownDelayTimeMS              (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownDelayTime))))
// Laufzeit Verringern / Erhöhen
#define ParamFCB_CHCountDownTimeOffset               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTimeOffset)) & FCB_CHCountDownTimeOffsetMask) >> FCB_CHCountDownTimeOffsetShift)
// Auslöser / Ende
#define ParamFCB_CHCountDownTrigger                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTrigger)) & FCB_CHCountDownTriggerMask)
// Standard
#define ParamFCB_CHCountDownTemplate                 (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate)))
#define ParamFCB_CHCountDownTemplateStr              (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplate), FCB_CHCountDownTemplateLength))
// kleiner eine Stunde
#define ParamFCB_CHCountDownTemplate1h               (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1h)))
#define ParamFCB_CHCountDownTemplate1hStr            (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1h), FCB_CHCountDownTemplate1hLength))
// kleiner eine Minute
#define ParamFCB_CHCountDownTemplate1m               (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1m)))
#define ParamFCB_CHCountDownTemplate1mStr            (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1m), FCB_CHCountDownTemplate1mLength))
// Ende
#define ParamFCB_CHCountDownTemplateEnd              (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplateEnd)))
#define ParamFCB_CHCountDownTemplateEndStr           (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplateEnd), FCB_CHCountDownTemplateEndLength))
// Pause
#define ParamFCB_CHCountDownTextPause                (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTextPause)))
#define ParamFCB_CHCountDownTextPauseStr             (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTextPause), FCB_CHCountDownTextPauseLength))
// Läuft
#define ParamFCB_CHCountDownTextRun                  (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTextRun)))
#define ParamFCB_CHCountDownTextRunStr               (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTextRun), FCB_CHCountDownTextRunLength))
// Zähler
#define ParamFCB_CHCountDownCounterKo                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownCounterKo)) & FCB_CHCountDownCounterKoMask) >> FCB_CHCountDownCounterKoShift)
// Text
#define ParamFCB_CHCountDownTextKo                   ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTextKo)) & FCB_CHCountDownTextKoMask) >> FCB_CHCountDownTextKoShift)
// Stopp
#define ParamFCB_CHCountDownTemplateStopp            (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplateStopp)))
#define ParamFCB_CHCountDownTemplateStoppStr         (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplateStopp), FCB_CHCountDownTemplateStoppLength))
// Maximalzeit Einheit
#define ParamFCB_CHCountDownMaxDelayBase             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownMaxDelayBase)) & FCB_CHCountDownMaxDelayBaseMask) >> FCB_CHCountDownMaxDelayBaseShift)
// Maximalzeit
#define ParamFCB_CHCountDownMaxDelayTime             (knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownMaxDelayTime)) & FCB_CHCountDownMaxDelayTimeMask)
// Maximalzeit (in Millisekunden)
#define ParamFCB_CHCountDownMaxDelayTimeMS           (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownMaxDelayTime))))
// Werttype
#define ParamFCB_CHMonitoringValueType               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringValueType)))
// Zeitüberwachung aktiv
#define ParamFCB_CHMonitoringWDEnabled               ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDEnabled)) & FCB_CHMonitoringWDEnabledMask))
// Watchdog Zeitbasis
#define ParamFCB_CHMonitoringWDTTimeoutDelayBase     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayBase)) & FCB_CHMonitoringWDTTimeoutDelayBaseMask) >> FCB_CHMonitoringWDTTimeoutDelayBaseShift)
// Watchdog Zeit
#define ParamFCB_CHMonitoringWDTTimeoutDelayTime     (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayTime)) & FCB_CHMonitoringWDTTimeoutDelayTimeMask)
// Watchdog Zeit (in Millisekunden)
#define ParamFCB_CHMonitoringWDTTimeoutDelayTimeMS   (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayTime))))
// Verhalten bei Zeitüberschreitung
#define ParamFCB_CHMonitoringWDBehavior              ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDBehavior)) & FCB_CHMonitoringWDBehaviorMask) >> FCB_CHMonitoringWDBehaviorShift)
// Verhalten beim Start
#define ParamFCB_CHMonitoringStart                   ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringStart)) & FCB_CHMonitoringStartMask) >> FCB_CHMonitoringStartShift)
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt1                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt1)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt5                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt5)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt5001               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt5001)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt6                  ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt6)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt7                  (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt7)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt8                  ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt8)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt9                  (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt9), Float_Enc_IEEE754Single))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt12                 (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt12)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt13                 ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt13)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt14                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt14), Float_Enc_IEEE754Single))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt16                 (knx.paramData(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt16)))
#define ParamFCB_CHMonitoringWDDpt16Str              (knx.paramString(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt16), FCB_CHMonitoringWDDpt16Length))
// Verhalten bei Wertunterschreitung
#define ParamFCB_CHMonitoringMin                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMin)) & FCB_CHMonitoringMinMask) >> FCB_CHMonitoringMinShift)
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt1)) & FCB_CHMonitoringMinDpt1Mask))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt5                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt5)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt5001              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt5001)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt6                 ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt6)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt7                 (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt7)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt8                 ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt8)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt9                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt9), Float_Enc_IEEE754Single))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt12                (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt12)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt13                ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt13)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt14                (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt14), Float_Enc_IEEE754Single))
// Verhalten bei Wertüberschreitung
#define ParamFCB_CHMonitoringMax                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMax)) & FCB_CHMonitoringMaxMask) >> FCB_CHMonitoringMaxShift)
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt1)) & FCB_CHMonitoringMaxDpt1Mask))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt5                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt5)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt5001              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt5001)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt6                 ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt6)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt7                 (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt7)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt8                 ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt8)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt9                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt9), Float_Enc_IEEE754Single))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt12                (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt12)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt13                ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt13)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt14                (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt14), Float_Enc_IEEE754Single))
// Sendeverhalten
#define ParamFCB_CHMonitoringOutput                  ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringOutput)) & FCB_CHMonitoringOutputMask) >> FCB_CHMonitoringOutputShift)
// Datentype
#define ParamFCB_CHSelectionValueType                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionValueType)))
// Anzahl und Typ der Auswahlen (mit gemeinsamen Auswahl-Eingang)
#define ParamFCB_CHSelectionType                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionType)))
// Bei Umschaltung
#define ParamFCB_CHSelectionSwitching                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionSwitching)) & FCB_CHSelectionSwitchingMask) >> FCB_CHSelectionSwitchingShift)
// Auswahl Status Objekt
#define ParamFCB_CHSelectionStateOutput              ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionStateOutput)) & FCB_CHSelectionStateOutputMask))
// Blinker EIN Zeitbasis
#define ParamFCB_CHBlinkerOnDelayBase                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayBase)) & FCB_CHBlinkerOnDelayBaseMask) >> FCB_CHBlinkerOnDelayBaseShift)
// Blinker EIN Zeit
#define ParamFCB_CHBlinkerOnDelayTime                (knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayTime)) & FCB_CHBlinkerOnDelayTimeMask)
// Blinker EIN Zeit (in Millisekunden)
#define ParamFCB_CHBlinkerOnDelayTimeMS              (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayTime))))
// Blinker AUS Zeitbasis
#define ParamFCB_CHBlinkerOffDelayBase               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayBase)) & FCB_CHBlinkerOffDelayBaseMask) >> FCB_CHBlinkerOffDelayBaseShift)
// Blinker AUS Zeit
#define ParamFCB_CHBlinkerOffDelayTime               (knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayTime)) & FCB_CHBlinkerOffDelayTimeMask)
// Blinker AUS Zeit (in Millisekunden)
#define ParamFCB_CHBlinkerOffDelayTimeMS             (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayTime))))
// Start
#define ParamFCB_CHBlinkerStart                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStart)) & FCB_CHBlinkerStartMask) >> FCB_CHBlinkerStartShift)
// Ende
#define ParamFCB_CHBlinkerStop                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStop)) & FCB_CHBlinkerStopMask)
// AUS Telegram am 'Start' Eingang
#define ParamFCB_CHBlinkerBreak                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerBreak)) & FCB_CHBlinkerBreakMask) >> FCB_CHBlinkerBreakShift)
// AUS Telegram am 'Start' Eingang
#define ParamFCB_CHBlinkerBreakWithoutBreak          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerBreakWithoutBreak)) & FCB_CHBlinkerBreakWithoutBreakMask) >> FCB_CHBlinkerBreakWithoutBreakShift)
// Ausgang
#define ParamFCB_CHBlinkerOutputDpt                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOutputDpt)))
// Wert für EIN
#define ParamFCB_CHBlinkerOnPercentage               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOnPercentage)))
// Wert für AUS
#define ParamFCB_CHBlinkerOffPercentage              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOffPercentage)))
// Anzahl der Blinkvorgänge
#define ParamFCB_CHBlinkerCount                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerCount)))
// Objekt zum Starten mit Anzahl
#define ParamFCB_CHBlinkerStartAnzahl                ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStartAnzahl)) & FCB_CHBlinkerStartAnzahlMask))
// Format
#define ParamFCB_CHFormatString                      (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatString)))
#define ParamFCB_CHFormatStringStr                   (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatString), FCB_CHFormatStringLength))
// Textbaustein Aus
#define ParamFCB_CHFormatOff                         (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatOff)))
#define ParamFCB_CHFormatOffStr                      (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatOff), FCB_CHFormatOffLength))
// Textbaustein Ein
#define ParamFCB_CHFormatOn                          (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatOn)))
#define ParamFCB_CHFormatOnStr                       (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatOn), FCB_CHFormatOnLength))
// Tausendertrennzeichen
#define ParamFCB_CHFormatThousand                    (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatThousand)))
#define ParamFCB_CHFormatThousandStr                 (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatThousand), FCB_CHFormatThousandLength))
// Datentype
#define ParamFCB_CHFormatIn1                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn1)))
// Runden
#define ParamFCB_CHFormatRoundFloat1                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat1)) & FCB_CHFormatRoundFloat1Mask) >> FCB_CHFormatRoundFloat1Shift)
// Runden
#define ParamFCB_CHFormatRound1                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound1)) & FCB_CHFormatRound1Mask) >> FCB_CHFormatRound1Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_1)) & FCB_CHFCBFormatRound5_1Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces1              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces1)) & FCB_CHFormatDecimalPlaces1Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant1                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant1)) & FCB_CHFormatSignificant1Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma1             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma1)) & FCB_CHFormatFillupPrecomma1Mask) >> FCB_CHFormatFillupPrecomma1Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode1                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode1)) & FCB_CHFormatFillupMode1Mask) >> FCB_CHFormatFillupMode1Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma1           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma1)) & FCB_CHFormatFillupAfterComma1Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType1               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType1)) & FCB_CHFCBFormatRoundType1Mask) >> FCB_CHFCBFormatRoundType1Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength1               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength1)) & FCB_CHFormatFillupLength1Mask)
// Anzeige als
#define ParamFCB_CHFormatBit1                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit1)))
// Datentype
#define ParamFCB_CHFormatIn2                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn2)))
// Runden
#define ParamFCB_CHFormatRoundFloat2                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat2)) & FCB_CHFormatRoundFloat2Mask) >> FCB_CHFormatRoundFloat2Shift)
// Runden
#define ParamFCB_CHFormatRound2                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound2)) & FCB_CHFormatRound2Mask) >> FCB_CHFormatRound2Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_2                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_2)) & FCB_CHFCBFormatRound5_2Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces2              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces2)) & FCB_CHFormatDecimalPlaces2Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant2                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant2)) & FCB_CHFormatSignificant2Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma2             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma2)) & FCB_CHFormatFillupPrecomma2Mask) >> FCB_CHFormatFillupPrecomma2Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode2                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode2)) & FCB_CHFormatFillupMode2Mask) >> FCB_CHFormatFillupMode2Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma2           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma2)) & FCB_CHFormatFillupAfterComma2Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType2               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType2)) & FCB_CHFCBFormatRoundType2Mask) >> FCB_CHFCBFormatRoundType2Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength2               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength2)) & FCB_CHFormatFillupLength2Mask)
// Anzeige als
#define ParamFCB_CHFormatBit2                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit2)))
// Datentype
#define ParamFCB_CHFormatIn3                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn3)))
// Runden
#define ParamFCB_CHFormatRoundFloat3                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat3)) & FCB_CHFormatRoundFloat3Mask) >> FCB_CHFormatRoundFloat3Shift)
// Runden
#define ParamFCB_CHFormatRound3                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound3)) & FCB_CHFormatRound3Mask) >> FCB_CHFormatRound3Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_3                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_3)) & FCB_CHFCBFormatRound5_3Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces3              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces3)) & FCB_CHFormatDecimalPlaces3Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant3                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant3)) & FCB_CHFormatSignificant3Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma3             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma3)) & FCB_CHFormatFillupPrecomma3Mask) >> FCB_CHFormatFillupPrecomma3Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode3                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode3)) & FCB_CHFormatFillupMode3Mask) >> FCB_CHFormatFillupMode3Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma3           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma3)) & FCB_CHFormatFillupAfterComma3Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType3               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType3)) & FCB_CHFCBFormatRoundType3Mask) >> FCB_CHFCBFormatRoundType3Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength3               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength3)) & FCB_CHFormatFillupLength3Mask)
// Anzeige als
#define ParamFCB_CHFormatBit3                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit3)))
// Datentype
#define ParamFCB_CHFormatIn4                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn4)))
// Runden
#define ParamFCB_CHFormatRoundFloat4                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat4)) & FCB_CHFormatRoundFloat4Mask) >> FCB_CHFormatRoundFloat4Shift)
// Runden
#define ParamFCB_CHFormatRound4                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound4)) & FCB_CHFormatRound4Mask) >> FCB_CHFormatRound4Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_4                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_4)) & FCB_CHFCBFormatRound5_4Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces4              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces4)) & FCB_CHFormatDecimalPlaces4Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant4                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant4)) & FCB_CHFormatSignificant4Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma4             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma4)) & FCB_CHFormatFillupPrecomma4Mask) >> FCB_CHFormatFillupPrecomma4Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode4                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode4)) & FCB_CHFormatFillupMode4Mask) >> FCB_CHFormatFillupMode4Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma4           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma4)) & FCB_CHFormatFillupAfterComma4Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType4               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType4)) & FCB_CHFCBFormatRoundType4Mask) >> FCB_CHFCBFormatRoundType4Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength4               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength4)) & FCB_CHFormatFillupLength4Mask)
// Anzeige als
#define ParamFCB_CHFormatBit4                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit4)))

// deprecated
#define FCB_KoOffset 250

// Communication objects per channel (multiple occurrence)
#define FCB_KoBlockOffset 250
#define FCB_KoBlockSize 10

#define FCB_KoCalcNumber(index) (index + FCB_KoBlockOffset + _channelIndex * FCB_KoBlockSize)
#define FCB_KoCalcIndex(number) ((number >= FCB_KoCalcNumber(0) && number < FCB_KoCalcNumber(FCB_KoBlockSize)) ? (number - FCB_KoBlockOffset) % FCB_KoBlockSize : -1)
#define FCB_KoCalcChannel(number) ((number >= FCB_KoBlockOffset && number < FCB_KoBlockOffset + FCB_ChannelCount * FCB_KoBlockSize) ? (number - FCB_KoBlockOffset) / FCB_KoBlockSize : -1)

#define FCB_KoCHKO0 0
#define FCB_KoCHKO1 1
#define FCB_KoCHKO2 2
#define FCB_KoCHKO3 3
#define FCB_KoCHKO4 4
#define FCB_KoCHKO5 5
#define FCB_KoCHKO6 6
#define FCB_KoCHKO7 7
#define FCB_KoCHKO8 8
#define FCB_KoCHKO9 9

// 
#define KoFCB_CHKO0                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO0)))
// 
#define KoFCB_CHKO1                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO1)))
// 
#define KoFCB_CHKO2                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO2)))
// 
#define KoFCB_CHKO3                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO3)))
// 
#define KoFCB_CHKO4                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO4)))
// 
#define KoFCB_CHKO5                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO5)))
// 
#define KoFCB_CHKO6                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO6)))
// 
#define KoFCB_CHKO7                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO7)))
// 
#define KoFCB_CHKO8                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO8)))
// 
#define KoFCB_CHKO9                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO9)))



// Header generation for Module 'BASE_KommentarModule'

#define BASE_KommentarModuleCount 0
#define BASE_KommentarModuleModuleParamSize 0
#define BASE_KommentarModuleSubmodulesParamSize 0
#define BASE_KommentarModuleParamSize 0
#define BASE_KommentarModuleParamOffset 35685
#define BASE_KommentarModuleCalcIndex(index, m1) (index + BASE_KommentarModuleParamOffset + _channelIndex * BASE_KommentarModuleCount * BASE_KommentarModuleParamSize + m1 * BASE_KommentarModuleParamSize)




// enumeration types
enum class PT_Logic
{
    AUS = 0,
    UND = 1,
    ODER = 2,
    EXOR = 3,
    TOR = 4,
    SCHALTER = 6,
    ZEITSCHALTUHR = 5
};

enum class PT_Calculate
{
    Invalid = 0,
    Valid = 1
};

enum class PT_GateTrigger
{
    None = 0,
    Off = 1,
    On = 2,
    Input = 3
};

enum class PT_LockTrigger
{
    None = 0,
    Off = 1,
    On = 2,
    Value = 3
};

enum class PT_LockResetQueue
{
    None = 0,
    ResetAfterLock = 1,
    ResetAfterUnlock = 2
};

enum class PT_InputEnable
{
    Inactive = 0,
    ActiveNormal = 1,
    ActiveInverted = 2
};

enum class PT_InputConv
{
    Wertintervall = 0,
    Differenzintervall = 1,
    Hysterese = 2,
    Differenzhysterese = 3,
    Einzelwerte = 4,
    Konstante = 5,
    Eingangswert = 6,
    Trigger = 7
};

enum class PT_LogicDpt
{
    DPT_1 = 0,
    DPT_2 = 1,
    DPT_3 = 17,
    DPT_5 = 2,
    DPT_5001 = 3,
    DPT_6 = 4,
    DPT_7 = 5,
    DPT_8 = 6,
    DPT_9 = 7,
    DPT_12 = 13,
    DPT_13 = 14,
    DPT_14 = 15,
    DPT_16 = 8,
    DPT_17 = 9,
    DPT_232 = 10
};

enum class PT_InputDefault
{
    None = 0,
    Bus = 1,
    Off = 2,
    On = 3
};

enum class PT_OnOffRepeat
{
    Verzoegerung_bleibt_bestehen = 0,
    Verzoegerung_wird_verlaengert = 1,
    Sofort_schalten_ohne_Verzoegerung = 2
};

enum class PT_OnOffReset
{
    Verzoegerung_bleibt_bestehen = 0,
    Verzoegerung_beenden_ohne_zu_schalten = 1
};

enum class PT_OutputFilter
{
    Alle_Wiederholungen_durchlassen = 0,
    Nur_EIN_Wiederholungen_durchlassen = 1,
    Nur_AUS_Wiederholungen_durchlassen = 2,
    Keine_Wiederholungen_durchlassen = 3
};

enum class PT_SendOnChange
{
    Alle_Werte_senden = 0,
    Nur_geaenderte_Werte_senden = 1
};

enum class PT_OutputSend
{
    None = 0,
    Constant = 1,
    ValueInput1 = 2,
    ValueInput2 = 3,
    OtherKo = 9,
    Function = 8,
    ReadRequest = 4,
    RestartDevice = 5,
    StatusLed = 7
};

enum class PT_YearDay
{
    Tagesschaltuhr = 0,
    Jahresschaltuhr = 1,
    Tagesschaltuhr_verbunden = 2,
    Jahresschaltuhr_verbunden = 3
};

enum class PT_Holiday
{
    Feiertage_nicht_beachten = 0,
    An_Feiertagen_nicht_schalten = 1,
    Nur_an_Feiertagen_schalten = 2,
    Feiertage_wie_Sonntage_behandeln = 3
};

enum class PT_Vacation
{
    Urlaub_nicht_beachten = 0,
    Bei_Urlaub_nicht_schalten = 1,
    Nur_bei_Urlaub_schalten = 2,
    Urlaub_wie_Sonntag_behandeln = 3
};

enum class PT_DuskDawn
{
    Inactive = 0,
    PointInTime = 1,
    Sunrise_Plus = 4,
    Sunrise_Minus = 5,
    Sunrise_Earliest = 6,
    Sunrise_Latest = 7,
    Sunrise_DegreeUp = 12,
    Sunrise_DegreeDown = 14,
    Sunset_Plus = 8,
    Sunset_Minus = 9,
    Sunset_Earliest = 10,
    Sunset_Latest = 11,
    Sunset_DegreeUp = 13,
    Sunset_DegreeDown = 15
};

enum class PT_KORelInput
{
    None = 0,
    Absolute = 1,
    Relative = 2,
    Bitmask = 3
};

enum class PT_StatusLedEffect
{
    Aus = 0,
    Ein = 1,
    Blinken = 2,
    Pulsieren = 3,
    Aufblitzen = 4
};

enum class PT_InternalInputType
{
    Anderen_Logikkanal = 0,
    Statuskanal = 1
};



#ifdef MAIN_FirmwareRevision
#ifndef FIRMWARE_REVISION
#define FIRMWARE_REVISION MAIN_FirmwareRevision
#endif
#endif
#ifdef MAIN_FirmwareName
#ifndef FIRMWARE_NAME
#define FIRMWARE_NAME MAIN_FirmwareName
#endif
#endif
