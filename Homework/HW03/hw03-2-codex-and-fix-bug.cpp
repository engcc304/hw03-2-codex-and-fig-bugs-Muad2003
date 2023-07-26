//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <stdbool.h>

int main() {
    float a;
    float b = 3;
    bool _1 = false;
    printf("%d ", _1);

    int i = 0;
    if (_1)
        printf("ok ");
    else 
        while (i <= 5)
            printf("not-okey-%d ", ++i);

    for (i = 3; i < 10; i += 1) {
        if (i % 2 == (!_1 ? 1 : 0))
            printf("see see ");
    }
    printf("haha");
    return 0;
}
