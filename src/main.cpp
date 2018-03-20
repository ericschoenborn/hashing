/*****************************************************************
Tree separate hash maps with number of collisions.

@auther Eric Schoenborn
@version Winter 2018 
*****************************************************************/


#include "../include/my_hash.h"
#include "../include/superhero.h"
#include <iostream>
#include <string>
#include <fstream>

int main(){
    	
	/** number of collisions for first hashtable*/
	int num=0;

	/** number of collisions for secound hashtable*/
	int num2=0;

	/** number of collisions for thirst hashtable*/
	int num3=0;

	/** fist hash table*/
	hash thing;
	
	/** secound hash table*/
	hash thing2;
	
	/** third hash table*/
	hash thing3;
	
	/** superhero object*/
	SUPERHERO a1;
	
	/** page id from csv*/
	std::string page_id;
	
	/** name from csv*/
	std::string name;
		
	/** urlsug from csv*/
	std::string urlslug;
	
	/** id from csv*/
	std::string id;
	
	/** alignment form csv*/
	std::string alignment;
		
	/** eye color from csv*/
	std::string eye_color;
	
	/** hair color from csv*/
	std::string hair_color;
	
	/** sex from csv*/
	std::string sex;
	
	/** gsm from csv*/
	std::string gsm;
	
	/** alive from csv*/
	std::string alive;
	
	/** appearances from csv*/
	std::string appearances;
	
	/** fisrt appearances form csv*/
	std::string first_appearances;
	
	/** year from csv*/
	std::string year;
	
	/** read in data for superhero object form csv*/
	std::ifstream in("include/marvel-wikia-data.csv");
	if(!in.is_open()) std::cout << "error" << '\n';

	
	

	while(in.good()){
		getline(in,page_id,',');
		getline(in,name,',');
		getline(in,urlslug,',');
		getline(in,id,',');
		getline(in,alignment,',');
		getline(in,eye_color,',');
		getline(in,hair_color,',');
		getline(in,sex,',');
		getline(in,gsm,',');
		getline(in,alive,',');
		getline(in,appearances,',');
		getline(in,first_appearances,',');
		getline(in,year,'\n');
		
		
		a1.write(page_id,name,urlslug,id,alignment,eye_color,
		hair_color,sex,gsm,alive,appearances,
		first_appearances,year);	
	
		if(thing.insert(a1.getName())){num++;}
		if(thing2.insert2(a1.getName())){num2++;}
		if(thing3.insert3(a1.getName())){num3++;}
	}
	std::cout<< num << std::endl;
	std::cout<< num2 << std::endl;
	std::cout<< num3 << std::endl;
	in.close();
}
