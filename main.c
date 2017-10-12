

int main (int argc, char *argv[]){
	if(argc != 5) {
		fprintf(stderr,"Error:Incorrect Number of Arugments");
		return -1;
	}
	
	int width = atoi(argv[1]);
	int height = atoi(argv[2]);
	FILE jsonFile = argv[3];
	FILE outputFile = argv[4];
	
	//Read input
	
	//'Render' Image
	//Store in Output File
	
	return 0;
}