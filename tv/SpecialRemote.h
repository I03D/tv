#pragma once
#include "RemoteControl.h"

class SpecialRemote {
public:
	SpecialRemote(TVFactory tvFactory) {
		super(tvFactory);
	}

	void up() {
		int channel = this->getChannel();
		this.setChannel(channel + 1);
	}

	void down() {
		int channel = this->getChannel();
		this->setChannel(channel - 1);
	}
};
