#ifndef ROUTE_H
#define ROUTE_H

struct route 
{
	char *name;
	int attempts;
};
	typedef struct route route_t;

route_t *copy_route_with_attempt(const route_t *original);

#endif
