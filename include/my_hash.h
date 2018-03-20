#ifndef __H__MY_HASH__
#define __H__MY_HASH__
#include <string>
#include <vector>
#include "superhero.h"

template <typename superhero>
class my_hash{
public:
	bool insert(const superhero & s){
		
		int key = hash1(s.name);		
		
		if(array.empty() == false){
			array.push_back( s );
			return true;
		}else{
			array.at(key) = s;
		}

		return false;				
	}
	
	superhero & get(const std::string name);

	my_hash(){
		array = std::vector<superhero>(17011);
	}

private:

	std::vector<superhero> array;
	int tableSize = 17011;
	
	
	unsigned int hash1( const std::string & key){
		unsigned int hashVal = 0;
			
		for( char ch : key )
			hashVal = 69 * hashVal + ch;
		return hashVal % tableSize;
	}

	unsigned int hash2( const std::string & key){
		unsigned int hashVal = 0;
		
		for( char ch: key )
			hashVal = (key[0] % 4) + (key[0]+key[1]) * 36 * key.length();
		return hashVal % tableSize;
	}
	
	unsigned int hash3( const std::string & key){
		unsigned int hashVal = 0;

		for( char ch: key)
			hashVal = key[key.length()-1] + key[0] * 2473 + (key[1]%2);
		return hashVal % tableSize;
			
	}
};	

#endif
