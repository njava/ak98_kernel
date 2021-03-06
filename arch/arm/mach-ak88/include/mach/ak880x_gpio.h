#ifndef __ARCH_ARM_MACH_AK88_AK88_GPIO_H__
#define __ARCH_ARM_MACH_AK88_AK88_GPIO_H__

bool gpio_set_dir(int gpiopin /*0~31,32~64,64~95,96~127 */ ,
		  int set /*0:out,1:in */ );
bool gpio_set_level(int gpiopin /*0~31,32~64,64~95,96~127 */ , int set);
bool gpio_get_level(int gpiopin /*0~31,32~64,64~95,96~127 */ );

bool gpio_set_output(int gpiopin /*0~31,32~64,64~95,96~127 */ ,
		     int level /*output level */ );
bool gpio_get_input(int gpiopin /*0~31,32~64,64~95,96~127 */ );

typedef enum {

//GPIO_XXX(0)

	AK8802_GPIO_00 = 0,	//00
	AK8802_GPIO_01,		//01 
	AK8802_GPIO_02,		//02
	AK8802_GPIO_03,		//03
	AK8802_GPIO_04,		//04
	AK8802_GPIO_05,		//05
	AK8802_GPIO_06,		//06 
	AK8802_GPIO_07,		//07
	AK8802_GPIO_08,		//08
	AK8802_GPIO_09,		//09
	AK8802_GPIO_10,		//10

	AK8802_GPIO_RESV11,	//GPIO_11 //11
	AK8802_GPIO_RESV12,	//GPIO_12 //12
	AK8802_GPIO_13,		//13
	AK8802_GPIO_14,		//14
	AK8802_GPIO_15,		//15
	AK8802_GPIO_RESV16,	//GPIO_16 //16 
	AK8802_GPIO_RESV17,	//GPIO_17 //17
	AK8802_GPIO_RESV18,	//GPIO_18 //18
	AK8802_GPIO_RESV19,	//GPIO_19 //19
	AK8802_GPIO_RESV20,	//GPIO_20 //20 

	AK8802_GPIO_RESV21,	//GPIO_21 //21 
	AK8802_GPIO_RESV22,	//GPIO_22 //22  
	AK8802_GPIO_RESV23,	//GPIO_23 //23 
	AK8802_GPIO_24,		//24 
	AK8802_GPIO_25,		//25 
	AK8802_GPIO_26,		//26 
	AK8802_GPIO_27,		//27 
	AK8802_GPIO_28,		//28 
	AK8802_GPIO_29,		//29 
	AK8802_GPIO_30,		//30 
	AK8802_GPIO_31,		//31 

//GPIO_XXX(1)

	AK8802_GPIO_32,		//00
	AK8802_GPIO_33,		//01
	AK8802_GPIO_34,		//02
	AK8802_GPIO_35,		//03
	AK8802_GPIO_36,		//04
	AK8802_GPIO_37,		//05
	AK8802_GPIO_38,		//06
	AK8802_GPIO_39,		//07
	AK8802_GPIO_40,		//08

	AK8802_GPIO_41,		//09
	AK8802_GPIO_42,		//10
	AK8802_GPIO_43,		//11 
	AK8802_GPIO_44,		//12 
	AK8802_GPIO_45,		//13
	AK8802_GPIO_46,		//14
	AK8802_GPIO_47,		//15
	AK8802_GPIO_48,		//16
	AK8802_GPIO_49,		//17
	AK8802_GPIO_50,		//18

	AK8802_GPIO_51,		//19
	AK8802_GPIO_52,		//20
	AK8802_GPIO_53,		//21
	AK8802_GPIO_54,		//22
	AK8802_GPIO_55,		//23
	AK8802_GPIO_56,		//24
	AK8802_GPIO_57,		//25
	AK8802_GPIO_58,		//26
	AK8802_GPIO_RESV59,	//27 
	AK8802_GPIO_RESV60,	//28
	AK8802_GPIO_61,		//29
	AK8802_GPIO_62,		//30
	AK8802_GPIO_63,		//31

//GPIO_XXX(2)

	AK8802_GPIO_64,		//00
	AK8802_GPIO_65,		//01
	AK8802_GPIO_66,		//02
	AK8802_GPIO_67,		//03
	AK8802_GPIO_68,		//04
	AK8802_GPIO_69,		//05
	AK8802_GPIO_70,		//06

	AK8802_GPIO_71,		//07
	AK8802_GPIO_RESV72,	//GPIO_72 //08
	AK8802_GPIO_RESV73,	//GPIO_73 //09
	AK8802_GPIO_RESV74,	//GPIO_74 //10
	AK8802_GPIO_RESV75,	//GPIO_75 //11
	AK8802_GPIO_76,		//12
	AK8802_GPIO_77,		//13
	AK8802_GPIO_78,		//14
	AK8802_GPIO_79,		//15
	AK8802_GPIO_RESV80,	//GPIO_80 //16 

	AK8802_GPIO_RESV81,	//GPIO_81 //17
	AK8802_GPIO_RESV82,	//GPIO_82 //18 
	AK8802_GPIO_RESV83,	//GPIO_83 //19
	AK8802_GPIO_DGPIO19,	//20  //84
	AK8802_GPIO_RESV85,	//DGPIO_20 //21
	AK8802_GPIO_RESV86,	//DGPIO_21 //22
	AK8802_GPIO_RESV87,	//DGPIO_22 //23
	AK8802_GPIO_RESV88,	//DGPIO_23 //24
	AK8802_GPIO_RESV89,	//DGPIO_24 //25
	AK8802_GPIO_RESV90,	//DGPIO_25 //26

	AK8802_GPIO_RESV91,	//DGPIO_26 //27
	AK8802_GPIO_RESV92,	//DGPIO_27 //28
	AK8802_GPIO_DGPIO28,	//29
	AK8802_GPIO_RESV94,	//DGPIO_29 //30
	AK8802_GPIO_RESV95,	//DGPIO_30 //31

//GPIO_XXX(3)

	AK8802_GPIO_RESV96,	//DGPIO_31 //00  //96   
	AK8802_GPIO_RESV97,	//DGPIO_32 //01
	AK8802_GPIO_RESV98,	//DGPIO_33 //02
	AK8802_GPIO_RESV99,	//DGPIO_34 //03
	AK8802_GPIO_RESV100,	//DGPIO_35 //04 

	AK8802_GPIO_RESV101,	//DGPIO_36 //05  //05+3*32=101
	AK8802_GPIO_DGPIO0,	//06             //06+3*32=102
	AK8802_GPIO_DGPIO1,	//07
	AK8802_GPIO_DGPIO2,	//08
	AK8802_GPIO_DGPIO3,	//09
	AK8802_GPIO_RESV106,	//DGPIO_04 //10
	AK8802_GPIO_RESV107,	//DGPIO_05 //11
	AK8802_GPIO_RESV108,	//12
	AK8802_GPIO_RESV109,	//DGPIO_07 //13
	AK8802_GPIO_RESV110,	//DGPIO_08 //14

	AK8802_GPIO_RESV111,	//DGPIO_09 //15
	AK8802_GPIO_RESV112,	//DGPIO_10 //16
	AK8802_GPIO_RESV113,	//DGPIO_11 //17 
	AK8802_GPIO_RESV114,	//DGPIO_12 //18
	AK8802_GPIO_RESV115,	//DGPIO_13 //19
	AK8802_GPIO_RESV116,	//DGPIO_14 //20    //20+3*32=116
	AK8802_GPIO_RESV117,	//21
	AK8802_GPIO_RESV118,	//22
	AK8802_GPIO_RESV119,	//23
	AK8802_GPIO_RESV120,	//24

	AK8802_GPIO_RESV121,	//25 

	//AK8802_GPIO_RESV122 ,  //26 
	//AK8802_GPIO_RESV123 ,  //27 
	AK88_GPIO_DGPIO25,	//26
	AK88_GPIO_DGPIO26,	//27

	AK8802_GPIO_RESV124,	//28 
	AK8802_GPIO_RESV125,	//29 
	AK8802_GPIO_RESV126,	//30 
	AK8802_GPIO_RESV127,	//31 

	AK88_GPIO_MAX_PIN_NUM,

} AK8802_GPIO_PIN;

#endif
