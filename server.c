#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <pthread.h>
#include <sys/wait.h>
#include <signal.h>
#include <gtk/gtk.h>
struct Whiteboard {
    char *name;
    char *owner;
    char *description;
    char *created_at;
    char *updated_at;
    char *background_color;
    struct Pen pen;
};

int main(int argc, char **argv) {
    return 0;
}