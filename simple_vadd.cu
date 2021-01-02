__global__ void add(int *a, int *b, int *c){
	*c = *a + *b;
}

int main(void){
	
	int a, b, c;			//host copies of a, b, c
	int *d_a, *d_b, *d_c	//device copies of a, b, c
	int size = sizeof(int)

	//Allocate space for device copies of a, b, c
	cudaMalloc((void **) &d_a, size);	//take in address of pointer 
	cudaMalloc((void **) &d_b, size);
	cudaMalloc((void **) &d_c, size);

	//set up input values 
	a = 2;
	b = 7;

	//copy inputs to device 
	cudaMemcpy(d_a, &a, size, cudaMemcpyHostToDevice);
	cudaMemcpy(d_b, &a, size, cudaMemcpyHostToDevice);

	//launch add() kernel on GPU
	add<<<1,1>>>(d_a, d_b, d_c)

	//copy result back to host 
	cudaMemcpy(&c, d_c, size, cudaMemcpyDeviceToHost);

	//Cleanup 
	cudaFree(d_a); cudaFree(d_b); cudaFree(d_c);
	return 0;

}