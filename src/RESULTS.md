int Hash(std::string key){
	int index=0;
	for(int i=0; i<key.length(); i++){
		index = index + (int)key[i];
	}
	index = index % tableSize;

	return index;
}
// OUTPUT: 14303		
int Hash2(std::string key){
	int index=0;
	int mod =1;
	for(int i=0; i<20; i++){
		index = index + ((int)key[i])*mod;
		mod=mod*10;
	}
	index = index % tableSize;

	return index;
}
// OUTPUT: 4052
int Hash3(std::string key){
	int index=0;
	int mod=9;
	for(int i=0; i<8; i++){
		index = index +((int)key[i])*mod;
		mod=(mod*2)+1;
	}
	index = index % tableSize;
	return index;
}
// OUTPUT: 7171
