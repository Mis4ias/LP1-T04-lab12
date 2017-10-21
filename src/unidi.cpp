#include <iostream>
#include <vector>
#include "unidi.h"

using namespace std;

void concat(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3){
	

	for (vector<int>::iterator i = vtr1.begin();i != vtr1.end();i++){
		vtr3.push_back(*i);
	}	

	for (vector<int>::iterator i = vtr2.begin();i != vtr2.end();i++){
		vtr3.push_back(*i);
	}
	

}
bool split(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3,unsigned int indice){
	vector<int> vtr4;
	for (unsigned int i = 0; i < indice; ++i){
		vtr2.push_back(vtr1[i]);
	}

	for (unsigned int i = indice; i < vtr1.size(); ++i){
		vtr3.push_back(vtr1[i]);
	}

	concat(vtr2,vtr3,vtr4);
	
	for (unsigned int i = 0; i < vtr4.size(); ++i){
		if(vtr1[i]==vtr4[i]){}
		if(vtr1[i]!=vtr4[i]){
			return false;
		}
	}
	return true;
}
void merge(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3){

	unsigned int i = 0;
	unsigned int j = 0;
	while(i < vtr1.size() && j < vtr2.size()){
		if(vtr1[i] > vtr2[j]){
			vtr3.push_back(vtr2[j]);
			j++;
		}
		else{
			vtr3.push_back(vtr1[i]);
			i++;
		}

	}
	while(i < vtr1.size() || j < vtr2.size()){
		if(i == vtr1.size() && j < vtr2.size()){
			vtr3.push_back(vtr2[j]);
			j++;
		}
		if(j==vtr2.size() && i < vtr1.size()){
			vtr3.push_back(vtr1[i]);
			i++;
		}

	}
}
	


bool partition(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3,int chave){

	for (vector<int>::iterator i = vtr1.begin(); i <vtr1.end() ; ++i){
		if(*i>chave){
			vtr3.push_back(*i);
		}
		if(*i<chave){
			vtr2.push_back(*i);
		}else{}
	}
	if(vtr1.size()==(vtr2.size()+vtr3.size())){
		return true;
	}else{
		return false;
	}

}

