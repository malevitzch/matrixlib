#include <iostream>
#include <vector>

namespace matrix
{
	//Class that handles matrix rows. This class is for internal use only.
	template<class T>
	class _MatrixRow
	{
	private:
		std::vector<T> elements;
	public:
		T& operator[](size_t index);
	}

	template<class T>
	class Matrix
	{
	private:
		std::vector<_MatrixRow<T> > elements;
	public:
		T& operator[](size_t index);

	}
}
