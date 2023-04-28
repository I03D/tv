#pragma once
#include "TV.h"
#include <iostream>

using namespace std;

class TVFactory {
public:
	TV getTV(string type) throws Exception {
		if (type.equals("LG")) {
			return new LG();
		} else if (type.equals("Sony")) {
			return new Sony();
		} else {
			throw new Exception("Invalid TV Type");
		}
	}
};

