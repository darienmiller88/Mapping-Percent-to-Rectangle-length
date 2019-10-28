#ifndef FONT_NAMES
#define FONT_NAMES

#include <string>
#include <unordered_map>

namespace FontNames {

	enum class Fonts {
		AMATIC_BOLD,
		AMATIC_SC,
		ARCADE_I,
		ARCADE_N,
		ARCADE_R,
		ARIAL_ITALIC,
		CALIBRI,
		CALIBRI_B,
		CALIBRI_I,
		CALIBRI_Z,
		DROID_SANS,
		FFF_TUSJ,
		LEADCOAT,
		ROBOTO_BLACK,
		ROBOTO_REGULAR,
		SEASRN,
		SIXTY,
		STOCKY,
		TIMES_ROMAN_NUMERAL
	};

	const std::unordered_map<Fonts, std::string> fileNames{
		std::make_pair(Fonts::AMATIC_BOLD, "Amatic-Bold.ttf"),
		std::make_pair(Fonts::AMATIC_SC, "AmaticSC-Regular.ttf"),
		std::make_pair(Fonts::ARCADE_I, "ARCADE_I.TTF"),
		std::make_pair(Fonts::ARCADE_N, "ARCADE_N.TTF"),
		std::make_pair(Fonts::ARCADE_R, "ARCADE_R.TTF"),
		std::make_pair(Fonts::ARIAL_ITALIC, "arialItalic.ttf"),
		std::make_pair(Fonts::CALIBRI, "Calibri.ttf"),
		std::make_pair(Fonts::CALIBRI_B, "CALIBRIB.TTF"),
		std::make_pair(Fonts::CALIBRI_I, "CALIBRII.TTF"),
		std::make_pair(Fonts::CALIBRI_Z, "CALIBRIZ.TTF"),
		std::make_pair(Fonts::DROID_SANS, "DroidSans.ttf"),
		std::make_pair(Fonts::FFF_TUSJ, "FFF_Tusj.ttf"),
		std::make_pair(Fonts::LEADCOAT, "leadcoat.ttf"),
		std::make_pair(Fonts::ROBOTO_BLACK, "Roboto-Black.ttf"),
		std::make_pair(Fonts::ROBOTO_REGULAR, "Roboto-Regular.ttf"),
		std::make_pair(Fonts::SEASRN, "SEASRN__.ttf"),
		std::make_pair(Fonts::SIXTY, "SIXTY.TTF"),
		std::make_pair(Fonts::STOCKY, "stocky.ttf"),
		std::make_pair(Fonts::TIMES_ROMAN_NUMERAL, "times-new-roman.ttf")
	};
	
}

#endif