#include <stddef.h>

typedef struct {
    int top;
    const size_t size;
    int *const pBuf; 
} Stack;

bool push(Stack *p, int val);
bool pop (Stack *p, int *pRet);

#define newStack(buf) {0, sizeof(buf) / sizeof(int), (buf)}

