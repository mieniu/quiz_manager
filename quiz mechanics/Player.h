#pragma once
#include <string>
class Player
{
private:
	static int current_ID;
	int ID_player;
	std::string nickname;
	int correctCtr;
	int questionsCtr;
public:
	Player(std::string nickname);
	~Player();
	int getResult();
	std::string getInfo();
	void changeNickname(std::string nickname);
	void newQuestion();
};

