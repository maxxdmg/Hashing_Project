#ifndef __H__MY_HASH__
#define __H__MY_HASH__
#include <string>
#include <vector>
#include "superhero.h"

template <typename T>
/****
 * This is the main hashing class
 * @tparam T
 * @author Santiago Quiroga
 * @author Emilio
 * @author Max
 */
class my_hash{
public:

	my_hash(){
		array = std::vector<T>(TABLE_SIZE);
	}

	virtual ~my_hash() {}

	bool insert(const T &object, int hashIndex){
		unsigned int index;
		switch (hashIndex){
			case 1:
				index = hash1(object.getName());
				break;
			case 2:
				index = hash2(object.getName());
				break;
			case 3:
				index = hash3(object.getName());
				break;
		}

		array[index].insert(array[index].begin(),object);
		return 1 < array[index].size();
	}

	T & get(const std::string name, const unsigned int hashNo){
		std::vector<T> collitionVector;
		switch(hashNo){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
		}

		for(T &t: collitionVector){
			if (t.getName() == name){
				return t;
			}
		}
	}

private:

	std::vector<std::vector<T>> array;
	const unsigned int TABLE_SIZE = 17011;
	
	
	unsigned int hash1( const std::string & key){
		unsigned int hashVal = 0;
			
		for( char ch : key )
			hashVal = 69 * hashVal + ch;
		return hashVal % TABLE_SIZE;
	}

	unsigned int hash2( const std::string & key){
		unsigned int hashVal = 0;
		
		for( char ch: key )
			hashVal = (key[0] % 4) + (key[0]+key[1]) * 36 * key.length();
		return hashVal % TABLE_SIZE;
	}
	
	unsigned int hash3( const std::string & key){
		unsigned int hashVal = 0;

		for( char ch: key)
			hashVal = key[key.length()-1] + key[0] * 2473 + (key[1]%2);
		return hashVal % TABLE_SIZE;
			
	}
};	

#endif
