//
// Created by Wren Abathur on 11/9/22.
//

#include <printf.h>
#include <unistd.h>
#include "header.h"

void print_simple_dir_view(t_dir_info *dir_info){
	DIR *dir;
	struct dirent *ent;
	dir = opendir(dir_info->path);
	if (!dir){
		exit(1);
	}
	while ((ent = readdir(dir)) != NULL)
	{
		printf("%s", ent->d_name);
	}
	closedir(dir);
}


