#ifndef __UNIDI_H__
#define __UNIDI_H__
#include <iostream>
#include <vector>

using namespace std;

void concat(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3);
bool split(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3,unsigned int indice);
void merge(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3);
bool partition(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3,int chave);

#endif