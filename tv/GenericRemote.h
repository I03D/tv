#pragma once
#include <iostream>
#include "RemoteControl.h"

class GenericRemote : RemoteControl {
public:
	GenericRemote(TVFactory tvFactory) {
		super(tvFactory);
	}

	void nextChannel() {
		int channel = this->getChannel();
		this->setChannel(channel + 1);
	}

	void prevChannel() {
		int channel = this->getChannel();
		this->setChannel(channel - 1);
	}
}
