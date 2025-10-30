#pragma once
#include <iostream>

#ifdef DINAMICHBIBLIOTVTORAYA_EXPORTS
#define DINAMICHBIBLIOTVTORAYA_API __declspec(dllexport)
#else
#define DINAMICHBIBLIOTVTORAYA_API __declspec(dllimport)
#endif

class DINAMICHBIBLIOTVTORAYA_API Leaver {
public:
	std::string leave(std::string line);
};