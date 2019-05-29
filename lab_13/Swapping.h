#include <cstring> 

template <typename T, bool isPod>
struct SwapStruct
{
	static void swap (T* a, T*b)
	{
		T temp;
		memcpy(&temp, a, sizeof(T));
		memcpy(a, b, sizeof(T));
		memcpy(b, &temp, sizeof(T));
	} 
};

template <typename T>
struct SwapStruct<T, false>
{
	static void swap(T* a, T*b)
	{
		T temp = *a;
		*a = *b;
		*b = temp;
	}
};