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
	char eye_color;
	char hair_color;
	char sex;
	std::string gsm;
	bool alive;
	int appearances;
	std::string first_appearance;
	int year;

	public:

	Superhero(int page_id, const std::string &name, const std::string &urlslug, const std::string &id,
			  const std::string &alignment, char eye_color, char hair_color, char sex, const std::string &gsm,
			  bool alive, int appearances, const std::string &first_appearance, int year);

	const std::string &getName() const;
};
#endif
