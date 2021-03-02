#pragma once
	int fact(int n){
		int countf = 1;
		for (int i = 1; i <= n; i++) 
			countf = countf * i;
		
		return countf;
	}