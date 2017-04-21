#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE(as) ( sizeof((as)) / sizeof((as[0])) )

int main(int argc, char* argv[]) {
        srand(time(NULL));

        char* motds[] = {
            "Why are you staring into outer space, crying?",
            "You say you feel hollow, and you know it's because you are.",
            "Here's what you get, for things that haven't happened yet.",
            "See you later, if I see you at all.",
            "Sunshine, been keeping me up for days.",
        };

        int i = rand() % ARR_SIZE(motds);
        printf("%s\n", motds[i]);
}
