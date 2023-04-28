#pragma once
#include <iostream>
#include "LG.h"

using namespace std;

class LG : TV {
private:
	int channel = 1;

public:
	void on() {
		cout << "Turning on the LG TV";
	}

	void off() {
		cout << "Turning off the LG TV"
	}

	void tuneChannel(int channel) {
		this->channel = channel;
		cout << "Set the LG TV channel to " + this->channel);
	}

	int getChannel() {
		return channel;
	}
};
