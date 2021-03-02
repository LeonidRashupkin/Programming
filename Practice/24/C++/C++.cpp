﻿#include <iostream>
#include "json.h"
#include <fstream>
#include <iomanip>
using namespace std;
using json = nlohmann::json;
int main() {
	ifstream input("1.json");
	json inj;
	input >> inj;
	int F, UL = 10;
	json outj = json::array();

	for (int i = 1; i <= UL; i++) {
		F = 0;
		for (int k = 0; k < inj.size(); k++) {
			if (inj[k]["completed"] == true and inj[k]["userId"] == i)
				F++;
		}
		json push;
		push["task_completed"] = F;
		push["userId"] = i;
		outj.push_back(push);
	}
	ofstream output("2.json");
	output << setw(1) << outj << endl;



}