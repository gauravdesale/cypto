#include <stdio.h>
#include <vector>
#include <string.h>
int lfsr1[17];
int lfsr2[25];
vector<int> resultlfsr;
int key = "dskhfdhlekljkseflkjlkefljk";
int main(){
	lfsr[17] = key[0];
	lfsr[18] = key[1];
	for(int i = 0; i <= 3; i++){
		lfsr1[i] = key[i];
	}
	for(int i = key.strlen - 4; i < key.strlen; i++){
		lfsr2[i] = key[i];
	}
	for(int i = 0; i < key.strlen; i++){
		resultlfsr = lfsr1[i] + lfsr2[i];
		resultlfsr = resultlfsr % 265; 
	}
