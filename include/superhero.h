#ifndef __H__SUPERHERO__
#define __H__SUPERHERO__
#include <string>

/**********************************************************************
 * This class is the ADT representation of really coll superheroes
 *********************************************************************/
class Superhero {
	private:
	int page_id;
	std::string name;
	std::string urlslug;
	std::string id;
	std::string alignment;
	std::string eye_color;
	std::string hair_color;
	std::string sex;
	std::string gsm;
	std::string alive;
	int appearances;
	std::string first_appearance;
	int year;

	public:

	Superhero(int page_id, const std::string &name, const std::string &urlslug, const std::string &id,
			  const std::string &alignment, std::string eye_color, std::string hair_color, std::string sex, const std::string &gsm,
			  std::string alive, int appearances, const std::string &first_appearance, int year);

	const std::string &getName() const;
};
#endif
