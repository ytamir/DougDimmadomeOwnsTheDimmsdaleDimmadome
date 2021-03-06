#ifndef BUDDY_H
#define BUDDY_H

void buddy_init();
void *buddy_alloc(int size);
void buddy_free(void *addr);
void buddy_dump();
int order_to_bytes(int order);
void split(int order, int index);

#endif // BUDDY_H
