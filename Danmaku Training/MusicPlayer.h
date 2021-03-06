#pragma once

#include "DxLib.h"
#include <vector>
#include <string>

/*
BGMを連続再生するだけ。
*/

class MusicPlayer {

	int musicNum = 0,
		nowMusic = 0,
		*musicSh;
	unsigned int interval = 0, count = 0;

public:
	MusicPlayer();
	bool Load(std::vector<std::string> &_str);
	bool Load(int _num, int *_sh);
	//曲と曲の間
	bool SetInterval(unsigned int _n);
	bool Play();
	bool Start();
	bool Stop();
	~MusicPlayer();
};