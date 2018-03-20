#include <string>
#include<iostream>
#include "my_hash.h"
#include "csv.h"
#include "superhero.h"


int main( int argc, char** argv[] ){
	
	superhero obj;
	my_hash<superhero> hash;

	bool x = hash.insert(obj);
	std::cout << x;
};
