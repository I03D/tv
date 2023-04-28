#pragma once
#include <iostream>
#include "TV.h"

using namespace std;

class Sony : TV {
private:
	int station = 0;

public:
	void on() {
		cout << "Turning on the Sony";
	}

	void off() {
		cout << "Turning off the Sony TV";
	}
	
	void tuneChannel(int channel) {
		this->station = channel;
		cout << "Set the Sony TV station to " + this->station;
	}

	int getChannel() {
		return station;
	}
};
