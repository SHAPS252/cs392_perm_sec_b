#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc, char ** argv){
	printf("User id originally: %d\n", getuid());
	if(getuid()==0){
		setuid(1000);
		setegid(1000);
	}
	printf("User id after: %d\n", getuid());
}