#pragma once
#include <string>
#include <vector>
#include "Answer.h"
class Question
{
private:
	static int current_id;
	int question_id;
	std::string title;
	Answers answers;
public:
	Question();
};

