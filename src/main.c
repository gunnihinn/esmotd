#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE(as) ( sizeof((as)) / sizeof((as[0])) )

int main(int argc, char* argv[]) {
        srand(time(NULL));

        char* motds[] = {
            "Why are you staring into outer space, crying?",
        };

        int i = rand() % ARR_SIZE(motds);
        printf("%s\n", motds[i]);
}
