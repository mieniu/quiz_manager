#pragma once
#include <string>
class Answers {
private:
    std::string answer[4];
    int correctId;
public:
    Answers();
    int getCorrect();
};