#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t process = fork();
  if (process == 0) {
    execl("/bin/ls", "/usr/bin/ls", "-a", "-l", "-h", (char *)NULL);
  } else {
    char *args[] = {"ls", "-a", NULL};
    execvp("ls", args);
  }
}
