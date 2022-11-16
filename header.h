//
// Created by Wren Abathur on 11/9/22.
//

#ifndef FT_LS_HEADER_H
#define FT_LS_HEADER_H
#include <sys/dir.h>
#include <sys/stat.h>
#include <limits.h>
#include <sys/fcntl.h>
#include <stdlib.h>

enum filetype
{
	unknown,
	fifo,
	chardev,
	directory,
	blockdev,
	normal,
	symbolic_link,
	sock,
	whiteout,
	arg_directory
};

static char const filetype_letter[] = "?pcdb-lswd";

typedef struct s_fileInfo{
	char *name;
	char *link_name;
	struct stat stats;
	enum filetype type;
	size_t size;
} t_fileInfo;

typedef struct s_dirInfo{
	char *path;
	size_t amountOfFiles;
} t_dir_info;


#define FILETYPE_INDICATORS				\
	{							\
	C_ORPHAN, C_FIFO, C_CHR, C_DIR, C_BLK, C_FILE,	\
	C_LINK, C_SOCK, C_FILE, C_DIR			\
  }

void print_simple_dir_view(t_dir_info *dir_info);

#endif //FT_LS_HEADER_H
