//
// Created by Wren Abathur on 11/9/22.
//

#include <stdio.h>
#include <limits.h>
#include "header.h"

int main()
{
	t_dir_info dir_info;
	dir_info.path = "./";
	dir_info.amountOfFiles = 0;
	print_simple_dir_view(&dir_info);
}