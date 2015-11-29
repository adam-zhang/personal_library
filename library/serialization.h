#ifndef __SERIALIZATION__H
#define __SERIALIZATION__H

#include <vector>
#include <iterator>
#include "stl_extension.h"

template<class T>
std::vector<unsigned char> serializeData(T& data)
{
	std::vector<unsigned char> vec;
	unsigned char* p = reinterpret_cast<T*>(&data);
	copy(p, back_inserter(vec));
	return vec;
}

template<class T> 
void serializeData(T& data, std::vector<unsigned char>& vec)
{
	std::vector<unsigned char> item = serializeData(data);
	copy(item, vec);
}	
#endif//__SERIALIZATION__H
