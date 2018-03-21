#include <string>
#include<iostream>
#include <fstream>
#include "../include/
#include "../include/superhero.h"
#include "../include/my_hash.h"
#include "../include/csv.h"


int main( int argc, char** argv[] ){
	my_hash<Superhero> hash1, hash2, hash3;
    io::CSVReader<3> in("marvel-wikia-data.csv");
    in.read_header(io::ignore_extra_column, "page_id","name","urlslug","ID","ALIGN",
                   "EYE","HAIR","SEX","GSM","ALIVE","APPEARANCES","FIRST APPEARANCE","Year");

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

    unsigned int hashOne, hashTwo, hashThree;
    while(in.read_row(page_id,name,urlslug,id,alignment,eye_color,hair_color,sex,gsm,alive,appearances,first_appearance,year)){
        Superhero superhero = Superhero(page_id,name,urlslug,id,alignment,eye_color,hair_color,
                                        sex,gsm,alive,appearances,first_appearance,year);

        if(!hash1.insert( superhero, 1)){
            ++hashOne;
        }

        if(!hash2.insert( superhero, 2)){
            ++hashTwo;
        }

        if(!hash3.insert( superhero, 3)){
            ++hashThree;
        }
    }

    std::ofstream file("README.md");

    file << "The different Number Of collisions between the three different hashes" << std::endl;
    file << "hash1: " << hashOne << " Collisions" << std::endl;
    file << "hash2: " << hashTwo << " Collisions" << std::endl;
    file << "hash3: " << hashThree << " Collisions" << std::endl;

    file.close();
};
