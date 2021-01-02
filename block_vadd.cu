#include <stdio.h>
#include <stdlib.h>

__global__ void add(int *a, int *b, int *c){
	c[blockIdx.x] = a[blockIdx.x] + b[blockIdx.x]; 
}


void random_ints(int *nums, int size){
	
	for (int i = 0; i < size; i++){
		nums[i] = 1;
	}
}


#define N 512
int main(void){
	
	int *a, *b, *c;			//host copies of a, b, c
	int *d_a, *d_b, *d_c;	//device copies of a, b, c
	int size = N * sizeof(int);

	//Allocate space for device copies of a, b, c
	cudaMalloc((void **) &d_a, size);	//take in address of pointer 
	cudaMalloc((void **) &d_b, size);
	cudaMalloc((void **) &d_c, size);


	// Alloc space for host copies of a, b, c and setup input values 
	a = (int *)malloc(size);
	random_ints(a, N);

	b = (int *)malloc(size);
	random_ints(b, N); 

	c = (int *)malloc(size);

	//copy inputs to device 
	cudaMemcpy(d_a, a, size, cudaMemcpyHostToDevice);
	cudaMemcpy(d_b, b, size, cudaMemcpyHostToDevice);

	//launch add() kernel on GPU with N blocks
	add<<<N,1>>>(d_a, d_b, d_c);

	//copy result back to host 
	cudaMemcpy(c, d_c, size, cudaMemcpyDeviceToHost);

	//print results
	for (int i = 0; i < N; i++){
		printf("c[%d]=%d\n", i, c[i]);
	}

	
	//Cleanup 
	free(a);
	free(b);
	free(c);

	cudaFree(d_a); 
	cudaFree(d_b);
	cudaFree(d_c);
	return 0;

}