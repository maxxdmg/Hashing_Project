#include <string>
#include "superhero.h"
const std::string &Superhero::getName() const {
	return name;
}

Superhero::Superhero(int page_id, const std::string &name, const std::string &urlslug, const std::string &id,
					 const std::string &alignment, std::string eye_color, std::string hair_color, std::string sex, const std::string &gsm,
					 std::string alive, int appearances, const std::string &first_appearance, int year) :
		page_id(page_id),
		name(name),
		urlslug(urlslug),
		id(id),
		alignment(alignment),
		eye_color(eye_color),
		hair_color(hair_color),
		sex(sex), gsm(gsm),
		alive(alive),
		appearances(appearances),
		first_appearance(first_appearance),
		year(year) {}
