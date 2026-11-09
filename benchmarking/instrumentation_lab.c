#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    clock_t build_start;
    clock_t build_end;
    double build_seconds;

    clock_t process_start;
    clock_t process_end;
    double process_seconds;

    clock_t reduce_start;
    clock_t reduce_end;
    double reduce_seconds;
    
    double Total;
    
    build_start = clock();
    build_dataset();
    build_end = clock();
    build_seconds = (double)(build_end - build_start) / CLOCKS_PER_SEC;
    
    process_start = clock();
    process_dataset();
    process_end = clock();
    process_seconds = (double)(process_end - process_start) / CLOCKS_PER_SEC;
    
    reduce_start = clock();
    checksum = reduce_checksum();
    reduce_end = clock();
    reduce_seconds = (double)(reduce_end - reduce_start) / CLOCKS_PER_SEC;

    Total = (build_seconds + process_seconds + reduce_seconds);

    if (checksum == 0ul)
    {
	    printf("impossible\n");
    }
    
    printf("TOTAL seconds: %.6f\n", Total);
    printf("BUILD_DATA seconds: %.6f\n", build_seconds);
    printf("PROCESS seconds: %.6f\n", process_seconds); 
    printf("REDUCE Seconds: %.6f\n", reduce_seconds);

    return 0;
}
