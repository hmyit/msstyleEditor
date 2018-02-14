#pragma once

#include "StylePart.h"

#include <string>
#include <unordered_map>
#include <stdint.h>

class StyleClass
{
public:
	StyleClass();
	~StyleClass();

	void AddPart(const StylePart& part);
	int GetPartCount();
	const StylePart* GetPart(int index);

	int32_t classID;
	std::string className;

private:
	std::unordered_map<int32_t, StylePart> m_parts;
};
