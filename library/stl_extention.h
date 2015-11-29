#ifndef __STL_EXTENTION__H
#define __STL_EXTENTION__H

#include <algorithm>
#include <iterator>

template<class InputContainer, class OutputContainer>
typename OutputContainer::iterator copy(InputContainer& inputContainer, OutputIterator& outputContainer)
{
	return copy(std::begin(inputContainer), std::end(inputContainer), outputContainer.begin());
}


#endif//__STL_EXTENTION__H
