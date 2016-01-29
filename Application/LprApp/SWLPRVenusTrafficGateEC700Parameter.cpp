/*
 * CSWLPRVenusTrafficGateEC700Parameter.cpp
 *
 *  Created on: 2015��8��18��
 *      Author: qinjj
 */
#include "SWFC.h"
#include "SWLPRApplication.h"
#include "SWLPRVenusTrafficGateEC700Parameter.h"


CSWLPRVenusTrafficGateEC700Parameter::CSWLPRVenusTrafficGateEC700Parameter()
{
	Get().nWorkModeIndex = PRM_CAP_FACE;
//	Get().nWorkModeIndex = PRM_TRAFFICE_FACE;
	m_strWorkMode.Format("����");
	Get().nCameraWorkMode = 19;		//816CCD���ڷ����������ģʽ
	Get().nMCFWUsecase = ICX816;

 
	//�ȳ�ʼ��ɨ������ÿ��ģʽ�����Լ���ɨ������
	Get().cTrackerCfgParam.cDetectArea.DetectorAreaLeft = 0;
	Get().cTrackerCfgParam.cDetectArea.DetectorAreaTop = 15;
	Get().cTrackerCfgParam.cDetectArea.DetectorAreaRight = 100;
	Get().cTrackerCfgParam.cDetectArea.DetectorAreaBottom = 55;
	Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum = 5;
	Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum = 9;

	Get().cTrackerCfgParam.cVideoDet.nVideoDetMode = 2;

	//��ʼ����������
	Get().cTrackerCfgParam.cTrapArea.TopLeftX = Get().cTrackerCfgParam.cDetectArea.DetectorAreaLeft;
	Get().cTrackerCfgParam.cTrapArea.TopRightX = Get().cTrackerCfgParam.cDetectArea.DetectorAreaRight;
	Get().cTrackerCfgParam.cTrapArea.BottomLeftX = Get().cTrackerCfgParam.cDetectArea.DetectorAreaLeft;
	Get().cTrackerCfgParam.cTrapArea.BottomRightX = Get().cTrackerCfgParam.cDetectArea.DetectorAreaRight;

	Get().cTrackerCfgParam.cTrapArea.TopLeftY = Get().cTrackerCfgParam.cDetectArea.DetectorAreaTop;
	Get().cTrackerCfgParam.cTrapArea.TopRightY = Get().cTrackerCfgParam.cDetectArea.DetectorAreaTop;
	Get().cTrackerCfgParam.cTrapArea.BottomLeftY = Get().cTrackerCfgParam.cDetectArea.DetectorAreaBottom;
	Get().cTrackerCfgParam.cTrapArea.BottomRightY = Get().cTrackerCfgParam.cDetectArea.DetectorAreaBottom;

	Get().cTrackerCfgParam.cTrapArea.nDetectorMinScaleNum = Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum;
	Get().cTrackerCfgParam.cTrapArea.nDetectorMaxScaleNum = Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum;
	Get().cTrackerCfgParam.iImageConstDelay = 200;

    Get().cCamCfgParam.iMaxExposureTime = 2500;
	Get().cCamCfgParam.iMinExposureTime = 0;
	Get().cCamCfgParam.iMinAGCLimit = 20;
	Get().cCamCfgParam.iMaxAGCLimit = 163;
	Get().cCamCfgParam.iDynamicTriggerEnable = 1;	
	Get().cCamCfgParam.iNightShutterThreshold = -1;
    Get().cCamCfgParam.iNightAvgYThreshold = 10;
    Get().cCamCfgParam.iDuskAvgYThreshold = 50;
    Get().cCamCfgParam.iDynamicCfgEnable = 1;

	//Get().cCamCfgParam.iWorkType = 0;
	
    Get().cCamAppParam.iAGCShutterHOri = 3000;
	Get().cCamAppParam.iAGCGainHOri = 150;
    Get().cCamAppParam.iAGCGainLOri = 10;	//��С����Ĭ��Ϊ10����С����̫����������AGC��

	//����Ĭ�ϵ���Ƶ��������ϵ��
    Get().cTrackerCfgParam.cScaleSpeed.fltAdjustCoef = 1.050;

	Get().cDevParam[1].iCommType = 1;	//����ֻ��һ������COM1,ֻ֧��485

	Get().cCamAppParam.iResolution = 0;	//Ĭ��Ϊ1080P
	
	// ץ��λ�ó�ʼֵ
	Get().cTrackerCfgParam.nCaptureOnePos = 50;
	Get().cTrackerCfgParam.nCaptureTwoPos = 80;

	// ������Ƶ�������
	//Get().cTrackerCfgParam.iUsedLight = 1;

	//����ɨ������Ĭ�ϴ�
	Get().cTrackerCfgParam.cTrapArea.fEnableDetAreaCtrl = TRUE;

	//����RGB�������÷�ΧΪ36~255,Ĭ��ֵ����Ϊ0
	Get().cCamAppParam.iGainR = 36;
	Get().cCamAppParam.iGainG = 36;
	Get().cCamAppParam.iGainB = 36;

	Get().cTrackerCfgParam.cVideoDet.nBigCarDelayFrameNo = 48;
	Get().cTrackerCfgParam.cVideoDet.nNightBackgroudThreshold = 28;

	Get().cCamAppParam.iF1OutputType = 1;
	Get().cCamAppParam.iCVBSExport = 0;

    Get().cCamAppParam.iCaptureGainR = 46;
    Get().cCamAppParam.iCaptureGainG = 36;
    Get().cCamAppParam.iCaptureGainB = 54;

    Get().cTrackerCfgParam.nProcessPlate_LightBlue = 0;
    Get().cCamAppParam.iCaptureShutter = 1000;
    Get().cCamAppParam.iCaptureGain = 80;
    Get().cCamAppParam.iCaptureSharpenThreshold = 200;
	
	Get().cCamAppParam.iTNFSNFValue = 1;	//���ڷ�������ǿ��ֻ���ǵͣ�������ǿ�����׵��»�����Ӱ

    Get().cOverlay.cJPEGInfo.iY = 0;	//Ĭ�ϵ��ӵ�ͼƬ���·�
	Get().cTrackerCfgParam.nDetReverseRunEnable = 0;//Ĭ�ϲ��������
	Get().cCamAppParam.iJpegAutoCompressEnable = 1;	//Ĭ�ϴ��Զ�����
	Get().cCamAppParam.iJpegExpectSize = 300;		//Ĭ��300Kbyte

	Get().cCamCfgParam.iEnableAGC = 1;
	Get().cCamCfgParam.iMinPSD = 500;	//Ƶ��������Χ
    Get().cCamCfgParam.iMaxPSD = 3000;

	Get().cCamCfgParam.iMinPlateLight = 140;	//���ڲ�����������Ƶĳ������ȷ�Χ
	Get().cCamCfgParam.iMaxPlateLight = 160;

    Get().cTrackerCfgParam.fEnableRecgCarColor = FALSE;		//Ĭ�ϴ򿪳�����ɫʶ��

	Get().cCamAppParam.iLEDPolarity = 0;	//�����Ĭ�ϸ�����	

	Get().cCamAppParam.iFlashEnable 		= 1;		//Ĭ��ʹ��
	Get().cCamAppParam.iFlashPolarity 		= 0;		//������
	Get().cCamAppParam.iFlashOutputType 	= 1;		//OC���� 
	Get().cCamAppParam.iFlashCoupling		= 0;		//�����
	Get().cCamAppParam.iFlashPluseWidth		= 50;		//���������

    Get().cCamCfgParam.iCaptureAutoParamEnable = 0;		//��ʹ���Զ�����ģ���ץ��ͼ�Զ�����
    Get().cTrackerCfgParam.nRoadLineNumber = 3; //Ĭ��˫����
	//Ĭ�ϳ�����
    Get().cTrackerCfgParam.rgcRoadInfo[0].ptTop.x = 1303;
    Get().cTrackerCfgParam.rgcRoadInfo[0].ptTop.y = 0;
    Get().cTrackerCfgParam.rgcRoadInfo[0].ptBottom.x = 5;
    Get().cTrackerCfgParam.rgcRoadInfo[0].ptBottom.y = 1761;

    Get().cTrackerCfgParam.rgcRoadInfo[1].ptTop.x = 1551;
    Get().cTrackerCfgParam.rgcRoadInfo[1].ptTop.y = 0;
    Get().cTrackerCfgParam.rgcRoadInfo[1].ptBottom.x = 1046;
    Get().cTrackerCfgParam.rgcRoadInfo[1].ptBottom.y = 1968;

    Get().cTrackerCfgParam.rgcRoadInfo[2].ptTop.x = 1816;
    Get().cTrackerCfgParam.rgcRoadInfo[2].ptTop.y = 0;
    Get().cTrackerCfgParam.rgcRoadInfo[2].ptBottom.x = 2269;
    Get().cTrackerCfgParam.rgcRoadInfo[2].ptBottom.y = 1986;

    Get().cTrackerCfgParam.rgcRoadInfo[3].ptTop.x = 2091;
    Get().cTrackerCfgParam.rgcRoadInfo[3].ptTop.y = 0;
    Get().cTrackerCfgParam.rgcRoadInfo[3].ptBottom.x = 3385;
    Get().cTrackerCfgParam.rgcRoadInfo[3].ptBottom.y = 1709;

	Get().cMatchParam.signal[0].dwType = 3;
    Get().cMatchParam.signal[0].dwRoadID = 0xFF;
//	Get().cMatchParam.signal[1].dwType = 3;
//	Get().cMatchParam.signal[1].dwRoadID = 1;

	/*���ڵ羯���ڷ��������ڵ��������ͬһ�������ܻ����
	���ƣ�������Ҫ�������һ���ƣ���˲��ܹ�����ͬ�ƣ���
	��������ǰ�û�����
	*/
	Get().cTrackerCfgParam.nBlockTwinsTimeout = 60;

    Get().cTrackerCfgParam.nMinPlateBrightness = 80;
	Get().cTrackerCfgParam.nMaxPlateBrightness = 120;

    Get().cOverlay.cJPEGInfo.fEnable = FALSE;
    Get().cOverlay.fH264Eanble = FALSE;

	Get().cCamAppParam.iTargetBitRate = 2 * 1024;
	Get().cCamAppParam.iMaxBitRate = 4 * 1024;
	Get().cResultSenderParam.iBestSnapshotOutput = 1;
	Get().cResultSenderParam.iLastSnapshotOutput = 1;
}

CSWLPRVenusTrafficGateEC700Parameter::~CSWLPRVenusTrafficGateEC700Parameter()
{
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::Initialize(CSWString strFilePath)
{
    // �ָ�Ĭ��
    ResetParam();

    // �Ȼ���ĳ�ʼ��
    if (S_OK == CSWParameter<ModuleParams>::Initialize(strFilePath)
		&& S_OK == InitSystem()
		&& S_OK == InitTracker()
		&& S_OK == InitHvDsp()
        && S_OK == InitOuterCtrl()
        && S_OK == InitIPTCtrl()
        && S_OK == InitCamApp()
        && S_OK == InitScaleSpeed()	//��������
        && S_OK == InitCamera()
        && S_OK == InitCharacter()
        //&& S_OK == InitGB28181()
        //&& S_OK == InitAutoReboot()
        //&& S_OK == InitONVIF()
        )
    {
        //Get().cResultSenderParam.cProcRule.nOverlayX = Get().cOverlay.cJPEGInfo.iX;
        //Get().cResultSenderParam.cProcRule.nOverlayY = Get().cOverlay.cJPEGInfo.iY;
        return S_OK ;
    }

    SW_TRACE_DEBUG("<CSWLPRVenusTrafficGateEC700Parameter> Initialize failed.\n");
    return E_FAIL ;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitSystem(VOID)
{
    if (S_OK == CSWLPRParameter::InitSystem())
    {
		
        return S_OK ;
    }
    return E_FAIL ;

}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitTracker(VOID)
{

    /*GetEnum("\\Tracker\\ProcessPlate"
      	, "LightBlueFlag"
      	, &Get().cTrackerCfgParam.nProcessPlate_LightBlue
      	, Get().cTrackerCfgParam.nProcessPlate_LightBlue
      	, "0:�ر�;1:��"
      	, "ǳ���ƿ���"
      	, ""
      	, PROJECT_LEVEL
        );  
        
    GetEnum("\\Tracker\\ProcessPlate"
      	, "EnableBigPlate"
      	, &Get().cTrackerCfgParam.nEnableBigPlate
      	, Get().cTrackerCfgParam.nEnableBigPlate
      	, "0:�ر�;1:��"
      	, "����ʶ�𿪹�"
      	, ""
      	, PROJECT_LEVEL			//�㷨�Ż���طŵ�3������
        );*/

    GetEnum("\\Tracker\\ProcessPlate"
    	, "EnablePlateEnhance"
    	, &Get().cTrackerCfgParam.nEnablePlateEnhance
    	, Get().cTrackerCfgParam.nEnablePlateEnhance
    	, "0:�ر�;1:��"
    	, "�ָ�ǰ�Ƿ����ͼƬ��ǿ"
    	, ""
    	, PROJECT_LEVEL
    );

    /*GetEnum("\\Tracker\\ProcessPlate"
    	, "EnableProcessBWPlate"
    	, &Get().cTrackerCfgParam.nEnableProcessBWPlate
    	, Get().cTrackerCfgParam.nEnableProcessBWPlate
    	, "0:�ر�;1:��"
    	, "�Ƿ�����ڰ����"
    	, ""
    	, PROJECT_LEVEL
    );*/

    GetInt("\\Tracker\\ProcessPlate"
    	, "PlateResizeThreshold"
    	, &Get().cTrackerCfgParam.nPlateResizeThreshold
    	, Get().cTrackerCfgParam.nPlateResizeThreshold
    	, 0
    	, 200
    	, "�ָ�ǰСͼ���������ֵ"
    	, ""
    	, PROJECT_LEVEL
    );


    GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
    	, "PlateLightCheckCount"
    	, &Get().cTrackerCfgParam.nPlateLightCheckCount
    	, Get().cTrackerCfgParam.nPlateLightCheckCount
    	, 3
    	, 50
    	, "���ȵ������"
    	, "��λΪ���Ƹ���"
    	, CUSTOM_LEVEL
    );

    GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
    	, "MinPlateBrightness"
    	, &Get().cTrackerCfgParam.nMinPlateBrightness
    	, Get().cTrackerCfgParam.nMinPlateBrightness
    	, 1
    	, 255
    	, "�����������"
    	, ""
    	, CUSTOM_LEVEL
    );
		
    GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
    	, "MaxPlateBrightness"
    	, &Get().cTrackerCfgParam.nMaxPlateBrightness
    	, Get().cTrackerCfgParam.nMaxPlateBrightness
    	, 1
    	, 255
    	, "�����������"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
    	, "H0"
    	, &Get().cTrackerCfgParam.nProcessPlate_BlackPlateThreshold_H0
    	, Get().cTrackerCfgParam.nProcessPlate_BlackPlateThreshold_H0
    	, 0
    	, 240
    	, "����ɫ������"
    	, ""
    	, PROJECT_LEVEL
    );

    GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
    	, "H1"
    	, &Get().cTrackerCfgParam.nProcessPlate_BlackPlateThreshold_H1
    	, Get().cTrackerCfgParam.nProcessPlate_BlackPlateThreshold_H1
    	, Get().cTrackerCfgParam.nProcessPlate_BlackPlateThreshold_H0
    	, 240
    	, "����ɫ������"
    	, ""
    	, PROJECT_LEVEL
    );

    GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
    	, "L"
    	, &Get().cTrackerCfgParam.nProcessPlate_BlackPlate_L
    	, Get().cTrackerCfgParam.nProcessPlate_BlackPlate_L
    	, 0
    	, 240
    	, "������������"
    	, ""
    	, PROJECT_LEVEL
    );

    /*GetEnum("Tracker\\Recognition"
    	, "UseEdgeMethod"
    	, &Get().cTrackerCfgParam.fUseEdgeMethod
    	, Get().cTrackerCfgParam.fUseEdgeMethod
    	, "0:����ǿ;1:��ǿ"
    	, "��ǿ����ͼʶ��"
    	, ""
    	, PROJECT_LEVEL
    );*/
    
    GetEnum("Tracker\\Recognition"
    	, "EnableT1Model"
    	, &Get().cTrackerCfgParam.fEnableT1Model
    	, Get().cTrackerCfgParam.fEnableT1Model
    	, "0:�ر�;1:��"
    	, "T-1ģ�Ϳ���"
    	, ""
    	, PROJECT_LEVEL
    );

    
    /*GetInt("Tracker\\Recognition"
    	, "RecogAsteriskThreshold"
    	, &Get().cTrackerCfgParam.nRecogAsteriskThreshold
    	, Get().cTrackerCfgParam.nRecogAsteriskThreshold
    	, 0
    	, 100
    	, "�÷ֵ�����ֵ(�ٷֱ�)��#��ʾ"
    	, ""
    	, PROJECT_LEVEL
    );
    
   GetEnum("Tracker\\Misc"
    	, "RecogGXPolice"
    	, &Get().cTrackerCfgParam.nRecogGxPolice
    	, Get().cTrackerCfgParam.nRecogGxPolice
    	, "0:�ر�;1:��"
    	, "�ط�����ʶ�𿪹�"
    	, ""
    	, PROJECT_LEVEL
    );*/
    
#if 0
    GetEnum("Tracker\\Misc"
    	, "CoreProcessType"
    	, &Get().cTrackerCfgParam.nProcessType
    	, Get().cTrackerCfgParam.nProcessType
    	, "0:ֻ���ִ���С�ͳ�;1:���������ַǻ���������;2:���������ַǻ�����������"
    	, "��������"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetEnum("Tracker\\Misc"
    	, "CoreOutPutType"
    	, &Get().cTrackerCfgParam.nOutPutType
    	, Get().cTrackerCfgParam.nOutPutType
    	, "0:ȫ�������;1:����С�ͳ����Ϊ������"
    	, "������� 0:ȫ�������;1:����С�ͳ����Ϊ������"
    	, ""
    	, CUSTOM_LEVEL
    );
#endif
    GetEnum("Tracker\\Misc"
    	, "NightPlus"
    	, &Get().cTrackerCfgParam.nNightPlus
    	, Get().cTrackerCfgParam.nNightPlus
    	, "0:�ر�;1:��"
    	, "���ϼ�ǿ�ǻ��������,ֻ�г����㹻��ʱ����,��������Ӷ��"
    	, ""
    	, PROJECT_LEVEL
    );
    	
	/*Get().cTrackerCfgParam.nWalkManSpeed = 200;
    GetInt("Tracker\\Misc"
    	, "WalkManSpeed"
    	, &Get().cTrackerCfgParam.nWalkManSpeed
    	, Get().cTrackerCfgParam.nWalkManSpeed
    	, 0
    	, 300
    	, "�����жϵ�������"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetFloat("Tracker\\Misc"
    	, "BikeSensitivity"
    	, &Get().cTrackerCfgParam.fltBikeSensitivity
    	, Get().cTrackerCfgParam.fltBikeSensitivity
    	, 0.0f
    	, 10.0f
    	, "�ǻ�����������"
    	, ""
    	, PROJECT_LEVEL
    );*/
    
    GetInt("Tracker\\Misc"
    	, "CarArrivedDelay"
    	, &Get().cTrackerCfgParam.nCarArrivedDelay
    	, Get().cTrackerCfgParam.nCarArrivedDelay
    	, 0
    	, 100
    	, "�������ﴥ���ӳپ���(��)"
    	, ""
    	, PROJECT_LEVEL
    );

    GetInt("Tracker\\Misc"
    	, "ImageConstDelay"
    	, &Get().cTrackerCfgParam.iImageConstDelay
    	, Get().cTrackerCfgParam.iImageConstDelay
    	, 0
    	, 400
    	, "ͼƬ��ʱʱ��"
    	, "ͼƬ��ʱʱ��(ms)"
    	, PROJECT_LEVEL
    );

    
    GetInt("Tracker\\TrackInfo"
    	, "BlockTwinsTimeout"
    	, &Get().cTrackerCfgParam.nBlockTwinsTimeout
    	, Get().cTrackerCfgParam.nBlockTwinsTimeout
    	, 0
    	, 3600
    	, "��ͬ�����Сʱ����(S)"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("Tracker\\TrackInfo"
        , "PlateTrackerOutLine"
        , &Get().cTrackerCfgParam.nPlateTrackerOutLine
        , Get().cTrackerCfgParam.nPlateTrackerOutLine
        , 1
        , 99
        , "���ƹ�����(%)"
        , ""
        , PROJECT_LEVEL
    );

    GetInt("Tracker\\TrackInfo"
    	, "AverageConfidenceQuan"
    	, &Get().cTrackerCfgParam.nAverageConfidenceQuan
    	, Get().cTrackerCfgParam.nAverageConfidenceQuan
    	, 0
    	, 65536
    	, "ƽ���÷�����"
    	, ""
    	, 1
    );
    
    /*GetInt("Tracker\\TrackInfo"
    	, "FirstConfidenceQuan"
    	, &Get().cTrackerCfgParam.nFirstConfidenceQuan
    	, Get().cTrackerCfgParam.nFirstConfidenceQuan
    	, 0
    	, 65536
    	, "���ֵ÷�����"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("Tracker\\TrackInfo"
    	, "RemoveLowConfForVote"
    	, &Get().cTrackerCfgParam.nRemoveLowConfForVote
    	, Get().cTrackerCfgParam.nRemoveLowConfForVote
    	, 0
    	, 100
    	, "ͶƱǰȥ���͵÷ֳ��ưٷֱ�"
    	, ""
    	, PROJECT_LEVEL
    );*/
    
    //��ʼ����������
    Get().cTrackerCfgParam.cTrapArea.TopLeftX =     Get().cTrackerCfgParam.cDetectArea.DetectorAreaLeft;
    Get().cTrackerCfgParam.cTrapArea.TopRightX =    Get().cTrackerCfgParam.cDetectArea.DetectorAreaRight;
    Get().cTrackerCfgParam.cTrapArea.BottomLeftX =  Get().cTrackerCfgParam.cDetectArea.DetectorAreaLeft;
    Get().cTrackerCfgParam.cTrapArea.BottomRightX = Get().cTrackerCfgParam.cDetectArea.DetectorAreaRight;

    Get().cTrackerCfgParam.cTrapArea.TopLeftY =     Get().cTrackerCfgParam.cDetectArea.DetectorAreaTop;
    Get().cTrackerCfgParam.cTrapArea.TopRightY =    Get().cTrackerCfgParam.cDetectArea.DetectorAreaTop;
    Get().cTrackerCfgParam.cTrapArea.BottomLeftY =  Get().cTrackerCfgParam.cDetectArea.DetectorAreaBottom;
    Get().cTrackerCfgParam.cTrapArea.BottomRightY = Get().cTrackerCfgParam.cDetectArea.DetectorAreaBottom;

    Get().cTrackerCfgParam.cTrapArea.nDetectorMinScaleNum = Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum;
    Get().cTrackerCfgParam.cTrapArea.nDetectorMaxScaleNum = Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum;

    GetEnum("Tracker\\DetAreaCtrl\\Normal"
    	,"EnableTrap"
    	, &Get().cTrackerCfgParam.cTrapArea.fEnableDetAreaCtrl
    	, Get().cTrackerCfgParam.cTrapArea.fEnableDetAreaCtrl
    	, "0:�ر�;1:��"
    	, "����ɨ��������ƿ���"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetInt("Tracker\\DetAreaCtrl\\Normal"
    	, "TopLeftX"
    	, &Get().cTrackerCfgParam.cTrapArea.TopLeftX
    	, Get().cTrackerCfgParam.cTrapArea.TopLeftX
    	, 0
    	, 100
    	, "ɨ��������������X"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("Tracker\\DetAreaCtrl\\Normal"
    	, "TopLeftY" 
    	, &Get().cTrackerCfgParam.cTrapArea.TopLeftY
    	, Get().cTrackerCfgParam.cTrapArea.TopLeftY
    	, 0
    	, 100
    	, "ɨ��������������Y"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("Tracker\\DetAreaCtrl\\Normal"
    	, "TopRightX"
    	, &Get().cTrackerCfgParam.cTrapArea.TopRightX
    	, Get().cTrackerCfgParam.cTrapArea.TopRightX
    	, 0
    	, 100
    	, "ɨ��������������X"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("Tracker\\DetAreaCtrl\\Normal"
    	, "TopRightY"
    	, &Get().cTrackerCfgParam.cTrapArea.TopRightY
    	, Get().cTrackerCfgParam.cTrapArea.TopRightY
    	, 0
    	, 100
    	, "ɨ��������������Y"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetInt("Tracker\\DetAreaCtrl\\Normal","BottomLeftX"
    	, &Get().cTrackerCfgParam.cTrapArea.BottomLeftX
    	, Get().cTrackerCfgParam.cTrapArea.BottomLeftX
    	, 0 
    	, 100
    	, "ɨ��������������X"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("Tracker\\DetAreaCtrl\\Normal"
    	, "BottomLeftY"
    	, &Get().cTrackerCfgParam.cTrapArea.BottomLeftY
    	, Get().cTrackerCfgParam.cTrapArea.BottomLeftY
    	, 0
    	, 100
    	, "ɨ��������������Y"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("Tracker\\DetAreaCtrl\\Normal"
    	, "BottomRightX"
    	, &Get().cTrackerCfgParam.cTrapArea.BottomRightX
    	, Get().cTrackerCfgParam.cTrapArea.BottomRightX
    	, 0
    	, 100
    	, "ɨ��������������X"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("Tracker\\DetAreaCtrl\\Normal"
    	, "BottomRightY"
    	, &Get().cTrackerCfgParam.cTrapArea.BottomRightY
    	, Get().cTrackerCfgParam.cTrapArea.BottomRightY
    	, 0
    	, 100
    	, "ɨ��������������Y"
    	, ""
    	, CUSTOM_LEVEL
    );

	//�������С���ƿ���Ϊ-1ʱ�Զ����㣬���ǿ��ų����������ã�
	Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum = -1;
	Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum = -1;
    GetInt("\\Tracker\\DetAreaCtrl\\Normal"
    	, "MinScale"
    	, &Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum
    	, Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum
    	, -1
    	, 16
    	, "������С����(-1Ϊ�Զ�����)"
        , "56*(1.1^MinScale):0-56;1-61;2-67;3-74;4-81;5-90;6-99;\n  \
                                              7-109;8-120;9-132;10-145;11-159;12-175;\n \
                                              13-193;14-212;15-233;16-257"
    	, PROJECT_LEVEL
    );
    GetInt("\\Tracker\\DetAreaCtrl\\Normal"
    	, "MaxScale"
    	, &Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum
    	, Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum
    	, -1
    	, 16
    	, "����������(-1Ϊ�Զ�����)"
    	, "56*(1.1^MaxScale)"
    	, PROJECT_LEVEL
    );
    
    Get().cTrackerCfgParam.cDetectArea.fEnableDetAreaCtrl = Get().cTrackerCfgParam.cTrapArea.fEnableDetAreaCtrl;
    Get().cTrackerCfgParam.cDetectArea.DetectorAreaLeft   = Get().cTrackerCfgParam.cTrapArea.TopLeftX    > Get().cTrackerCfgParam.cTrapArea.BottomLeftX  ? Get().cTrackerCfgParam.cTrapArea.BottomLeftX : Get().cTrackerCfgParam.cTrapArea.TopLeftX;
    Get().cTrackerCfgParam.cDetectArea.DetectorAreaRight  = Get().cTrackerCfgParam.cTrapArea.TopRightX   < Get().cTrackerCfgParam.cTrapArea.BottomRightX ? Get().cTrackerCfgParam.cTrapArea.BottomRightX: Get().cTrackerCfgParam.cTrapArea.TopRightX;
    Get().cTrackerCfgParam.cDetectArea.DetectorAreaTop    = Get().cTrackerCfgParam.cTrapArea.TopLeftY    > Get().cTrackerCfgParam.cTrapArea.TopRightY    ? Get().cTrackerCfgParam.cTrapArea.TopRightY   : Get().cTrackerCfgParam.cTrapArea.TopLeftY;
    Get().cTrackerCfgParam.cDetectArea.DetectorAreaBottom = Get().cTrackerCfgParam.cTrapArea.BottomLeftY > Get().cTrackerCfgParam.cTrapArea.BottomRightY ? Get().cTrackerCfgParam.cTrapArea.BottomLeftY : Get().cTrackerCfgParam.cTrapArea.BottomRightY;

    GetInt("\\Tracker\\RoadInfo"
    	, "RoadLineNumber"
    	, &Get().cTrackerCfgParam.nRoadLineNumber
    	, Get().cTrackerCfgParam.nRoadLineNumber
    	, 2
        , 3//MAX_ROADLINE_NUM
    	, "����������"
    	, ""
        , PROJECT_LEVEL
    );

	Get().cTrackerCfgParam.iRoadNumberBegin = 0;
	Get().cTrackerCfgParam.iStartRoadNum = 1;
    GetEnum("\\Tracker\\RoadInfo"
    	, "RoadNumberBegin"
    	, &Get().cTrackerCfgParam.iRoadNumberBegin 
    	, Get().cTrackerCfgParam.iRoadNumberBegin
    	, "0:����ʼ;1:���ҿ�ʼ"
      , "���������ʼ����"
      , ""
      , CUSTOM_LEVEL
    );

    GetEnum("\\Tracker\\RoadInfo"
    	, "StartRoadNumber"
    	, &Get().cTrackerCfgParam.iStartRoadNum
    	, Get().cTrackerCfgParam.iStartRoadNum
    	, "0:0;1:1;2:2;3:3;4:4;5:5;6:6;7:7;8:8;9:9"
    	, "��������ʼ���"
    	, "0:��0��ʼ,1:��1��ʼ,�Դ�����..."
    	, CUSTOM_LEVEL
    );
	
    for (int i = 0; i < MAX_ROADLINE_NUM; i++)
    {
        char szSection[256];
        sprintf(szSection, "\\Tracker\\RoadInfo\\Road%02d", i);

        GetInt(szSection
        	, "TopX"
        	, &Get().cTrackerCfgParam.rgcRoadInfo[i].ptTop.x
        	, Get().cTrackerCfgParam.rgcRoadInfo[i].ptTop.x
        	, 0
        	, 5000
        	, "��X����"
        	, ""
        	, CUSTOM_LEVEL
        );
        
        GetInt(szSection
        	, "TopY"
        	, &Get().cTrackerCfgParam.rgcRoadInfo[i].ptTop.y
        	, Get().cTrackerCfgParam.rgcRoadInfo[i].ptTop.y
        	, 0
        	, 5000
        	, "��Y����"
        	, ""
        	, CUSTOM_LEVEL
        );
        
        GetInt(szSection
        	, "BottomX"
        	, &Get().cTrackerCfgParam.rgcRoadInfo[i].ptBottom.x
        	, Get().cTrackerCfgParam.rgcRoadInfo[i].ptBottom.x
        	, 0
        	, 5000
        	, "��X����"
        	, ""
        	, CUSTOM_LEVEL
        );
        
        GetInt(szSection
        	, "BottomY"
        	, &Get().cTrackerCfgParam.rgcRoadInfo[i].ptBottom.y
        	, Get().cTrackerCfgParam.rgcRoadInfo[i].ptBottom.y
        	, 0
        	, 5000
        	, "��Y����"
        	, ""
        	, CUSTOM_LEVEL
        );
#if 0
        GetInt(szSection
        	, "LineType"
        	, &Get().cTrackerCfgParam.rgcRoadInfo[i].iLineType
        	, Get().cTrackerCfgParam.rgcRoadInfo[i].iLineType
        	, 1
        	, 9999
        	, "����"
        	, ""
        	, CUSTOM_LEVEL
        );
        
        GetInt(szSection
        	, "RoadType"
        	, &Get().cTrackerCfgParam.rgcRoadInfo[i].iRoadType
        	, Get().cTrackerCfgParam.rgcRoadInfo[i].iRoadType
        	, 1
        	, 9999
        	, "��Ӧ�ĳ�������"
        	, ""
        	, CUSTOM_LEVEL
        );
#endif
    }

    GetEnum("\\Tracker\\VideoDet"
    	, "VideoDetMode"
    	, &Get().cTrackerCfgParam.cVideoDet.nVideoDetMode
    	, Get().cTrackerCfgParam.cVideoDet.nVideoDetMode
    	, "0:��ʹ����Ƶ���;1:ֻʹ�ñ������;2:ʹ����Ƶ���"
    	, "��Ƶ���ģʽ"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("\\Tracker\\VideoDet\\AreaCtrl"
    	, "Left"
    	, &Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.left
    	, Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.left
    	, 0
    	, 100
    	, "��Ƶ���������"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("\\Tracker\\VideoDet\\AreaCtrl"
    	, "Right"
    	, &Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.right
    	, Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.right
    	, 0
    	, 100
    	, "��Ƶ���������"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("\\Tracker\\VideoDet\\AreaCtrl"
    	, "Top"
    	, &Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.top
    	, Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.top
    	, 0
    	, 100
    	, "��Ƶ���������"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("\\Tracker\\VideoDet\\AreaCtrl"
    	, "Bottom"
    	, &Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.bottom
    	, Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.bottom
    	, 0
    	, 100
    	, "��Ƶ���������"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("\\Tracker\\VideoDet"
    	, "DayBackgroudThreshold"
    	, &Get().cTrackerCfgParam.cVideoDet.nDayBackgroudThreshold
    	, Get().cTrackerCfgParam.cVideoDet.nDayBackgroudThreshold
    	, 0
    	, 255
    	, "���챳�������ֵ"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("\\Tracker\\VideoDet"
    	, "nBackgroudThreshold"
    	, &Get().cTrackerCfgParam.cVideoDet.nNightBackgroudThreshold
    	, Get().cTrackerCfgParam.cVideoDet.nNightBackgroudThreshold
    	, 0
    	, 255
    	, "���ϱ��������ֵ"
    	, ""
    	, PROJECT_LEVEL
    ); 

    
    GetInt("\\Tracker\\VideoDet"
    	, "VoteFrameCount"
    	, &Get().cTrackerCfgParam.cVideoDet.nVoteFrameCount
    	, Get().cTrackerCfgParam.cVideoDet.nVoteFrameCount
    	, 15
    	, 100
    	, "ͶƱ��Ч֡������֡�����ڴ�ֵ��ͶƱ"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetEnum("\\Tracker\\VideoDet"
    	, "CheckAcross"
    	, &Get().cTrackerCfgParam.cVideoDet.nCheckAcross
    	, Get().cTrackerCfgParam.cVideoDet.nCheckAcross
    	, "0:��;1:��"
    	, "�Ƿ��������ʻ������"
    	, ""
    	, PROJECT_LEVEL
    );
    

    //Scale��Ч���ж�
    /*
    if (Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum > Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum)
    {
        UpdateInt("\\Tracker\\DetAreaCtrl\\Normal"
        	, "MinScale"
        	, 6
        );
        UpdateInt("\\Tracker\\DetAreaCtrl\\Normal"
        	, "MaxScale"
        	, 10
        );
        
        Get().cTrackerCfgParam.cDetectArea.nDetectorMinScaleNum = 5;
        Get().cTrackerCfgParam.cDetectArea.nDetectorMaxScaleNum = 9;
    }
	*/
    //��Ƶ���������Ч���ж�
    if (!CheckArea(
                Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.left,
                Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.top,
                Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.right,
                Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.bottom
            ))
    {
        UpdateInt("\\Tracker\\VideoDet\\AreaCtrl"
        	, "Left"
        	, 0
        );
        UpdateInt("\\Tracker\\VideoDet\\AreaCtrl"
        	, "Top"
        	, 0
        );
       UpdateInt("\\Tracker\\VideoDet\\AreaCtrl"
        	, "Right"
        	, 100
        );
        UpdateInt("\\Tracker\\VideoDet\\AreaCtrl"
        	, "Bottom"
        	, 100
        );
  	
        Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.left = 0;
        Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.top =0;
        Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.right = 100;
        Get().cTrackerCfgParam.cVideoDet.rcVideoDetArea.bottom = 100;
    }
    
    //if(S_OK == CSWLPRParameter::InitTracker())
//{
	GetEnum("\\Tracker\\VideoDet"
		, "ShadowDetMode"
		, &Get().cTrackerCfgParam.cVideoDet.nShadowDetMode
		, Get().cTrackerCfgParam.cVideoDet.nShadowDetMode
		, "0:��ʹ����Ӱ���;1:ʹ����Ӱ���"
		, "��Ӱ���ģʽ"
		, ""
		, PROJECT_LEVEL
	);
	
	GetInt("\\Tracker\\VideoDet"
		, "ShadowDetEffect"
		, &Get().cTrackerCfgParam.cVideoDet.nShadowDetEffect
		, Get().cTrackerCfgParam.cVideoDet.nShadowDetEffect
		, 0
		, 100
		, "��Ӱ���ǿ���̶�ֵ"
		, "0:ʹ��ȱʡֵ(����ȷ), 1:��Ӱ���ǿ���̶���С, 100:��Ӱ���ǿ���̶����"
		, PROJECT_LEVEL
	);
	
	GetEnum("\\Tracker\\VideoDet"
		, "DiffType"
		, &Get().cTrackerCfgParam.cVideoDet.nDiffType
		, Get().cTrackerCfgParam.cVideoDet.nDiffType
		, "0:֡����ȡ;1:֡���sobelǰ��"
		, "ǰ����ȡ��ʽ"
		, "ֵΪ0:֡����ȡ ֵΪ1:֡���sobelǰ������Ը���·�����������������"
		, PROJECT_LEVEL
	);
	
	GetEnum("\\Tracker\\VideoDet"
		, "MedFilter"
		, &Get().cTrackerCfgParam.cVideoDet.nMedFilter
		, Get().cTrackerCfgParam.cVideoDet.nMedFilter
		, "0:�ر�;1:��"
		, "���ƶ�������"
		, ""
		, PROJECT_LEVEL
	);
	
	GetInt("\\Tracker\\VideoDet"
		, "MedFilterUpLine"
		, &Get().cTrackerCfgParam.cVideoDet.nMedFilterUpLine
		, Get().cTrackerCfgParam.cVideoDet.nMedFilterUpLine
		, 0
		, 100
		, "���ƶ�����������������"
		, "ֵΪ0:��Ļ���Ϸ� ֵΪ100:��Ļ���·�"
		, PROJECT_LEVEL
	);
	
	GetInt("\\Tracker\\VideoDet"
		, "MedFilterDownLine"
		, &Get().cTrackerCfgParam.cVideoDet.nMedFilterDownLine
		, Get().cTrackerCfgParam.cVideoDet.nMedFilterDownLine
		, 0
		, 100
		, "���ƶ�����������������"
		, "ֵΪ0:��Ļ���Ϸ� ֵΪ100:��Ļ���·�"
		, PROJECT_LEVEL
	);
	
	GetEnum("\\Tracker\\Recognition"
		, "EnableRecogCarColor"
		, &Get().cTrackerCfgParam.fEnableRecgCarColor
		, Get().cTrackerCfgParam.fEnableRecgCarColor
		, "0:��;1:��"
		, "������ɫʶ�𿪹�"
		, ""
        , PROJECT_LEVEL
	);
	
	if (Get().cTrackerCfgParam.nMinFaceScale > Get().cTrackerCfgParam.nMaxFaceScale)
	{
		Get().cTrackerCfgParam.nMinFaceScale = 2;
		Get().cTrackerCfgParam.nMaxFaceScale = 20;
		
		UpdateInt("\\Tracker\\Recognition"
			, "FaceMin"
			, Get().cTrackerCfgParam.nMinFaceScale
		);  
		
		UpdateInt("\\Tracker\\Recognition"
			, "FaceMax"
			, Get().cTrackerCfgParam.nMinFaceScale
		);
	}

	//������ɫʶ�����	
	/*GetInt("\\Tracker\\ProcessPlate"
		, "EnableColorReRecog"
		, &Get().cTrackerCfgParam.nEnableColorReRecog
		, 4	//default value
		, 0
		, 7
		, "�ڰ׻���ʶ��"
		, ""
		, PROJECT_LEVEL
		);

	GetInt("\\Tracker\\ProcessPlate"
		, "nBColorReThr"
		, &Get().cTrackerCfgParam.nBColorReThr
		, Get().cTrackerCfgParam.nBColorReThr
		, -60
		, 60
		, "����ʶ����ֵ"
		, ""
		, PROJECT_LEVEL
		);

	GetInt("\\Tracker\\ProcessPlate"
		, "nWColorReThr"
		, &Get().cTrackerCfgParam.nWColorReThr
		, Get().cTrackerCfgParam.nWColorReThr
		, 0
		, 240
		, "����ʶ����ֵ"
		, ""
		, PROJECT_LEVEL
		);

	GetInt("\\Tracker\\ProcessPlate"
		, "nWGColorReThr"
		, &Get().cTrackerCfgParam.nWGColorReThr
		, Get().cTrackerCfgParam.nWGColorReThr
		, 0
		, 240
		, "�Ұ���ʶ����ֵ"
		, ""
		, PROJECT_LEVEL
		);

	GetInt("\\Tracker\\ProcessPlate"
		, "EnableColorThr"
		, &Get().cTrackerCfgParam.fEnableCorlorThr
		, 0 //default
		, 0
		, 1
		, "�Һڿ��ƿ���"
		, ""
		, PROJECT_LEVEL
		);

	GetInt("\\Tracker\\ProcessPlate"
		, "nBGColorThr"
		, &Get().cTrackerCfgParam.nBGColorThr
		, Get().cTrackerCfgParam.nBGColorThr
		, 0
		, 240
		, "�Һڿ�����ֵ"
		, ""
		, PROJECT_LEVEL
		);

	GetInt("\\Tracker\\ProcessPlate"
		, "nWGColorThr"
		, &Get().cTrackerCfgParam.nWGColorThr
		, Get().cTrackerCfgParam.nWGColorThr
		, 0
		, 240
		, "�Ұ׿�����ֵ"
		, ""
		, PROJECT_LEVEL
		);*/

	GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
		, "NightThreshold"
		, &Get().cTrackerCfgParam.nNightThreshold
		, Get().cTrackerCfgParam.nNightThreshold
		, 0
		, 240
		, "ҹ��ģʽ��������"
		, ""
		, PROJECT_LEVEL
		);
	/*GetInt("\\Tracker\\ProcessPlate\\BlackPlate"
    	, "S"
    	, &Get().cTrackerCfgParam.nProcessPlate_BlackPlate_S
    	, Get().cTrackerCfgParam.nProcessPlate_BlackPlate_S
    	, 0
    	, 240
    	, "���Ʊ��Ͷ�����"
    	, ""
    	, PROJECT_LEVEL
    );
	GetEnum("Tracker\\Misc"
        , "EnableAlphaRecog"
        , &Get().cTrackerCfgParam.fEnableAlpha_5
        , 1 //default value
        , "0:�ر�;1:��"
        , "������ĸʶ�𿪹�"
        , ""
        , PROJECT_LEVEL
        );
	GetEnum("\\Tracker\\ProcessPlate"
        , "EnableDBGreenSegment"
        , &Get().cTrackerCfgParam.nPlateDetect_Green
        , Get().cTrackerCfgParam.nPlateDetect_Green
        , "0:�ر�;1:��"
        , "����ʶ�𿪹�"
        , ""
        , PROJECT_LEVEL
        );
	GetInt("Tracker\\TrackInfo"
		, "VoteFrameNum"
		, &Get().cTrackerCfgParam.nVoteFrameNum
		, Get().cTrackerCfgParam.nVoteFrameNum
		, 4
		, 1000
		, "ͶƱ�Ľ����"
		, ""
		, PROJECT_LEVEL
		);

	GetInt("Tracker\\TrackInfo"
		, "MaxEqualFrameNumForVote"
		, &Get().cTrackerCfgParam.nMaxEqualFrameNumForVote
		, Get().cTrackerCfgParam.nMaxEqualFrameNumForVote
		, 4, 1000
		, "������ͬ�����������"
		, ""
		, PROJECT_LEVEL
		);*/
		

	/*GetInt("Tracker\\Misc"
		, "CarArrivedPos"
		, &Get().cTrackerCfgParam.nCarArrivedPos
		, Get().cTrackerCfgParam.nCarArrivedPos
		, 0
		, 100
		, "��������λ��(��������������)"
		, ""
        , PROJECT_LEVEL
	);*/
#if 0
	GetInt("Tracker\\Misc"
		, "CarArrivedPosNoPlate"
		, &Get().cTrackerCfgParam.nCarArrivedPosNoPlate
		, Get().cTrackerCfgParam.nCarArrivedPosNoPlate
		, 0
		, 100
		, "���Ƴ�����λ��"
		, ""
		, CUSTOM_LEVEL
	);

	GetInt("Tracker\\Misc"
		, "CarArrivedPosYellow"
		, &Get().cTrackerCfgParam.nCarArrivedPosYellow
		, Get().cTrackerCfgParam.nCarArrivedPosYellow
		, 0
		, 100
		, "��������λ��(����)"
		, ""
		, CUSTOM_LEVEL
	);
#endif

	GetInt("Tracker\\Misc"
        , "OnePos"
        , &Get().cTrackerCfgParam.nCaptureOnePos
        , Get().cTrackerCfgParam.nCaptureOnePos
        , 0
        , 100
        , "��һ��ͼ��λ��"
        , ""
        , CUSTOM_LEVEL
    );

    GetInt("Tracker\\Misc"
        , "TwoPos"
        , &Get().cTrackerCfgParam.nCaptureTwoPos
        , Get().cTrackerCfgParam.nCaptureTwoPos
        , 0
        , 100
        , "�ڶ���ͼ��λ��"
        , ""
        , CUSTOM_LEVEL
    );

	return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitHvDsp(VOID)
{

	GetEnum("HvDsp\\Misc"
    	, "IPNCLogOutput"
    	, &Get().cCamCfgParam.iIPNCLogOutput
    	, Get().cCamCfgParam.iIPNCLogOutput
    	, "0:�����;1:���"
    	, "���IPNC��־��Ϣ"
    	, ""
    	, PROJECT_LEVEL
    );
	
    GetEnum("HvDsp\\Misc"
            , "OutputFilterInfo"
            , &Get().cResultSenderParam.fOutputFilterInfo
            , Get().cResultSenderParam.fOutputFilterInfo
            , "0:�����;1:���"
            , "���������Ϣ"
            , ""
            , CUSTOM_LEVEL
           );

    // ��������.
    Get().cResultSenderParam.cProcRule.fOutPutFilterInfo = Get().cResultSenderParam.fOutputFilterInfo;

    GetEnum("\\HvDsp\\Misc"
            , "DrawRect"
            , &Get().cResultSenderParam.iDrawRect
            , Get().cResultSenderParam.iDrawRect
            , "0:������;1:����"
            , "����ͼ�񻭺��"
            , ""
            , PROJECT_LEVEL
           );
#if 0
    GetEnum("\\HvDsp\\Misc"
            , "HDVideoEnable"
            , &Get().cResultSenderParam.fSaveVideo
            , Get().cResultSenderParam.fSaveVideo
            , "0:��¼��;1:¼��"
            , "Ӳ��¼�񿪹�"
            , ""
            , CUSTOM_LEVEL
           );


    GetEnum("\\HvDsp\\Misc"
            , "SafeSaver"
            , &Get().cResultSenderParam.fIsSafeSaver
            , Get().cResultSenderParam.fIsSafeSaver
            , "0:��ʹ��;1:ʹ��"
            , "��ȫ�洢ʹ��"
            , ""
            , CUSTOM_LEVEL
           );

    GetEnum("\\HvDsp\\Misc"
            , "InitHdd"
            , &Get().cResultSenderParam.fInitHdd
            , Get().cResultSenderParam.fInitHdd
            , "0:��;1:������ʽ��"
            , "��ʼ��Ӳ�̡�ע��һ������Ч"
            , ""
            , CUSTOM_LEVEL
           );


    GetInt("\\HvDsp\\Misc"
            , "OneFileSize"
            , &Get().cResultSenderParam.iFileSize
            , Get().cResultSenderParam.iFileSize
            , 1
            , 1024
            , "�����洢�����ļ���С,(��λK)"
            , ""
            , PROJECT_LEVEL
          );

    GetEnum("\\HvDsp\\Misc"
            , "SaveSafeType"
            , &Get().cResultSenderParam.iSaveSafeType
            , Get().cResultSenderParam.iSaveSafeType
            , "0:û�пͻ�������ʱ�Ŵ洢;1:һֱ�洢"
            , "��̬Ӳ�̴洢��ʽ"
            , ""
            , CUSTOM_LEVEL
           );

    GetEnum("\\HvDsp\\Misc"
            , "DiskType"
            , &Get().cResultSenderParam.iDiskType
            , Get().cResultSenderParam.iDiskType
            , "0:����Ӳ��;2:��̬Ӳ��"
            , "Ӳ������"
            , ""
            , CUSTOM_LEVEL
           );

    // zhaopy
    // ����ǹ�̬Ӳ����Ҫ�����Ƿ�ʹ��Ӳ�̵ı�־��
    if( 2 == Get().cResultSenderParam.iDiskType )
    {
        INT iUsed = (Get().cResultSenderParam.fIsSafeSaver || Get().cResultSenderParam.fSaveVideo) ? 1 : 0;
        INT iSet = 0;
        INT iRet = swpa_device_get_hdd_flag(&iSet);
        SW_TRACE_NORMAL("<Param>get hdd flag:%d. return:%d.", iSet, iRet);
        if( 0 == iRet && iSet != iUsed )
        {
            iRet = swpa_device_set_hdd_flag(iUsed);
            SW_TRACE_NORMAL("<Param>set hdd flag:%d. return:%d.", iUsed, iRet);
        }
    }


    GetString("\\HvDsp\\Misc"
            , "NetDiskIP"
            , Get().cResultSenderParam.szNetDiskIP
            , Get().cResultSenderParam.szNetDiskIP
            , sizeof(Get().cResultSenderParam.szNetDiskIP)
            , "����洢��IP��ַ"
            , ""
            , CUSTOM_LEVEL
            );

    GetInt("\\HvDsp\\Misc"
            , "NetDiskSpace"
            , &Get().cResultSenderParam.iNetDiskSpace
            , Get().cResultSenderParam.iNetDiskSpace
            , 1
            , 3696
            , "����洢������,��λG (�洢��ʼ��ʱ������)"
            , ""
            , CUSTOM_LEVEL
          );

    GetString("\\HvDsp\\Misc"
            , "NFS"
            , Get().cResultSenderParam.szNFS
            , Get().cResultSenderParam.szNFS
            , sizeof(Get().cResultSenderParam.szNFS)
            , "NFS·��"
            , ""
            , CUSTOM_LEVEL
            );

    GetString("\\HvDsp\\Misc"
            , "NFSParam"
            , Get().cResultSenderParam.szNFSParam
            , Get().cResultSenderParam.szNFSParam
            , sizeof(Get().cResultSenderParam.szNFSParam)
            , "NFS���ز���"
            , ""
            , PROJECT_LEVEL
            );
#endif

    GetEnum("\\HvDsp\\Misc"
            , "EnableNTP"
            , &Get().cResultSenderParam.fEnableNtp
            , Get().cResultSenderParam.fEnableNtp
            , "0:��ʹ��;1:ʹ��"
            , "NTPʹ�ܿ���"
            , ""
            , CUSTOM_LEVEL
           );


    GetInt("\\HvDsp\\Misc"
            , "NTPSyncInterval"
            , &Get().cResultSenderParam.iNtpSyncInterval
            , Get().cResultSenderParam.iNtpSyncInterval
            , 300
            , 2147483647
            , "NTPʱ��ͬ�����(��λ��)"
            , ""
            , CUSTOM_LEVEL
          );


    GetString("\\HvDsp\\Misc"
            , "NTPServerIP"
            , Get().cResultSenderParam.szNtpServerIP
            , Get().cResultSenderParam.szNtpServerIP
            , sizeof(Get().cResultSenderParam.szNtpServerIP)
            , "NTP������IP��ַ"
            , ""
            , CUSTOM_LEVEL
            );

	GetEnum("\\HvDsp\\Misc"
		, "TimeZone"
		, &Get().cResultSenderParam.iTimeZone
		, Get().cResultSenderParam.iTimeZone
		, "0:GMT-12;"
		  	"1:GMT-11;"
			"2:GMT-10;"
			"3:GMT-09;"
			"4:GMT-08;"
			"5:GMT-07;"
			"6:GMT-06;"
			"7:GMT-05;"
			"8:GMT-04;"
			"9:GMT-03;"
			"10:GMT-02;"
			"11:GMT-01;"
			"12:GMT+00;"
			"13:GMT+01;"
			"14:GMT+02;"
			"15:GMT+03;"
			"16:GMT+04;"
			"17:GMT+05;"
			"18:GMT+06;"
			"19:GMT+07;"
			"20:GMT+08;"
			"21:GMT+09;"
			"22:GMT+10;"
			"23:GMT+11;"
			"24:GMT+12"
		, "ʱ��"
		, ""
		, CUSTOM_LEVEL
	);

    GetEnum("\\HvDsp\\Misc"
        , "FlashOneByOne"
        , &Get().cResultSenderParam.iFlashOneByOne
        , Get().cResultSenderParam.iFlashOneByOne
        , "0:�ر�;1:����"
        , "���������"
        , "�������������ʱ������ʱ��������˸"
        , CUSTOM_LEVEL
    );

    GetString("\\HvDsp\\FilterRule"
            , "Compaty"
            , Get().cResultSenderParam.cProcRule.szCompatyRule
            , Get().cResultSenderParam.cProcRule.szCompatyRule
            , sizeof(Get().cResultSenderParam.cProcRule.szCompatyRule)
            , "ͨ�������"
            , ""
            , CUSTOM_LEVEL
            );

    GetString("\\HvDsp\\FilterRule"
            , "Replace"
            , Get().cResultSenderParam.cProcRule.szReplaceRule
            , Get().cResultSenderParam.cProcRule.szReplaceRule
            , sizeof(Get().cResultSenderParam.cProcRule.szReplaceRule)
            , "�滻����"
            , ""
            , CUSTOM_LEVEL
            );

    GetString("\\HvDsp\\FilterRule"
            , "Leach"
            , Get().cResultSenderParam.cProcRule.szLeachRule
            , Get().cResultSenderParam.cProcRule.szLeachRule
            , sizeof(Get().cResultSenderParam.cProcRule.szLeachRule)
            , "���˹���"
            , ""
            , CUSTOM_LEVEL
            );

    GetEnum("\\HvDsp\\Misc"
            , "LoopReplaceEnable"
            , &Get().cResultSenderParam.cProcRule.fLoopReplace
            , Get().cResultSenderParam.cProcRule.fLoopReplace
            , "0:������;1:����"
            , "ѭ���滻"
            , ""
            , CUSTOM_LEVEL
           );

    GetString("\\HvDsp\\Identify", "StreetName"
            , Get().cResultSenderParam.szStreetName
            , Get().cResultSenderParam.szStreetName
            , sizeof(Get().cResultSenderParam.szStreetName)
            , "·������"
            , ""
            , CUSTOM_LEVEL
            );

    GetString("\\HvDsp\\Identify"
            , "StreetDirection"
            , Get().cResultSenderParam.szStreetDirection
            , Get().cResultSenderParam.szStreetDirection
            , sizeof(Get().cResultSenderParam.szStreetDirection)
            , "·�ڷ���"
            , ""
            , CUSTOM_LEVEL
            );
#if 0
    GetEnum("\\HvDsp\\Misc"
            , "OutputOnlyPeccancy"
            , &Get().cResultSenderParam.iOutputOnlyPeccancy
            , Get().cResultSenderParam.iOutputOnlyPeccancy
            , "0:ȫ�����;1:ֻ���Υ�½��;2:ֻ�����Υ�½��"
            , "��������ʽ"
            , ""
            , CUSTOM_LEVEL
           );

    GetInt("\\HvDsp\\Misc"
            , "SendRecordSpace"
            , &Get().cResultSenderParam.iSendRecordSpace
            , Get().cResultSenderParam.iSendRecordSpace
            , 2
            , 100
            , "������ͼ��(*100ms)"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\HvDsp\\Misc"
            , "SendHisVideoSpace"
            , &Get().cResultSenderParam.iSendHisVideoSpace
            , Get().cResultSenderParam.iSendHisVideoSpace
            , 2
            , 20
            , "��ʷ¼���ͼ��(*100ms)"
            , ""
            , CUSTOM_LEVEL
          );
#endif

    GetEnum("\\HvDsp\\VideoProc\\MainVideo"
            , "OutputLastSnapCrop"
            , &Get().cResultSenderParam.iLastSnapshotCropOutput
            , Get().cResultSenderParam.iLastSnapshotCropOutput
            , "0:�����;1:���"
            , "��дͼ���"
            , ""
            , CUSTOM_LEVEL
           );

    GetInt("\\HvDsp\\VideoProc\\MainVideo"
           , "CropWidthLevel"
           , &Get().cResultSenderParam.iCropWidthLevel
           , Get().cResultSenderParam.iCropWidthLevel
           , 1
           , 6
           , "��дͼ����"
            , "�ֱ��ʵȼ�:1(640) 2(768) 3(896) 4(1024) 5(1152) 6(1280)"
           , CUSTOM_LEVEL);

    GetInt("\\HvDsp\\VideoProc\\MainVideo"
           , "CropHeightLevel"
           , &Get().cResultSenderParam.iCropHeightLevel
           , Get().cResultSenderParam.iCropHeightLevel
           , 1
           , 6
           , "��дͼ�߶�"
           , "�ֱ��ʵȼ�:1(640) 2(768) 3(896) 4(1024) 5(1152) 6(1280)"
           , CUSTOM_LEVEL);

//    GetEnum("\\HvDsp\\VideoProc\\MainVideo"
//            , "OutputSnap"
//            , &Get().cResultSenderParam.iBestSnapshotOutput
//            , Get().cResultSenderParam.iBestSnapshotOutput
//            , "0:�����;1:���"
//            , "����Ƶ��������ͼ���"
//            , ""
//            , CUSTOM_LEVEL
//           );

    // ��������������ͼ���������
    GetEnum("\\HvDsp\\VideoProc\\MainVideo"
            , "OutputLastSnap"
            , &Get().cResultSenderParam.iLastSnapshotOutput
            , Get().cResultSenderParam.iLastSnapshotOutput
            , "0:�����;1:���"
            , "ȫ��ͼ��ͼ���"
            , ""
            , PROJECT_LEVEL
           );
#if 0
    GetEnum("\\HvDsp\\Misc"
            , "AutoLinkEnable"
            , &Get().cResultSenderParam.cAutoLinkParam.fAutoLinkEnable
            , Get().cResultSenderParam.cAutoLinkParam.fAutoLinkEnable
            , "0:��ʹ��;1:ʹ��"
            , "��������ʹ��"
            , ""
            , CUSTOM_LEVEL
           );

    GetString("\\HvDsp\\Misc"
            , "AutoLinkIP"
            , Get().cResultSenderParam.cAutoLinkParam.szAutoLinkIP
            , Get().cResultSenderParam.cAutoLinkParam.szAutoLinkIP
            , sizeof(Get().cResultSenderParam.cAutoLinkParam.szAutoLinkIP)
            , "�������ӷ�����IP"
            , ""
            , CUSTOM_LEVEL
            );

    GetInt("\\HvDsp\\Misc"
            , "AutoLinkPort"
            , &Get().cResultSenderParam.cAutoLinkParam.iAutoLinkPort
            , Get().cResultSenderParam.cAutoLinkParam.iAutoLinkPort
            , 1
            , 10000
            , "�������ӷ������˿�"
            , ""
            , CUSTOM_LEVEL
          );
#endif
//    GetInt("HvDsp\\EventChecker"
//            , "CheckEventTime"
//            , &Get().cResultSenderParam.iCheckEventTime
//            , Get().cResultSenderParam.iCheckEventTime
//            , 0
//            , 5
//            , "�¼��������(��λ:����)"
//            , ""
//            , PROJECT_LEVEL
//          );

    GetEnum("\\Tracker\\DetReverseRun"
            , "DetReverseRunEnable"
            , &Get().cTrackerCfgParam.nDetReverseRunEnable
            , Get().cTrackerCfgParam.nDetReverseRunEnable
            , "0:��;1:��"
            , "���м�⿪��"
            , ""
            , PROJECT_LEVEL
           );

    GetInt("\\Tracker\\DetReverseRun"
            , "Span"
            , &Get().cTrackerCfgParam.nSpan
            , Get().cTrackerCfgParam.nSpan
            , -100
            , 100
            , "�����������г������"
            , ""
            , PROJECT_LEVEL
          );

    /*GetFloat("\\HvDsp\\EventChecker"
            , "OverLineSensitivity"
            , &Get().cTrackerCfgParam.fltOverLineSensitivity
            , Get().cTrackerCfgParam.fltOverLineSensitivity
            , 0.5
            , 5.0
            , "ѹ�߼��������"
            , ""
            , CUSTOM_LEVEL
            );*/
#if 0
    int iTemp = 1;
	 GetEnum("\\HvDsp\\EventChecker"
			, "OverLineSensitivity"
			, &iTemp
			, iTemp
			, "0:��;1:��;2:��"
			, "ѹ�߼��������"
			, ""
			, CUSTOM_LEVEL
		);
	 if( iTemp == 0 )
	 {
		 Get().cTrackerCfgParam.fltOverLineSensitivity = 2.5;
	 }
	 else if(  iTemp == 1 )
	 {
		 Get().cTrackerCfgParam.fltOverLineSensitivity = 1.75;
	 }
	 else if( iTemp == 2 )
	 {
		 Get().cTrackerCfgParam.fltOverLineSensitivity = 1.0;
	 }

    GetInt("\\HvDsp\\EventChecker"
            , "SpeedLimit"
            , &Get().cResultSenderParam.iSpeedLimit
            , Get().cResultSenderParam.iSpeedLimit
            , 0
            , 1000
            , "�ٶ�����ֵ(km/h)"
            , ""
            , CUSTOM_LEVEL
          );
    Get().cTrackerCfgParam.iSpeedLimit = Get().cResultSenderParam.iSpeedLimit;

    char szSection[64];
    char szChName[256];
    for (int i = 1; i < 3/*MAX_ROADLINE_NUM*/ - 1; i++)
    {
        sprintf(szSection, "IsCrossLine%d%d", i, i + 1);
        sprintf(szChName, "������%d���Խ��", i + 1);
        GetEnum("\\Tracker\\ActionDetect"
                , szSection
                , &Get().cTrackerCfgParam.cActionDetect.iIsCrossLine[i]
                , Get().cTrackerCfgParam.cActionDetect.iIsCrossLine[i]
                , "0:�����;1:���"
                , szChName
                , ""
                , CUSTOM_LEVEL
               );
    }

    for (int i = 0; i < 3/*MAX_ROADLINE_NUM*/; i++)
    {
        sprintf(szSection, "IsYellowLine%d%d", i, i + 1);
        sprintf(szChName, "������%d���ѹ��", i + 1);
        GetEnum("\\Tracker\\ActionDetect"
                , szSection
                , &Get().cTrackerCfgParam.cActionDetect.iIsYellowLine[i]
                , Get().cTrackerCfgParam.cActionDetect.iIsYellowLine[i]
                , "0:���ж�ѹ��;1:ѹʵ��;2:ѹ����"
                , szChName
                , ""
                , CUSTOM_LEVEL
               );
    }
#endif

    GetInt("\\HvDsp\\EventChecker"
            , "SpeedLimit"
            , &Get().cResultSenderParam.iSpeedLimit
            , Get().cResultSenderParam.iSpeedLimit
            , 0
            , 1000
            , "�ٶ�����ֵ(km/h)"
            , ""
            , CUSTOM_LEVEL
          );
    Get().cTrackerCfgParam.iSpeedLimit = Get().cResultSenderParam.iSpeedLimit;


    GetEnum("\\HvDsp\\Misc"
            , "OutputCarSize"
            , &Get().cTrackerCfgParam.fOutputCarSize
            , Get().cTrackerCfgParam.fOutputCarSize
            , "0:�����;1:���"
            , "��������ߴ�"
            , ""
            , PROJECT_LEVEL
           );

	GetInt("\\HvDsp\\Trigger"
        , "TriggerOutEnable"
        , &Get().cResultSenderParam.fEnableTriggerOut
        , Get().cResultSenderParam.fEnableTriggerOut
        , 0
        , 1
        , "�������ʹ�ܿ���"
        , "0�ǲ�������1�Ǵ���"
        , PROJECT_LEVEL
        );

    GetInt("\\HvDsp\\Trigger"
        , "TriggerOutPlusWidth"
        , &Get().cResultSenderParam.nTriggerOutPlusWidth
        , Get().cResultSenderParam.nTriggerOutPlusWidth
        , 100
        , 30000
        , "�������ͨ��ʱ�䣬��λΪms"
        , ""
        , PROJECT_LEVEL
        );

    return S_OK;

}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitCamApp(VOID)
{

    GetString("\\HvDsp\\Camera\\Ctrl"
            , "Addr"
            , Get().cCamCfgParam.szIP
            , Get().cCamCfgParam.szIP
            , (100-1)
            , "ʶ�����IP"
            , ""
            , PROJECT_LEVEL
            );

    GetEnum("\\HvDsp\\Camera\\Ctrl"
            , "ProtocolType"
            , &Get().cCamCfgParam.iCamType
            , Get().cCamCfgParam.iCamType
            , "0:һ���Э��;1:����Э��"
            , "Э������"
            , ""
            , PROJECT_LEVEL
           );

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "AddrPort"
            , &Get().cCamCfgParam.iCamPort
            , Get().cCamCfgParam.iCamPort
            , 1024
            , 99999
            , "����Э��˿ں�"
            , "�˿ں�"
            , PROJECT_LEVEL
          );


    GetEnum("\\HvDsp\\Camera\\Ctrl"
            , "DynamicCfgEnable"
            , &Get().cCamCfgParam.iDynamicCfgEnable
            , Get().cCamCfgParam.iDynamicCfgEnable
            , "0:�ر�;1:��"
            , "��̬���ò���"
            , ""
            , PROJECT_LEVEL
           );

    GetEnum("\\HvDsp\\Camera\\Ctrl"
            , "DynamicTriggerEnable"
            , &Get().cCamCfgParam.iDynamicTriggerEnable
            , Get().cCamCfgParam.iDynamicTriggerEnable
            , "0:�״ﴥ��;1:��Ƶ����"
            , "����ץ�����"
            , ""
            , PROJECT_LEVEL
           );
    Get().cTrackerCfgParam.nCarArriveTrig = Get().cCamCfgParam.iDynamicTriggerEnable;

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "TriggerDelay"
            , &Get().cCamCfgParam.iTriggerDelay
            , Get().cCamCfgParam.iTriggerDelay
            , 0
            , 65535
            , "������ʱ(ms)"
            , ""
            , PROJECT_LEVEL
          );

//    GetInt("\\HvDsp\\Camera\\Ctrl"
//            , "NightShutterThreshold"
//            , &Get().cCamCfgParam.iNightShutterThreshold
//            , Get().cCamCfgParam.iNightShutterThreshold
//            , -1
//            , 30000
//            , "ҹ���жϿ�����ֵ"
//            , "-1��ʾ��AGCShutterHOri����ֵ����"
//            , CUSTOM_LEVEL
//          );

//    GetInt("\\HvDsp\\Camera\\Ctrl"
//            , "NightAvgYThreshold"
//            , &Get().cCamCfgParam.iNightAvgYThreshold
//            , Get().cCamCfgParam.iNightAvgYThreshold
//            , 0
//            , 255
//            , "ҹ���жϻ���������ֵ"
//            , ""
//            , CUSTOM_LEVEL
//          );

//    GetInt("\\HvDsp\\Camera\\Ctrl"
//            , "DuskAvgYThreshold"
//            , &Get().cCamCfgParam.iDuskAvgYThreshold
//            , Get().cCamCfgParam.iDuskAvgYThreshold
//            , 0
//            , 255
//            , "�����жϻ���������ֵ"
//            , ""
//            , CUSTOM_LEVEL
//          );

   
    /*GetEnum("\\HvDsp\\Camera\\Ctrl"
            , "AGCEnable"
            , &Get().cCamCfgParam.iEnableAGC
            , Get().cCamCfgParam.iEnableAGC
            , "0:�ر�;1:��"
            , "ʹ��AGC"
            , ""
            , CUSTOM_LEVEL
           );
	*/

    /*GetEnum("\\HvDsp\\Camera\\Ctrl"
            , "AutoParamEnable"
            , &Get().cCamCfgParam.iAutoParamEnable
            , Get().cCamCfgParam.iAutoParamEnable
            , "0:�ر�;1:��"
            , "�Զ�����������"
            , ""
            , CUSTOM_LEVEL
           );*/

	Get().cCamCfgParam.iAutoParamEnable = 1;
    if (Get().cCamCfgParam.iAutoParamEnable == 1)
    {
        UpdateEnum("\\HvDsp\\Camera\\Ctrl"
                , "AutoParamEnable"
                , 0
                );
    }

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "MaxAGCLimit"
            , &Get().cCamCfgParam.iMaxAGCLimit
            , Get().cCamCfgParam.iMaxAGCLimit
            , 0
            , 255
            , "���AGC����ֵ"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "MinAGCLimit"
            , &Get().cCamCfgParam.iMinAGCLimit
            , Get().cCamCfgParam.iMinAGCLimit
            , 0
            , 255
            , "��СAGC����ֵ"
            , ""
            , CUSTOM_LEVEL
          );
	
//	GetInt("\\HvDsp\\Camera\\Ctrl"
//		, "MinPSD"
//		, &Get().cCamCfgParam.iMinPSD
//		, Get().cCamCfgParam.iMinPSD
//		, 100
//		, 20000
//		, "Ƶ��������Сֵ"
//		, ""
//		, CUSTOM_LEVEL
//		);

//    GetInt("\\HvDsp\\Camera\\Ctrl"
//    	, "MaxPSD"
//    	, &Get().cCamCfgParam.iMaxPSD
//    	, Get().cCamCfgParam.iMaxPSD
//    	, 100
//    	, 20000
//    	, "Ƶ���������ֵ"
//    	, ""
//    	, CUSTOM_LEVEL
//    );
//	//���ݳ������ȵ���Ƶ�������ĳ������Ȳ�����ֻ���ڲ��������
//	//ע:����������Ŀǰ��֧�ֶ�̬�޸�
//	GetInt("\\HvDsp\\Camera\\Ctrl"
//    	, "MinPlateLight"
//    	, &Get().cCamCfgParam.iMinPlateLight
//    	, Get().cCamCfgParam.iMinPlateLight
//    	, 1
//    	, 255
//    	, "�����������Ƴ����������"
//    	, ""
//    	, PROJECT_LEVEL
//    );
		
//    GetInt("\\HvDsp\\Camera\\Ctrl"
//    	, "MaxPlateLight"
//    	, &Get().cCamCfgParam.iMaxPlateLight
//    	, Get().cCamCfgParam.iMaxPlateLight
//    	, 1
//    	, 255
//    	, "�����������Ƴ����������"
//    	, ""
//    	, PROJECT_LEVEL
//    );

    /*GetFloat("\\HvDsp\\Camera\\Ctrl"
            , "DB"
            , &Get().cCamCfgParam.fltDB
            , Get().cCamCfgParam.fltDB
            , 1.0f
            , 10.0f
            , "����"
            , ""
            , CUSTOM_LEVEL
            );

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "MinExposureTime"
            , &Get().cCamCfgParam.iMinExposureTime
            , Get().cCamCfgParam.iMinExposureTime
            , 0
            , 30000
            , "��С�ع�ʱ��"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "MinPlus"
            , &Get().cCamCfgParam.iMinGain
            , Get().cCamCfgParam.iMinGain
            , 70
            , 360
            , "��С����"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "MaxExposureTime"
            , &Get().cCamCfgParam.iMaxExposureTime
            , Get().cCamCfgParam.iMaxExposureTime
            , 0
            , 30000
            , "����ع�ʱ��"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\HvDsp\\Camera\\Ctrl"
            , "MaxPlus"
            , &Get().cCamCfgParam.iMaxGain
            , Get().cCamCfgParam.iMaxGain
            , 70
            , 360
            , "�������"
            , ""
            , CUSTOM_LEVEL
          );
	*/

//    GetEnum("\\HvDsp\\Camera\\Ctrl"
//            , "CtrlCpl"
//            , &Get().cTrackerCfgParam.nCtrlCpl
//            , Get().cTrackerCfgParam.nCtrlCpl
//            , "0:��ʹ��;1:ʹ��"
//            , "�Զ�����ƫ�⾵"
//            , "0:��ʹ��;1:ʹ��"
//            , PROJECT_LEVEL
//           );

//    GetInt("\\HvDsp\\Camera\\Ctrl"
//            , "LightTypeCpl"
//            , &Get().cTrackerCfgParam.nLightTypeCpl
//            , Get().cTrackerCfgParam.nLightTypeCpl
//            , 0
//            , 13
//            , "ƫ�⾵�Զ��л������ȵȼ���ֵ"
//            , ""
//            , PROJECT_LEVEL
//          );


	
//	GetInt("\\HvDsp\\Camera\\WorkType"
//				, "WorkType"
//				, &Get().cCamCfgParam.iWorkType
//				, Get().cCamCfgParam.iWorkType
//				, 0
//				, 1
//				, "��װ��װ"
//				, "0Ϊ��װ(����쳵)��1Ϊ��װ(�״�쳵)"
//				, PROJECT_LEVEL
//			  );

    char szText[255] = {0};
    char szChnText[255] = {0};
    const char *szLightType[] =
    {
        "BigSuitlight",
        "BigSuitlight2",
        "Suitlight",
        "Suitlight2",
        "Day",
        "Day2",
        "Backlight",
        "Backlight2",
        "BigBacklight",
        "BigBacklight2",
        "Nightfall",
        "Nightfall2",
        "Night",
        "Night2"
    };
    for (int i = 0; i < MAX_LEVEL_COUNT; i++)
    {
        sprintf(szText, "\\HvDsp\\Camera\\%s", szLightType[i]);
        sprintf(szChnText, "%d���ع�ʱ��", i);
        GetInt(szText
                , "ExposureTime"
                , &Get().cCamCfgParam.irgExposureTime[i]
                , Get().cCamCfgParam.irgExposureTime[i]
                , -1
                , 30000
                , szChnText
                , ""
                , CUSTOM_LEVEL
              );

        sprintf(szChnText, "%d������", i);
        GetInt(szText
                , "Plus"
                , &Get().cCamCfgParam.irgGain[i]
                , Get().cCamCfgParam.irgGain[i]
                , -1
                , 360
                , szChnText
                , ""
                , CUSTOM_LEVEL
              );

        sprintf(szChnText, "%d��AGC��������", i);
        GetInt(szText
                , "AGCLimit"
                , &Get().cCamCfgParam.irgAGCLimit[i]
                , Get().cCamCfgParam.irgAGCLimit[i]
                , -1
                , 255
                , szChnText
                , ""
                , CUSTOM_LEVEL
              );
    }

    if (Get().cCamCfgParam.iAutoParamEnable == 1)
    {
        InitCamCfgParam(&Get().cCamCfgParam, szLightType);
    }

    return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitIPTCtrl(VOID)
{
	CSWString strCOMM;
	//����ֻ��һ������ COM1
    //�羯���ڲ������裬����Ϊ����������Ϊ�˴��ڲ�����
	for(int i = 1; i < 2; i++)
	{
		strCOMM.Format("\\Device[�ⲿ�豸]\\COM%d[�˿�%02d]", i, i);
		GetEnum((LPCSTR)strCOMM
			, "Baudrate"
			, &Get().cDevParam[i].iBaudrate
			, 9600
			, "300:300"
			  ";600:600"
			  ";1200:1200"
			  ";2400:2400"
			  ";4800:4800"
			  ";9600:9600"
			  ";19200:19200"
			  ";38400:38400"
			  ";43000:43000"
			  ";56000:56000"
			  ";57600:57600"
			  ";115200:115200"
			, "������"
			, ""
			, PROJECT_LEVEL
		);
  	
		GetEnum((LPCSTR)strCOMM
			, "DeviceType"
			, &Get().cDevParam[i].iDeviceType
			, Get().cDevParam[i].iDeviceType
			, "0:��;1:�����״�;2:�ս�������;4:����ά���״�;5:�Ĵ������״�"
			, "�ⲿ�豸����"
			, ""
			, PROJECT_LEVEL
		);
		GetInt((LPCSTR)strCOMM
			, "Road"
			, &Get().cDevParam[i].iRoadNo
			, Get().cDevParam[i].iRoadNo
			, 0
			, 255
			, "�����������"
			, "�����������"
			, PROJECT_LEVEL
		);

	if(Get().cCamCfgParam.iDynamicTriggerEnable>0)
	{
		GetInt((LPCSTR)strCOMM
			, "COM2RoadNo1"
			, &Get().cDevParam[i].iComNo2RoadNo1
			, Get().cDevParam[i].iComNo2RoadNo1
			, 1
			, 2
			, "�����������"
			, "�����������"
			, PROJECT_LEVEL
		);

		GetInt((LPCSTR)strCOMM
			, "COM2RoadNo2"
			, &Get().cDevParam[i].iComNo2RoadNo2
			, Get().cDevParam[i].iComNo2RoadNo2
			, 1
			, 2
			, "�����������"
			, "�����������"
			, PROJECT_LEVEL
		);
	}
		//����ֻ֧��485
	/*		
		GetEnum((LPCSTR)strCOMM
			, "CommType"
			, &Get().cDevParam[i].iCommType
			, Get().cDevParam[i].iCommType
			, "0:RS232;1:RS485"
			, "��������"
			, ""
			, CUSTOM_LEVEL
			);
  	  */
		//��Ȧ������
		/*GetInt((LPCSTR)strCOMM
				, "CoilInstance"
				, &Get().cDevParam[i].cCoilParam.iTowCoilInstance
				, Get().cDevParam[i].cCoilParam.iTowCoilInstance
				, 0
				, 100
				, "2����Ȧ�ľ���(����)"
				, "��Ȧ����"
				, PROJECT_LEVEL
			);
		
		GetEnum((LPCSTR)strCOMM
			, "CoilEgdeType"
			, &Get().cDevParam[i].cCoilParam.iCoilEgdeType
			, Get().cDevParam[i].cCoilParam.iCoilEgdeType
			, "0:������;1:�½���"
			, "��������"
			, ""
			, PROJECT_LEVEL
		);
  	
		GetInt((LPCSTR)strCOMM
			, "Trigger"
			, (INT *)&Get().cDevParam[i].cCoilParam.bTrigger
			, (INT)Get().cDevParam[i].cCoilParam.bTrigger
			, 0
			, 15
			, "����ץ��"
			, "1:��Ȧ1����ץ��;2:��Ȧ2����ץ��;4:��Ȧ3����ץ��;8:��Ȧ4����ץ��"
			, PROJECT_LEVEL
		);*/
		
  }  
  return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitOuterCtrl(VOID)
{

    Get().cMatchParam.fEnable = TRUE;
    /*GetEnum("\\OuterCtrl[���ܿ�]"
            , "OutPutPlateMode"
            , &Get().cMatchParam.fEnable
            , Get().cMatchParam.fEnable
            , "0:�ر�;1:��"
            , "���ܿ�ʹ�ܿ���"
            , ""
            , PROJECT_LEVEL
           );*/

    GetInt("\\OuterCtrl[���ܿ�]"
            , "SignalHoldTime"
            , (INT *)&Get().cMatchParam.dwSignalKeepTime
            , Get().cMatchParam.dwSignalKeepTime
            , 500
            , 600000
            , "�źű���ʱ��"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\OuterCtrl[���ܿ�]"
            , "PlateHoldTime"
            , (INT *)&Get().cMatchParam.dwPlateKeepTime
            , Get().cMatchParam.dwPlateKeepTime
            , 500
            , 600000
            , "�������ʱ��"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\OuterCtrl[���ܿ�]"
            , "MatchMinTime"
            , (INT *)&Get().cMatchParam.dwMatchMinTime
            , Get().cMatchParam.dwMatchMinTime
            , 0
            , 600000
            , "�����ǰƥ���ź����ʱ���"
            , ""
            , CUSTOM_LEVEL
          );

    GetInt("\\OuterCtrl[���ܿ�]"
            , "MatchMaxTime"
            , (INT *)&Get().cMatchParam.dwMatchMaxTime
            , Get().cMatchParam.dwMatchMaxTime
            , 0
            , 600000
            , "������ƥ���ź����ʱ���"
            , ""
            , CUSTOM_LEVEL
          );

    GetEnum("\\OuterCtrl[���ܿ�]"
            , "RecogSnapImg"
            , &Get().cMatchParam.fCaptureRecong
            , Get().cMatchParam.fCaptureRecong
            , "0:�ر�;1:��"
            , "ץ��ͼƬʶ�𿪹�"
            , ""
            , PROJECT_LEVEL
           );
    /*if(Get().cTrackerCfgParam.fEnableDetFace)
    {
        Get().cMatchParam.fCaptureRecong = TRUE;
    }*/
	Get().cMatchParam.fCaptureRecong = FALSE;

    CHAR szRecogArea[64] = {0};
    swpa_strcpy(szRecogArea, "[0,50,100,100],6,12");
    GetString("\\OuterCtrl[���ܿ�]"
            , "RecogArea"
            , szRecogArea
            , szRecogArea
            , 64
            , "ץ��ʶ������"
            , "ץ��ʶ������(%)[��,��,��,��],��С���ƣ������"
            , PROJECT_LEVEL
            );
    swpa_sscanf(
            szRecogArea,
            "[%d,%d,%d,%d],%d,%d",
            &Get().cMatchParam.iDetectorAreaLeft,
            &Get().cMatchParam.iDetectorAreaTop,
            &Get().cMatchParam.iDetectorAreaRight,
            &Get().cMatchParam.iDetectorAreaBottom,
            &Get().cMatchParam.iDetectorMinScaleNum,
            &Get().cMatchParam.iDetectorMaxScaleNum
            );

    Get().cTrackerCfgParam.cRecogSnapArea.fEnableDetAreaCtrl = FALSE;
    Get().cTrackerCfgParam.cRecogSnapArea.DetectorAreaLeft = Get().cMatchParam.iDetectorAreaLeft;
    Get().cTrackerCfgParam.cRecogSnapArea.DetectorAreaTop = Get().cMatchParam.iDetectorAreaTop;
    Get().cTrackerCfgParam.cRecogSnapArea.DetectorAreaRight = Get().cMatchParam.iDetectorAreaRight;
    Get().cTrackerCfgParam.cRecogSnapArea.DetectorAreaBottom = Get().cMatchParam.iDetectorAreaBottom;
    Get().cTrackerCfgParam.cRecogSnapArea.nDetectorMinScaleNum = Get().cMatchParam.iDetectorMinScaleNum;
    Get().cTrackerCfgParam.cRecogSnapArea.nDetectorMaxScaleNum = Get().cMatchParam.iDetectorMaxScaleNum;


    CSWString strTmp;

    for(int i = 0; i < sizeof(Get().cMatchParam.signal)/sizeof(SIGNAL_PARAM); i++)
    {
        strTmp.Format("\\OuterCtrl[���ܿ�]\\Signal%02d", i);
        GetEnum((LPCSTR)strTmp
                , "SignalType"
                , (INT *)&Get().cMatchParam.signal[i].dwType
                , Get().cMatchParam.signal[i].dwType
                , "0:��;1:�ٶ�;3:ץ��ͼ"
                , "�ź�����"
                , ""
                , PROJECT_LEVEL
               );

        GetInt((LPCSTR)strTmp
                , "RoadID"
                , (INT *)&Get().cMatchParam.signal[i].dwRoadID
                , Get().cMatchParam.signal[i].dwRoadID
                , 0
                , 0xFF
                , "������"
                , ""
                , PROJECT_LEVEL
              );

        GetEnum((LPCSTR)strTmp
                , "SignalID"
                , (INT *)&Get().cMatchParam.signal[i].dwSignalID
                , Get().cMatchParam.signal[i].dwSignalID
                , "0:0;1:1;2:2"
                , "ͬһ�������ź�����"
                , ""
                , PROJECT_LEVEL
               );

        GetEnum((LPCSTR)strTmp
                , "Recognize"
                , (INT *)&Get().cMatchParam.signal[i].fRecognize
                , Get().cMatchParam.signal[i].fRecognize
                , "0:��ʶ��;1:ʶ��"
                , "ͼƬ�Ƿ�Ҫʶ��"
                , ""
                , PROJECT_LEVEL
               );

        GetEnum((LPCSTR)strTmp
                , "Condition"
                , (INT *)&Get().cMatchParam.signal[i].dwCondition
                , Get().cMatchParam.signal[i].dwCondition
                , "0:���źſ��п���,ֻҪ�г��Ƽ��ɳ���;1:�����д��źźͳ��Ʋ��ܳ����;2:ֻҪ�д��ź�,�ͱض�����"
                , "ƥ������"
                , ""
                , PROJECT_LEVEL
               );
        // �����ٶ��źż����������ŵ�ֵ
    }

    return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitCamera(VOID)
{
	GetEnum("\\CamApp"
		  , "AutoControlAll"
		  , &Get().cCamAppParam.iAutoControlCammeraAll
		  , Get().cCamAppParam.iAutoControlCammeraAll
		  , "0:�ֶ�����;1:ȫ�Զ�����"
		  , "�������ģʽ"
		  , ""
          , PROJECT_LEVEL
	  );

	GetEnum("\\CamApp"
    	, "AWBWorkMode"
    	, &Get().cCamAppParam.iAWBWorkMode
    	, Get().cCamAppParam.iAWBWorkMode
        , "0:�Զ���ƽ��ģʽһ;1:�Զ���ƽ��ģʽ��;2:�Զ���ƽ�����ģʽ"
    	, "�Զ���ƽ�⹤��ģʽ"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetInt("\\CamApp"
    	, "JpegCompressRate"
    	, &Get().cCamAppParam.iJpegCompressRate
    	, Get().cCamAppParam.iJpegCompressRate
    	, 1
    	, 99
    	, "��Ƶ��Jpegѹ��Ʒ��"
    	, ""
    	, PROJECT_LEVEL
    );

    GetInt("\\CamApp"
    	, "IFrameInterval"
    	, &Get().cCamAppParam.iIFrameInterval
    	, Get().cCamAppParam.iIFrameInterval
    	, 2			//����Ҫ����СI֡���Ϊ2
    	, 60		//M3Ŀǰ�������60
    	, "H.264��I֡���"
    	, ""
    	, CUSTOM_LEVEL
    );
    /*if( Get().cGb28181.fEnalbe )
    {
    	Get().cCamAppParam.iIFrameInterval = 4;
        UpdateInt("\\CamApp"
            , "IFrameInterval"
            , Get().cCamAppParam.iIFrameInterval
            );
    }*/

	GetEnum("\\CamApp"
    	, "Resolution"
    	, &Get().cCamAppParam.iResolution
    	, Get().cCamAppParam.iResolution
    	, "0:1080P;1:720P"
    	, "H.264ͼ��ֱ���"
    	, ""
    	, CUSTOM_LEVEL
    );
    
    GetInt("\\CamApp"
    	, "TargetBitRate"
    	, &Get().cCamAppParam.iTargetBitRate
    	, Get().cCamAppParam.iTargetBitRate
    	, 512
    	, 16*1024
    	, "H.264�����������"
    	, "��λ��Kbps"
    	, CUSTOM_LEVEL
    );

    GetInt("\\CamApp"
    	, "MaxBitRate"
    	, &Get().cCamAppParam.iMaxBitRate
    	, Get().cCamAppParam.iMaxBitRate
    	, 512
    	, 16*1024
    	, "H.264�������������"
    	, "��λ��Kbps"
    	, CUSTOM_LEVEL
	);

	GetEnum("\\CamApp"
		, "RateControl"
		, &Get().cCamAppParam.iRateControl
		, Get().cCamAppParam.iRateControl
		, "0:VBR;1:CBR"
		, "H.264��������"
		, "0:VBR �ɱ�����;1:CBR �㶨����"
		, CUSTOM_LEVEL
	);

    GetInt("\\CamApp"
    	, "AGCTh"
    	, &Get().cCamAppParam.iAGCTh
    	, Get().cCamAppParam.iAGCTh
    	, 0
    	, 255
    	, "AGC����׼ֵ"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetEnum("\\CamApp"
        , "AGCDayNightShutterControl"
        , &Get().cCamAppParam.iAGCDayNightShutterControl
        , Get().cCamAppParam.iAGCDayNightShutterControl
        , "0:�ر�;1:����"
        , "AGC�������Ͽ������޿��ƿ���"
        , ""
        , PROJECT_LEVEL
    );

    GetInt("\\CamApp"
        , "AGCNightShutterHOri"
        , &Get().cCamAppParam.iAGCNightShutterHOri
        , Get().cCamAppParam.iAGCNightShutterHOri
        , 0
        , 30000
        , "AGC���Ͽ��ŵ�������"
        , ""
        , PROJECT_LEVEL
    );

    GetInt("\\CamApp"
    	, "AGCShutterLOri"
    	, &Get().cCamAppParam.iAGCShutterLOri
    	, Get().cCamAppParam.iAGCShutterLOri
    	, 0
    	, 30000
    	, "AGC���ŵ�������"
    	, ""
    	, CUSTOM_LEVEL
    );

    Get().cCamAppParam.iAGCShutterHOri = 3000;
    GetInt("\\CamApp"
    	, "AGCShutterHOri"
    	, &Get().cCamAppParam.iAGCShutterHOri
    	, Get().cCamAppParam.iAGCShutterHOri
    	, 0
    	, 30000
    	, "AGC���ŵ�������"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetInt("\\CamApp"
    	, "AGCGainLOri"
    	, &Get().cCamAppParam.iAGCGainLOri
    	, Get().cCamAppParam.iAGCGainLOri
    	, 0
        , 360					//����185ǰ�����淶ΧΪ0~480
    	, "AGC�����������"
    	, ""
    	, PROJECT_LEVEL
    );

    GetInt("\\CamApp"
    	, "AGCGainHOri"
    	, &Get().cCamAppParam.iAGCGainHOri
    	, Get().cCamAppParam.iAGCGainHOri
        , Get().cCamAppParam.iAGCGainLOri+1         // ��СֵΪ �����������+1
        , 360					//����185ǰ�����淶ΧΪ0~480
    	, "AGC�����������"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetEnum("\\CamApp"
        , "AGCScene"
        , &Get().cCamAppParam.iAGCScene
        , Get().cCamAppParam.iAGCScene
        , "0:�Զ�;1:ƫ��;2:��׼;3:����"
        , "�龰ģʽ"
        , ""
        , PROJECT_LEVEL
    );

    GetInt("\\CamApp"
    	, "GainR"
    	, &Get().cCamAppParam.iGainR
    	, Get().cCamAppParam.iGainR
    	, 36
    	, 255
    	, "R����"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetInt("\\CamApp"
    	, "GainG"
    	, &Get().cCamAppParam.iGainG
    	, Get().cCamAppParam.iGainG
    	, 36
    	, 255
    	, "G����"
    	, ""
    	, PROJECT_LEVEL
    );

    GetInt("\\CamApp"
    	, "GainB"
    	, &Get().cCamAppParam.iGainB
    	, Get().cCamAppParam.iGainB
    	, 36
    	, 255
    	, "B����"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetInt("\\CamApp"
    	, "Gain"
    	, &Get().cCamAppParam.iGain
    	, Get().cCamAppParam.iGain
    	, 0
        , 360					//����185ǰ�����淶ΧΪ0~480
    	, "����"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetInt("\\CamApp"
    	, "Shutter"
    	, &Get().cCamAppParam.iShutter
    	, Get().cCamAppParam.iShutter
    	, 0
    	, 30000
    	, "����"
    	, "��λ��us"
    	, CUSTOM_LEVEL
    );
#if 1	//��ʱ��ץ��


	 GetEnum("\\CamApp"
        , "CaptureAutoParamEnable"
        , &Get().cCamAppParam.iCaptureAutoParamEnable
        , Get().cCamAppParam.iCaptureAutoParamEnable
        , "0:��ʹ��;1:ʹ��"
        , "�Զ�ץ�Ĳ�������ʹ��"
        , "ʹ�����Զ����������ֶ�����"
        , PROJECT_LEVEL
    );

//    GetInt("\\CamApp"
//        , "CaptureGainR"
//        , &Get().cCamAppParam.iCaptureGainR
//        , Get().cCamAppParam.iCaptureGainR
//        , 36
//        , 255
//        , "ץ��R����"
//        , "�ֶ�ץ��ʹ����Ч"
//        , CUSTOM_LEVEL
//    );

//    GetInt("\\CamApp"
//        , "CaptureGainG"
//        , &Get().cCamAppParam.iCaptureGainG
//        , Get().cCamAppParam.iCaptureGainG
//        , 36
//        , 255
//        , "ץ��G����"
//        , "�ֶ�ץ��ʹ����Ч"
//        , CUSTOM_LEVEL
//    );

//    GetInt("\\CamApp"
//        , "CaptureGainB"
//        , &Get().cCamAppParam.iCaptureGainB
//        , Get().cCamAppParam.iCaptureGainB
//        , 36
//        , 255
//        , "ץ��B����"
//        , "�ֶ�ץ��ʹ����Ч"
//        , CUSTOM_LEVEL
//    );

    GetInt("\\CamApp"
        , "CaptureGain"
        , &Get().cCamAppParam.iCaptureGain
        , Get().cCamAppParam.iCaptureGain
        , 0
        , 360
        , "ץ������"
        , "�ֶ�ץ��ʹ����Ч"
        , CUSTOM_LEVEL
    );

    GetInt("\\CamApp"
        , "CaptureShutter"
        , &Get().cCamAppParam.iCaptureShutter
        , Get().cCamAppParam.iCaptureShutter
        , 0
        , 30000
        , "ץ�Ŀ���"
        , "��λ��us �ֶ�ץ��ʹ����Ч"
        , CUSTOM_LEVEL
    );

    /*GetInt("\\CamApp"
        , "CaptureSharpenThreshold"
        , &Get().cCamAppParam.iCaptureSharpenThreshold
        , Get().cCamAppParam.iCaptureSharpenThreshold
        , 0
        , 255
        , "ץ�����ֵ"
        , ""
        , CUSTOM_LEVEL
    );*/


//    GetEnum("\\CamApp"
//        , "EnableCaptureGainRGB"
//        , &Get().cCamAppParam.iEnableCaptureGainRGB
//        , Get().cCamAppParam.iEnableCaptureGainRGB
//        , "0:��ʹ��;1:ʹ��"
//        , "ץ��RGB����ʹ��"
//        , "�ֶ�ץ��ʹ����Ч"
//        , CUSTOM_LEVEL
//    );


    GetEnum("\\CamApp"
        , "EnableCaptureGain"
        , &Get().cCamAppParam.iEnableCaptureGain
        , Get().cCamAppParam.iEnableCaptureGain
        , "0:��ʹ��;1:ʹ��"
        , "ץ������ʹ��"
        , "�ֶ�ץ��ʹ����Ч"
        , PROJECT_LEVEL
    );

    GetEnum("\\CamApp"
        , "EnableCaptureShutter"
        , &Get().cCamAppParam.iEnableCaptureShutter
        , Get().cCamAppParam.iEnableCaptureShutter
        , "0:��ʹ��;1:ʹ��"
        , "ץ�Ŀ���ʹ��"
        , "�ֶ�ץ��ʹ����Ч"
        , PROJECT_LEVEL
    );

/*
    GetEnum("\\CamApp"
        , "EnableCaptureSharpen"
        , &Get().cCamAppParam.iEnableCaptureSharpen
        , Get().cCamAppParam.iEnableCaptureSharpen
        , "0:��ʹ��;1:ʹ��"
        , "ץ����ʹ��"
        , ""
        , CUSTOM_LEVEL
    );

*/
#endif
    GetEnum("\\CamApp"
        , "JpegAutoCompressEnable"
        , &Get().cCamAppParam.iJpegAutoCompressEnable
        , Get().cCamAppParam.iJpegAutoCompressEnable
        , "0:��ʹ��;1:ʹ��"
        , "Jpeg�Զ����ڿ���"
        , ""
        , PROJECT_LEVEL					//Ĭ�ϴ򿪣�����������
    );

    GetInt("\\CamApp"
    	, "JpegExpectSize"
    	, &Get().cCamAppParam.iJpegExpectSize
    	, Get().cCamAppParam.iJpegExpectSize
    	, 10
    	, 1024
    	, "JpegͼƬ������С"
    	, "��λ��KByte��ǧ�ֽڣ�"
    	, CUSTOM_LEVEL
    );

    GetEnum("\\CamApp"
    	, "JpegType"
    	, &Get().cCamAppParam.iJpegType
    	, Get().cCamAppParam.iJpegType
    	, "0:YUV�ֿ�;1:YUV���"
    	, "JpegͼƬ��ʽ"
    	, ""
    	, PROJECT_LEVEL
    );

    GetInt("\\CamApp"
    	, "JpegCompressRateLow"
    	, &Get().cCamAppParam.iJpegCompressRateL
    	, Get().cCamAppParam.iJpegCompressRateL
    	, 1
    	, 100
    	, "Jpegѹ�����Զ���������"
    	, ""
    	, PROJECT_LEVEL				//����������
    );

    GetInt("\\CamApp"
    	, "JpegCompressRateHigh"
    	, &Get().cCamAppParam.iJpegCompressRateH
    	, Get().cCamAppParam.iJpegCompressRateH
    	, 1
    	, 100
    	, "Jpegѹ�����Զ���������"
    	, ""
    	, PROJECT_LEVEL				//����������
    );

    Get().cCamAppParam.iAGCEnable = 1;
    GetEnum("\\CamApp"
    	, "AGCEnable"
    	, &Get().cCamAppParam.iAGCEnable
    	, Get().cCamAppParam.iAGCEnable
    	, "0:��ʹ��;1:ʹ��"
    	, "AGCʹ��"
    	, ""
    	, CUSTOM_LEVEL
    );

    GetEnum("\\CamApp"
    	, "AWBEnable"
    	, &Get().cCamAppParam.iAWBEnable
    	, Get().cCamAppParam.iAWBEnable
    	, "0:��ʹ��;1:ʹ��"
    	, "AWBʹ��"
    	, ""
    	, CUSTOM_LEVEL
    );
#if 0	//��ʱ��ץ��
    GetEnum("\\HvDsp\\Trigger"
        , "TriggerOutNormalStatus"
        , &Get().cResultSenderParam.nTriggerOutNormalStatus
        , Get().cResultSenderParam.nTriggerOutNormalStatus
        , "0:�ߵ�ƽ;1:�͵�ƽ"
        , "ץ���������"
        , ""
        , CUSTOM_LEVEL
    );
#endif
	//�ò��������ץ���йأ�����"TriggerOutEnable""�������ʹ�ܿ���"�йأ�����ȥ��
	GetEnum("\\CamApp"
		, "CaptureSynOutputType"
		, &Get().cCamAppParam.iCaptureSynOutputType
		, Get().cCamAppParam.iCaptureSynOutputType
		, "0:����(��ƽ);1:OC�����أ�"
		, "ץ���������"
		, ""
		, PROJECT_LEVEL
		);

	GetEnum("\\CamApp"
		, "ExternSyncMode"
		, &Get().cCamAppParam.iExternalSyncMode
		, Get().cCamAppParam.iExternalSyncMode
		, "0:��ͬ��;1:�ڲ�����ͬ��"
		, "��ͬ��ģʽ"
		, ""
		, CUSTOM_LEVEL
		);
	GetInt("\\CamApp"
		, "SyncRelay"
		, &Get().cCamAppParam.iSyncRelay
		, Get().cCamAppParam.iSyncRelay
		, 0
		, 20000
		, "��ͬ���ź���ʱ"
		, "��λ:΢��"
		, CUSTOM_LEVEL
		);

	GetEnum("\\CamApp"
    	, "CaptureEdge"
    	, &Get().cCamAppParam.iCaptureEdge
    	, Get().cCamAppParam.iCaptureEdge
    	, "0:������;1:�ⲿ�½��ش���;2:�ⲿ�����ش���;3:�������½��ض�����"
    	, "����ץ����"
    	, ""
    	, PROJECT_LEVEL
    );
	
    char szAGC[255];
	//BOOL fAllAGCZoneIsOff = TRUE;
    for (int i = 0; i < 16; i++)
    {
        sprintf(szAGC, "AGC%d", i+1);
        GetEnum("\\CamApp\\AGCZone"
        	, szAGC
        	, &Get().cCamAppParam.rgiAGCZone[i]
        	, Get().cCamAppParam.rgiAGCZone[i]
        	, "0:�ر�;1:��"
        	, ""
        	, ""
            , PROJECT_LEVEL
        );
		/*
		if (1 == Get().cCamAppParam.rgiAGCZone[i])
		{
			fAllAGCZoneIsOff = FALSE;
		}*/
    }
	//�ײ�������
	/*
	//����������ѡһ��
	if (TRUE == fAllAGCZoneIsOff)
	{
		Get().cCamAppParam.rgiAGCZone[0] = 1;
		UpdateInt("\\CamApp\\AGCZone"
            , "AGC0"
            , Get().cCamAppParam.rgiAGCZone[0]
            );
	}
    */
    
    GetEnum("\\CamApp"
    	, "EnableDCAperture"
    	, &Get().cCamAppParam.iEnableDCAperture
    	, Get().cCamAppParam.iEnableDCAperture
    	, "0:��ʹ��;1:ʹ��"
    	, "ʹ��DC��Ȧ"
    	, ""
    	, PROJECT_LEVEL
    );

    GetEnum("\\CamApp"
        , "ColorMatrixMode"
        , &Get().cCamAppParam.iColorMatrixMode
        , Get().cCamAppParam.iColorMatrixMode
        , "0:��ʹ��;1:ʹ��"
        , "ͼ����ǿ"
        , ""
        , PROJECT_LEVEL
    );

    GetInt("\\CamApp"
    	, "ContrastValue"
    	, &Get().cCamAppParam.iContrastValue
    	, Get().cCamAppParam.iContrastValue
    	, -100
    	, 100
    	, "�Աȶ�"
    	, ""
    	, PROJECT_LEVEL
    );
    
    GetInt("\\CamApp"
    	, "SaturationValue"
    	, &Get().cCamAppParam.iSaturationValue
    	, Get().cCamAppParam.iSaturationValue
    	, -100
    	, 100
    	, "���Ͷ�"
    	, ""
    	, PROJECT_LEVEL
    );
    
    
    GetInt("\\CamApp"
        , "WDRThreshold"
        , &Get().cCamAppParam.iWDRValue
        , Get().cCamAppParam.iWDRValue
        , 0
        , 4095			//����̬��ΧΪ 0~4095
        , "WDRǿ��"
        , ""
        , PROJECT_LEVEL
    );
    GetEnum("\\CamApp"
            , "NoiseReduction"
            , &Get().cCamAppParam.iSNFTNFMode
            , Get().cCamAppParam.iSNFTNFMode
            //, "0:��ʹ��;1:TNFģʽ;2:SNFģʽ;3:TNF��SNFģʽ"
            , "0:��ʹ��;3:ʹ��"
            , "����ģʽ"
            , ""
            , PROJECT_LEVEL
            );
    GetEnum("\\CamApp"
            , "NoiseReductionThreshold"
            , &Get().cCamAppParam.iTNFSNFValue
            , Get().cCamAppParam.iTNFSNFValue
            , "0:�Զ�;1:��;2:��;3:��"
            , "����ǿ��"
            , ""
            , INNER_LEVEL
            );

    GetEnum("\\CamApp"
        , "CVBSMode"
        , &Get().cCamAppParam.iCVBSMode
        , Get().cCamAppParam.iCVBSMode
        , "0:PAL;1:NTSC"
        , "CVBS��ʽ"
        , ""
        , PROJECT_LEVEL
    );
    GetEnum("\\CamApp"
        , "BlackWhiteMode"
        , &Get().cCamAppParam.iGrayImageEnable
        , Get().cCamAppParam.iGrayImageEnable
        , "0:��ʹ��;1:ʹ�� "
        , "�ڰ�ͼ���ģʽ"
        ,""
        , PROJECT_LEVEL
    );
	//todoʹ��٤���ᵼ��ͼ��ƫɫ
	/*
    GetInt("\\CamApp"
        , "GammaValue"
        , &Get().cCamAppParam.iGammaValue
        , Get().cCamAppParam.iGammaValue
        , 10
        , 22
        , "���٤��"
        , ""
        , CUSTOM_LEVEL
    );
	GetEnum("\\CamApp"
        , "GammaEnable"
        , &Get().cCamAppParam.iGammaEnable
        , Get().cCamAppParam.iGammaEnable
        ,"0:��ʹ��;1:ʹ��"
        , "���٤��ʹ��"
        , ""
        , CUSTOM_LEVEL
    );
*/
    GetInt("\\CamApp"
        , "EdgeValue"
        , &Get().cCamAppParam.iEdgeValue
        , Get().cCamAppParam.iEdgeValue
        , 0
        , 255
        , "ͼ���Ե��ǿ"
        , "ͼ���Ե��ǿ"
        , PROJECT_LEVEL
    );

//	GetEnum("\\CamApp"
//		, "LEDPolarity"
//		, &Get().cCamAppParam.iLEDPolarity
//		, Get().cCamAppParam.iLEDPolarity
//		, "0:������;1:������"
//		, "����ƿ��Ƽ���"
//		, ""
//		, CUSTOM_LEVEL
//	);

//	GetEnum("\\CamApp"
//		, "LEDOutputType"
//		, &Get().cCamAppParam.iLEDOutputType
//		, Get().cCamAppParam.iLEDOutputType
//		, "0:��������ƽ��;1:OC(����)"
//		, "������������"
//		, ""
//		, CUSTOM_LEVEL
//	);
	
//    GetInt("\\CamApp"
//          , "LEDPluseWidth"
//          , &Get().cCamAppParam.iLEDPluseWidth
//          , Get().cCamAppParam.iLEDPluseWidth
//          , 0
//          , 200
//          , "���������"
//          , ""
//          , PROJECT_LEVEL
//      );

	// GetEnum("\\CamApp"
	// 	, "FlashEnable"
	// 	, &Get().cCamAppParam.iFlashEnable
	// 	, Get().cCamAppParam.iFlashEnable
	// 	, "0:��ʹ��;1:ʹ��"
	// 	, "�����ʹ�ܿ���"
	// 	, ""
	// 	, CUSTOM_LEVEL
	// );

	GetEnum("\\CamApp"
		, "FlashPolarity"
		, &Get().cCamAppParam.iFlashPolarity
		, Get().cCamAppParam.iFlashPolarity
		, "0:������;1:������"
		, "����ƿ��Ƽ���"
		, ""
		, CUSTOM_LEVEL
	);

	GetEnum("\\CamApp"
		, "FlashCoupling"
		, &Get().cCamAppParam.iFlashCoupling
		, Get().cCamAppParam.iFlashCoupling
		, "0:�����;1:���"
		, "����������"
		, ""
        , PROJECT_LEVEL
	);

	GetEnum("\\CamApp"
		, "FlashOutputType"
		, &Get().cCamAppParam.iFlashOutputType
		, Get().cCamAppParam.iFlashOutputType
		, "0:��������ƽ��;1:OC(����)"
		, "������������"
		, ""
		, CUSTOM_LEVEL
	);
	
    GetInt("\\CamApp"
          , "FlashPluseWidth"
          , &Get().cCamAppParam.iFlashPluseWidth
          , Get().cCamAppParam.iFlashPluseWidth
          , 0
          , 100
          , "���������"
          , ""
          , PROJECT_LEVEL
      );
/*
	GetEnum("\\CamApp"
		, "ALMPolarity"
		, &Get().cCamAppParam.iALMPolarity
		, Get().cCamAppParam.iALMPolarity
		, "0:������;1:������"
		, "�������Ƽ���"
		, ""
		, PROJECT_LEVEL
	);
	GetEnum("\\CamApp"
		, "ALMOutputType"
		, &Get().cCamAppParam.iALMOutputType
		, Get().cCamAppParam.iALMOutputType
		, "0:��������ƽ��;1:OC(����)"
		, "�����������"
		, ""
		, PROJECT_LEVEL
	);
*/
	GetEnum("\\CamApp"
		, "F1OutputType"
		, &Get().cCamAppParam.iF1OutputType
		, Get().cCamAppParam.iF1OutputType
		, "0:���˻�����ź�;1:���������ź�"
		, "F1�������"
		, ""
		, PROJECT_LEVEL
	);

	GetEnum("\\CamApp"
		, "ColorGradation"
		, &Get().cCamAppParam.iColorGradation
		, Get().cCamAppParam.iColorGradation
		, "0:0~255;1:16~234"
		, "ɫ��"
		, "ɫ��"
		, PROJECT_LEVEL
	);

	/*Get().cCamAppParam.iCVBSExport = 1;		//Ĭ�� �� �������
	GetEnum("\\CamApp"
		, "CVBSIMAGEMode"
		, &Get().cCamAppParam.iCVBSExport
		, Get().cCamAppParam.iCVBSExport
		, "0:CVBS ��С���;1:CVBS �������"
		, "CVBSͼ��ģʽ"
		, ""
		, CUSTOM_LEVEL
	);*/

	return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitScaleSpeed()
{
    Get().cTrackerCfgParam.cScaleSpeed.fEnable = FALSE;
    /*GetEnum("\\Tracker\\ScaleSpeed"
        , "Enable"
        , &Get().cTrackerCfgParam.cScaleSpeed.fEnable
        , Get().cTrackerCfgParam.cScaleSpeed.fEnable
        , "0:�ر�;1:��"
        , "�������ٿ���"
        , ""
        , CUSTOM_LEVEL
        );

    GetFloat("\\Tracker\\ScaleSpeed"
             , "Distance"
             , & Get().cTrackerCfgParam.cScaleSpeed.fltDistance
             , Get().cTrackerCfgParam.cScaleSpeed.fltDistance
             , 10.0f
             , 1000.0f
             , "��Ļ���ص����صľ���(��)"
             , ""
             , CUSTOM_LEVEL
             );

    GetFloat("\\Tracker\\ScaleSpeed"
             , "RoadWidth"
             , & Get().cTrackerCfgParam.cScaleSpeed.fltRoadWidth
             , Get().cTrackerCfgParam.cScaleSpeed.fltRoadWidth
             , 1.0f
             , 10.0f
             , "������������(��)"
             , ""
             , CUSTOM_LEVEL
             );

    GetFloat("\\Tracker\\ScaleSpeed"
        , "AdjustCoef"
        , &Get().cTrackerCfgParam.cScaleSpeed.fltAdjustCoef
        , Get().cTrackerCfgParam.cScaleSpeed.fltAdjustCoef
        , 0.01f
        , 10.0f
        , "����ϵ��"
        , ""
        , CUSTOM_LEVEL
        );
       */
    return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitCharacter(VOID)
{
	
	GetEnum("\\Overlay\\H264"
		  , "Enable"
		  , &Get().cOverlay.fH264Eanble
		  , Get().cOverlay.fH264Eanble
		  , "0:��ʹ��;1:ʹ��"
		  , "H264�ַ�����ʹ��"
		  , ""
		  , CUSTOM_LEVEL
	);
	
	GetInt("\\Overlay\\H264"
		  , "X"
		  , &Get().cOverlay.cH264Info.iTopX
		  , Get().cOverlay.cH264Info.iTopX
		  , 0
          , 1920
		  , "X����"
		  , ""
		  , CUSTOM_LEVEL
	  );
	  
	GetInt("\\Overlay\\H264"
		  , "Y"
		  , &Get().cOverlay.cH264Info.iTopY
		  , Get().cOverlay.cH264Info.iTopY
		  , 0
          , 1080
		  , "Y����"
		  , ""
		  , CUSTOM_LEVEL
	  ); 
	  
	GetInt("\\Overlay\\H264"
		  , "Size"
		  , &Get().cOverlay.cH264Info.iFontSize
		  , 32
		  , 16
		  , 128
		  , "�����С"
		  , ""
		  , PROJECT_LEVEL
	  ); 
	DWORD dwR = 255, dwG = 0,dwB = 0;  
	GetInt("\\Overlay\\H264"
		  , "R"
		  , (INT *)&dwR
		  , dwR
		  , 0
		  , 255
		  , "������ɫR����"
		  , ""
		  , CUSTOM_LEVEL
	  );
	GetInt("\\Overlay\\H264"
		  , "G"
		  , (INT *)&dwG
		  , dwG
		  , 0
		  , 255
		  , "������ɫG����"
		  , ""
		  , CUSTOM_LEVEL
	  );
	GetInt("\\Overlay\\H264"
		  , "B"
		  , (INT *)&dwB
		  , dwB
		  , 0
		  , 255
		  , "������ɫB����"
		  , ""
		  , CUSTOM_LEVEL
	  );
	Get().cOverlay.cH264Info.dwColor = (dwB | (dwG << 8) | (dwR << 16));
	  SW_TRACE_DEBUG("h264 color[0x%08x][0x%02x,0x%02x,0x%02x]", Get().cOverlay.cH264Info.dwColor, dwR, dwG, dwB);
#if 0	//�Ƿ����ʱ��ͨ��ͨ���
	GetEnum("\\Overlay\\H264"
		  , "DateTime"
		  , &Get().cOverlay.cH264Info.fEnableTime
		  , Get().cOverlay.cH264Info.fEnableTime
		  , "0:��ʹ��;1:ʹ��"
		  , "����ʱ��"
		  , ""
		  , CUSTOM_LEVEL
	  );
#endif
	 GetString("\\Overlay\\H264"
		  , "String"
		  , Get().cOverlay.cH264Info.szInfo
		  , Get().cOverlay.cH264Info.szInfo
		  , sizeof(Get().cOverlay.cH264Info.szInfo)
		  , ""
		  , "������Ϣ"
		  , CUSTOM_LEVEL
	  );
	if(!swpa_strcmp(Get().cOverlay.cH264Info.szInfo, "NULL"))
	{
	  swpa_strcpy(Get().cOverlay.cH264Info.szInfo, "");
	}
	
	// todo.�ַ����Ӽ����ַ��ܳ��������⣬������ʱ��������ո���β�������������������ʾ��ȫ��
	if( strlen(Get().cOverlay.cH264Info.szInfo) + 3 < sizeof(Get().cOverlay.cH264Info.szInfo) )
	{
		strcpy(Get().cOverlay.cH264Info.szInfo + strlen(Get().cOverlay.cH264Info.szInfo), "  ");
		SW_TRACE_NORMAL("<param>change overlay h264 len.%s", Get().cOverlay.cH264Info.szInfo);
	}
	
	Get().cOverlay.cJPEGInfo.fEnable = 0;
	  GetEnum("\\Overlay\\JPEG"
		  , "Enable"
		  , &Get().cOverlay.cJPEGInfo.fEnable
		  , Get().cOverlay.cJPEGInfo.fEnable
		  , "0:��ʹ��;1:ʹ��"
		  , "JPEG�ַ�����ʹ��"
		  , ""
		  , CUSTOM_LEVEL
	  );
	  
	GetInt("\\Overlay\\JPEG"
		  , "X"
		  , &Get().cOverlay.cJPEGInfo.iX
		  , Get().cOverlay.cJPEGInfo.iX
		  , 0
          , 3392
		  , "X����"
		  , ""
		  , CUSTOM_LEVEL
	  );

	//��Ե羯���ڷ�����Y=0ʱ���ӵ�ͼƬ���ϱߣ�Y=1080ʱ���ӵ�ͼƬ���±ߣ�����������߶�Ϊ128
	GetInt("\\Overlay\\JPEG"
		  , "Y"
		  , &Get().cOverlay.cJPEGInfo.iY
		  , Get().cOverlay.cJPEGInfo.iY
		  , 0
          , 2000
		  , "Y����"
		  , ""
		  , CUSTOM_LEVEL
	  ); 
//	//0-��ʾ���ӵ�ͼƬ���Ϸ���1080-��ʾ���ӵ�ͼƬ���·�����֧�ֵ��ӵ�ͼƬ��
//	if (Get().cOverlay.cJPEGInfo.iY != 0)
//	{
//		Get().cOverlay.cJPEGInfo.iY = 1080;
//	}

	GetInt("\\Overlay\\JPEG"
		  , "Size"
		  , &Get().cOverlay.cJPEGInfo.iFontSize
		  , Get().cOverlay.cJPEGInfo.iFontSize
		  , 16
		  , 128
		  , "�����С"
		  , ""
		  , PROJECT_LEVEL		//���ɵ�������web��Ҫ�ò���
	  ); 

	dwR = 255;
	dwG = 0;
	dwB = 0;
	GetInt("\\Overlay\\JPEG"
		  , "R"
		  , (INT *)&dwR
		  , dwR
		  , 0
		  , 255
		  , "������ɫR����"
		  , ""
		  , CUSTOM_LEVEL
	  );
	GetInt("\\Overlay\\JPEG"
		  , "G"
		  , (INT *)&dwG
		  , dwG
		  , 0
		  , 255
		  , "������ɫG����"
		  , ""
		  , CUSTOM_LEVEL
	  );
	GetInt("\\Overlay\\JPEG"
		  , "B"
		  , (INT *)&dwB
		  , dwB
		  , 0
		  , 255
		  , "������ɫB����"
		  , ""
		  , CUSTOM_LEVEL
	  );
	Get().cOverlay.cJPEGInfo.iColor = (dwB | (dwG << 8) | (dwR << 16));
	SW_TRACE_DEBUG("jpeg color[0x%08x][0x%02x,0x%02x,0x%02x]", Get().cOverlay.cJPEGInfo.iColor, dwR, dwG, dwB);
#if 0	//�Ƿ����ʱ��ͨ��ͨ���
	GetEnum("\\Overlay\\JPEG"
		  , "DateTime"
		  , &Get().cOverlay.cJPEGInfo.fEnableTime
		  , Get().cOverlay.cJPEGInfo.fEnableTime
		  , "0:��ʹ��;1:ʹ��"
		  , "����ʱ��"
		  , ""
		  , CUSTOM_LEVEL
	  );
#endif	  
	 GetString("\\Overlay\\JPEG"
		  , "String"
		  , Get().cOverlay.cJPEGInfo.szInfo
		  , Get().cOverlay.cJPEGInfo.szInfo
		  , sizeof(Get().cOverlay.cJPEGInfo.szInfo)
		  , ""
		  , "������Ϣ"
		  , CUSTOM_LEVEL
	  );

	if(!swpa_strcmp(Get().cOverlay.cJPEGInfo.szInfo, "NULL"))
	{
	  swpa_strcpy(Get().cOverlay.cJPEGInfo.szInfo, "");
	}
	 // todo.�ַ����Ӽ����ַ��ܳ��������⣬������ʱ��������ո���β�������������������ʾ��ȫ��
	 if( strlen(Get().cOverlay.cJPEGInfo.szInfo) + 3 < sizeof(Get().cOverlay.cJPEGInfo.szInfo) )
	 {
		strcpy(Get().cOverlay.cJPEGInfo.szInfo + strlen(Get().cOverlay.cJPEGInfo.szInfo), "  ");
		SW_TRACE_NORMAL("<param>change overlay jpeg len.%s", Get().cOverlay.cJPEGInfo.szInfo);
	 }

	  //����û�е��ӳ��ƺ���ʹ�ܿ���
	/*GetEnum("\\Overlay\\JPEG"
		  , "Plate"
		  , &Get().cOverlay.cJPEGInfo.fEnablePlate
		  , Get().cOverlay.cJPEGInfo.fEnablePlate
		  , "0:��ʹ��;1:ʹ��"
		  , "���ӳ��ƺ���"
		  , ""
		  , CUSTOM_LEVEL
	  );*/
	  return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitGB28181(VOID)
{
	return CSWLPRParameter::InitGB28181();
}


HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitAutoReboot(VOID)
{	

	GetEnum("\\AutoReboot"
	  , "Enable"
	  , &Get().cAutoRebootParam.fEnable
	  , Get().cAutoRebootParam.fEnable
	  , "0:��ʹ��;1:ʹ��"
	  , "�Զ���λ"
	  , ""
	  , CUSTOM_LEVEL
	);	

	GetInt("\\AutoReboot"
		  , "TrafficFlows"
		  , &Get().cAutoRebootParam.iCarLeftCountLimit
		  , Get().cAutoRebootParam.iCarLeftCountLimit
		  , 0
		  , 1000
		  , "��ͨ����"
		  , "��λΪʮ�����ڳ�������"
		  , CUSTOM_LEVEL
	  );

	GetInt("\\AutoReboot"
		  , "SystemUpTime"
		  , &Get().cAutoRebootParam.iSysUpTimeLimit
		  , Get().cAutoRebootParam.iSysUpTimeLimit
		  , 24
		  , 720
		  , "����ʱ��"
		  , "��λ:Сʱ"
		  , CUSTOM_LEVEL
	  );


	return S_OK;
}

HRESULT CSWLPRVenusTrafficGateEC700Parameter::InitONVIF(VOID)
{

    SW_TRACE_NORMAL(" HRESULT CSWLPRVenusEPoliceParameter::InitONVIF(VOID)");
	
	return CSWLPRParameter::InitONVIF();

}

