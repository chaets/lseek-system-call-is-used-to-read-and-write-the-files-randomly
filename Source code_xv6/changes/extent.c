#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"



int main(int argc, char* argv[]){
	if(argc!=2){
		printf(1,"error: path not provided\n" );
		exit();
	}
	int fd=open(argv[1],O_RDWR|O_CREATE|O_EXTENT);
	char* str="Hello";
	write(fd,str,strlen(str)+1);
	close(fd);
	printf(1,"You have create an extent file name called: %s\n", argv[1]);
	exit();

}
