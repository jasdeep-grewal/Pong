#pragma once
#include "stdafx.h"
#include "CControl.h"
#include "CBase4618.h"

class CPong : public CBase4618
{
private:
	int _com;
	cv::Size _canvasSize;
public:
	CPong(cv::Size, int);
	~CPong();
	void update(double &xPosition, double &yPosition);
	void draw(int x, int y);
	//bool btnPressed(int gpioPin);
};