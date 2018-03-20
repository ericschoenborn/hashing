/*****************************************************************
Super hero object that allows for retreval of name

@auther Eric Schoenborn
@version Winter 2018 
*****************************************************************/


#include <string>

class SUPERHERO{
	public:
		/************************************************
 		Constructor ceate a superhero 		
   		************************************************/
		SUPERHERO(){};
		/************************************************
 		Assigns attributes for a superhero
		@param page_id is the id of the page of the hero
		@param name name of the superhero
		@param urlslug url of superhero page
		@param id identity of the superhero
		@param alegnment is hero good or evil
		@param eye_color color of hero eyes
		@param hair_color color of hero hair
		@param sex superhero gender
		@param gsm the gsm of hero
		@param alive is the hero alive
		@param apperances time hero existed
		@param first_appearance first existence of hero
		@param year year of hero fisrt appearance		
   		************************************************/
		void write(std::string page_id, std::string name,
		std::string urlslug, std::string id,
		std::string alignment, std::string eye_color,
		std::string hair_color, std::string sex,
		std::string gsm, std::string alive,
		std::string appearances,
		std::string first_appearance, std::string year){
			this->page_id = page_id;
			this->appearances = appearances;
			this->first_appearance = first_appearance;
			this->year = year;
			this->name = name;
			this->urlslug = urlslug;
			this->id = id;
			this->alignment = alignment;
			this->gsm = gsm;
			this->first_appearance;
			this->eye_color = eye_color;
			this->hair_color = hair_color;
			this->sex = sex;
			this->alive = alive;
		}
		/************************************************
 		Reteave name of superhero		
   		************************************************/	
		std::string getName(){
			return name;
		}

	private:
		std::string page_id, appearances, year;
		std::string name, urlslug, id, alignment, gsm,
		first_appearance; 
		std::string eye_color, hair_color, sex;
		std::string alive;

};
