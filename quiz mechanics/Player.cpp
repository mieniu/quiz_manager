#include "Player.h"

Player::Player(std::string m_nickname) :
	ID_player(current_ID++),
	nickname(m_nickname),
	correctCtr(0),
	questionsCtr(0) {}

Player::~Player() {}

int Player::getResult() {
	return correctCtr;
}

void Player::changeNickname(std::string newNick) {
	nickname = newNick;
}

std::string Player::getInfo() {
	return "Gracz " + Player::ID_player + ": " + Player::nickname;
}