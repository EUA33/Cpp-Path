#pragma once
#include<windows.h>
#include<fstream>
/*

/-----------------------------------------------------------------------------------\
| Created By IAA03 To help Him create some code faster , Hope it Help Using it.     |
|																					|
|GitHub :https://github.com/IAA03/													|
|Twitter :https://twitter.com/_IAA03?s=09											|
\-----------------------------------------------------------------------------------/

*/
#define Log(x) std::cout<<x;
#define LogEnd std::cout<<"\n";
class Win_SC
{
public:

	// ------------| Files_Part |------------ \\


	// File name ; Number holder ; mod 0 = Open ,else close.
	void IntRead(std::string File, int* Num, int mod) {
		std::ifstream Read;
		if (mod == 0) {
			Read.open(File, 0);
			Read >> *Num;

		}
		else {
			Read.close();

		}
	}
	
	// File name ; Double Number holder ; mod 0 = Open ,else close.
	void DoubleRead(std::string File, double* dNum, int mod) {
		std::ifstream Read;
		if (mod == 0) {
			Read.open(File, 0);
			Read >> *dNum;

		}
		else {
			Read.close();

		}
	}


	// File name ; Float Number holder ; mod 0 = Open ,else close.
	void FloatRead(std::string File, float* fNum, int mod) {
		std::ifstream Read;
		if (mod == 0) {
			Read.open(File, 0);
			Read >> *fNum;

		}
		else {
			Read.close();

		}
	}


	// File name ; Char holder ; mod 0 = Open ,else close.
	void CharRead(std::string File, char* Ch, int mod) {
		std::ifstream Read;
		if (mod == 0) {
			Read.open(File, 0);
			Read >> *Ch;

		}
		else {
			Read.close();

		}
	}


	// File name ; String holder ; mod 0 = Open ,else close.
	void Read(std::string File, std::string* Text, int mod) {
		std::ifstream Read;
		if (mod == 0) {
			Read.open(File, 0);
			Read >> *Text;

		}
		else {
			Read.close();

		}
	}


	// File name ; Text "_anything_here_" ; mod 0 = Open ,else close.
	void Write(std::string File, std::string Text) {
		std::ofstream Write;
		Write.open(File, 0);
		Write << Text;
		Write.close();
	}


	// ------------| Console_Coloring_Part |------------ \\

HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);

//      ░       ▒        ▓         █               ▄           ▀            ■              ▌              ▐
const char low=176,Mid=177,High=178,Block=219 , DownBlock=220,UpBlock=223,MidBlock=254,RsideBlock=221,LsideBlock=222;
	
	/*
	#define Char_BLACK 0
	#define Char_BLUE  1
	#define Char_GREEN 2
	#define Char_CYAN  3
	#define Char_RED  4
	#define Char_PURPLE  5
	#define Char_YELLOW  6
	#define Char_LIGHT_GREY  7
	#define Char_GREY  8
	#define Char_LIGHT_BLUE  9
	#define Char_LIGHT_GREEN 10
	#define Char_LIGHT_CYAN  11
	#define Char_LIGHT_RED  12
	#define Char_MAGENTA  13
	#define Char_LIGHT_YELLOW  14
	#define Char_WHITE  15

	
	#define Back_BLACK  0
	#define Back_BLUE  16
	#define Back_GREEN  32
	#define Back_CYAN  48
	#define Back_RED  64
	#define Back_PURPLE  80
	#define Back_YELLOW  96
	#define Back_LIGHT_GREY  112
	#define Back_GREY  128
	#define Back_LIGHT_BLUE  144
	#define Back_LIGHT_GREEN  160
	#define Back_LIGHT_CYAN  176
	#define Back_LIGHT_RED  192
	#define Back_MAGENTA  208
	#define Back_LIGHT_YELLOW  224
	#define Back_WHITE  240*/

	// colors by hue : Red yellow green cyan blue purple pink 
	void TextColor(int hue_char=15, int hue_back=12) {
		int sum = 0, A = 0, B = 0;

		switch (hue_char)
		{
		case (0):
			A = 4;
			break;
		case (1):
			A = 12;
			break;
		case (2):
			A = 6;
			break;
		case (3):
			A = 14;
			break;
		case (4):
			A = 10;
			break;
		case (5):
			A = 2;
			break;
		case (6):
			A = 11;
			break;
		case (7):
			A = 3;
			break;
		case (8):
			A = 9;
			break;
		case (9):
			A = 1;
			break;
		case (10):
			A = 5;
			break;
		case (11):
			A = 13;
			break;
		case (12):
			A = 0;
			break;
		case (13):
			A = 8;
			break;
		case (14):
			A = 7;
			break;
		case (15):
			A = 15;
			break;
		default:
			SetConsoleTextAttribute(Handle, 15);
			break;
		}

		switch (hue_back)
		{
		case (0):
			B = 4;
			break;
		case (1):
			B = 12;
			break;
		case (2):
			B = 6;
			break;
		case (3):
			B = 14;
			break;
		case (4):
			B = 10;
			break;
		case (5):
			B = 2;
			break;
		case (6):
			B = 11;
			break;
		case (7):
			B = 3;
			break;
		case (8):
			B = 9;
			break;
		case (9):
			B = 1;
			break;
		case (10):
			B = 5;
			break;
		case (11):
			B = 13;
			break;
		case (12):
			B = 0;
			break;
		case (13):
			B = 8;
			break;
		case (14):
			B = 7;
			break;
		case (15):
			B = 15;
			break;
		default:
			SetConsoleTextAttribute(Handle, 15);
			break;
		}
		sum = A + (B * 16);
		SetConsoleTextAttribute(Handle, sum);
	}
};

