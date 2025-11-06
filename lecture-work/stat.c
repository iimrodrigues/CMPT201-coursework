#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
  struct stat sb;

  if (stat(argv[1], &sb) == 0) {
    if (S_ISREG(sb.st_mode)) {
      printf("Regular file\n");
    } else if (S_ISDIR(sb.st_mode)) {
      printf("Directory\n");
    } else {
      printf("Evil file detected !!!\n");
    }
  } else {
    printf("Error\n");
  }
}
