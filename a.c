// =====================================================================================
// 
//       Filename:  a.c
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2014-02-19 04:37:17 PM
//       Revision:  none
// 
// =====================================================================================

#include "a.h"

extern "C" void call_A_F(A* a)
{
	return	a->F();
}

int main()
{
	struct A tmp;
	call_A_F(&tmp);

	return 0;
}
