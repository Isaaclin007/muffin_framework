// muffin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	t_data data;

	data = init::data();
	csv_parse("../resources/BTCUSD_1Min.csv", data);
	return 0;
}
