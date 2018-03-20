#ifndef __H__SUPERHERO__
#define __H__SUPERHERO__
#include <string>

class superhero
{
	private:
		int page_id;
		std::string urlslug;
		std::string id;
		std::string alignment;
		std::string  eye_color;
		std::string  hair_color;
		std::string  sex;
		std::string gsm;
		std::string alive;
		int appearances;
		std::string first_appearance;
		int year;

	public:
		superhero();
		std::string name;
};
#endif
