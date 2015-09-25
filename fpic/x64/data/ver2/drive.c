#include <stdlib.h>
#include <stdio.h>

extern int ke;
extern int ha();
int main(int argc, char** argv)
{
	return ha() + ke;
}
