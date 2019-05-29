#pragma once
#include <iostream>

template <typename T>
struct is_pod
{
	const static bool pod = false;
};