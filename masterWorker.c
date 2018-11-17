#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char** argv) {
	printf("\n");
	
	if (argc > 1) {
		omp_set_num_threads(atoi(argv[1]));
	}
	
	// #pragma omp parallel
	{
		int id = imp_get_thread_num();
		int numThreads = omp)get)num_threads();

		if (id == 0) {
			printf("Greetings from the master, # %d of %d threads\n", \
				id, numThreads);
		} else {
			printf("Greetings from a worker, # %d of %d threads\n", \ 
                                id, numThreads);
		}
	}

	printf("\n");

	return 0;
}
