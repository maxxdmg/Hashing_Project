#include <string>
#include "superhero.h"
#include "csv.h"

superhero::superhero()
{
	io::CSVReader<13,io::trim_chars<' ', '\t'>,io::double_quote_escape<',','"'>> in("/home/toorm/CIS263/Hashing_Project/src/marvel-wikia-data.csv");

	in.read_header(io::ignore_no_column, "page_id", "name", "urlslug", "ID", "ALIGN", "EYE", "HAIR", "SEX", "GSM", "ALIVE", "APPEARANCES", "FIRST APPEARANCE", "Year");
	while(in.read_row(page_id, name, urlslug, id, alignment, eye_color, hair_color, sex, gsm, alive, appearances, first_appearance, year)){
		page_id = page_id;
		name = name;
		urlslug = urlslug;
		id = id;
		alignment = alignment;
		eye_color = eye_color;
		hair_color = hair_color;
		sex = sex;
		gsm = gsm;
		alive = alive;
		appearances = appearances;
		first_appearance = first_appearance;
		year = year;
	}
}

