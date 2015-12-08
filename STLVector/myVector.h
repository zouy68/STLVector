#ifndef _MYVECTOR_H_
#define _MYVECTOR_H_

#include <iostream>
#include <cstdlib>


#define NULL 0


template<typename Tp>
class myVector
{
public:
	myVector();
	myVector(Tp& input);
	myVector(Tp* input);
	myVector(Tp const& input);
	int show();

protected:
	Tp* M_start;
	Tp* M_end;
	Tp* M_end_of_storage;


};
template<typename Tp>
myVector<Tp>::myVector()
{
	M_start = NULL;
	M_end = M_start;
	M_end_of_storage = NULL;

}

template<typename Tp>
myVector<Tp>::myVector( Tp& input)
{
	M_start = (Tp *)malloc(sizeof(Tp));
	*M_start  = input;
	M_end = M_start + sizeof(Tp);
}

template<typename Tp>
myVector<Tp>::myVector( Tp* input)
{
	M_start = (Tp *)malloc(sizeof(Tp)*(strlen(input)));
	strcpy(M_start, input);
	//*M_start  = input;
	M_end = M_start + sizeof(Tp);
}
template<typename Tp>
myVector<Tp>::myVector(  Tp const& input)
{
	M_start = (Tp *)malloc(sizeof(Tp));
	*M_start  = input;
	M_end = M_start + sizeof(Tp);
}

template<typename Tp>
int myVector<Tp>::show()
{
	cout << " M_start is : " << *M_start << endl;
	return 0;
}


#endif