#pragma once
#include <iostream>
#include "TV.h"
#include "TVFactory.h"

using namespace std;

class RemoteControl {
private:
	TV tv;
	TVFactory tvFactory;

public:
	RemoteControl(TVFactory tvfactory) {
		this->tvFactory = tvFactory;
	}

	void on() {
		this->tv.on();
	}

	void off() {
		this->tv.off();
	}

	void setChannel(int channel) {
		tv.tuneChannel(channel);
	}

	public int getChannel() {
		return tv.getChannel();
	}

	public void setTV(string type) {
		try {
			tv = tvFactory.getTV(type);
		}
		catch (Exception e) {
			cout << e;
		}
	}
};
