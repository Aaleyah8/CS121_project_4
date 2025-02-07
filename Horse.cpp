#include "Horse.h"
#include <iostream>

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
	int position;
	int trackLength;
	int id;
}

init(int id, int trackLength);

void Horse::advance(int horseNum, int* horses){
	int turn = dist(rd);
}

void Horse::printLane(int horseNum, int* horses); 

bool Horse::isWinner(int horseNum, int* horses){
	bool result = false;
	int trackLength = 0;
	horses[hn] >= trackLength;
	result = true;
	return result; 
}
