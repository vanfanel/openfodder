struct sMouseData {
	uint16	anonymous_0;
	uint16	anonymous_1;
	uint16	anonymous_2;
	uint16	mColumn;
	uint16	mRow;
	uint16	anonymous_5;
	uint16	anonymous_6;
	uint16	anonymous_7;
	uint16	anonymous_8;
	uint16	anonymous_9;
	uint16	anonymous_10;
};

struct sMission_unk0 {
	uint16 field_0;
	uint8 field_1;
	uint8 field_2;
	uint16 field_3;
	uint16 field_4;
	uint16 field_5;
	uint16 field_6; 
};

class cFodder : public cSingleton < cFodder > {

	std::vector<cEvent>		mEvents;

	cResources*				mResources;
	cWindow*				mWindow;

	cPosition		mMousePosition;
	uint32			mMouseButtons;

	uint8*			mDataPStuff;

	uint32			dword_37AA0;
	uint32			dword_3901A;
	uint16			word_3901E;
	int16			word_39096;
	uint16			word_390A4;
	uint16			word_390A6;
	uint16			word_390AE;
	uint16			word_390B8;
	uint16			mMapNumber;
	uint16			mMissionNumber = 0;
	uint16			mMissionPhase = 0;
	uint16			word_390CE;
	uint16			word_390D0;
	uint16			word_390D2;
	int16			word_390D4;
	uint16			word_390D6;
	uint16			word_390E8;
	int16			word_390EA;
	uint16			mMissionPhaseRemain;
	uint16			mMissionPhases;
	sMission_unk0	stru_390FA[8];
	int16			word_3915A;
	int16			word_3915E;

	int16			word_391D2[361];
	int16*			dword_394A4;
	int16*			dword_394A8;
	int16			word_394AC[361];
	int16*			dword_3977E;

	int8			byte_3978E[25];

	int16			mButtonPressLeft, mButtonPressRight;
	int16			word_39EF8;
	int16			word_39F02;
	int16			word_39EF6;
	int16			word_39EFA;
	int16			word_39EFC;
	int16			word_39F04;
	int32			dword_39F7C;
	int16			word_39FD0;
	int16			word_39FD4;
	
	int16			word_3A06B;
	int16			word_3A28D;

	int16			dword_3A8DB;
	uint8			byte_3A8DF;

	uint16			word_3A024;
	uint16			word_3A054;
	uint32			dword_3A05A;
	uint8			byte_3A05E;
	uint32			dword_3A39D;

	int32			dword_3A3FD[30];
	int32			dword_3A475[30];
	int32			dword_3A4ED[30];
	int32			dword_3A565[30];
	int32			dword_3A5DD[30];
	int32			dword_3A655[30];
	int32			dword_3A6CD[30];
	int32			dword_3A745[30];
	int32			dword_3A7BD[30];
	int32			dword_3A835[30];

	int16			word_3A9AA;
	uint16			word_3A9AC;
	uint16			word_3A9B2;
	uint16			word_3A9F7;
	int16			word_3AA43;
	
	int16			word_3B4F3;

	uint16			word_3BDAF;
	uint16			word_3BDB1;
	uint16			word_3BDB3;
	uint16			word_3BDB5;
	

	uint16			word_3BDE7;
	uint16			word_3BDE9;
	uint16			word_3BDEB;
	
	int32			dword_3BE03[9];
	int32			dword_3BE27[9];
	int32			dword_3BE4B[9];
	int32			dword_3BE6F[9];
	int32			dword_3BE93[9];
	
	int32*			off_3BDEF[5];
	uint16			word_3BEB9;
	uint16			word_3BEBB;
	uint16			word_3BEBD;
	uint16			word_3BEC1;
	uint16			word_3BEC3;
	uint16			word_3BEC9;
	uint16			word_3BED5[5];
	uint16			word_3BEDF[10];
	
	int32*			off_3BEF3[10];
	int16			word_3BF1B;
	int16			word_3BF1E[6];

	uint16			mIntroDone;

	uint16			byte_3DDA2[0x30];

	int16			word_3E75B;

	int16			word_42851;

	/* Configuration Settings (SETUP.DAT) */
	uint16			word_3E7ED;
	uint16			mEffectDriver;
	uint16			mMusicDriver;
	/* End Configuration Settings */

	uint8			mErrorCode;

	int16			mouse_Button_Status;
	int16			mouse_Pos_Column;
	int16			mouse_Pos_Row;

	sMouseData*		mouseData0;
	sMouseData*		mouseData1;

	uint16			word_427D4;
	int64			mTicks;
	int64			mTicksDiff;

protected:

	void			sub_10BBC();
	void			sub_10B6D();
	void			sub_10BFA();
	void			sub_10D61();
	void			sub_10D9F();
	void			sub_10DEC();

	int16			introPlayText();
	void			intro();

	void			mission_PhaseNext();

	void			sub_12AB1();
	void			WonGame();

	void			Load_File( const std::string& pFilename );
	void			Load_PlayerBin();
	
	void			videoSleep();

	void			sleepLoop( int64 pMilliseconds );
	int16			ShowImage_ForDuration( const std::string& pFilename, uint16 pDuration );

	void			memory_XMS_Detect();
	void			mouse_Setup();
	void			mouse_Handle();
	void			mouse_ButtonCheck();
	void			mouse_GetData();

	void			eventProcess();

public:

					cFodder();
					~cFodder();

	bool			EventAdd( cEvent pEvent );

	void			Prepare();
	void			Start();
	void			Exit( unsigned int pExitCode );

};