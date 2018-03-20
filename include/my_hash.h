/*****************************************************************
Three separate hash funcitons

@auther Eric Schoenborn
@version Winter 2018 
*****************************************************************/


#include <iostream>
#include <fstream>

#include <string>

class hash{
	public:
		/*************************************************
 		Default constructor creates hast table that holds
		name and next item
 		*************************************************/
		hash(){
			for(int i =0; i <tableSize; i++){
				HashTable[i] = new item;
				HashTable[i] ->name= "empty";
				HashTable[i] ->next=NULL;
			}
		}
		/*************************************************
 		fist hash key creates key for hash table
		@param key name of superhero to be key
		@return index superhero name now as key
 		*************************************************/
		int Hash(std::string key){
			/** value of key */
			int index=0;
			for(int i=0; i<key.length(); i++){
				index = index + (int)key[i];
			}
			index = index % tableSize;

			return index;
		}
		/*************************************************
 		Secound hash key creates key for hash table
		@param key name of superhero to be key
		@return index superhero name now as key
 		*************************************************/
		int Hash2(std::string key){
			/** value of key */
			int index=0;
			/** modifyer for key */
			int mod =1;
			for(int i=0; i<20; i++){
				index = index + ((int)key[i])*mod;
				mod=mod*10;
			}
			index = index % tableSize;

			return index;
		}
		/*************************************************
 		Third hash key creates key for hash table
		@param key name of superhero to be key
		@return index superhero name now as key
 		*************************************************/
		int Hash3(std::string key){
			/** value of key */
			int index=0;
			/** modifyer for key*/
			int mod=9;
			for(int i=0; i<8; i++){
				index = index +((int)key[i])*mod;
				mod=(mod*2)+1;
			}
			index = index % tableSize;
			return index;
		}
		/*************************************************
 		Fist hash inserts hero name into table at index
		of hashed name
		@param name name of superhero
		@return bool true of false based on if a collision
 		*************************************************/
		bool insert(std::string name){
			int index = Hash(name);
			if(HashTable[index]->name == "empty"){
				HashTable[index]->name=name;
				return false;
			}else{
				
				item* Ptr = HashTable[index];
				item* n=new item;
				n->name=name;
				n->next=NULL;
				while(Ptr->next != NULL){
					Ptr=Ptr->next;
				}
				Ptr->next=n;
				return true;
			}
		}
		/*************************************************
 		Secound hash inserts hero name into table at index
		of hashed name
		@param name name of superhero
		@return bool true of false based on if a collision
 		*************************************************/		
		bool insert2(std::string name){
			int index = Hash2(name);
			if(HashTable[index]->name == "empty"){
				HashTable[index]->name=name;
				return false;
			}else{
				
				item* Ptr = HashTable[index];
				item* n=new item;
				n->name=name;
				n->next=NULL;
				while(Ptr->next != NULL){
					Ptr=Ptr->next;
				}
				Ptr->next=n;
				return true;
			}
		}/*************************************************
 		Third hash inserts hero name into table at index
		of hashed name
		@param name name of superhero
		@return bool true of false based on if a collision
 		*************************************************/
		bool insert3(std::string name){
			int index = Hash3(name);
			if(HashTable[index]->name == "empty"){
				HashTable[index]->name=name;
				return false;
			}else{
				
				item* Ptr = HashTable[index];
				item* n=new item;
				n->name=name;
				n->next=NULL;
				while(Ptr->next != NULL){
					Ptr=Ptr->next;
				}
				Ptr->next=n;
				return true;
			}
		}
	private:
		/** size of table */
		static const int tableSize=17011;
		/** structure that holds name and next item*/
		struct item{
			std::string name;
			item* next;
		};
		/** hash table has structure item*/
		item* HashTable[tableSize];
};




