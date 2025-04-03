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

struct Pen {
    char* color;
    int size;
};
struct Whiteboard {
    char* name;
    char* owner;
    char* description;
    char* updated_at;
    char* created_at;
    char* background_color;
    struct Pen pen;
};



struct Point {
    int x;
    int y;
};

struct Point* create_point(int x, int y) {
    struct Point* new_point = malloc(sizeof(struct Point));
    new_point->x = x;
    new_point->y = y;
    return new_point;
}



int main(int argc, char **argv) {
    return 0;
}