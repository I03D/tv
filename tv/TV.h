#pragma once

class TV {
public:
	virtual void on();
	virtual void off();
	virtual void tuneChannel(int channel);
	virtual int getChannel();
};

